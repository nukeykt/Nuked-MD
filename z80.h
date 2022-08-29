#pragma once

enum {
    state_0 = 0,
    state_1,
    state_z
};

typedef struct {
    // input
    int i_int;
    int i_nmi;

    // output

    int ext_data_i;
    int ext_data_o;
    int o_mreq;
    int o_halt;
    int o_iorq;
    int o_rd;
    int o_wr;

    // state
    int w1;
    int w2;
    int l1;
    int w3;
    int w4;
    int w5;
    int w6;
    int w7;
    int w8;
    int w9;
    int l2;
    int w10;
    int w11;
    int w12;
    int l3;
    int halt;
    int w13;
    int w14;
    int w15;
    int w16;
    int l4;
    int w17;
    int w18;
    int w19;
    int w20;
    int w21;
    int w22;
    int w23;
    int l5;
    int w24;
    int l6;
    int w25;
    int w26;
    int w27;
    int w28;
    int l7;
    int w29;
    int w30;
    int w31;
    int l8;
    int w32;
    int l9;
    int w33;
    int l10;
    int l11;

    // temp wires
    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;

} z80_t;