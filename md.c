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
 *  Mega Drive board.  Contains emulator runtime parameters parser, motherboard and backend component initialization, and 
 *                  worker thread, where all emulated chips are "connected" (main loop).
 *  Thanks:
 *      org, andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *      ctr001:
 *          dummy TMSS rom
 */

#include <stdio.h>
#include <string.h>
#include <string.h>
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "common.h"
#include "68k.h"
#include "z80.h"
#include "fc1004.h"
#include "vram.h"
#include "audio.h"
#include "video.h"
#include "controller.h"
#include "cartridge.h"
#include "md.h"
#include "savestate.h"

m68k_t m68k;
z80_t z80;
fc1004_t ym;

unsigned char ram[0x10000];
unsigned char zram[8192];

md_state md;
uint64_t mcycles;

static int work_thread_run;         // It is used internally and does not require serialization

// Used to initiate the save/load state process
int pending_save_state;
int pending_load_state;

void init_chips(void)
{
    memset(&m68k, 0, sizeof(m68k));
    memset(&z80, 0, sizeof(z80));
    memset(&ym, 0, sizeof(ym));
}

int SDLCALL work_thread(void *data)
{
    int i;
    while (work_thread_run)
    {
        const int frame_div = 1789772;

        if (pending_load_state) {
            load_state(DEFAULT_SAVE_NAME);
            pending_load_state = 0;
        }
        if (pending_save_state) {
            save_state(DEFAULT_SAVE_NAME);
            pending_save_state = 0;
        }

        for (i = 0; i < 2; i++)
        {
            if (ym.o_vclk != state_z)
                md.vclk = ym.o_vclk;
            md.dtack = 1;
            if (ym.o_dtack != state_z)
                md.dtack = ym.o_dtack;
            md.hsync = 1;
            if (ym.o_hsync != state_z)
                md.hsync = ym.o_hsync;
            md.as = 1;
            if (ym.o_as != state_z)
                md.as = ym.o_as;
            if (m68k.o_as != state_z)
                md.as = m68k.o_as;
            if (ym.o_uds != state_z)
                md.uds = ym.o_uds;
            if (m68k.o_uds != state_z)
                md.uds = m68k.o_uds;
            if (ym.o_lds != state_z)
                md.lds = ym.o_lds;
            if (m68k.o_lds != state_z)
                md.lds = m68k.o_lds;
            md.reset = 1;
            if (ym.o_reset != state_z)
                md.reset = ym.o_reset;
            if (m68k.o_reset != state_z)
                md.reset = m68k.o_reset;
            md.halt = 1;
            if (ym.o_halt != state_z)
                md.halt = ym.o_halt;
            if (m68k.o_halt != state_z)
                md.halt = m68k.o_halt;
            if (ym.o_rw != state_z)
                md.rw = ym.o_rw;
            if (m68k.o_rw != state_z)
                md.rw = m68k.o_rw;
            md.iorq = 1;
            if (z80.o_iorq != state_z)
                md.iorq = !z80.o_iorq;
            md.mreq = 1;
            if (z80.o_mreq != state_z)
                md.mreq = !z80.o_mreq;
            if (ym.o_mreq != state_z)
                md.mreq = ym.o_mreq;
            if (ym.o_zwr != state_z)
                md.wr = ym.o_zwr;
            if (z80.o_wr != state_z)
                md.wr = !z80.o_wr;
            if (ym.o_zrd != state_z)
                md.rd = ym.o_zrd;
            if (z80.o_rd != state_z)
                md.rd = !z80.o_rd;

            md.port_a = controller_handle_3button((ym.ioc.port_a_o & 64) != 0 || (ym.ioc.port_a_d & 64) != 0, 0);
            md.port_b = controller_handle_3button((ym.ioc.port_b_o & 64) != 0 || (ym.ioc.port_b_d & 64) != 0, 1);
            
            // 68k
            m68k.input.i_vpa = ym.arb.ext_vpa;
            m68k.input.i_br = ym.o_br == state_z ? 1 : 0;
            m68k.input.i_bgack = ym.o_bgack == state_z ? 1 : 0;
            m68k.input.i_reset = md.reset;
            m68k.input.i_halt = md.halt;
            m68k.input.i_ipl0 = 1;
            m68k.input.i_ipl1 = ym.vdp.o_ipl1 == state_z ? 1 : 0;
            m68k.input.i_ipl2 = ym.vdp.o_ipl2 == state_z ? 1 : 0;
            m68k.input.i_dtack = md.dtack;
            m68k.input.i_berr = 1;
            m68k.input.i_data = md.vdata & 0xffff;
            if (!md.vclk)
                M68K_Clock2(&m68k, 1, 0);
            else
                M68K_Clock2(&m68k, 0, 1);

            // z80
            z80.input.ext_data_i = md.zdata;
            z80.input.i_int = ym.vdp.o_zint == state_z ? 0 : 1;
            z80.input.i_nmi = !ym.arb.ext_nmi;
            z80.input.i_wait = ym.o_wait == state_z ? 0 : !ym.o_wait;
            z80.input.i_reset = ym.o_zres == state_z ? 0 : !ym.o_zres;
            z80.input.i_busrq = ym.o_zbr == state_z ? 0 : !ym.o_zbr;
            Z80_Clock2(&z80, ym.o_zclk == state_z ? 0 : ym.o_zclk);

            // fc1004
            ym.vdp.input.i_csync = ym.vdp.o_csync == state_z ? 1 : 0;
            if (!ym.vdp.o_vram_rd_z)
                ym.vdp.input.i_vram_rd = ym.vdp.o_vram_rd;
            ym.i_hsync = md.hsync;
            ym.arb.input.ext_fc0 = m68k.o_fc0;
            ym.arb.input.ext_fc1 = m68k.o_fc1;
            ym.arb.input.ext_zbak = !z80.o_busak;
            ym.arb.input.ext_wait_in = ym.o_wait == state_z ? 1 : 0;
            ym.ioc.input.port_a = md.port_a;
            ym.ioc.input.port_b = md.port_b;
            ym.ioc.input.port_c = md.port_c;
            ym.i_zaddress = md.zaddress;
            ym.i_zdata = md.zdata;
            ym.i_sres = !(mcycles < 10000);
            ym.i_vclk = md.vclk;
            if (ym.o_zclk != state_z)
                ym.i_zclk = ym.o_zclk;

            if (ym.o_edclk != state_z)
                ym.i_edclk = ym.o_edclk;

            ym.i_vdata = md.vdata;
            ym.i_vaddress = md.vaddress;
            ym.i_bgack = ym.o_bgack == state_z ? 1 : 0;
            ym.i_bg = m68k.o_bg;
            ym.i_as = md.as;
            ym.i_uds = md.uds;
            ym.i_lds = md.lds;
            ym.i_rw = md.rw;
            ym.i_iorq = md.iorq;
            ym.arb.input.ext_mreq_in = md.mreq;
            ym.i_dtack = md.dtack;
            ym.i_zres = ym.o_zres == state_z ? 1 : ym.o_zres;
            ym.i_zwr = md.wr;
            ym.i_zrd = md.rd;
            ym.i_m1 = !z80.o_m1;
            if (ym.o_cas0 != state_z)
                ym.i_cas0 = ym.o_cas0;
            if (ym.o_lwr != state_z)
                ym.i_lwr = ym.o_lwr;

            FC1004_Clock(&ym, mcycles & 1, mcycles);

            // VRAM
            update_vram();

            // busses

            md.zaddress |= 1;

            md.zdata |= 255;

            if (!z80.o_addr_high)
                md.zaddress = z80.o_addr;
            if (!z80.ext_data_o_high)
                md.zdata = z80.ext_data_o;

            md.zaddress &= ym.o_zaddress_dir;
            md.zaddress |= ym.o_zaddress & (~ym.o_zaddress_dir);

            md.zdata &= ym.o_zdata_dir;
            md.zdata |= ym.o_zdata & (~ym.o_zdata_dir);

            md.vaddress &= ym.o_vaddress_dir;
            md.vaddress |= ym.o_vaddress & (~ym.o_vaddress_dir);

            md.vdata &= ym.o_vdata_dir;
            md.vdata |= ym.o_vdata & (~ym.o_vdata_dir);

            if (!m68k.o_address_z)
                md.vaddress = m68k.o_address;
            if (!m68k.o_data_z)
                md.vdata = m68k.o_data;

            // 68k ram
            if (!ym.vdp.o_ras0)
            {
                int laddress = md.vaddress & 0x5fff;
                if (ym.arb.ext_ia14)
                    laddress |= 0x2000;
                laddress ^= 0x2000;
                if (!ym.arb.ext_noe)
                {
                    md.vdata &= ~0xff;
                    md.vdata |= ram[laddress*2+1];
                }
                if (!ym.arb.ext_eoe)
                {
                    md.vdata &= ~0xff00;
                    md.vdata |= ram[(md.vaddress & 0x7fff)*2] << 8;
                }
            }

            // z80 ram
            if (!ym.arb.ext_zram)
            {
                if (!md.rd)
                {
                    md.zdata = zram[md.zaddress & 0x1fff];
                }
            }

            // cart (m3 is active low)
            if (md.m3)
                cart_handle_md();
            else
                cart_handle_m3();
        }

        // 68k ram
        if (!ym.vdp.o_ras0)
        {
            int laddress = md.vaddress & 0x5fff;
            if (ym.arb.ext_ia14)
                laddress |= 0x2000;
            laddress ^= 0x2000;
            if (laddress * 2 == 0xc008)
                laddress += 0;
            if (!ym.o_lwr)
            {
                ram[laddress * 2 + 1] = md.vdata & 0xff;
            }
            if (!ym.vdp.o_uwr)
            {
                ram[(md.vaddress & 0x7fff) * 2] = (md.vdata >> 8) & 0xff;
            }
        }

        // z80 ram
        if (!ym.arb.ext_zram)
        {
            if (!md.wr)
            {
                zram[md.zaddress & 0x1fff] = md.zdata;
            }
        }

        Audio_Update();

        if (ym.vdp.input.i_clk1 && !md.odclk)
            Video_PlotVDP();

        md.odclk = ym.vdp.input.i_clk1;

        if ((mcycles % frame_div) == 0)
        {
            printf("frame %lld\n", (long long)(mcycles / frame_div));
        }
        mcycles++;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int i;
    SDL_Thread *thread;
    char *tmss_filename = "tmss.bin";
    char *rom_filename = "rom.bin";
    char *audioout_filename = "audioout.bin";
    char *videoout_filename = "videoout.bin";
    int pal = 0;
    int _jap = 0;
    int _m3 = 0;
    for (i = 1; i < argc && *argv[i] == '-'; i++)
    {
        switch(argv[i][1])
        {
            case 'a':
                if (i + 1 < argc)
                {
                    audioout_filename = argv[i + 1];
                    i++;
                }
                else
                {
                    printf("missing argument for -a\n");
                    exit(EXIT_FAILURE);
                }
                break;
            case 'v':
                if (i + 1 < argc)
                {
                    videoout_filename = argv[i + 1];
                    i++;
                }
                else
                {
                    printf("missing argument for -v\n");
                    exit(EXIT_FAILURE);
                }
                break;
            case 't':
                if (i + 1 < argc)
                {
                    tmss_filename = argv[i + 1];
                    i++;
                }
                else
                {
                    printf("missing argument for -t\n");
                    exit(EXIT_FAILURE);
                }
                break;
            case 'p':
                if (!strcmp(&argv[i][1], "pal"))
                {
                    pal = 1;
                    break;
                }
                break;
            case 'j':
                if (!strcmp(&argv[i][1], "jap"))
                {
                    _jap = 1;
                    break;
                }
                break;
            case 'm':
                if (!strcmp(&argv[i][1], "m3"))
                {
                    _m3 = 1;
                    break;
                }
                break;
            default:
                printf("usage: %s [-m3] [-t tmss.bin] [rom.bin]\n", argv[0]);
                exit(EXIT_FAILURE);
                break;
        }
    }
    argv += i;
    if (*argv)
        rom_filename = *argv;
    if (load_tmss_rom(tmss_filename))
    {
        printf("%s not found\n", tmss_filename);
        load_dummy_tmss();
    }
    if (cart_load_game_rom(rom_filename, _m3))
    {
        printf("%s not found\n", rom_filename);
        exit(EXIT_FAILURE);
    }

    init_chips();

    FC1004_Init(&ym);

    md.m3 = !_m3;       // m3 is active low
    md.ntsc = !pal;
    md.cart = 0;
    md.wres = 1;
    md.disk = 1;
    md.jap = !_jap;

    ym.i_m3 = md.m3;
    ym.i_ntsc = md.ntsc;
    ym.i_cart = md.cart;
    ym.arb.input.ext_wres = md.wres;
    ym.i_disk = md.disk;
    ym.i_test0 = 0;
    ym.tmss.input.ext_test = 7;
    ym.i_jap = md.jap;
    ym.i_sel1 = 0;

    md.port_a = 127;
    md.port_b = 127;
    md.port_c = 127;

    Audio_Init(audioout_filename, md.ntsc);
    Video_Init(videoout_filename, md.ntsc);

    work_thread_run = 1;
    thread = SDL_CreateThread(work_thread, "work thread", 0);

    if (!thread)
    {
        Audio_Shutdown();
        Video_Shutdown();
        return EXIT_FAILURE;
    }

    int quit_signal = 0;

    do
    {
        SDL_Delay(30);

        {
            uint64_t divider = md.ntsc ? MCLK_NTSC : MCLK_PAL;
            uint64_t ms = (mcycles * 1000) / (2 * divider);
            Video_UpdateTitle(ms);
        }

        // Handle events

        SDL_Event sdl_event;
        while (SDL_PollEvent(&sdl_event))
        {
            switch (sdl_event.type)
            {
                case SDL_QUIT:
                    quit_signal = 1;
                    break;
                case SDL_KEYDOWN:
                case SDL_KEYUP:
                    controller_sdl_event(sdl_event.key.keysym.scancode, sdl_event.type == SDL_KEYDOWN);
                    break;
                default:
                    break;
                }
        }

        Video_Blit();
    }
    while (!quit_signal);

    work_thread_run = 0;
    SDL_WaitThread(thread, 0);

    Audio_Shutdown();
    Video_Shutdown();
    FC1004_Destroy(&ym);

    SDL_Quit();

    return 0;
}
