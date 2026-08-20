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

/**
 * @file arbiter.h
 * @brief Transistor-level, cycle-accurate model of the YM6045C (FC1004) bus arbiter.
 */

#pragma once
#include "common.h"

#pragma pack(push, 1)

/**
 * @brief Inputs of the EDCLK divider sub-block.
 */
typedef struct {
    int mclk; /**< Master clock input. */
    int sres; /**< System reset input. */
    int hsync; /**< Horizontal sync input. */
} arbiter_edclk_input_t;

/**
 * @brief State of the EDCLK divider sub-block (master-clock divider producing the dot clock `ext_edclk`).
 */
typedef struct {
    staticcnt_t dff1; /**< Counter stage 1 of the divider chain. */
    staticcnt_t dff2; /**< Counter stage 2 of the divider chain. */
    staticcnt_t dff3; /**< Counter stage 3 of the divider chain. */
    staticcnt_t dff4; /**< Counter stage 4 of the divider chain. */
    staticcnt_t dff5; /**< Counter stage 5 of the divider chain. */
    staticcnt_t dff6; /**< Counter stage 6 of the divider chain. */
    staticcnt_t dff7; /**< Counter stage 7 of the divider chain. */
    sdffs_t dff8; /**< Set flip-flop; latches the counter-done flag `w5`. */
    sdffr_t dff9; /**< Reset flip-flop; synchronizes the divider to `hsync`. */
    /** `w#` wires: internal signal nodes of the EDCLK divider block. */
    int w1;
    int w2;
    int w3;
    int w5;
    int w4;
    int w7;
    int w10;
    int w11;
    int ext_edclk; /**< EDCLK (dot clock) output. */

    arbiter_edclk_input_t input, input_old; /**< Current and previous inputs (previous used for change detection). */
} arbiter_edclk_t;

/**
 * @brief External inputs of the bus arbiter.
 */
typedef struct {
    int d1_out; /**< Output of delay chain `d1`. */
    int d2_out; /**< Output of delay chain `d2`. */
    int d3_out; /**< Output of delay chain `d3`. */
    int d4_out; /**< Output of delay chain `d4`. */
    int d5_out; /**< Output of delay chain `d5`. */
    int d6_out; /**< Output of delay chain `d6`. */
    int d7_out; /**< Output of delay chain `d7`. */
    int d8_out; /**< Output of delay chain `d8`. */
    int ext_vclk; /**< 68k (V-side) clock input. */
    int ext_zclk; /**< Z80 clock input. */
    int ext_data_in; /**< Shared data bus input (bit 8 feeds `vd8`). */
    int ext_zaddress_in; /**< Z80 address bus input. */
    int ext_vaddress_in; /**< 68k (V-side) address bus input. */
    int ext_zrd_in; /**< Z80 /RD input. */
    int ext_m1; /**< Z80 /M1 input. */
    int ext_zwr_in; /**< Z80 /WR input. */
    int ext_bgack_in; /**< 68k /BGACK input. */
    int ext_bg; /**< 68k /BG input. */
    int ext_iorq; /**< Z80 /IORQ input. */
    int ext_rw_in; /**< 68k R/W input. */
    int ext_uds_in; /**< 68k /UDS input. */
    int ext_as_in; /**< 68k /AS input. */
    int ext_dtack_in; /**< 68k /DTACK input. */
    int ext_lds_in; /**< 68k /LDS input. */
    int ext_cas0; /**< /CAS0 input (from the VDP). */
    int ext_m3; /**< M3 mode input; 1 = MD (68k) mode, 0 = M3 (Z80) mode. */
    int ext_za0; /**< Z80 address bit 0 input. */
    int ext_wres; /**< Warm reset input (WRES). */
    int ext_cart; /**< Cartridge select input. */
    int ext_oe0; /**< /OE0 input (from the VDP). */
    int ext_wait_in; /**< Wait request input. */
    int ext_zbak; /**< Z80 /BUSACK input. */
    int ext_mreq_in; /**< Z80 /MREQ input. */
    int ext_fc0; /**< 68k function code 0 input. */
    int ext_fc1; /**< 68k function code 1 input. */
    int ext_sres; /**< System reset input. */
    int ext_test_mode_0; /**< Test mode input; 0 - default. */
    int ext_zdata_in; /**< Z80 data bus input. */
} arb_input_t;

/**
 * @brief Complete state of the YM6045C bus arbiter.
 */
typedef struct {
    arbiter_edclk_t edclk; /**< EDCLK divider sub-block state. */

    /** `w#` fields: internal signal nodes of the arbiter; `dffN` fields: flip-flop cells (meanings noted where evident). */
    int w9;
    int w12;
    delaychain_t d1; /**< Delay line of 6 XOR gates. */
    sdff_t dff10; /**< Bus request flip-flop (`ext_br`). */
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
    sdffr_t zbr; /**< Z80 bus request flip-flop. */
    int sres; /**< Latched system reset. */
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
    int vd8; /**< Latch of shared data bus bit 8. */
    int w58;
    int w59;
    int vtoz; /**< 68k-to-Z80 transfer direction flag. */
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
    int mreq_in; /**< Latched Z80 /MREQ input. */
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
    int ztov; /**< Z80-to-68k transfer direction flag. */
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
    sdffr_t dff26; /**< Memory mode register flip-flop. */
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
    int test; /**< Test mode flag (from `ext_test_mode_0`). */
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
    sdffr_t dff31; /**< Z80 reset flip-flop. */
    int w171;
    int w172;
    int w173;
    int w174;
    int w175;
    int w176;
    int w178;
    int w182;
    sdff_t sres_syncv; /**< Reset synchronizer flip-flop (VCLK domain). */
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
    int va22_cart; /**< VA22 adjusted by the cartridge select input. */
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
    int sres_syncv_2; /**< Delayed copy of `sres_syncv.l2`. */
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
    int pal_trap; /**< PAL/NTSC trap flag (unused; formerly PAL detection). */
    int w325;
    int w326;
    sdffs_t nmi; /**< NMI flip-flop (`ext_nmi`). */
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
    int w367; /**< Inverted M3 signal. */
    int w368;
    int w369;
    int w370;
    int w371;
    int w372;
    staticcnt_t dff78;
    int w374;
    staticcnt_t dff79;
    staticcnt_t dff80;

    int fc00; /**< Function code decode: FC1=0, FC0=0. */
    int fc01; /**< Function code decode: FC1=0, FC0=1. */
    int fc10; /**< Function code decode: FC1=1, FC0=0. */
    int fc11; /**< Function code decode: FC1=1, FC0=1. */

    /** `va#_in` fields: latched 68k (V-side) address bus bit inputs. */
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

    /** `za#_in` fields: latched Z80 address bus bit inputs. */
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
    /** `ext_*` fields: external output pins of the arbiter. */
    int *ext_data_out; /**< Pointer to the shared data bus output (bit 8). */
    //int ext_data_in;
    //int ext_zaddress_in;
    int ext_zaddress_out; /**< Z80 address bus output. */
    //int ext_vaddress_in;
    int *ext_vaddress_out; /**< Pointer to the 68k (V-side) address bus output. */
    int ext_zrd_out; /**< Z80 /RD output. */
    //int ext_zrd_in;
    int ext_uds_out; /**< 68k /UDS output. */
    int ext_zwr_out; /**< Z80 /WR output. */
    //int ext_m1;
    //int ext_zwr_in;
    int ext_bgack_out; /**< 68k /BGACK output. */
    int ext_as_out; /**< 68k /AS output. */
    //int ext_bgack_in;
    int ext_rw_dir; /**< R/W bus direction control. */
    //int ext_bg;
    //int ext_iorq;
    //int ext_rw_in;
    //int ext_uds_in;
    int ext_rw_out; /**< 68k R/W output. */
    //int ext_as_in;
    //int ext_dtack_in;
    //int ext_lds_in;
    int ext_lds_out; /**< 68k /LDS output. */
    int ext_strobe_dir; /**< Address strobe (AS/UDS/LDS) bus direction control. */
    int ext_dtack_out; /**< 68k /DTACK output. */
    //int ext_cas0;
    //int ext_m3;
    int ext_br; /**< 68k /BR (bus request) output. */
    //int ext_za0;
    //int ext_wres;
    int ext_ia14; /**< 68k work RAM address bit 14 output. */
    //int ext_cart;
    int ext_time; /**< TIME chip select output. */
    int ext_ce0; /**< Cartridge /CE0 output. */
    int ext_fdwr; /**< FDC write strobe output. */
    int ext_fdc; /**< FDC chip select output. */
    int ext_rom; /**< Cartridge ROM select output. */
    int ext_asel; /**< /ASEL (address select) output. */
    int ext_eoe; /**< Output enable for the high byte of the 68k work RAM (active low). */
    int ext_noe; /**< Output enable for the low byte of the 68k work RAM (active low). */
    //int ext_oe0;
    int ext_ras2; /**< /RAS2 output. */
    int ext_cas2; /**< /CAS2 output. */
    int ext_ref; /**< /REF (DRAM refresh) output. */
    int ext_zram; /**< Z80 RAM select output. */
    int ext_wait_out; /**< Wait request output. */
    //int ext_wait_in;
    int ext_zbr; /**< Z80 /BUSREQ output. */
    int ext_nmi; /**< Z80 /NMI output. */
    //int ext_zbak;
    int ext_zres; /**< Z80 /RESET output. */
    int ext_sound; /**< YM3438 (sound) chip select output. */
    int ext_vz; /**< VZ pin; Z80 address, /MREQ, /RD, /WR pad direction control. */
    int ext_mreq_out; /**< Z80 /MREQ output. */
    //int ext_mreq_in;
    //int ext_fc0;
    //int ext_fc1;
    int ext_vres; /**< 68k /RESET output. */
    int ext_vpa; /**< 68k /VPA output. */
    //int ext_sres;
    int ext_vdpm; /**< VDP /MREQ output. */
    //int ext_test_mode_0; // 0 - default
    //int ext_zdata_in;
    int ext_io; /**< IO chip select output. */
    int ext_zv; /**< ZV output (Z80-to-68k transfer direction). */
    int ext_intak; /**< 68k interrupt acknowledge output. */

    arb_input_t input, input_old; /**< Current and previous external inputs (previous used for change detection). */

    delaychain_t d2; /**< Delay line of 6 XOR gates. */
    delaychain_t d3; /**< Delay line of 40 XOR gates. */
    delaychain_t d4; /**< Delay line of 6 XOR gates. */
    delaychain_t d5; /**< Delay line of 12 XOR gates. */
    delaychain_t d6; /**< Delay line of 36 XOR gates. */
    delaychain_t d7; /**< Delay line of 37 XOR gates. */
    delaychain_t d8; /**< Delay line of 6 XOR gates. */

    int va_out; /**< 68k (V-side) address output value. */
    sdffr_t z80bank; /**< Z80 bank register (9 bits). */
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
