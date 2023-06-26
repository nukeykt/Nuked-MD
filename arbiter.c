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

// FC1004 bus arbiter
#include <stdio.h>
#include <string.h>
#include "arbiter.h"

// CART
// WRES
// VPA
// HALT
// RESET(VRES)
// FC0
// FC1

#define DELAY_RATIO 6

void ARB_Init(arbiter_t *chip)
{
    DELAY_Init(&chip->d1, 6 / DELAY_RATIO); // z80 m1
    DELAY_Init(&chip->d2, 6 / DELAY_RATIO);
    DELAY_Init(&chip->d3, 40 / DELAY_RATIO); // asel
    DELAY_Init(&chip->d4, 6 / DELAY_RATIO); // z80 iorq
    DELAY_Init(&chip->d5, 12 / DELAY_RATIO); // ras2
    DELAY_Init(&chip->d6, 36 / DELAY_RATIO);
    DELAY_Init(&chip->d7, 37 / DELAY_RATIO);
    DELAY_Init(&chip->d8, 6 / DELAY_RATIO); // m3
}

void ARB_Destroy(arbiter_t *chip)
{
    DELAY_Free(&chip->d1);
    DELAY_Free(&chip->d2);
    DELAY_Free(&chip->d3);
    DELAY_Free(&chip->d4);
    DELAY_Free(&chip->d5);
    DELAY_Free(&chip->d6);
    DELAY_Free(&chip->d7);
    DELAY_Free(&chip->d8);
}

void ARB_UpdateDelays(arbiter_t *chip, uint64_t cycles)
{
    chip->input.d1_out = DELAY_Update(&chip->d1, cycles, chip->input.ext_m1);
    chip->input.d2_out = DELAY_Update(&chip->d2, cycles, chip->w188);
    chip->input.d3_out = DELAY_Update(&chip->d3, cycles, chip->w254);
    chip->input.d4_out = DELAY_Update(&chip->d4, cycles, chip->w113);
    chip->input.d5_out = DELAY_Update(&chip->d5, cycles, chip->w271);
    chip->input.d6_out = DELAY_Update(&chip->d6, cycles, chip->w238);
    chip->input.d7_out = DELAY_Update(&chip->d7, cycles, chip->w223);
    chip->input.d8_out = DELAY_Update(&chip->d8, cycles, chip->input.ext_m3);
}

static inline void ARB_ClockZToV(arbiter_t *chip)
{
    chip->w143 = !chip->input.ext_m3 || chip->w220 || !chip->za15_in; // 68k bank access
    chip->w185 = chip->w86 || chip->w220; // z80 VDP access
    chip->w188 = chip->w185 && chip->w143; // 68k access
    
    SDFF_Update(&chip->dff34, chip->input.ext_zclk, chip->input.d2_out);

    chip->w182 = chip->w188 && chip->dff34.l2;
    chip->w255 = !(chip->input.ext_dtack_in || chip->w79);
    chip->w258 = !(chip->w255 || chip->pal_trap || chip->w182);
    chip->ext_wait_out = !chip->w258;
    chip->w78 = !chip->w79 || chip->w182 || !chip->sres;
    chip->w79 = chip->dff21.l2 || chip->w182 || !chip->sres;

    SDFF_Update(&chip->dff10, chip->input.ext_vclk, chip->w78);

    chip->ext_br = chip->dff10.l2;

    SDFF_Update(&chip->dff28, chip->input.ext_vclk, chip->w79);

    chip->w111 = chip->dff28.l2 || chip->w182;

    SDFF_Update(&chip->dff22, chip->input.ext_vclk, chip->w111);

    chip->w77 = chip->dff22.l2 || chip->w182;

    SDFF_Update(&chip->dff18, chip->input.ext_vclk, chip->w77);

    chip->w50 = chip->w77 || chip->input.ext_zrd_in;
    chip->w51 = chip->dff18.l2 || chip->input.ext_zwr_in;
    chip->w53 = chip->w50 && chip->w51;
    chip->ext_uds_out = chip->w53 || chip->input.ext_za0;
    chip->ext_lds_out = chip->w53 || !chip->input.ext_za0;
    chip->ext_as_out = chip->w77;
    chip->w149 = !(chip->test || chip->pal_trap || chip->w146);
    chip->w76 = !chip->sres || chip->dff21.l2;
    chip->ztov = chip->w76 && chip->input.ext_m3;
    chip->w106 = chip->w76;
    chip->w175 = !chip->input.ext_as_in;
    chip->w176 = !chip->input.ext_bgack_in;
    chip->w174 = chip->w175 || chip->w176 || chip->w182 || chip->input.ext_bg;
    chip->w178 = chip->w174 && chip->w79;

    SDFF_Update(&chip->dff21, !chip->input.ext_vclk, chip->w178);

    chip->w146 = chip->w76;
    chip->w268 = !(chip->test || chip->pal_trap || chip->w146);
    chip->ext_rw_dir = chip->w146 || chip->test;
    chip->ext_strobe_dir = !chip->w268;
    chip->ext_bgack_out = !chip->w149;
    // ???
    chip->w45 = chip->w46 && chip->ztov;
    chip->w46 = chip->w45 || chip->input.ext_bgack_in;
    chip->w48 = !chip->w45;
}

void ARB_ClockEDCLK(arbiter_edclk_t *chip)
{
    int sres = chip->input.sres;
    SCNT_Update(&chip->dff1, chip->input.mclk, chip->w1, 1, chip->w3, sres);
    SCNT_Update(&chip->dff2, chip->input.mclk, chip->w1, !chip->dff9.l2, 1, sres);
    SCNT_Update(&chip->dff3, chip->input.mclk, chip->w1, 0, chip->dff2.l2, sres);

    chip->w1 = !(!chip->dff1.l2 && !chip->dff2.l2 && !chip->dff3.l2);
    chip->w2 = chip->dff3.l2;
    chip->w3 = chip->dff2.l2 && chip->dff3.l2;
    chip->w4 = chip->w2;
    chip->w5 = !(!chip->dff4.l2 || !chip->dff5.l2 || !chip->dff6.l2 || !chip->dff7.l2);

    SCNT_Update(&chip->dff4, chip->w4, chip->dff9.l2, 1, chip->dff9.l2, sres);
    SCNT_Update(&chip->dff5, chip->w4, chip->dff9.l2, 0, chip->dff4.cout, sres);
    SCNT_Update(&chip->dff6, chip->w4, chip->dff9.l2, 0, chip->dff5.cout, sres);
    SCNT_Update(&chip->dff7, chip->w4, chip->dff9.l2, 0, chip->dff6.cout, sres);

    chip->ext_edclk = !!!!chip->w2; // FIXME
    chip->w7 = !!!!chip->dff8.nq; // FIXME
    chip->w11 = !(!chip->input.hsync || chip->dff9.l2);
    chip->w10 = !(chip->w11 || (0 && chip->dff9.l2));

    SDFFR_Update(&chip->dff9, chip->w2, chip->w10, chip->w7);
    SDFFS_Update(&chip->dff8, chip->w2, chip->w5, sres);
}

static inline void ARB_ClockM3(arbiter_t *chip)
{
    // VDP mreq
    chip->w163 = chip->vd8 || chip->mreq_in || chip->va22_in || chip->input.ext_m3; // FIXME
    chip->w68 = !(chip->vd8 || chip->w163);
    chip->ext_vdpm = !chip->w68;
    chip->w16 = !(chip->dff33.nq || chip->w346);

    SDFFR_Update(&chip->dff60, !chip->w16, chip->dff69.l2, chip->sres_syncv_2);

    chip->w334 = !(!chip->dff60.l2 || !chip->dff69.l2);
    chip->w337 = !chip->input.ext_wres;

    SDFFR_Update(&chip->dff68, !chip->w16, !chip->dff68.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff71, !chip->dff68.l2, !chip->dff71.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff72, !chip->dff71.l2, !chip->dff72.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff76, !chip->dff72.l2, !chip->dff76.l2, chip->sres_syncv.l2);

    chip->w362 = chip->w363 || chip->dff76.l2;

    SDFFR_Update(&chip->dff63, !chip->w362, !chip->dff63.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff52, !chip->dff63.l2, !chip->dff52.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff65, !chip->dff52.l2, !chip->dff65.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff67, !chip->dff65.l2, !chip->dff67.l2, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff74, !chip->dff67.l2, !chip->dff74.l2, chip->sres_syncv_2);
    SDFFS_Update(&chip->nmi, chip->dff74.l2, chip->va23_in, chip->w332);
    SDFFR_Update(&chip->dff57, chip->dff74.l2, chip->sres_syncv_2, chip->sres_syncv_2);
    SDFFR_Update(&chip->dff58, chip->dff74.l2, chip->dff57.l2, chip->sres_syncv_2);
    SDFFR_Update(&chip->dff69, chip->dff74.l2, chip->w337, chip->sres_syncv_2);

    chip->w328 = !(!chip->dff58.l2 || chip->w334);
}

static inline void ARB_ClockZ80(arbiter_t *chip)
{
    chip->w113 = chip->input.ext_iorq || chip->input.ext_m3 || !chip->input.ext_m1;

    SDFF_Update(&chip->dff29, chip->input.ext_zclk, chip->input.d4_out);

    chip->w112 = chip->w113 && chip->dff29.l2;

    SDFF_Update(&chip->dff27, chip->input.ext_zclk, chip->input.d1_out);
    SDFF_Update(&chip->dff30, chip->input.ext_zclk, chip->dff27.l2);

    chip->w199 = chip->dff30.l2;
    chip->w207 = chip->w199; // FIXME: delay?

    SDFF_Update(&chip->dff44, !chip->input.ext_zclk, chip->w207);

    chip->w220 = chip->mreq_in || !chip->dff44.l2;
    chip->ext_nmi = chip->nmi.q;
    chip->w316 = !(!chip->input.ext_m3 || chip->dff70.l2);
    chip->w320 = !(!chip->input.ext_m3 || chip->dff44.l2 || chip->mreq_in); // FIXME
    chip->w318 = chip->w316 || chip->w320;
    chip->ext_ref = !chip->w318;
}

static inline void ARB_ClockVToZ(arbiter_t *chip)
{
    // ts1
    chip->w63 = !(chip->w99 && !chip->w122 && !chip->input.ext_uds_in);
    chip->w12 = chip->test || !chip->input.ext_rw_in || chip->w63;
    chip->w36 = chip->w63 || chip->input.ext_rw_in;

    SDFFR_Update(&chip->zbr, chip->w36, chip->vd8, chip->sres_syncv.l2); // Z80 bus req

    chip->w33 = chip->input.ext_zbak; // Z80 BUSACK
    chip->w34 = chip->w33 || !chip->zbr.l2;
    chip->ext_zbr = !chip->zbr.l2;
    chip->w257 = !(chip->input.ext_lds_in && chip->input.ext_uds_in);

    SDFF_Update(&chip->dff59, chip->input.ext_vclk, chip->w257);

    chip->w331 = chip->w257 && !chip->dff66.l2 && chip->dff59.l2;
    chip->ext_mreq_out = !chip->w331;
    chip->w66 = chip->w119 || chip->input.ext_as_in;
    chip->w354 = !(chip->w339 && chip->dff70.l2);

    SDFF_Update(&chip->dff75, !chip->input.ext_vclk, chip->w354);

    chip->w348 = !(chip->w339 && chip->dff70.l2 && !chip->dff75.l2);

    SDFF_Update(&chip->dff66, !chip->input.ext_vclk, chip->w348);
    SDFF_Update(&chip->dff73, chip->input.ext_vclk, chip->input.ext_as_in);

    chip->w344 = chip->dff66.l2 || chip->input.ext_as_in || chip->dff73.l2;

    SDFF_Update(&chip->dff64, chip->input.ext_vclk, chip->w344);

    chip->w341 = !(!chip->dff64.l2 && chip->w336);
    chip->w134 = chip->w66 || chip->w341; // z80 ram dtack
    chip->vtoz = chip->w119 || chip->test || chip->w33;
    chip->w308 = !(chip->w287 || chip->w343);
    chip->w307 = !(chip->w308 || !chip->sres_syncv.l2);
    chip->w272 = !(chip->dff47.q || chip->input.ext_as_in);
    chip->w273 = !(chip->w272 || chip->w307);
    chip->w164 = !(chip->w34 && chip->w166);

    SDFFS_Update(&chip->dff47, !chip->input.ext_vclk, chip->w273, chip->w164);

    chip->w339 = !(chip->input.ext_as_in && !chip->dff47.l2);

    SDFF_Update(&chip->dff70, !chip->input.ext_vclk, chip->w339);
}

static inline void ARB_ClockInterrupt(arbiter_t *chip)
{
    chip->w249 = !(chip->ztov && chip->fc11);
    chip->ext_intak = chip->w249;
    chip->ext_vpa = chip->input.ext_as_in || chip->w249;
}

static inline void ARB_ClockCart(arbiter_t *chip)
{
    chip->w73 = chip->sres_syncv.l2 && chip->input.ext_m3;

    SDFFR_Update(&chip->dff26, chip->w97, chip->vd8, chip->sres_syncv.l2); // memory mode register

    chip->w274 = !chip->input.ext_cas0;

    SDFFS_Update(&chip->dff45, chip->w274, chip->va23_in, !chip->w223);

    chip->w269 = chip->dff45.q && chip->va23_in && chip->w274;
    chip->w248 = chip->w223 || chip->w269;
    chip->w208 = !chip->dff26.l2 ? chip->w248 : chip->w254;
    chip->w202 = chip->w208 || !chip->va22_cart;
    chip->w170 = !chip->dff26.l2 || chip->input.d5_out;
    chip->w167 = chip->w170 && chip->w202;
    chip->w211 = !chip->input.ext_m3 || chip->input.ext_as_in || chip->va23_in;
    chip->w72 = chip->dff15.nq || chip->w43;
    chip->w132 = chip->w72 || chip->w211; // cartridge DTACK
    chip->w69 = !(chip->w44 || !chip->dff12.l2);
    chip->w168 = !(chip->w69 || !chip->dff26.l2);
    chip->w169 = chip->w168 || chip->w211 || !chip->va22_cart;

    SDFFR_Update(&chip->dff25, !chip->input.ext_vclk, !chip->dff12.l2, chip->w73); // FIXME: check reset wire

    chip->w101 = !(chip->dff20.nq || chip->dff25.l2);
    chip->w173 = chip->w101 || !chip->dff26.l2;
    chip->w171 = chip->za15_in || chip->w220 || chip->input.ext_m3;
    chip->w172 = !(chip->w169 && chip->w167 && chip->w171 && chip->w173);
    chip->ext_ce0 = !chip->w172;
    chip->w301 = !(chip->w223 && chip->input.d7_out);
    chip->w298 = chip->w301 && chip->va23_in;

    SDFFS_Update(&chip->dff46, chip->w274, chip->dff46.nq, chip->w298);

    chip->w271 = chip->dff46.q || chip->input.d6_out;
    chip->w254 = chip->w223 || chip->va23_in;
    chip->w206 = !chip->va21_in || chip->va22_cart || chip->w254;
    chip->w238 = chip->input.ext_cas0 || chip->w223;
    chip->w204 = !(!chip->w211 && chip->w69 && !chip->va22_cart && chip->va21_in);
    chip->w197 = chip->w206 && chip->input.d5_out;
    chip->w198 = !(chip->w197 && chip->w101 && chip->w204);
    chip->ext_ras2 = !chip->w198;
    chip->w234 = chip->va22_cart || chip->va21_in || chip->w211;
    chip->va22_cart = !(chip->va22_in ^ chip->input.ext_cart);
    chip->w232 = chip->va22_cart || chip->w248 || chip->va21_in;
    chip->w235 = !(chip->w234 && chip->w232);
    chip->ext_rom = !chip->w235;
    chip->w107 = !((chip->input.ext_zaddress_in & 0xc000) == 0x8000 && !chip->w220 && !chip->input.ext_m3);
    chip->w102 = !(chip->w70 && chip->w107 && chip->w238);
    chip->ext_cas2 = !chip->w102;
    chip->w64 = !(chip->w43 && chip->input.d3_out);
    chip->ext_asel = !chip->w64;
    chip->w59 = !chip->input.ext_m3 || chip->input.ext_as_in;
    chip->w54 = !(chip->dff23.q && chip->va23_in);
    chip->w84 = !(chip->dff23.nq && chip->dff33.nq && chip->w356);
    chip->w58 = chip->w54 && chip->w84;

    SDFFS_Update(&chip->dff17, chip->input.ext_vclk, chip->w58, chip->w73);

    chip->w49 = chip->dff17.q;
    chip->w74 = chip->w49; // FIXME: delay??

    SDFFS_Update(&chip->dff20, !chip->input.ext_vclk, chip->w74, chip->w73);

    chip->w71 = chip->dff20.q && chip->w74;

    SDFFS_Update(&chip->dff19, !chip->input.ext_vclk, chip->w71, chip->w73);

    chip->w42 = !(chip->dff19.q && chip->w71);
    chip->w44 = chip->w42 || chip->va23_in || chip->w59;

    SDFF_Update(&chip->dff16, chip->input.ext_vclk, chip->w44);

    chip->w43 = chip->w44 || chip->dff16.l2;

    SDFF_Update(&chip->dff11, !chip->input.ext_vclk, chip->w43);

    chip->w27 = chip->dff11.l2 || chip->w44;
    chip->w41 = chip->w27 || chip->dff15.q;

    SDFF_Update(&chip->dff12, !chip->input.ext_vclk, chip->w41);

    chip->w26 = !(chip->dff15.nq && chip->dff12.l2);
    chip->w83 = chip->dff23.nq || chip->va23_in;
    chip->w40 = chip->w26 && chip->w83;

    SDFFS_Update(&chip->dff15, chip->input.ext_vclk, chip->w40, chip->w73);

    chip->w70 = chip->w27 && chip->w71; // refresh???
}

static inline void ARB_ClockVCLKDivider(arbiter_t *chip)
{
    chip->w286 = !(chip->w287 || !chip->sres_syncv.l2);
    chip->w289 = chip->w286;
    chip->w372 = chip->w289 && 1 && 1;

    SCNT_Update(&chip->dff78, chip->input.ext_vclk, chip->w289, 0, chip->w372, 1);
    SCNT_Update(&chip->dff80, chip->input.ext_vclk, chip->w289, 0, chip->dff78.cout, 1);
    SCNT_Update(&chip->dff79, chip->input.ext_vclk, chip->w289, 0, chip->dff80.cout, 1);
    SCNT_Update(&chip->dff77, chip->input.ext_vclk, chip->w289, 0, chip->dff79.cout, 1);

    chip->w374 = !(!chip->dff77.l2 || !chip->dff78.l2 || !chip->dff79.l2 || !chip->dff80.l2);
    chip->w356 = chip->w374 && 1;
    chip->w266 = chip->w289 && chip->w356 && chip->w356;

    SCNT_Update(&chip->dff48, chip->input.ext_vclk, chip->w289, 0, chip->w266, 1);
    SCNT_Update(&chip->dff54, chip->input.ext_vclk, chip->w289, 0, chip->dff48.cout, 1); // FIXME: check reset
    SCNT_Update(&chip->dff53, chip->input.ext_vclk, chip->w289, 0, chip->dff54.cout, 1); // FIXME: check reset
    SCNT_Update(&chip->dff55, chip->input.ext_vclk, chip->w289, chip->input.ext_m3, chip->dff53.cout, 1); // FIXME: check reset

    chip->w309 = !(!chip->dff48.l2 || !chip->dff53.l2 || !chip->dff54.l2 || !chip->dff55.l2);
    chip->w287 = chip->w309 && chip->w356;

    // outputs: w287, w356

    chip->w183 = !(chip->dff33.q || chip->dff23.l2 || chip->w356 || !chip->w223);
    chip->w283 = !(chip->w183 || chip->w287 || chip->w343);

    SDFFS_Update(&chip->dff33, chip->input.ext_vclk, chip->w283, chip->sres_syncv.l2);
    SDFFR_Update(&chip->dff23, !chip->w59, chip->dff33.nq, chip->dff33.nq);
}

static inline void ARB_ClockRAMOE(arbiter_t *chip)
{
    chip->w279 = !chip->input.ext_bgack_in;
    chip->w302 = !(chip->w9 && (!chip->dff50.l2 || chip->dff62.l2));
    chip->w299 = !chip->w302;

    SDFFR_Update(&chip->dff49, chip->input.ext_vclk, chip->w279, chip->dff51.l2);
    SDFFR_Update(&chip->dff50, !chip->input.ext_vclk, chip->w322, chip->w9);
    SDFFR_Update(&chip->dff51, chip->w279, chip->w336, chip->w299);

    chip->w325 = chip->input.ext_cas0 && chip->dff62.l2;
    chip->w321 = !chip->dff61.l2 && chip->input.ext_oe0;
    chip->w326 = chip->w321 || chip->w325;
    chip->w300 = !(chip->w326 && (!chip->dff49.l2 || chip->dff50.l2));
    chip->w314 = !chip->w300;
    chip->ext_noe = chip->w314;
    chip->ext_eoe = !(!chip->w314 && chip->input.ext_m3);
    chip->w322 = !!!!chip->dff62.l2; // FIXME
    chip->w342 = !!!!chip->dff49.l2; // FIXME

    SDFFR_Update(&chip->dff61, !chip->input.ext_vclk, chip->w342, chip->dff51.l2);
    SDFFR_Update(&chip->dff62, chip->input.ext_vclk, chip->dff61.l2, chip->dff51.l2);
}

void ARB_Clock(arbiter_t *chip)
{
    chip->w9 = chip->sres;
    chip->ext_zrd_out = chip->input.ext_as_in || !chip->input.ext_rw_in;
    chip->ext_zv = chip->ztov;

    SDFF_Update(&chip->dff13, !chip->input.ext_vclk, chip->input.ext_uds_in);

    chip->w65 = !(chip->dff13.l2 && chip->input.ext_uds_in);
    chip->w31 = !chip->w65;
    chip->sres = chip->input.ext_sres;
    chip->ext_zwr_out = chip->input.ext_rw_in || chip->input.ext_as_in;
    chip->vd8 = (chip->input.ext_data_in & 256) != 0;
    chip->mreq_in = chip->input.ext_mreq_in; // z80 mreq?
    chip->w95 = !(chip->input.ext_uds_in || chip->input.ext_rw_in);

    chip->w96 = 1;
    chip->w97 = 1;

    if (chip->w95 && chip->w122)
    {
        chip->w96 = !chip->w90;
        chip->w97 = !chip->w91;
    }


    // FDC
    chip->w130 = chip->input.ext_as_in || chip->w129;
    chip->w103 = !(chip->dff24.l2 || chip->input.ext_rw_in || chip->w130);

    SDFF_Update(&chip->dff24, chip->input.ext_vclk, chip->w103);

    chip->ext_fdc = chip->w130; // FDC
    chip->ext_fdwr = !chip->dff24.l2;
    chip->w94 = chip->w128 || chip->input.ext_as_in;
    chip->w75 = !(chip->w112 && chip->w94);
    chip->ext_io = !chip->w75; // IO??

#if 0
    // ts8
    if (!chip->w147)
        chip->tm_w1 = 0;
#endif

    chip->ext_sound = chip->w140;
    chip->w126 = chip->w124 || chip->input.ext_as_in;
    chip->ext_time = chip->w126; // TIME
    chip->w131 = chip->ztov || chip->test || chip->pal_trap;
    chip->w137 = !(chip->w106 || chip->test || chip->pal_trap);
    chip->w142 = !chip->w137;
    chip->test = chip->input.ext_test_mode_0;

    SDFFR_Update(&chip->dff31, chip->w96, chip->vd8, chip->w328); // Z80 reset
    chip->w166 = chip->input.ext_m3 ? chip->dff31.l2 : chip->w328; // Z80 reset

    SDFF_Update(&chip->sres_syncv, chip->input.ext_vclk, chip->sres);
    chip->ext_rw_out = chip->input.ext_zwr_in;

    // DTACK
    chip->w118 = chip->w122 || chip->input.ext_as_in;
    chip->w133 = !(chip->w132 && chip->w118 && chip->w130 && chip->w126 && chip->w94 && chip->w134);
    chip->w200 = !(chip->w133 && chip->w249);
    chip->w222 = !(chip->w200 || chip->test);
    chip->ext_dtack_out = !chip->w222;
    chip->w215 = chip->va21_in || chip->mreq_in;
    chip->w223 = chip->w48 || chip->input.ext_bgack_in || !chip->input.ext_m3;
    chip->ext_zres = chip->w166; // Z80 reset

    //chip->w247 = chip->tm_w1;

    chip->sres_syncv_2 = chip->sres_syncv.l2;
    chip->w336 = chip->input.ext_wait_in;
    chip->w311 = !(chip->input.ext_m3 && chip->w328);
    chip->ext_vres = !chip->w311;
    chip->pal_trap = 0; // !1; // used to be pal/ntsc
    chip->w343 = !(!chip->fc00 || chip->input.d8_out);
    chip->w363 = !(!chip->fc01 || chip->input.d8_out);
    chip->w346 = !(!chip->fc10 || chip->input.d8_out);
    chip->w332 = !(chip->w333 || chip->input.d8_out);
    chip->w333 = !(chip->input.d8_out || chip->sres_syncv_2);

#if 0
    // ts27
    if (!chip->w285)
        chip->tm_w1 = 0;
#endif

    chip->w353 = chip->w194; // YS pin??
    chip->fc00 = !chip->input.ext_fc1 && !chip->input.ext_fc0;
    chip->fc01 = !chip->input.ext_fc1 && chip->input.ext_fc0;
    chip->fc10 = chip->input.ext_fc1 && !chip->input.ext_fc0;
    chip->fc11 = chip->input.ext_fc1 && chip->input.ext_fc0;
    chip->ext_zram = chip->w136;
    chip->va14_in = (chip->input.ext_vaddress_in & 0x2000) != 0;
    chip->va21_in = (chip->input.ext_vaddress_in & 0x100000) != 0;
    chip->va22_in = (chip->input.ext_vaddress_in & 0x200000) != 0;
    chip->va23_in = (chip->input.ext_vaddress_in & 0x400000) != 0;
    chip->ext_zaddress_out &= ~1;

    if (chip->w31)
        chip->ext_zaddress_out |= 1;

    // ts7
    if (!chip->vtoz)
    {
        chip->ext_zaddress_out &= ~0xff00;
        chip->ext_zaddress_out |= (chip->input.ext_vaddress_in << 1) & 0x7f00;
    }

    chip->ext_vz = chip->vtoz;
    chip->za15_in = (chip->input.ext_zaddress_in & 32768) != 0;

    SDFFR_UpdateWide(&chip->z80bank, chip->w150, ((chip->z80bank.q & 0x1ff) >> 1) | ((chip->input.ext_zdata_in & 1) << 8),
        chip->sres_syncv.l2, 511);

    chip->w91 = 0;
    chip->w99 = 0;
    chip->w90 = 0;
    chip->w92 = 0;

    switch (chip->input.ext_vaddress_in & 0x180) {
        case 0:
            chip->w91 = 1;
            break;
        case 0x80:
            chip->w99 = 1;
            break;
        case 0x100:
            chip->w90 = 1;
            break;
        case 0x180:
            chip->w92 = 1;
            break;
    }

    chip->w194 = chip->input.ext_as_in || chip->input.ext_lds_in || chip->input.ext_uds_in || (chip->input.ext_vaddress_in & 0x7fff80) != 0x50a000; // TMSS
    chip->w310 = !((chip->input.ext_vaddress_in & 0x7fff80) == 0x600000 && !chip->input.ext_as_in); // VDP range (goes to VSYNC pin)

    if (chip->input.ext_m3) // MD
    {
        chip->va_out = (chip->input.ext_zaddress_in & 0x7f00) >> 8;

        if (chip->w86)
            chip->va_out |= (chip->z80bank.q & 0x1ff) << 7;
        else
            chip->va_out |= 0xc000;

        chip->w119 = (chip->input.ext_vaddress_in & 0x7f8000) != 0x500000; // z80 ram
        chip->w128 = (chip->input.ext_vaddress_in & 0x7fff80) != 0x508000; // IO chip
        chip->w122 = (chip->input.ext_vaddress_in & 0x7ffe00) != 0x508800; // Z80 ctrl
        chip->w129 = (chip->input.ext_vaddress_in & 0x7fff80) != 0x509000; // FDC
        chip->w124 = (chip->input.ext_vaddress_in & 0x7fff80) != 0x509800; // TIME
        chip->ext_ia14 = !chip->va14_in; // IA14
        chip->w86 = (chip->input.ext_zaddress_in & 0xff00) != 0x7f00; // VDP
        chip->w136 = !((chip->input.ext_zaddress_in & 0xc000) == 0 && !chip->w220); // Z80 RAM
        chip->w140 = !((chip->input.ext_zaddress_in & 0xe000) == 0x4000 && !chip->w220); // YM3438
        chip->w150 = !((chip->input.ext_zaddress_in & 0xff00) == 0x6000 && !chip->input.ext_zwr_in && !chip->w220); // z80 bank
    }
    else // M3
    {
        chip->va_out = (chip->input.ext_zaddress_in & 0xff80) >> 7;
        if (chip->w215)
            chip->va_out |= 0x200;
        if (chip->mreq_in)
            chip->va_out |= 0x400;
        if (chip->input.ext_iorq)
            chip->va_out |= 0x800;
        if (chip->w166)
            chip->va_out |= 0x1000;

        chip->w119 = 1; // z80 ram
        chip->w128 = 1; // IO chip
        chip->w122 = 1; // Z80 ctrl
        chip->w129 = 1; // FDC
        chip->w124 = 1; // TIME
        chip->ext_ia14 = 1; // IA14
        chip->w86 = 1; // VDP
        chip->w136 = 1; // Z80 RAM
        chip->w140 = 1; // YM3438
        chip->w150 = 1; // z80 bank
    }

    if (!chip->w86)
        chip->va_out &= ~0xff;

    ARB_ClockZToV(chip);
    ARB_ClockM3(chip);
    ARB_ClockZ80(chip);
    ARB_ClockVToZ(chip);
    ARB_ClockInterrupt(chip);
    ARB_ClockCart(chip);
    ARB_ClockVCLKDivider(chip);
    ARB_ClockRAMOE(chip);
}

void ARB_ClockEDCLK2(arbiter_edclk_t *chip, int mclk)
{
    chip->input.mclk = mclk;
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    ARB_ClockEDCLK(chip);
    ARB_ClockEDCLK(chip);
    ARB_ClockEDCLK(chip);
    chip->input_old = chip->input;
}

void ARB_Clock2(arbiter_t* chip)
{
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    ARB_Clock(chip);
    ARB_Clock(chip);
    ARB_Clock(chip);
    ARB_Clock(chip);
    ARB_Clock(chip);
    chip->input_old = chip->input;
}

void ARB_UpdateOutputBus(arbiter_t *chip)
{
    if (!chip->w12)
    {
        *chip->ext_data_out &= ~256;
        if (chip->w33)
            *chip->ext_data_out |= 256;
    }

    if (!chip->w131)
    {
        *chip->ext_vaddress_out &= ~0xfff80;
        *chip->ext_vaddress_out |= (chip->va_out << 7) & 0xfff80;
    }

    if (!chip->w142)
    {
        *chip->ext_vaddress_out &= ~0x700000;
        *chip->ext_vaddress_out |= (chip->va_out << 7) & 0x700000;
    }
}