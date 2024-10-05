#pragma once

typedef struct
{
    int i_clk;
    int i_data;
    int i_reset;
    int i_int;
    int i_nmi;
} t84c00_input_t;

typedef struct
{
    t84c00_input_t input;

    int clk_p;
    int clk_n;

    int w1;
    int w2;
    int w3;
    int w4;
    int w5;
    int w6;
    int w7;
    int w8;
    int w9;
    int w19;
    int w42;
    int w44;
    int w145;
    int w146;
    int w147;

    int pla[108];

    int w74;
    int w82;
    int w90;
    int w92;
    int w96;
    
    int w55;

    int w41;
    int w131;
    int w127;
    int w107;

    int w50;
    int w51;
    int w52;

    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;
    int tm_w7;

    int l1;
    int l2;
    int l4;
    int l14;
    int l15;
    int l19;

    int l26;
    int l27;

    int w56;

    int w73;
    int w74;

    int w110;
    int l31;
    int w114;
    int l12;
    int w34;
    int w41;
    int l30;
    int l25;
    int w68;
    int l21;
    int w61;

    int l36;
    int l32;
    int w120;
    int w134;
    int l35;
    int l34;
    int w130;
    int w127;
    int w123;
    int l33;
    int w121;


    int o_data;
    int o_data_z;

} t84c00_t;


