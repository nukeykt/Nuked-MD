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
 *  YM6046(FC1004) emulator.
 *  Thanks:
 *      org (ogamespec):
 *          FC1004 decap and die shot.
 *      andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *
 */

#pragma once
#include "common.h"

#pragma pack(push, 1)

typedef struct {
    int port_a;
    int port_b;
    int port_c;
    int ext_test;
    int ext_m3;
    int ext_io;
    int ext_cas0;
    int ext_sres;
    int ext_vclk;
    int ext_ntsc;
    int ext_disk;
    int ext_jap;
    int ext_zaddress_in;
    int ext_zdata_in;
    int ext_vaddress_in;
    int ext_vdata_in;
    int ext_lwr;
    int ext_t1;
    int ext_zv;
    int ext_vz;
} iochip_input_t;

typedef struct {

    sdffr_t p_control;
    sdffr_t p_data;
    sdffr_t s_control;
    int tx_data;

    sdffr_t tx_shifter;
    sdffs_t tx_bit;
    sdffsr_t tx_state1;
    sdffsr_t tx_state2;
    sdff_t tx_state2_l;
    sdffr_t tx_fsm1;
    sdffr_t tx_fsm2;
    sdffr_t tx_fsm3;
    sdffr_t tx_fsm4;
    sdffs_t tx_fsm5;
    int tx_step;

    sdffs_t rx_input_bit;
    sdffr_t rx_ready;
    sdffr_t rx_error;
    sdffr_t rx_fsm1_1;
    sdffs_t rx_fsm1_2;
    sdffs_t rx_fsm1_3;
    sdffs_t rx_fsm1_4;
    sdffr_t rx_fsm1_5;
    sdffr_t rx_fsm2_1;
    sdffr_t rx_fsm2_2;
    sdffr_t rx_fsm2_3;
    sdffr_t rx_fsm2_4;
    sdffs_t rx_fsm2_5;
    int rx_clk;
    int rx_clk2;
    sdffr_t rx_shifter;
    sdffr_t rx_data;

    int irq_b6;
    int irq_uart;

    int uart_clk1;
    int uart_clk2;

    int port_o;
    int port_i;
    int port_d;

    int write_p_control;
    int write_p_data;
    int write_s_control;
    int write_tx_data;
    int read_rx_data;
} controller_port_t;

typedef struct {
    int data_bus;

    sdff_t res_dff;
    int reset;
    int pal;
    int uart_clk;
    int uart_clk2;

    staticcnt_t cnt1;
    staticcnt_t cnt2;

    controller_port_t port_a;
    controller_port_t port_b;
    controller_port_t port_c;

    sdffr_t uart_clk_div[8];


    //int ext_test;
    //int ext_m3;
    //int ext_io;
    //int ext_cas0;
    //int ext_sres;
    int ext_fres;
    //int ext_vclk;
    //int ext_ntsc;
    //int ext_disk;
    //int ext_jap;
    //int ext_zaddress_in;
    //int ext_zdata_in;
    //int ext_vaddress_in;
    //int ext_vdata_in;
    //int ext_lwr;
    //int ext_t1;
    //int ext_zv;
    //int ext_vz;
    int *ext_vdata_out;
    int *ext_zdata_out;
    int *ext_vaddress_out;
    int ext_hl;

    // bus control
    int ext_bc1; // va1-7->za1-7
    int ext_bc2; // vd0-7
    int ext_bc3; // vd8-15
    int ext_bc4; // zd0-zd7
    int ext_bc5; // va1-7

    int address;
    int ztov_address;
    int read_address;
    int read_data;
    int port_a_d;
    int port_b_d;
    int port_a_o;
    int port_b_o;
    int vsel;
    int vread;
    int vread_high;
    int vwrite;
    int vwrite_low;
    int vwrite_high;
    int zwrite_sel;
    int zread_sel;
    int zaccess;
    int zwrite0;
    int zwrite1;
    int byte_sel;
    int arb_w1;
    int arb_w2;
    int vdata;
    int zdata;
    int io_access;
    sdffr_t reg_3e;
    sdffs_t reg_3f;

    iochip_input_t input, input_old;
} iochip_t;

#pragma pack(pop)

void IOC_Clock2(iochip_t *chip);
void IOC_UpdateOutputBus(iochip_t *chip);
