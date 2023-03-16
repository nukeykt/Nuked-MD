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

    int clk1;
    int clk2;

    int tm_w1;
} vdp_t;
