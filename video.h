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

/** @file video.h @brief SDL video output: framebuffer dimensions and the video init/blit/plot/title API. */

#pragma once

/** Width of the emulated video framebuffer in pixels. */
#define VID_WIDTH 400
/** Height of the emulated video framebuffer in pixels. */
#define VID_HEIGHT 300

void Video_Init(char* videoout_filename, int ntsc);
void Video_Shutdown(void);
void Video_Blit(void);
void Video_PlotVDP(void);
void Video_UpdateTitle(uint64_t ms);
