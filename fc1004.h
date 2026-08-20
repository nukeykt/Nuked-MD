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
 *  FC1004 emulator
 *  Thanks:
 *      org (ogamespec):
 *          FC1004 decap and die shot.
 *      andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *
 */

/** @file fc1004.h @brief FC1004 single-chip system emulation (FM, VDP, arbiter, IO chip and TMSS). */

#pragma once
#include "common.h"
#include "fm.h"
#include "vdp.h"
#include "arbiter.h"
#include "iochip.h"
#include "tmss.h"


#pragma pack(push, 1)

/**
 * @brief FC1004 chip state: the FM, VDP, arbiter, IO chip and TMSS sub-blocks plus inter-chip signals and chip pins.
 */
typedef struct
{
    fm_t fm;        /**< FM sound chip (YM3438) sub-block. */
    vdp_t vdp;      /**< VDP (YM7101) sub-block. */
    arbiter_t arb;  /**< Bus arbiter sub-block. */
    iochip_t ioc;   /**< IO chip (YM6045/YM6046) sub-block. */
    tmss_t tmss;    /**< TMSS (trademark security system) sub-block. */

    int cpu_reset;      /**< Combined CPU reset signal. */
    int hl_vdp;         /**< VDP pen (HL) select signal. */
    int intak_vdp;      /**< VDP interrupt acknowledge signal. */
    int oe0_arb;        /**< Arbiter OE0 output enable signal. */
    int mreq_vdp;       /**< VDP memory request signal. */
    int vz;             /**< VDP access (V to Z) flag. */
    int za0_dir;        /**< Z80 address line 0 direction. */
    int za1_dir;        /**< Z80 address line 1 direction. */
    int za7_dir;        /**< Z80 address line 7 direction. */
    int ce0_tmss;       /**< TMSS cartridge enable 0 signal. */
    int fm_clk;         /**< FM clock, derived from the VDP prescaler. */
    int vdp_data_dir;   /**< VDP data bus direction. */
    int vdp_address_dir;/**< VDP address bus direction. */
    int br;             /**< Bus request signal. */
    int bgack;          /**< Bus grant acknowledge signal. */
    int dtack;          /**< Data transfer acknowledge signal. */
    int colorbus;       /**< Color bus mode (Z80 bus reused as color bus in SMS mode). */
    int fm_read;        /**< FM read enable signal. */

    int old_dclk[3];    /**< Previous DCLK samples, used for edge detection. */

    int i_hsync;    /**< Horizontal sync input. */
    int i_m3;       /**< SMS mode select input (active low). */
    int i_ntsc;     /**< NTSC/PAL mode select input. */
    int i_sound;    /**< Sound (FM) select input. */
    int i_zres;     /**< Z80 reset input. */
    int i_zbr;      /**< Z80 bus request input. */
    int i_disk;     /**< Disk (peripheral) input. */
    int i_test0;    /**< Test mode 0 input. */
    int i_jap;      /**< Japan region select input. */
    int i_fres;     /**< FM reset input. */
    int i_zv;       /**< Z80 access (Z to V) input. */
    int i_vz;       /**< VDP access (V to Z) input. */
    int i_io;       /**< IO select input. */
    int i_zaddress; /**< Z80 address bus input. */
    int i_vaddress; /**< VDP address bus input. */
    int i_sres;     /**< System reset input. */
    int i_sel1;     /**< Select 1 (test) input. */
    int i_vclk;     /**< Video clock input. */
    int i_zclk;     /**< Z80 clock input. */
    int i_edclk;    /**< EDCLK input. */
    int i_vdata;    /**< VDP data bus input. */
    int i_bgack;    /**< Bus grant acknowledge input. */
    int i_bg;       /**< Bus grant input. */
    int i_iorq;     /**< IO request input. */
    int i_zrd;      /**< Z80 read input. */
    int i_zwr;      /**< Z80 write input. */
    int i_m1;       /**< Z80 M1 cycle input. */
    int i_as;       /**< Address strobe input. */
    int i_uds;      /**< Upper data strobe input. */
    int i_lds;      /**< Lower data strobe input. */
    int i_dtack;    /**< Data transfer acknowledge input. */
    int i_lwr;      /**< Lower write input. */
    int i_cas0;     /**< Column address strobe 0 input. */
    int i_zdata;    /**< Z80 data bus input. */
    int i_rw;       /**< Read/write input. */
    int i_cart;     /**< Cartridge connected input. */

    int o_ys;               /**< YS (luminance select) output. */
    int o_vsync;            /**< Vertical sync output. */
    int o_hsync;            /**< Horizontal sync output. */
    int o_halt;             /**< Halt output. */
    int o_reset;            /**< Reset output. */
    int o_mreq;             /**< Memory request output. */
    int o_sound;            /**< Sound (FM) select output. */
    int o_zres;             /**< Z80 reset output. */
    int o_zbr;              /**< Z80 bus request output. */
    int o_wait;             /**< Wait output. */
    int o_ce0;              /**< Cartridge enable 0 output. */
    int o_disk;             /**< Disk (peripheral) output. */
    int o_test0;            /**< Test mode 0 output. */
    int o_jap;              /**< Japan region select output. */
    int o_fres;             /**< FM reset output. */
    int o_zv;               /**< Z80 access (Z to V) output. */
    int o_vz;               /**< VDP access (V to Z) output. */
    int o_io;               /**< IO select output. */
    int o_zaddress;         /**< Z80 address bus output. */
    int o_zaddress_dir;     /**< Z80 address bus direction output. */
    int o_vclk;             /**< Video clock output. */
    int o_zclk;             /**< Z80 clock output. */
    int o_edclk;            /**< EDCLK output. */
    int o_vdata;            /**< VDP data bus output. */
    int o_vdata_dir;        /**< VDP data bus direction output. */
    int o_vaddress;         /**< VDP address bus output. */
    int o_vaddress_dir;     /**< VDP address bus direction output. */
    int o_br;               /**< Bus request output. */
    int o_bgack;            /**< Bus grant acknowledge output. */
    int o_zrd;              /**< Z80 read output. */
    int o_zwr;              /**< Z80 write output. */
    int o_as;               /**< Address strobe output. */
    int o_uds;              /**< Upper data strobe output. */
    int o_lds;              /**< Lower data strobe output. */
    int o_dtack;            /**< Data transfer acknowledge output. */
    int o_lwr;              /**< Lower write output. */
    int o_cas0;             /**< Column address strobe 0 output. */
    int o_zdata;            /**< Z80 data bus output. */
    int o_zdata_dir;        /**< Z80 data bus direction output. */
    int o_rw;               /**< Read/write output. */
} fc1004_t;

#pragma pack(pop)


void FC1004_Init(fc1004_t *chip);
void FC1004_Destroy(fc1004_t* chip);
void FC1004_Clock(fc1004_t *chip, int mclk, uint64_t cycles);
