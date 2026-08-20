/*
 * Copyright (C) 2023 nukeykt
 *
 * This file is part of Nuked-MD.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  SDL/Video routines
 *
 */

/** @file video.c @brief SDL video output: window/renderer setup, VDP framebuffer plotting, blitting and raw video dumping. */

#include <stdio.h>
#include <string.h>
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "video.h"
#include "fc1004.h"

extern fc1004_t ym;
/** Video mode flag: nonzero for NTSC, zero for PAL. */
int vid_ntsc;
extern uint64_t mcycles;

/** SDL window handle ("Nuked MD"). */
SDL_Window* vid_window;
/** SDL renderer handle. */
SDL_Renderer* vid_renderer;
/** SDL streaming texture holding the 400x300 framebuffer (BGR888). */
SDL_Texture* vid_texture;

/** Number of frames plotted by the emulation core (incremented on VSYNC). */
uint32_t vid_counter;
/** Number of frames already written to the video dump file. */
uint32_t vid_counter_write;
/** mcycles value recorded at the last frame swap, embedded in the dump. */
uint64_t vid_mcycles;

/** File handle for the raw video dump file. */
FILE* vid_dump_file;

/** Scratch framebuffer (ABGR) that Video_PlotVDP plots into. */
uint32_t vid_workbuffer[VID_HEIGHT][VID_WIDTH];
/** Completed framebuffer (ABGR) blitted to the screen and dumped. */
uint32_t vid_currentbuffer[VID_HEIGHT][VID_WIDTH];
/** BGR byte buffer used to serialize the framebuffer for the dump file. */
uint8_t vid_filebuffer[VID_HEIGHT][VID_WIDTH][3];
/** Mutex protecting the framebuffers shared between emulation and render threads. */
SDL_mutex* vid_mutex;

/** mcycles value at the start of the current frame. */
uint64_t frame_mcycles;

/**
 * @brief Initializes SDL video output and opens the raw video dump file.
 *
 * Initializes the SDL video subsystem, creates the window (400x300 scaled 2x),
 * renderer and streaming texture, opens @p videoout_filename for the raw dump
 * and creates the framebuffer mutex.
 *
 * @param videoout_filename Path of the raw video dump file ("wb").
 * @param ntsc Nonzero for NTSC video mode, zero for PAL.
 */
void Video_Init(char* videoout_filename, int ntsc)
{
    vid_ntsc = ntsc;
    vid_counter = vid_counter_write = 0;

    if (SDL_InitSubSystem(SDL_INIT_VIDEO) < 0) {
        printf("SDL video could not initialize! SDL_Error: %s\n", SDL_GetError());
        return;
    }

    vid_window = SDL_CreateWindow("Nuked MD", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        VID_WIDTH * 2, VID_HEIGHT * 2, SDL_WINDOW_SHOWN);
    if (!vid_window)
        return;

    vid_renderer = SDL_CreateRenderer(vid_window, -1, 0);
    if (!vid_renderer)
        return;

    vid_texture = SDL_CreateTexture(vid_renderer, SDL_PIXELFORMAT_BGR888, SDL_TEXTUREACCESS_STREAMING,
        VID_WIDTH, VID_HEIGHT);

    if (!vid_texture)
        return;

    vid_dump_file = fopen(videoout_filename, "wb");

    vid_mutex = SDL_CreateMutex();
}

/**
 * @brief Shuts down SDL video output.
 *
 * Closes the video dump file and quits the SDL video subsystem.
 */
void Video_Shutdown(void)
{
    fclose(vid_dump_file);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

/**
 * @brief Blits the completed framebuffer to the screen and optionally to the dump file.
 *
 * Updates the SDL texture from vid_currentbuffer, converts the framebuffer to
 * BGR bytes and writes it to the dump file when a new frame is available, then
 * renders and presents the texture.
 */
void Video_Blit(void)
{
    SDL_LockMutex(vid_mutex);
    SDL_UpdateTexture(vid_texture, NULL, vid_currentbuffer, VID_WIDTH * 4);

    if (vid_dump_file)
    {
        if (vid_counter_write < vid_counter)
        {
            int x, y;
            for (y = 0; y < VID_HEIGHT; y++)
            {
                for (x = 0; x < VID_WIDTH; x++)
                {
                    uint32_t abgr = vid_currentbuffer[y][x];
                    vid_filebuffer[y][x][0] = (abgr >> 0) & 255;
                    vid_filebuffer[y][x][1] = (abgr >> 8) & 255;
                    vid_filebuffer[y][x][2] = (abgr >> 16) & 255;
                }
            }
            memcpy(vid_filebuffer, &vid_mcycles, sizeof(vid_mcycles));
            fwrite(vid_filebuffer, 1, sizeof(vid_filebuffer), vid_dump_file);
            fflush(vid_dump_file);
            vid_counter_write = vid_counter;
        }
    }

    SDL_UnlockMutex(vid_mutex);
    SDL_RenderCopy(vid_renderer, vid_texture, NULL, NULL);
    SDL_RenderPresent(vid_renderer);
}

/**
 * @brief Plots the VDP RGB output into the 400x300 work framebuffer.
 *
 * Tracks the VDP HSYNC/VSYNC signals to advance the plot position line by
 * line; on a VSYNC falling edge the work framebuffer is swapped into the
 * current framebuffer, the frame counter is incremented and the work buffer
 * is cleared.
 */
void Video_PlotVDP(void)
{
    static int ohsync;
    static int ovsync;
    static int plot_x;
    static int plot_y;

    if (ohsync && ym.vdp.o_hsync == 0)
    {
        plot_x = -75;
        if (ym.vdp.reg_rs0 == 0)
            plot_x = 0;
        plot_y++;
    }
    if (ovsync && ym.vdp.o_vsync == 0)
    {
        plot_y = 0;
        if (!vid_ntsc)
            plot_y = -22;
        SDL_LockMutex(vid_mutex);
        memcpy(vid_currentbuffer, vid_workbuffer, sizeof(vid_workbuffer));
        vid_mcycles = frame_mcycles;
        vid_counter++;
        SDL_UnlockMutex(vid_mutex);
        memset(vid_workbuffer, 0, sizeof(vid_workbuffer));
        frame_mcycles = mcycles;
    }

    if (plot_x >= 0 && plot_x < VID_WIDTH * 2 && plot_y >= 0 && plot_y < VID_HEIGHT)
    {
        uint32_t abgr = 0;

        abgr |= ym.vdp.rgb_out[0] << 0;
        abgr |= ym.vdp.rgb_out[1] << 8;
        abgr |= ym.vdp.rgb_out[2] << 16;

        vid_workbuffer[plot_y][plot_x / 2] = abgr;
    }

    plot_x++;


    ohsync = ym.vdp.o_hsync != 0;
    ovsync = ym.vdp.o_vsync != 0;
}

/**
 * @brief Updates the window title with the current run time.
 *
 * Formats @p ms as minutes:seconds:milliseconds into "Nuked MD v<version>
 * [mm:ss:mmm]" and sets it as the window title.
 *
 * @param ms Elapsed run time in milliseconds.
 */
void Video_UpdateTitle(uint64_t ms)
{
    char buffer[100];
    int _ms = ms % 1000;
    int _s = (int)(ms / 1000);
    int mn = _s / 60;
    _s %= 60;
    SDL_snprintf(buffer, sizeof(buffer), "Nuked MD v" VERSION " [%i:%02i:%03i]", mn, _s, _ms);
    buffer[99] = 0;

    if (!vid_window)
        return;

    SDL_SetWindowTitle(vid_window, buffer);
}
