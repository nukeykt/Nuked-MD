/*
 * Copyright (C) 2024 nukeykt, org(ogamespec)
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
 *  Toshiba TMPZ84C00 (CMOS Z80)
 *  Thanks:
 *      org:
 *          TMPZ84C00 poly/diffusion layer & RE.
 *      Boris Marmontel:
 *          TMPZ84C00 metal layer.
 */

 // Z80(Toshiba CMOS)
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
    int w92;
    
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
    int w99;
    int w100;
    int w98;
    int w95;
    int l43;
    int l16;
    int l17;
    int l18;
    int w48;
    int w104;
    int w452;
    int l65;
    int w453;
    int l64;
    int w115;
    int l63;
    int w109;
    int l39;
    int w205;
    int w144;
    int l37;
    int l38;
    int l40;
    int w210;
    int w215;
    int w293;
    int w292;
    int pla_105_l;
    int w163_l;

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


