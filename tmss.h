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
 *  TMSS(FC1004) emulator
 *  Thanks:
 *      org (ogamespec):
 *          FC1004 decap and die shot.
 *      andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *
 */

/** @file tmss.h @brief TMSS (FC1004) trademark & security system emulator - interface. */

#pragma once

#include "common.h"

/**
 * @brief Size of the TMSS ROM, in 16-bit words.
 */
#define TMSS_SIZE 1024      /**< in uint16_t's */

/**
 * @brief Enable TMSS emulation.
 * May be overridden externally (e.g. -DTMSS_ENABLE=0 to disable TMSS).
 */
#ifndef TMSS_ENABLE
#define TMSS_ENABLE 1
#endif

/** TMSS ROM contents (1024 16-bit words). */
extern unsigned short tmss_rom[TMSS_SIZE];

#pragma pack(push, 1)

/**
 * @brief Inputs of the TMSS (FC1004 trademark & security system).
 * Physical pins are exposed as `ext_*` fields.
 */
typedef struct {
    int ext_data_in;     /**< 68k bus data input. */
    int ext_test;        /**< Test mode input. */
    int ext_jap;         /**< Japan region select. */
    int ext_as_in;       /**< Address strobe input (active low). */
    int ext_lds_in;      /**< Low data strobe input (active low). */
    int ext_uds_in;      /**< Upper data strobe input (active low). */
    int ext_rw_in;       /**< Read/write input (1 = read, 0 = write). */
    int ext_address_in;  /**< 68k bus address input. */
    int ext_sres;        /**< System reset input. */
    int ext_ce0_arb;     /**< Chip enable 0 from the bus arbiter. */
    int ext_m3;          /**< M3 mode select (1 = Mega Drive). */
    int ext_cart;        /**< Cartridge present input. */
    int ext_intak_vdp;   /**< Interrupt acknowledge input from the VDP. */
} tmss_input_t;

/**
 * @brief State of the TMSS (FC1004 trademark & security system).
 */
typedef struct {
    sdffr_t dff1;  /**< TMSS state flip-flop 1. */
    sdffs_t dff2;  /**< TMSS state flip-flop 2. */
    /** Internal wires (`w##`) and latches (`l##`). */
    int w3;        /**< TMSS magic match wire (both latches hold the magic words). */
    int w10;       /**< VDP range decode wire. */
    int w15;       /**< SEGA register address decode (0x50A000). */
    int l1;        /**< Latch holding the even-byte magic word. */
    int l2;        /**< Latch holding the odd-byte magic word. */
    int w20;       /**< Selected magic latch for data output. */
    int w23;       /**< Bank register address decode (0x50A080). */
    sdffr_t dff3;  /**< Bank register flip-flop. */
    int w28;       /**< TMSS ROM chip-enable / data output enable wire. */
    int w31;       /**< TMSS bypass wire (cartridge present or not M3 mode). */
    int w38;       /**< Even-byte magic write strobe. */
    int w39;       /**< Odd-byte magic write strobe. */
    int w40;       /**< TMSS register write clock wire. */
    int w41;       /**< TMSS register read clock wire. */
    /** Test decode wires (`w50`..`w62`). */
    int w50;
    int w51;
    int w52;
    int w53;
    int w54;
    int w55;
    int w56;
    int w57;
    int w58;
    int w59;
    int w62;

    int *ext_data_out;  /**< Pointer to the 68k bus data output. */
    int ext_dtack_out;  /**< DTACK output to the CPU (active low). */
    int ext_cpu_reset;  /**< CPU reset output (asserted until the TMSS magic is written). */
    int ext_ce0_tmss;   /**< TMSS ROM chip-enable output. */
    /** Test mode outputs (`ext_test_0`..`ext_test_4`). */
    int ext_test_0;
    int ext_test_1;
    int ext_test_2;
    int ext_test_3;
    int ext_test_4;
    int ext_data_out_en; /**< Data output enable. */

    tmss_input_t input, input_old; /**< Current and previous input states. */
} tmss_t;

#pragma pack(pop)

void TMSS_Clock2(tmss_t *chip);
void TMSS_UpdateOutputBus(tmss_t *chip);
void load_dummy_tmss();
int load_tmss_rom(char* filename);
