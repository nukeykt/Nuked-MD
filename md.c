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
 *  Mega Drive board.
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

m68k_t m68k;
z80_t z80;
fc1004_t ym;

unsigned char ram[0x10000];
unsigned char zram[8192];

#define MCLK_NTSC 53693182
#define MCLK_PAL  53203425

int vclk;
int vaddress;
int vdata;
int zaddress;
int zdata;
int dtack;
int hsync;
int m3;
int ntsc;
int cart;
int wres;
int disk;
int port_a;
int port_b;
int port_c;
int jap;
int as;
int lds;
int uds;
int reset;
int halt;
int rw;
int iorq;
int mreq;
int wr;
int rd;

void load_dummy_tmss()
{
    static const short data[] = {
        0x00ff,0x000c,
        0x0000,0x0008,
        0x41f9,0x00a1,0x4101,
        0x2f3c,0x2058,0x4ed0,
        0x2f3c,0x91c8,0x2e58,
        0x2f3c,0x08d0,0x0000,
        0x4ed7
    };
    printf("loading dummy TMSS ROM\n");
    memcpy(tmss_rom, data, sizeof(data));
}

int load_tmss_rom(char *filename)
{
    size_t i, ret;
    FILE* tmss;

    tmss = fopen(filename, "rb");
    if (!tmss)
        return 1;

    fseek(tmss, 0, SEEK_END);
    size_t siz = ftell(tmss);
    rewind(tmss);
    if (siz < TMSS_SIZE * 2)
    {
        fclose(tmss);
        return 1;
    }

    ret = fread(tmss_rom, 1, TMSS_SIZE * 2, tmss);
    if (ret < TMSS_SIZE * 2)
    {
        fclose(tmss);
        return 1;
    }

    for (i = 0; i < TMSS_SIZE; i++)
        tmss_rom[i] = short_swap(tmss_rom[i]);
    fclose(tmss);
    return 0;
}

void init_chips(void)
{
    memset(&m68k, 0, sizeof(m68k));
    memset(&z80, 0, sizeof(z80));
    memset(&ym, 0, sizeof(ym));
}

uint64_t mcycles;


int ovclk;
int odclk;

int work_thread_run;

int SDLCALL work_thread(void *data)
{
    int i;
    while (work_thread_run)
    {
        const int frame_div = 1789772;

        for (i = 0; i < 2; i++)
        {
            if (ym.o_vclk != state_z)
                vclk = ym.o_vclk;
            dtack = 1;
            if (ym.o_dtack != state_z)
                dtack = ym.o_dtack;
            hsync = 1;
            if (ym.o_hsync != state_z)
                hsync = ym.o_hsync;
            as = 1;
            if (ym.o_as != state_z)
                as = ym.o_as;
            if (m68k.o_as != state_z)
                as = m68k.o_as;
            if (ym.o_uds != state_z)
                uds = ym.o_uds;
            if (m68k.o_uds != state_z)
                uds = m68k.o_uds;
            if (ym.o_lds != state_z)
                lds = ym.o_lds;
            if (m68k.o_lds != state_z)
                lds = m68k.o_lds;
            reset = 1;
            if (ym.o_reset != state_z)
                reset = ym.o_reset;
            if (m68k.o_reset != state_z)
                reset = m68k.o_reset;
            halt = 1;
            if (ym.o_halt != state_z)
                halt = ym.o_halt;
            if (m68k.o_halt != state_z)
                halt = m68k.o_halt;
            if (ym.o_rw != state_z)
                rw = ym.o_rw;
            if (m68k.o_rw != state_z)
                rw = m68k.o_rw;
            iorq = 1;
            if (z80.o_iorq != state_z)
                iorq = !z80.o_iorq;
            mreq = 1;
            if (z80.o_mreq != state_z)
                mreq = !z80.o_mreq;
            if (ym.o_mreq != state_z)
                mreq = ym.o_mreq;
            if (ym.o_zwr != state_z)
                wr = ym.o_zwr;
            if (z80.o_wr != state_z)
                wr = !z80.o_wr;
            if (ym.o_zrd != state_z)
                rd = ym.o_zrd;
            if (z80.o_rd != state_z)
                rd = !z80.o_rd;

            port_a = controller_handle_3button((ym.ioc.port_a_o & 64) != 0 || (ym.ioc.port_a_d & 64) != 0, 0);
            port_b = controller_handle_3button((ym.ioc.port_b_o & 64) != 0 || (ym.ioc.port_b_d & 64) != 0, 1);
            
            // 68k
            m68k.input.i_vpa = ym.arb.ext_vpa;
            m68k.input.i_br = ym.o_br == state_z ? 1 : 0;
            m68k.input.i_bgack = ym.o_bgack == state_z ? 1 : 0;
            m68k.input.i_reset = reset;
            m68k.input.i_halt = halt;
            m68k.input.i_ipl0 = 1;
            m68k.input.i_ipl1 = ym.vdp.o_ipl1 == state_z ? 1 : 0;
            m68k.input.i_ipl2 = ym.vdp.o_ipl2 == state_z ? 1 : 0;
            m68k.input.i_dtack = dtack;
            m68k.input.i_berr = 1;
            m68k.input.i_data = vdata & 0xffff;
            if (!vclk)
                M68K_Clock2(&m68k, 1, 0);
            else
                M68K_Clock2(&m68k, 0, 1);
#if 0
            if (ovclk != vclk && m68k.input.i_reset)
                if (!m68k.o_rw && !m68k.o_as &&
                    ((m68k.o_address * 2) & 0xfffff8) == 0xc00000
                    && (!m68k.o_uds || !m68k.o_lds))
            {
                printf("cyc %i ", mcycles);
                //printf("c1: %i c2 %i c3 %i c4 %i c5 %i w286 %i ", m68k.c1, m68k.c2, m68k.c3, m68k.c4, m68k.c5, m68k.w286);
                //printf("code %x ", (m68k.codebus2 & 0x3ff) ^ 0x3ff);
                //printf("ucd %i ", m68k.dbg_ucode_last);
                //printf("ir %x ", m68k.w530);
                printf("hr %i%i ", m68k.input.i_reset, m68k.input.i_halt);
                printf("dtack %i ", m68k.input.i_dtack);
                //printf("w147 %x ", m68k.w147);
                if (!m68k.o_address_z)
                {
                    printf("address %x ", (m68k.o_address & 0x7fffff) * 2);
                }

#if 0
                printf("w948 %x ", m68k.w948);
                printf("w880 %i ", m68k.w880);
                printf("w881 %i ", m68k.w881);
                printf("io %x ", m68k.data_io);
                printf("input %x ", m68k.input.i_data);
#endif
                printf("cdt %i ", ym.arb.w72);
                printf("dff33 %i ", ym.arb.dff33.q);
                printf("w43 %i ", ym.arb.w43);
                printf("data %x ", m68k.o_data);
                printf("\n");
                ovclk = vclk;
            }
#endif
            if (mcycles == 1430894)
                mcycles += 0;

            if (mcycles == 1422069)
                mcycles += 0;

            // z80
            z80.input.ext_data_i = zdata;
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
            ym.i_hsync = hsync;
            ym.arb.input.ext_fc0 = m68k.o_fc0;
            ym.arb.input.ext_fc1 = m68k.o_fc1;
            ym.arb.input.ext_zbak = !z80.o_busak;
            ym.arb.input.ext_wait_in = ym.o_wait == state_z ? 1 : 0;
            ym.ioc.input.port_a = port_a;
            ym.ioc.input.port_b = port_b;
            ym.ioc.input.port_c = port_c;
            ym.i_zaddress = zaddress;
            ym.i_zdata = zdata;
            ym.i_sres = !(mcycles < 10000);
            ym.i_vclk = vclk;
            if (ym.o_zclk != state_z)
                ym.i_zclk = ym.o_zclk;

            if (ym.o_edclk != state_z)
                ym.i_edclk = ym.o_edclk;

            ym.i_vdata = vdata;
            ym.i_vaddress = vaddress;
            ym.i_bgack = ym.o_bgack == state_z ? 1 : 0;
            ym.i_bg = m68k.o_bg;
            ym.i_as = as;
            ym.i_uds = uds;
            ym.i_lds = lds;
            ym.i_rw = rw;
            ym.i_iorq = iorq;
            ym.arb.input.ext_mreq_in = mreq;
            ym.i_dtack = dtack;
            ym.i_zres = ym.o_zres == state_z ? 1 : ym.o_zres;
            ym.i_zwr = wr;
            ym.i_zrd = rd;
            ym.i_m1 = !z80.o_m1;
            if (ym.o_cas0 != state_z)
                ym.i_cas0 = ym.o_cas0;
            if (ym.o_lwr != state_z)
                ym.i_lwr = ym.o_lwr;

            FC1004_Clock(&ym, mcycles & 1, mcycles);

            // VRAM
            update_vram();

            // busses

            zaddress |= 1;

            zdata |= 255;

            if (!z80.o_addr_high)
                zaddress = z80.o_addr;
            if (!z80.ext_data_o_high)
                zdata = z80.ext_data_o;

            zaddress &= ym.o_zaddress_dir;
            zaddress |= ym.o_zaddress & (~ym.o_zaddress_dir);

            zdata &= ym.o_zdata_dir;
            zdata |= ym.o_zdata & (~ym.o_zdata_dir);

            vaddress &= ym.o_vaddress_dir;
            vaddress |= ym.o_vaddress & (~ym.o_vaddress_dir);

            vdata &= ym.o_vdata_dir;
            vdata |= ym.o_vdata & (~ym.o_vdata_dir);

            if (!m68k.o_address_z)
                vaddress = m68k.o_address;
            if (!m68k.o_data_z)
                vdata = m68k.o_data;

            // 68k ram
            if (!ym.vdp.o_ras0)
            {
                int laddress = vaddress & 0x5fff;
                if (ym.arb.ext_ia14)
                    laddress |= 0x2000;
                laddress ^= 0x2000;
                if (!ym.arb.ext_noe)
                {
                    vdata &= ~0xff;
                    vdata |= ram[laddress*2+1];
                }
                //if (!ym.o_lwr)
                //{
                //    ram[laddress*2+1] = vdata & 0xff;
                //}
                if (!ym.arb.ext_eoe)
                {
                    vdata &= ~0xff00;
                    vdata |= ram[(vaddress & 0x7fff)*2] << 8;
                }
                //if (!ym.vdp.o_uwr)
                //{
                //    ram[(vaddress & 0x7fff)*2] = (vdata >> 8) & 0xff;
                //}
            }

            // z80 ram
            if (!ym.arb.ext_zram)
            {
                if (!rd)
                {
                    zdata = zram[zaddress & 0x1fff];
                    //if (zaddress == 0x36)
                    //    printf("read vdata %x zdata %x\n", vdata, zdata);
                }
                //if (!wr)
                //{
                //    zram[zaddress & 0x1fff] = zdata;
                //}
            }

            // cart
            if (m3)
                cart_handle_md();
            else
                cart_handle_m3();
        }

#if 0
        if (m68k.o_rw == state_z)
        {
            if ((uds == 0 || lds == 0) && as == 0)
            {
                if (mcycles == 4705622)
                    mcycles += 0;
                printf("cycles %i vdp/z80 acc ulrw %i%i%i va %x vd %x za %x zd %x zrw %i%i\n",
                    (int)mcycles, uds, lds, rw, vaddress*2, vdata, zaddress, zdata, z80.o_rd, z80.o_wr);
                printf("z80: clk %i w2 %i wait %i\n", z80.input.clk, z80.w2, z80.input.i_wait);
            }
        }

        {
            static int bit;
            static int zbank;
            static int st;
            if (!ym.arb.w150)
            {
                bit = zdata & 1;
                printf("cycles %i bank upd: %i\n", (int)mcycles, bit);
                st = 1;
            }
            else
            {
                if (st)
                {
                    zbank = zbank >> 1;
                    zbank |= bit << 23;
                    zbank &= 0xff8000;
                    printf("zbank %x\n", zbank);
                    st = 0;
                }
            }
        }
#endif

        // 68k ram
        if (!ym.vdp.o_ras0)
        {
            int laddress = vaddress & 0x5fff;
            if (ym.arb.ext_ia14)
                laddress |= 0x2000;
            laddress ^= 0x2000;
            if (laddress * 2 == 0xc008)
                laddress += 0;
            if (!ym.o_lwr)
            {
                ram[laddress * 2 + 1] = vdata & 0xff;
            }
            if (!ym.vdp.o_uwr)
            {
                ram[(vaddress & 0x7fff) * 2] = (vdata >> 8) & 0xff;
            }
        }

        // z80 ram
        if (!ym.arb.ext_zram)
        {
            if (!wr)
            {
                zram[zaddress & 0x1fff] = zdata;
            }
        }

        Audio_Update();

        if (ym.vdp.input.i_clk1 && !odclk)
            Video_PlotVDP();

        odclk = ym.vdp.input.i_clk1;

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

    Video_Init(videoout_filename);

    init_chips();

    FC1004_Init(&ym);

    m3 = !_m3;
    ntsc = !pal;
    cart = 0;
    wres = 1;
    disk = 1;
    jap = !_jap;

    ym.i_m3 = m3;
    ym.i_ntsc = ntsc;
    ym.i_cart = cart;
    ym.arb.input.ext_wres = wres;
    ym.i_disk = disk;
    ym.i_test0 = 0;
    ym.tmss.input.ext_test = 7;
    ym.i_jap = jap;
    ym.i_sel1 = 0;

    port_a = 127;
    port_b = 127;
    port_c = 127;

    zram[0] = 0xc3; // hack to get overdrive 2 running

    Audio_Init(audioout_filename, ntsc);

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
            uint64_t divider = ntsc ? MCLK_NTSC : MCLK_PAL;
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
