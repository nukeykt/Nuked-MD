// FC1004 bus arbiter
#include <stdio.h>
#include "arbiter.h"

void ARB_Clock(arbiter_t *chip, int cycles)
{
    SCNT_Update(&chip->dff1, chip->ext_mclk, chip->w1, 1, chip->w3, chip->w25);
    SCNT_Update(&chip->dff2, chip->ext_mclk, chip->w1, !chip->dff9.l2, 1, chip->w25);
    SCNT_Update(&chip->dff3, chip->ext_mclk, chip->w1, 0, chip->dff2.l2, chip->w25);
    chip->w1 = !(!chip->dff1.l2 && !chip->dff2.l2 && !chip->dff3.l2);
    chip->w2 = chip->dff3.l2;
    chip->w3 = chip->dff2.l2 && chip->dff3.l2;
    chip->w4 = chip->w2;
    chip->w5 = !(!chip->dff4.l2 || !chip->dff5.l2 || !chip->dff6.l2 || !chip->dff7.l2);
    SCNT_Update(&chip->dff4, chip->w4, chip->dff9.l2, 1, chip->dff9.l2, chip->w8);
    SCNT_Update(&chip->dff5, chip->w4, chip->dff9.l2, 0, chip->dff4.cout, chip->w8);
    SCNT_Update(&chip->dff6, chip->w4, chip->dff9.l2, 0, chip->dff5.cout, chip->w8);
    SCNT_Update(&chip->dff7, chip->w4, chip->dff9.l2, 0, chip->dff6.cout, chip->w8);

    chip->w6 = !!!!chip->w2; // FIXME
    chip->w7 = !!!!chip->dff8.nq; // FIXME
    chip->w8 = chip->w38;
    chip->w9 = chip->w25; // FIXME: delay?

    SDFFS_Update(&chip->dff8, chip->w2, chip->w5, chip->w8);

    chip->w10 = !(chip->w11 || (0 && chip->dff9.l2));
    chip->w11 = !(!chip->w27 || chip->dff9.l2);

    SDFFR_Update(&chip->dff9, chip->w2, chip->w10, chip->w7);

    chip->w12 = chip->w152 || !chip->w87 || chip->w63;

    chip->w14 = DELAY_Update(&chip->d1, cycles, chip->w85);

    chip->w15 = chip->w267 || !chip->w87;

    // ts1
    if (!chip->w12)
    {
        chip->ext_data_out &= ~256;
        if (chip->w33)
            chip->ext_data_out |= 256;
    }

    SDFF_Update(&chip->dff10, chip->ext_vclk, chip->w78);

    chip->w16 = !(chip->dff33.nq || chip->w346);
    chip->w17 = chip->dff10.l2;

    chip->w24 = chip->w105;
    chip->w25 = chip->w38;

    SDFF_Update(&chip->dff11, !chip->ext_vclk, chip->w43);
    SDFF_Update(&chip->dff12, !chip->ext_vclk, chip->w41);

    chip->w26 = !(chip->dff15.nq && chip->dff12.l2);
    chip->w27 = chip->dff11.l2 || chip->w44;

    chip->w31 = !chip->w65;
    chip->w32 = !chip->w68;

    chip->w33 = chip->tm_w1; // Z80 BUSACK
    chip->w34 = chip->w33 || !chip->dff14.l2;
    chip->w35 = !chip->dff14.l2;

    SDFF_Update(&chip->dff13, !chip->ext_vclk, chip->w186);

    chip->w36 = chip->w63 || chip->w87;

    SDFFR_Update(&chip->dff14, chip->w36, chip->w56, chip->dff32.l2); // Z80 bus req

    chip->w38 = chip->tm_w1;

    SDFFS_Update(&chip->dff15, chip->ext_vclk, chip->w40, chip->w73);

    chip->w40 = chip->w26 && chip->w83;

    chip->w41 = chip->w27 || chip->dff15.q;
    chip->w42 = !(chip->dff19.q && chip->w71);
    chip->w43 = chip->w44 || chip->dff16.l2;

    SDFF_Update(&chip->dff16, chip->ext_vclk, chip->w44);

    chip->w44 = chip->w42 || chip->va23_in || chip->w59;

    // ???
    chip->w45 = chip->w46 && chip->w105;
    chip->w46 = chip->w45 || chip->w190;

    chip->w47 = !chip->w75;

    chip->w48 = !chip->w45;

    chip->w49 = chip->dff17.q;

    SDFFS_Update(&chip->dff17, chip->ext_vclk, chip->w58, chip->w73);

    chip->w50 = chip->w77 || chip->tm_w2;

    SDFF_Update(&chip->dff18, chip->ext_vclk, chip->w77);

    chip->w51 = chip->dff18.l2 || chip->w114;

    chip->w52 = !(chip->w53 || chip->tm_w2);

    chip->w53 = chip->w50 && chip->w51;

    chip->w54 = !(chip->dff23.l2 && chip->va23_in);

    chip->w55 = chip->w87 || chip->w267;

    chip->w56 = (chip->ext_data_in & 256) != 0;

    chip->w57 = chip->w53 || chip->tm_w2;

    chip->w58 = chip->w54 && chip->w84;

    chip->w59 = !chip->w367 || chip->w267;

    chip->w60 = chip->w119 || chip->w152 || chip->w33;

    chip->w63 = !(chip->w99 && !chip->w122 && !chip->w186);

    chip->w64 = !(chip->w43 && chip->tm_w2);

    chip->w65 = !(chip->dff13.l2 && chip->w186);

    chip->w66 = chip->w119 || chip->w267;

    chip->w68 = !(chip->w56 || chip->w163);

    SDFFS_Update(&chip->dff19, !chip->ext_vclk, chip->w71, chip->w73);

    chip->w69 = !(chip->w44 || chip->dff12.l1);

    chip->w70 = chip->w27 && chip->w71;

    chip->w71 = chip->dff20.q && chip->w74;

    chip->w72 = chip->dff15.nq || chip->w43;

    SDFFS_Update(&chip->dff20, !chip->ext_vclk, chip->w74, chip->w73);

    chip->w73 = chip->dff32.l2 && chip->w367;

    chip->w74 = chip->w49; // FIXME: delay??

    chip->w75 = !(chip->w112 && chip->w94);

    chip->w76 = !chip->w38 || chip->dff21.l2;
    chip->w77 = chip->dff22.l2 || chip->w182;

    chip->w78 = !chip->w79 || chip->w182 || !chip->w38;

    chip->w79 = chip->dff21.l2 || chip->w182 || !chip->w38;

    SDFF_Update(&chip->dff21, !chip->ext_vclk, chip->w178);

    SDFF_Update(&chip->dff22, chip->ext_vclk, chip->w111);

    chip->w81 = chip->w77;

    chip->w82 = chip->tm_w1; // z80 ioreq

    chip->w83 = !chip->dff23.l2 || chip->va23_in;

    chip->w84 = !(!chip->dff23.l2 && chip->dff33.nq && chip->w356);

    chip->w85 = chip->tm_w1;

    chip->w87 = chip->tm_w1;

    SDFFR_Update(&chip->dff23, !chip->w59, chip->dff33.nq, chip->dff33.nq);

    chip->w94 = chip->w128 || chip->w267;
    chip->w95 = !(chip->w186 || chip->w87);

    chip->w96 = !(chip->w95 && chip->w90 && !chip->w122);

    chip->w97 = !(chip->w95 && chip->w91 && !chip->w122);

    chip->w101 = !(chip->dff20.nq || chip->dff25.l2);

    chip->w102 = !(chip->w70 && chip->w107 && chip->w238);
    chip->w103 = !(chip->dff24.l2 || chip->w87 || chip->w130);
    SDFF_Update(&chip->dff24, chip->ext_vclk, chip->w103);

    SDFFR_Update(&chip->dff25, !chip->ext_vclk, chip->dff12.l1, chip->w73); // FIXME: check reset wire

    chip->w105 = chip->w76 && chip->w367;

    chip->w106 = chip->w76;

    chip->w107 = !((chip->ext_zaddress_in & 0xc000) == 0x8000 && !chip->w220 && !chip->w367);


    chip->w111 = chip->dff28.l2 || chip->w182;

    chip->w112 = chip->w113 && chip->dff29.l2;

    chip->w113 = chip->w191 || chip->w367 || !chip->w85;

#if 0
    // ts8
    if (!chip->w147)
        chip->tm_w1 = 0;
#endif

    chip->w114 = chip->tm_w1;

    chip->w115 = !chip->w64;

    chip->w116 = chip->w126;

    chip->w118 = chip->w122 || chip->w267;

    chip->w120 = !chip->dff24.l2;

    chip->w123 = chip->w140;

    chip->w126 = chip->w124 || chip->w267;

    chip->w130 = chip->w267 || chip->w129;

    SDFFR_Update(&chip->dff26, chip->w97, chip->w56, chip->dff32.l2); // memory mode register

    SDFF_Update(&chip->dff27, chip->ext_zclk, chip->w14);

    chip->w131 = chip->w105 || chip->w152 || chip->w323;

    chip->w132 = chip->w72 || chip->w211;

    chip->w133 = !(chip->w132 && chip->w118 && chip->w130 && chip->w126 && chip->w94 && chip->w134);

    chip->w134 = chip->w66 || chip->w341;

    SDFF_Update(&chip->dff28, chip->ext_vclk, chip->w79);

    chip->w137 = !(chip->w106 || chip->w152 || chip->w323);

    chip->w142 = !chip->w137;

    chip->w143 = !chip->w367 || chip->w220 || !chip->za15_in;

    SDFF_Update(&chip->dff29, chip->ext_zclk, chip->tm_w1);

    chip->w146 = chip->w76;

    chip->w147 = !chip->w149;

    chip->w149 = !(chip->w152 || chip->w323 || chip->w146);

    chip->w151 = chip->w130;
    chip->w152 = chip->tm_w2;

    chip->w160 = !chip->w102;

    chip->w162 = !chip->w172;

    chip->w163 = chip->w56 || chip->w82 || chip->va22_in || chip->w367; // FIXME

    chip->w164 = !(chip->w34 && chip->w166);

    chip->w166 = chip->w367 ? chip->dff31.l2 : chip->w328; // Z80 reset

    chip->w167 = chip->w170 && chip->w202;

    SDFF_Update(&chip->dff30, chip->ext_zclk, chip->dff27.l2);

    chip->w168 = !(chip->w69 || !chip->dff26.l2);

    chip->w169 = chip->w168 || chip->w211 || chip->w205;

    chip->w170 = !chip->dff26.l2 || chip->tm_w2;

    SDFFR_Update(&chip->dff31, chip->w96, chip->w56, chip->w328); // Z80 reset

    chip->w171 = chip->za15_in || chip->w220 || chip->w367;

    chip->w172 = !(chip->w169 && chip->w167 && chip->w171 && chip->w173);

    chip->w173 = chip->w101 || !chip->dff26.l2;

    chip->w174 = chip->w175 || chip->w176 || chip->w182 || chip->tm_w4;

    chip->w175 = !chip->w267;

    chip->w176 = !chip->w190;

    chip->w178 = chip->w174 && chip->w79;


    chip->w182 = chip->w188 && chip->dff34.l2;

    SDFF_Update(&chip->dff32, chip->ext_vclk, chip->w38);

    SDFFS_Update(&chip->dff33, chip->ext_vclk, chip->w283, chip->dff32.l2);

    chip->w183 = !(chip->dff33.q || chip->dff23.l2 || chip->w356 || chip->w259);

    chip->w184 = chip->w146 || chip->w152;

    chip->w185 = chip->w86 || chip->w220;

    chip->w186 = chip->tm_w1;

    chip->w187 = chip->w114;

    chip->w188 = chip->w185 && chip->w143;

    chip->w189 = chip->dff32.l2;

    chip->w190 = chip->tm_w1;
    chip->w191 = chip->tm_w1;

    chip->w196 = !chip->w198;

    chip->w197 = chip->w206 && chip->tm_w2;

    chip->w198 = !(chip->w197 && chip->w101 && chip->w204);

    chip->w199 = chip->dff30.l2;

    chip->w200 = !(chip->w133 && chip->w249);

    chip->w202 = chip->w208 || chip->w209;

    chip->w203 = !chip->w211;

    chip->w204 = !(chip->w203 && chip->w69 && chip->w205 && chip->va21_in);

    chip->w205 = !chip->w228;

    chip->w206 = !chip->va21_in || chip->w228 || chip->w254;

    chip->w207 = chip->w199; // FIXME: delay?

    chip->w208 = !chip->dff26.l2 ? chip->w248 : chip->w254;

    chip->w209 = !chip->w228;

    chip->w211 = !chip->w367 || chip->w267 || chip->va23_in;

    chip->w215 = chip->va21_in || chip->w82;

    chip->w220 = chip->w82 || !chip->dff44.l2;

    SDFF_Update(&chip->dff34, chip->ext_zclk, chip->tm_w2);

    chip->w222 = !(chip->w200 || chip->w152);

    chip->w223 = chip->w48 || chip->w259 || !chip->w367;

    chip->w226 = chip->w166; // Z80 reset

    chip->w228 = chip->va22_in ^ chip->tm_w2;

    chip->w230 = !chip->w235;

    SDFF_Update(&chip->dff44, !chip->ext_zclk, chip->w207);

    chip->w232 = chip->w228 || chip->w248 || chip->va21_in;

    chip->w234 = chip->w228 || chip->va21_in || chip->w211;

    chip->w235 = !(chip->w234 && chip->w232);

    chip->w238 = chip->w352 || chip->w223;

    //chip->w247 = chip->tm_w1;

    chip->w248 = chip->w223 || chip->w269;

    chip->w249 = !(chip->w105 && chip->w369);

    chip->w254 = chip->w223 || chip->va23_in;

    chip->w255 = !(chip->tm_w1 || chip->w79);

    chip->w257 = !(chip->w282 && chip->w186);

    chip->w258 = !(chip->w255 || chip->w323 || chip->w182);

    chip->w259 = !chip->w223;

    chip->w266 = chip->w289 && chip->w356 && chip->w356;

    chip->w267 = chip->tm_w1;

    chip->w268 = !(chip->w152 || chip->w323 || chip->w146);

    chip->w269 = chip->dff45.q && chip->va23_in && chip->w274;

    SDFFS_Update(&chip->dff45, chip->w274, chip->va23_in, !chip->w223);

    SDFFS_Update(&chip->dff46, chip->w274, chip->dff46.nq, chip->w298);

    chip->w271 = chip->dff46.q || chip->tm_w1;

    SDFFS_Update(&chip->dff47, !chip->ext_vclk, chip->w273, chip->w164);

    chip->w272 = !(chip->dff47.q || chip->w267);

    chip->w273 = !(chip->w272 || chip->w307);

    chip->w274 = !chip->w352;

    chip->w279 = !chip->w190;

    chip->w282 = chip->tm_w1;

    chip->w283 = (chip->w183 || chip->w287 || chip->w343);

    chip->w285 = !chip->w222;

    chip->w286 = !(chip->w287 || !chip->dff32.l2);

    chip->w287 = chip->w309 && chip->w356;

    chip->w288 = chip->dff32.l2;

    chip->w289 = chip->w286;

    SCNT_Update(&chip->dff48, chip->ext_vclk, chip->w289, 0, chip->w266, 1);

    chip->w290 = !chip->w52;

    chip->w291 = !chip->w268;

    chip->w292 = !chip->w331;

    chip->w293 = !(chip->w312 && chip->w367);

    chip->w294 = !chip->w318;

    chip->w297 = chip->w249;

    chip->w298 = chip->w301 && chip->va23_in;

    SDFFR_Update(&chip->dff49, chip->ext_vclk, chip->w279, chip->dff51.l2);
    SDFFR_Update(&chip->dff50, chip->w340, chip->w322, chip->w9);
    SDFFR_Update(&chip->dff51, chip->w279, chip->w336, chip->w299);

    chip->w299 = !chip->w302;

    chip->w300 = !(chip->w326 && (!chip->dff49.l2 || chip->dff50.l2));

    chip->w301 = !(chip->w223 && chip->tm_w2);

    chip->w302 = !(chip->w9 && (!chip->dff50.l2 || chip->dff62.l2));
    
    chip->w304 = !chip->dff63.l2;

    SDFFR_Update(&chip->dff52, chip->w304, !chip->dff52.l2, chip->w305);

    chip->w305 = !!chip->dff32.l2;

    chip->w307 = !(chip->w308 || !chip->dff32.l2);
    chip->w308 = !(chip->w287 || chip->w343);

    SCNT_Update(&chip->dff53, chip->ext_vclk, chip->w289, 0, chip->dff54.cout, 1); // FIXME: check reset
    SCNT_Update(&chip->dff54, chip->ext_vclk, chip->w289, 0, chip->dff48.cout, 1); // FIXME: check reset
    SCNT_Update(&chip->dff55, chip->ext_vclk, chip->w289, chip->w367, chip->dff53.cout, 1); // FIXME: check reset

    chip->w309 = !(!chip->dff48.l2 || !chip->dff53.l2 || !chip->dff54.l2 || !chip->dff55.l2);

    chip->w311 = !(chip->w367 && chip->w328);

    chip->w312 = !chip->w314;

    chip->w313 = chip->w314;

    chip->w314 = !chip->w300;

    chip->w315 = chip->dff56.q;

    chip->w316 = !(!chip->w367 || chip->dff70.l2);

    chip->w317 = chip->w267 || chip->w249;

    chip->w318 = chip->w316 || chip->w320;

    chip->w320 = !(!chip->w367 || chip->dff44.l2 || chip->w82); // FIXME

    chip->w321 = !chip->dff61.l2 && chip->tm_w2;

    chip->w322 = !!!!chip->dff62.l2; // FIXME

    chip->w323 = !1; // used to be pal/ntsc

    chip->w325 = chip->w352 && chip->dff62.l2;

    chip->w326 = chip->w321 || chip->w325;

    SDFFS_Update(&chip->dff56, chip->dff74.l2, chip->va23_in, chip->w332);

    SDFFR_Update(&chip->dff57, chip->dff74.l2, chip->w288, chip->w288);

    SDFFR_Update(&chip->dff58, chip->dff74.l2, chip->dff57.l2, chip->w288);

    chip->w328 = !(!chip->dff58.l2 || chip->w334);

    chip->w329 = !chip->dff52.l2;

    chip->w330 = !chip->dff65.l2;

    chip->w331 = chip->w257 && !chip->dff66.l2 && chip->dff59.l2;

    SDFF_Update(&chip->dff59, chip->ext_vclk, chip->w257);

    chip->w332 = !(chip->w333 || chip->tm_w2);
    chip->w333 = !(chip->tm_w1 || chip->w288);

    SDFFR_Update(&chip->dff60, !chip->w16, chip->dff69.l2, chip->w288);

    chip->w334 = !(!chip->dff60.l2 || !chip->dff69.l2);

    chip->w325 = !chip->w311;

    chip->w336 = chip->tm_w1;

    chip->w337 = !chip->tm_w1;

    chip->w338 = !chip->w258;

    chip->w339 = !(chip->w267 && !chip->dff47.l2);

    chip->w340 = !chip->ext_vclk;

    chip->w341 = !(!chip->dff64.l2 && chip->w336);

    SDFFR_Update(&chip->dff61, chip->w340, chip->w342, chip->dff51.l2);

    chip->w342 = !!!!chip->dff49.l2; // FIXME

    SDFFR_Update(&chip->dff62, chip->ext_vclk, chip->dff61.l2, chip->dff51.l2);

    chip->w343 = !(chip->w368 || chip->tm_w2);

    SDFFR_Update(&chip->dff63, chip->w371, !chip->dff63.l2, chip->w305);

    SDFF_Update(&chip->dff64, chip->ext_vclk, chip->w344);

    chip->w344 = chip->dff66.l2 || chip->w267 || chip->dff73.l2;

    SDFFR_Update(&chip->dff65, chip->w329, !chip->dff65.l2, chip->w305);

    SDFF_Update(&chip->dff66, !chip->ext_vclk, chip->w348);

    SDFFR_Update(&chip->dff67, chip->w330, !chip->dff67.l2, chip->w305);

    SDFFR_Update(&chip->dff68, !chip->w16, !chip->dff68.l2, chip->w350);

    SDFFR_Update(&chip->dff69, chip->dff74.l2, chip->w337, chip->w288);

    chip->w346 = !(chip->w355 || chip->tm_w2);

    chip->w347 = !chip->dff68.l2;

    chip->w348 = !(chip->w339 && chip->dff70.l2 && !chip->dff75.l2);

    SDFF_Update(&chip->dff70, !chip->ext_vclk, chip->w339);

    SDFFR_Update(&chip->dff71, chip->w347, !chip->dff71.l2, chip->w350);

    chip->w349 = !chip->dff71.l2;

    SDFFR_Update(&chip->dff72, chip->w349, !chip->dff72.l2, chip->w350);

    SDFF_Update(&chip->dff73, chip->ext_vclk, chip->w267);

    chip->w350 = !!chip->dff32.l2;
    chip->w351 = !chip->dff67.l2;

    SDFFR_Update(&chip->dff74, chip->w351, !chip->dff74.l2, chip->w288);

    chip->w352 = chip->tm_w1;

#if 0
    // ts27
    if (!chip->w285)
        chip->tm_w1 = 0;
#endif

    chip->w353 = chip->tm_w1;

    chip->w354 = !(chip->w339 && chip->dff70.l2);

    chip->w355 = !chip->w366;

    SDFF_Update(&chip->dff75, !chip->ext_vclk, chip->w354);

    SDFFR_Update(&chip->dff76, !chip->dff72.l2, !chip->dff76.l2, chip->w350);

    SCNT_Update(&chip->dff77, chip->ext_vclk, chip->w289, 0, chip->dff79.cout, 1);

    chip->w356 = chip->w374 && 1;

    chip->w357 = !chip->w360;

    chip->w358 = chip->tm_w1;

    chip->w359 = !chip->tm_w1;

    chip->w360 = chip->w361 && chip->w358;

    chip->w361 = !chip->tm_w1;

    chip->w362 = chip->w363 || chip->dff76.l2;

    chip->w363 = !(chip->w353 || chip->tm_w2);

    chip->w364 = chip->w359 && chip->w361;

    chip->w365 = chip->tm_w1;

    chip->w366 = chip->w365 && chip->w359;

    chip->w367 = chip->tm_w1;

    chip->w368 = !chip->w364;

    chip->w369 = chip->w365 && chip->w358;

    chip->w370 = chip->w136;

    chip->w371 = !chip->w362;

    chip->w372 = chip->w289 && 1 && 1;

    SCNT_Update(&chip->dff78, chip->ext_vclk, chip->w289, 0, chip->w372, 1);

    chip->w374 = !(!chip->dff77.l2 || !chip->dff78.l2 || !chip->dff79.l2 || !chip->dff80.l2);

    SCNT_Update(&chip->dff79, chip->ext_vclk, chip->w289, 0, chip->dff80.cout, 1);

    SCNT_Update(&chip->dff80, chip->ext_vclk, chip->w289, 0, chip->dff78.cout, 1);

    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0xfff80;
        chip->ext_vaddress_out |= (chip->va_out << 7) & 0xfff80;
    }

    if (!chip->w142)
    {
        chip->ext_vaddress_out &= ~0x700000;
        chip->ext_vaddress_out |= (chip->va_out << 7) & 0x700000;
    }

    chip->va14_in = (chip->ext_vaddress_in & 0x2000) != 0;

    chip->va21_in = (chip->ext_vaddress_in & 0x100000) != 0;

    chip->va22_in = (chip->ext_vaddress_in & 0x200000) != 0;

    chip->va23_in = (chip->ext_vaddress_in & 0x400000) != 0;

    chip->ext_zaddress_out &= ~128;
    if (chip->w31)
        chip->ext_zaddress_out |= 128;

    // ts7
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~0xff00;
        chip->ext_zaddress_out = (chip->ext_vaddress_in << 1) & 0x7f00;
    }

    chip->za15_in = (chip->ext_zaddress_in & 32768) != 0;


    SDFFR_UpdateWide(&chip->z80bank, chip->w150, ((chip->z80bank.l2 & 0x1ff) >> 1) | ((chip->tm_w1 & 1) << 8),
        chip->w189, 511);
    if (chip->w367) // MD
    {
        chip->va_out = (chip->ext_zaddress_in & 0x7f00) >> 8;
        if (chip->w86)
            chip->va_out |= (chip->z80bank.l2 & 0x1ff) << 7;
        else
            chip->va_out |= 0xc000;
    }
    else // M3
    {
        chip->va_out = (chip->ext_zaddress_in & 0xff80) >> 7;
        if (chip->w215)
            chip->va_out |= 0x200;
        if (chip->w82)
            chip->va_out |= 0x400;
        if (chip->w191)
            chip->va_out |= 0x800;
        if (chip->w166)
            chip->va_out |= 0x1000;
    }
    if (!chip->w86)
        chip->va_out &= ~0xff;

    chip->w91 = (chip->ext_vaddress_in & 0x180) == 0;
    chip->w99 = (chip->ext_vaddress_in & 0x180) == 0x80;
    chip->w90 = (chip->ext_vaddress_in & 0x180) == 0x100;
    chip->w92 = (chip->ext_vaddress_in & 0x180) == 0x180;

    chip->w194 = chip->w267 || chip->w282 || chip->w186 || (chip->ext_vaddress_in & 0x7fff80) != 0x50a000; // TMSS
    chip->w310 = !((chip->ext_vaddress_in & 0x7fff80) == 0x600000 && !chip->w267); // VDP range

    chip->w119 = !(chip->w367 && (chip->ext_vaddress_in & 0x7f8000) == 0x500000); // z80 ram

    chip->w128 = !(chip->w367 && (chip->ext_vaddress_in & 0x7fff80) == 0x508000); // IO chip

    chip->w122 = !(chip->w367 && (chip->ext_vaddress_in & 0x7ffe00) == 0x508800); // Z80 ctrl

    chip->w129 = !(chip->w367 && (chip->ext_vaddress_in & 0x7fff80) == 0x509000); // FDC

    chip->w124 = !(chip->w367 && (chip->ext_vaddress_in & 0x7fff80) == 0x509800); // TIME

    chip->w136 = !((chip->ext_zaddress_in & 0xc000) == 0 && !chip->w220 && chip->w367); // Z80 RAM

    chip->w140 = !((chip->ext_zaddress_in & 0xe000) == 0x4000 && !chip->w220 && chip->w367); // YM3438

    chip->w150 = !(chip->w367 && (chip->ext_zaddress_in & 0xff00) == 0x6000 && !chip->w114 && !chip->w220); // z80 bank

    chip->w86 = !((chip->ext_zaddress_in & 0xff00) == 0x7f00 && chip->w367); // VDP

    chip->w296 = !(chip->w367 && chip->va14_in); // IA14
}
