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
    int pla_107_l;
    int w301;
    int w298;
    int w431;
    int l59;
    int w372;
    int w373;
    int l51;
    int l50;
    int w380;
    int w381_0;
    int l52;
    int w391;
    int w390;
    int w379;
    int w378;
    int w470;
    int w402;
    int w404;
    int w359;
    int w307;
    int w303;
    int l57;
    int w430;
    int l58;
    int l60;
    int w377;
    int l66;
    int l53;
    int l67;
    int l68;
    int l70;
    int l72;
    int l76;
    int w400;
    int l77;
    int w418;
    int w416;
    int w417;
    int l79;
    int l81;
    int w347;
    int w345;
    int w346;
    int w361_0;
    int w361;
    int w305;
    int w327_0;
    int w327;
    int w322_0;
    int w322;
    int w330_0;
    int w330;
    int w341;
    int w319_0;
    int l44;
    int l45;
    int w320;
    int w369;
    int l56;
    int l61;
    int w442;
    int l75_0;
    int l75;
    int w476;
    int w423;
    int w473;
    int w473_0;
    int l71;
    int w419;
    int w420;
    int w484;
    int w486;
    int w450;
    int w441;
    int w464;
    int w339;
    int w438;

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


