#pragma once
#include <stdint.h>

typedef struct {
    int l1;
    int l2;
} dff_t;

typedef struct {
    int t;

    int dclk_prescaler_l1[2];
    int dclk_prescaler_l2;
    int dclk_prescaler_l3;
    dff_t dclk_prescaler_dff1;
    dff_t dclk_prescaler_dff2;

    int reset_comb;
    int reset_l1[2];
    int reset_l2[2];
    int reset_pulse;
    int reset_ext;
    dff_t mclk_prescaler_dff1;
    dff_t mclk_prescaler_dff2;
    int mclk_and1;
    dff_t mclk_prescaler_dff3;
    dff_t mclk_prescaler_dff4;
    int mclk_clk1;
    dff_t mclk_prescaler_dff5;
    dff_t mclk_prescaler_dff6;
    dff_t mclk_prescaler_dff7;
    int mclk_clk2;
    dff_t mclk_prescaler_dff8;
    dff_t mclk_prescaler_dff9;
    dff_t mclk_prescaler_dff10;
    dff_t mclk_prescaler_dff11;
    int mclk_clk3;
    dff_t mclk_prescaler_dff12;
    dff_t mclk_prescaler_dff13;
    dff_t mclk_prescaler_dff14;
    int mclk_clk4;
    dff_t mclk_prescaler_dff15;
    dff_t mclk_prescaler_dff16;
    dff_t mclk_prescaler_dff17;
    int mclk_clk5;
    int mclk_sbcr;
    int mclk_cpu_clk0;
    int mclk_cpu_clk1;
    int mclk_dclk;

    int reg_rs0;
    int reg_rs1;
    int reg_clk0_sel;

    int hclk1;
    int hclk2;

    int tm_w1;
    int tm_w2;
} vdp_t;
