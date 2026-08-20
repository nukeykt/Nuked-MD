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

/** @file iochip.h @brief YM6046 (FC1004) IO chip emulator - interface. */

#pragma once
#include "common.h"

#pragma pack(push, 1)

/**
 * @brief Inputs of the YM6046 (FC1004) IO chip.
 * Physical pins are exposed as `ext_*` fields; `port_a`/`port_b`/`port_c` are the
 * controller port input lines.
 */
typedef struct {
    int port_a;            /**< Port A input lines. */
    int port_b;            /**< Port B input lines. */
    int port_c;            /**< Port C input lines. */
    int ext_test;          /**< Test mode input. */
    int ext_m3;            /**< M3 mode select (1 = Mega Drive, 0 = Master System). */
    int ext_io;            /**< IO access strobe. */
    int ext_cas0;          /**< Column address strobe 0. */
    int ext_sres;          /**< System reset input. */
    int ext_vclk;          /**< VDP (video) clock input. */
    int ext_ntsc;          /**< NTSC/PAL select (1 = NTSC). */
    int ext_disk;          /**< Disk (FDD) status input. */
    int ext_jap;           /**< Japan region select. */
    int ext_zaddress_in;   /**< Z80 bus address input. */
    int ext_zdata_in;      /**< Z80 bus data input. */
    int ext_vaddress_in;   /**< VDP (68k) bus address input. */
    int ext_vdata_in;      /**< VDP (68k) bus data input. */
    int ext_lwr;           /**< Low write strobe. */
    int ext_t1;            /**< Test pin 1. */
    int ext_zv;            /**< Z80-to-VDP bus direction control. */
    int ext_vz;            /**< VDP-to-Z80 bus direction control. */
} iochip_input_t;

/**
 * @brief State of one IO chip controller port (A, B or C).
 * Includes the parallel port registers and the UART (serial) transmitter/receiver.
 */
typedef struct {

    sdffr_t p_control;   /**< Port control register latch. */
    sdffr_t p_data;      /**< Port data register latch. */
    sdffr_t s_control;   /**< UART serial control register latch. */
    int tx_data;         /**< UART transmit data register. */

    sdffr_t tx_shifter;  /**< UART transmit shift register. */
    sdffs_t tx_bit;      /**< UART transmit bit output. */
    sdffsr_t tx_state1;  /**< UART transmit state machine flip-flop 1. */
    sdffsr_t tx_state2;  /**< UART transmit state machine flip-flop 2. */
    sdff_t tx_state2_l;  /**< Latched copy of the transmit state 2. */
    /** UART transmit FSM flip-flops (`tx_fsm1`..`tx_fsm5`). */
    sdffr_t tx_fsm1;
    sdffr_t tx_fsm2;
    sdffr_t tx_fsm3;
    sdffr_t tx_fsm4;
    sdffs_t tx_fsm5;
    int tx_step;         /**< Transmit bit-step enable. */

    sdffs_t rx_input_bit; /**< Sampled UART receive input bit. */
    sdffr_t rx_ready;    /**< UART receive data ready flag. */
    sdffr_t rx_error;    /**< UART receive error flag. */
    /** UART receive FSM 1 flip-flops (`rx_fsm1_1`..`rx_fsm1_5`). */
    sdffr_t rx_fsm1_1;
    sdffs_t rx_fsm1_2;
    sdffs_t rx_fsm1_3;
    sdffs_t rx_fsm1_4;
    sdffr_t rx_fsm1_5;
    /** UART receive FSM 2 flip-flops (`rx_fsm2_1`..`rx_fsm2_5`). */
    sdffr_t rx_fsm2_1;
    sdffr_t rx_fsm2_2;
    sdffr_t rx_fsm2_3;
    sdffr_t rx_fsm2_4;
    sdffs_t rx_fsm2_5;
    int rx_clk;          /**< UART receive clock. */
    int rx_clk2;         /**< UART receive data latch clock. */
    sdffr_t rx_shifter;  /**< UART receive shift register. */
    sdffr_t rx_data;     /**< UART receive data register. */

    int irq_b6;          /**< Port B6 interrupt request. */
    int irq_uart;        /**< UART interrupt request. */

    int uart_clk1;       /**< UART clock 1 (receive path). */
    int uart_clk2;       /**< UART clock 2 (transmit path). */

    int port_o;          /**< Port output data. */
    int port_i;          /**< Port input data. */
    int port_d;          /**< Port data direction mask (1 = input, 0 = output). */

    int write_p_control; /**< Port control register write strobe. */
    int write_p_data;    /**< Port data register write strobe. */
    int write_s_control; /**< UART serial control register write strobe. */
    int write_tx_data;   /**< UART transmit data register write strobe. */
    int read_rx_data;    /**< UART receive data register read strobe. */
} controller_port_t;

/**
 * @brief State of the YM6046 (FC1004) IO chip.
 */
typedef struct {
    int data_bus;        /**< Internal data bus value (M3 or Z80 selected). */

    sdff_t res_dff;      /**< Reset flip-flop (latches `ext_sres`). */
    int reset;           /**< Chip reset state. */
    int pal;             /**< 1 = PAL, 0 = NTSC (inverted `ext_ntsc`). */
    int uart_clk;        /**< UART base clock (from the clock prescaler). */
    int uart_clk2;       /**< UART clock; in test mode driven by `ext_vclk`. */

    staticcnt_t cnt1;    /**< UART clock prescaler counter 1. */
    staticcnt_t cnt2;    /**< UART clock prescaler counter 2. */

    controller_port_t port_a; /**< Controller port A state. */
    controller_port_t port_b; /**< Controller port B state. */
    controller_port_t port_c; /**< Controller port C state. */

    sdffr_t uart_clk_div[8];  /**< UART clock divider flip-flops. */


    //int ext_test;
    //int ext_m3;
    //int ext_io;
    //int ext_cas0;
    //int ext_sres;
    int ext_fres;        /**< FRES output (inverted system reset). */
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
    int *ext_vdata_out;  /**< Pointer to the VDP (68k) bus data output. */
    int *ext_zdata_out;  /**< Pointer to the Z80 bus data output. */
    int *ext_vaddress_out; /**< Pointer to the VDP (68k) bus address output. */
    int ext_hl;          /**< CPU interrupt output (active low). */

    // bus control
    /** Bus control outputs (`ext_bc1`..`ext_bc5`). */
    int ext_bc1; /**< Bus control 1 (va1-7 -> za1-7). */
    int ext_bc2; /**< Bus control 2 (vd0-7). */
    int ext_bc3; /**< Bus control 3 (vd8-15). */
    int ext_bc4; /**< Bus control 4 (zd0-zd7). */
    int ext_bc5; /**< Bus control 5 (va1-7). */

    int address;         /**< Current address bus input (M3 or Z80 selected). */
    int ztov_address;    /**< Z80 address translated for the VDP address bus. */
    int read_address;    /**< Decoded register index for reads. */
    int read_data;       /**< Data read from the addressed register. */
    int port_a_d;        /**< Port A direction mask on the bus. */
    int port_b_d;        /**< Port B direction mask on the bus. */
    int port_a_o;        /**< Port A output data on the bus. */
    int port_b_o;        /**< Port B output data on the bus. */
    int vsel;            /**< VDP register select. */
    int vread;           /**< VDP read strobe. */
    int vread_high;      /**< VDP high-byte read strobe. */
    int vwrite;          /**< VDP write strobe. */
    int vwrite_low;      /**< VDP low-byte write strobe. */
    int vwrite_high;     /**< VDP high-byte write strobe. */
    int zwrite_sel;      /**< Z80 write select (address 0x3E/0x3F). */
    int zread_sel;       /**< Z80 read select. */
    int zaccess;         /**< Z80 access select. */
    int zwrite0;         /**< Z80 even-byte write strobe. */
    int zwrite1;         /**< Z80 odd-byte write strobe. */
    int byte_sel;        /**< Byte select for the 68k data bus. */
    int arb_w1;          /**< Bus arbitration wire 1. */
    int arb_w2;          /**< Bus arbitration wire 2. */
    int vdata;           /**< VDP bus data output value. */
    int zdata;           /**< Z80 bus data output value. */
    int io_access;       /**< 1 when the IO chip drives the data bus. */
    sdffr_t reg_3e;      /**< Register 0x3E latch (Z80 bus). */
    sdffs_t reg_3f;      /**< Register 0x3F latch (Z80 port direction/output control). */

    iochip_input_t input, input_old; /**< Current and previous input states. */
} iochip_t;

#pragma pack(pop)

void IOC_Clock2(iochip_t *chip);
void IOC_UpdateOutputBus(iochip_t *chip);
