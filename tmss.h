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

#pragma once

#include "common.h"

#define TMSS_SIZE 1024

extern unsigned short tmss_rom[TMSS_SIZE];

typedef struct {
    int ext_data_in;
    int ext_test;
    int ext_jap;
    int ext_as_in;
    int ext_lds_in;
    int ext_uds_in;
    int ext_rw_in;
    int ext_address_in;
    int ext_sres;
    int ext_ce0_arb;
    int ext_m3;
    int ext_cart;
    int ext_intak_vdp;
} tmss_input_t;

typedef struct {
    sdffr_t dff1;
    sdffs_t dff2;
    int w3;
    int w10;
    int w15; // sega register address
    int l1;
    int l2;
    int w20;
    int w23; // bank register address
    sdffr_t dff3; // bank register
    int w28;
    int w31;
    int w38;
    int w39;
    int w40;
    int w41;
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

    int *ext_data_out;
    int ext_dtack_out;
    int ext_cpu_reset;
    int ext_ce0_tmss;
    int ext_test_0;
    int ext_test_1;
    int ext_test_2;
    int ext_test_3;
    int ext_test_4;
    int ext_data_out_en;

    tmss_input_t input, input_old;
} tmss_t;


void TMSS_Clock2(tmss_t *chip);
void TMSS_UpdateOutputBus(tmss_t *chip);
