#pragma once
#include "common.h"

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

    int ext_port_o;
    int ext_port_i;
    int ext_port_d;
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


    int ext_test;
    int ext_m3;
    int ext_io;
    int ext_cas0;
    int ext_sres;
    int ext_fres;
    int ext_vclk;
    int ext_ntsc;

    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;
    int tm_w7;
    int tm_w8;
} iochip_t;