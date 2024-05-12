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
 *  YM6045C(FC1004) emulator.
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
    int mclk;
    int sres;
    int hsync;
} arbiter_edclk_input_t;

typedef struct {
    staticcnt_t dff1;
    staticcnt_t dff2;
    staticcnt_t dff3;
    staticcnt_t dff4;
    staticcnt_t dff5;
    staticcnt_t dff6;
    staticcnt_t dff7;
    sdffs_t dff8;
    sdffr_t dff9;
    int w1;
    int w2;
    int w3;
    int w5;
    int w4;
    int w7;
    int w10;
    int w11;
    int ext_edclk;

    arbiter_edclk_input_t input, input_old;
} arbiter_edclk_t;

typedef struct {
    int d1_out;
    int d2_out;
    int d3_out;
    int d4_out;
    int d5_out;
    int d6_out;
    int d7_out;
    int d8_out;
    int ext_vclk;
    int ext_zclk;
    int ext_data_in;
    int ext_zaddress_in;
    int ext_vaddress_in;
    int ext_zrd_in;
    int ext_m1;
    int ext_zwr_in;
    int ext_bgack_in;
    int ext_bg;
    int ext_iorq;
    int ext_rw_in;
    int ext_uds_in;
    int ext_as_in;
    int ext_dtack_in;
    int ext_lds_in;
    int ext_cas0;
    int ext_m3;
    int ext_za0;
    int ext_wres;
    int ext_cart;
    int ext_oe0;
    int ext_wait_in;
    int ext_zbak;
    int ext_mreq_in;
    int ext_fc0;
    int ext_fc1;
    int ext_sres;
    int ext_test_mode_0; // 0 - default
    int ext_zdata_in;
} arb_input_t;

typedef struct {
    arbiter_edclk_t edclk;

    int w9;
    int w12;
    delaychain_t d1; // 6 xor
    sdff_t dff10; // bus request
    int w16;
    int w24;
    int w25;
    sdff_t dff11;
    sdff_t dff12;
    int w26;
    int w27;
    int w31;
    int w32;
    int w33;
    int w34;
    int w35;
    sdff_t dff13;
    int w36;
    sdffr_t zbr;
    int sres;
    sdffs_t dff15;
    int w40;
    int w41;
    int w42;
    int w43;
    sdff_t dff16;
    int w44;
    int w45;
    int w46;
    int w47;
    int w48;
    int w49;
    sdffs_t dff17;
    int w50;
    sdff_t dff18;
    int w51;
    int w52;
    int w53;
    int w54;
    int vd8;
    int w58;
    int w59;
    int vtoz;
    int w63;
    int w64;
    int w65;
    int w66;
    int w68;
    sdffs_t dff19;
    int w69;
    int w70;
    int w71;
    int w72;
    sdffs_t dff20;
    int w73;
    int w74;
    int w75;
    int w76;
    int w77;
    int w78;
    int w79;
    sdff_t dff21;
    sdff_t dff22;
    int mreq_in;
    int w83;
    int w84;
    int w85;
    int w86;
    int w87;
    sdffr_t dff23;
    int w88;
    int w89;
    int w90;
    int w91;
    int w92;
    int w93;
    int w94;
    int w95;
    int w96;
    int w97;
    int w98;
    int w99;
    int w101;
    int w102;
    int w103;
    sdff_t dff24;
    sdffr_t dff25;
    int w104;
    int ztov;
    int w106;
    int w107;
    int w111;
    int w112;
    int w113;
    int w114;
    int w115;
    int w116;
    int w117;
    int w118;
    int w119;
    int w120;
    int w121;
    int w122;
    int w123;
    int w124;
    int w126;
    int w127;
    int w128;
    int w129;
    int w130;
    sdffr_t dff26;
    sdff_t dff27;
    int w131;
    int w132;
    int w133;
    int w134;
    int w135;
    sdff_t dff28;
    int w136;
    int w137;
    int w138;
    int w140;
    int w141;
    int w142;
    int w143;
    int w144;
    sdff_t dff29;
    int w146;
    int w149;
    int w150;
    int w151;
    int test;
    int w155;
    int w158;
    int w159;
    int w160;
    int w161;
    int w162;
    int w163;
    int w164;
    int w165;
    int w166;
    int w167;
    sdff_t dff30;
    int w168;
    int w169;
    int w170;
    sdffr_t dff31;
    int w171;
    int w172;
    int w173;
    int w174;
    int w175;
    int w176;
    int w178;
    int w182;
    sdff_t sres_syncv;
    sdffs_t dff33;
    int w183;
    int w185;
    int w186;
    int w188;
    int w189;
    int w190;
    int w191;
    //int w192;
    int w194;
    int w196;
    int w197;
    int w198;
    int w199;
    int w200;
    int w201;
    int w202;
    int w203;
    int w204;
    int w205;
    int w206;
    int w207;
    int w208;
    int w209;
    int w210;
    int w211;
    int w213;
    int w215;
    int w216;
    int w217;
    int w219;
    int w220;
    int w221;
    sdff_t dff34;
    int w222;
    int w223;
    //int w225;
    int w226;
    int w227;
    int va22_cart;
    int w229;
    sdff_t dff44;
    int w232;
    int w234;
    int w235;
    int w237;
    int w238;
    int w240;
    int w242;
    int w245;
    int w246;
    //int w247;
    int w248;
    int w249;
    int w254;
    int w255;
    int w256;
    int w257;
    int w258;
    int w259;
    int w260;
    int w263;
    int w264;
    int w266;
    int w267;
    int w268;
    int w269;
    sdffs_t dff45;
    int w270;
    sdffs_t dff46;
    int w271;
    sdffs_t dff47;
    int w272;
    int w273;
    int w274;
    int w279;
    int w282;
    int w283;
    int w286;
    int w287;
    int sres_syncv_2;
    int w289;
    staticcnt_t dff48;
    int w292;
    int w293;
    int w294;
    int w297;
    int w298;
    sdffr_t dff49;
    sdffr_t dff50;
    sdffr_t dff51;
    int w299;
    int w300;
    int w301;
    int w302;
    int w304;
    sdffr_t dff52;
    int w305;
    int w307;
    int w308;
    staticcnt_t dff53;
    staticcnt_t dff54;
    staticcnt_t dff55;
    int w309;
    int w310;
    int w311;
    int w312;
    int w313;
    int w314;
    int w315;
    int w316;
    int w317;
    int w318;
    int w319;
    int w320;
    int w321;
    int w322;
    int pal_trap;
    int w325;
    int w326;
    sdffs_t nmi;
    sdffr_t dff57;
    sdffr_t dff58;
    sdff_t dff59;
    int w328;
    int w329;
    int w330;
    int w331;
    int w332;
    int w333;
    sdffr_t dff60;
    int w334;
    int w335;
    int w336;
    int w337;
    int w338;
    int w339;
    sdffr_t dff61;
    int w340;
    int w341;
    int w342;
    sdffr_t dff62;
    int w343;
    sdffr_t dff63;
    sdff_t dff64;
    int w344;
    sdffr_t dff65;
    sdff_t dff66;
    sdffr_t dff67;
    sdffr_t dff68;
    sdffr_t dff69;
    int w346;
    int w347;
    int w348;
    sdff_t dff70;
    sdffr_t dff71;
    int w349;
    sdffr_t dff72;
    sdff_t dff73;
    int w350;
    int w351;
    sdffr_t dff74;
    int w352;
    int w353;
    int w354;
    int w355;
    sdff_t dff75;
    sdffr_t dff76;
    staticcnt_t dff77;
    int w356;
    int w357;
    int w359;
    int w360;
    int w361;
    int w362;
    int w363;
    int w364;
    int w365;
    int w366;
    int w367; // !M3
    int w368;
    int w369;
    int w370;
    int w371;
    int w372;
    staticcnt_t dff78;
    int w374;
    staticcnt_t dff79;
    staticcnt_t dff80;

    int fc00;
    int fc01;
    int fc10;
    int fc11;

    int va8_in;
    int va9_in;
    int va10_in;
    int va11_in;
    int va12_in;
    int va13_in;
    int va14_in;
    int va15_in;
    int va16_in;
    int va17_in;
    int va18_in;
    int va19_in;
    int va20_in;
    int va21_in;
    int va22_in;
    int va23_in;

    int za7_in;
    int za8_in;
    int za9_in;
    int za10_in;
    int za11_in;
    int za12_in;
    int za13_in;
    int za14_in;
    int za15_in;

    //int ext_vclk;
    //int ext_zclk;
    int *ext_data_out;
    //int ext_data_in;
    //int ext_zaddress_in;
    int ext_zaddress_out;
    //int ext_vaddress_in;
    int *ext_vaddress_out;
    int ext_zrd_out;
    //int ext_zrd_in;
    int ext_uds_out;
    int ext_zwr_out;
    //int ext_m1;
    //int ext_zwr_in;
    int ext_bgack_out;
    int ext_as_out;
    //int ext_bgack_in;
    int ext_rw_dir;
    //int ext_bg;
    //int ext_iorq;
    //int ext_rw_in;
    //int ext_uds_in;
    int ext_rw_out;
    //int ext_as_in;
    //int ext_dtack_in;
    //int ext_lds_in;
    int ext_lds_out;
    int ext_strobe_dir;
    int ext_dtack_out;
    //int ext_cas0;
    //int ext_m3;
    int ext_br;
    //int ext_za0;
    //int ext_wres;
    int ext_ia14;
    //int ext_cart;
    int ext_time;
    int ext_ce0;
    int ext_fdwr;
    int ext_fdc;
    int ext_rom;
    int ext_asel;
    int ext_eoe;
    int ext_noe;
    //int ext_oe0;
    int ext_ras2;
    int ext_cas2;
    int ext_ref;
    int ext_zram;
    int ext_wait_out;
    //int ext_wait_in;
    int ext_zbr;
    int ext_nmi;
    //int ext_zbak;
    int ext_zres;
    int ext_sound;
    int ext_vz; // vz pin, za, mreq, rd, wr pad dir
    int ext_mreq_out;
    //int ext_mreq_in;
    //int ext_fc0;
    //int ext_fc1;
    int ext_vres;
    int ext_vpa;
    //int ext_sres;
    int ext_vdpm;
    //int ext_test_mode_0; // 0 - default
    //int ext_zdata_in;
    int ext_io;
    int ext_zv;
    int ext_intak;

    arb_input_t input, input_old;

    delaychain_t d2; // 6 xor
    delaychain_t d3; // 40 xor
    delaychain_t d4; // 6 xor
    delaychain_t d5; // 12 xor
    delaychain_t d6; // 36 xor
    delaychain_t d7; // 37 xor
    delaychain_t d8; // 6 xor

    int va_out;
    sdffr_t z80bank;
} arbiter_t;

#pragma pack(pop)

void ARB_Init(arbiter_t *chip);
void ARB_Destroy(arbiter_t *chip);
void ARB_UpdateDelays(arbiter_t *chip, uint64_t cycles);
void ARB_ClockEDCLK(arbiter_edclk_t *chip);
void ARB_Clock(arbiter_t *chip);

void ARB_ClockEDCLK2(arbiter_edclk_t *chip, int mclk);
void ARB_Clock2(arbiter_t *chip);
void ARB_UpdateOutputBus(arbiter_t *chip);
