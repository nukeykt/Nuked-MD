#pragma once

typedef struct
{
    int i_clk;
    int i_data;
    int i_reset;
    int i_int;
    int i_nmi;
    int i_busrq;
    int i_wait;
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

    int halt;

    int w18;

    int w21;
    int l6;
    int l9;
    int w22;
    int l5;
    int w31;
    int l8;
    int w33;
    int l11;
    int l10;
    int w66;
    int l24;
    int l23;
    int w63;
    int l22;
    int w58;
    int w59;
    int w39;
    int w37;
    int w38;
    int l82;
    int m1;
    int rfsh;
    int l7;
    int w30;
    int w80;
    int w78;
    int l28;
    int l29;
    int w112;
    int w111;

    int o_data;
    int o_data_z;
    int o_halt;
    int o_mreq;
    int o_mreq_z;
    int o_iorq;
    int o_iorq_z;
    int o_rd;
    int o_rd_z;
    int o_wr;
    int o_wr_z;
    int o_busak;
    int o_m1;
    int o_rfsh;

} t84c00_t;


