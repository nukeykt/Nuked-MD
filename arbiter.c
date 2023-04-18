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
    chip->w7 = !!!!chip->dff8.o1; // FIXME
    chip->w8 = chip->w38;
    chip->w9 = chip->w25; // FIXME: delay?

    SDFFR2_Update(&chip->dff8, chip->w2, chip->w5, chip->w8);

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

    chip->w16 = !(chip->dff33.o1 || chip->w346);
    chip->w17 = chip->dff10.l2;

    chip->w18 = !(1 && !chip->w30 && !chip->w28
        && !chip->w29 && !chip->w37 && !chip->w39);

    chip->w19 = !(1 && chip->w30 && chip->w28
        && chip->w29 && chip->w37 && chip->w39);

    chip->w20 = chip->w367 ? chip->w39 : chip->w28;
    chip->w21 = chip->w367 ? chip->w30 : (chip->ext_zaddress_in & 128) != 0;
    chip->w22 = chip->w367 ? chip->w29 : chip->w30;
    chip->w23 = chip->w367 ? chip->w29 : chip->w28;

    chip->w24 = chip->w105;
    chip->w25 = chip->w38;

    SDFF_Update(&chip->dff11, !chip->ext_vclk, chip->w43);
    SDFF_Update(&chip->dff12, !chip->ext_vclk, chip->w41);

    chip->w26 = !(chip->dff15.o1 && chip->dff12.l2);
    chip->w27 = chip->dff11.l2 || chip->w44;

    chip->w28 = (chip->ext_zaddress_in & 1024) != 0;
    chip->w29 = (chip->ext_zaddress_in & 512) != 0;
    chip->w30 = (chip->ext_zaddress_in & 256) != 0;

    chip->w31 = !chip->w65;
    chip->ext_zaddress_out &= ~128;
    if (chip->w31)
        chip->ext_zaddress_out |= 128;
    chip->w32 = !chip->w68;

    chip->w33 = chip->tm_w1;
    chip->w34 = chip->w33 || !chip->dff14.l2;
    chip->w35 = !chip->dff14.l2;

    SDFF_Update(&chip->dff13, !chip->ext_vclk, chip->w186);

    chip->w36 = chip->w63 || chip->w87;

    SDFFR_Update(&chip->dff14, chip->w36, chip->w56, chip->dff32.l2);

    chip->w37 = (chip->ext_zaddress_in & 4096) != 0;
    chip->w38 = chip->tm_w1;
    chip->w39 = (chip->ext_zaddress_in & 2048) != 0;

    SDFFR2_Update(&chip->dff15, chip->ext_vclk, chip->w40, chip->w73);

    chip->w40 = chip->w26 && chip->w83;

    chip->w41 = chip->w27 || chip->dff15.o2;
    chip->w42 = !(chip->dff19.o2 && chip->w71);
    chip->w43 = chip->w44 || chip->dff16.l2;

    SDFF_Update(&chip->dff16, chip->ext_vclk, chip->w44);

    chip->w44 = chip->w42 || chip->w373 || chip->w59;

    // ???
    chip->w45 = chip->w46 && chip->w105;
    chip->w46 = chip->w45 || chip->w190;

    chip->w47 = !chip->w75;

    chip->w48 = !chip->w45;

    chip->w49 = chip->dff17.o2;

    SDFFR2_Update(&chip->dff17, chip->ext_vclk, chip->w58, chip->w73);

    chip->w50 = chip->w77 || chip->tm_w2;

    SDFF_Update(&chip->dff18, chip->ext_vclk, chip->w77);

    chip->w51 = chip->dff18.l2 || chip->w114;

    chip->w52 = !(chip->w53 || chip->tm_w2);

    chip->w53 = chip->w50 && chip->w51;

    chip->w54 = !(chip->dff23.l2 && chip->w373);

    chip->w55 = chip->w87 || chip->w267;

    chip->w56 = (chip->ext_data_in & 256) != 0;

    chip->w57 = chip->w53 || chip->tm_w2;

    chip->w58 = chip->w54 && chip->w84;

    chip->w59 = !chip->w367 || chip->w267;

    chip->w60 = chip->w119 || chip->w152 || chip->w33;

    // ts2
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~1024;
        if (chip->w345)
            chip->ext_zaddress_out |= 1024;
    }
    // ts3
    if (!chip->w60)
        chip->ext_zaddress_out &= ~32768;

    chip->w61 = (chip->ext_zaddress_in & 16384) != 0;
    chip->w62 = (chip->ext_zaddress_in & 32768) != 0;

    chip->w63 = !(chip->w99 && chip->w117 && !chip->w186);

    chip->w64 = !(chip->w43 && chip->tm_w2);

    chip->w65 = !(chip->dff13.l2 && chip->w186);

    chip->w66 = chip->w119 || chip->w267;

    chip->w67 = (chip->ext_zaddress_in & 8192) != 0;

    chip->w68 = !(chip->w56 || chip->w163);

    SDFFR2_Update(&chip->dff19, !chip->ext_vclk, chip->w71, chip->w73);

    chip->w69 = !(chip->w44 || chip->dff12.l1);

    chip->w70 = chip->w27 && chip->w71;

    chip->w71 = chip->dff20.o2 && chip->w74;

    chip->w72 = chip->dff15.o1 || chip->w43;

    SDFFR2_Update(&chip->dff20, !chip->ext_vclk, chip->w74, chip->w73);

    chip->w73 = chip->dff32.l2 && chip->w367;

    chip->w74 = chip->w49; // FIXME: delay??

    chip->w75 = !(chip->w112 && chip->w94);

    chip->w76 = !chip->w38 || chip->dff21.l2;
    chip->w77 = chip->dff22.l2 || chip->w182;

    chip->w78 = !chip->w79 || chip->w182 || !chip->w38;

    chip->w79 = chip->dff21.l2 || chip->w182 || !chip->w38;

    SDFF_Update(&chip->dff21, !chip->ext_vclk, chip->w178);

    SDFF_Update(&chip->dff22, chip->ext_vclk, chip->w111);

    chip->w80 = chip->w367 ? chip->w37 : chip->w39;

    chip->w81 = chip->w77;

    chip->w82 = chip->tm_w1;

    chip->w83 = !chip->dff23.l2 || chip->w373;

    chip->w84 = !(!chip->dff23.l2 && chip->dff33.o1 && chip->w356);

    chip->w85 = chip->tm_w1;

    chip->w86 = chip->w19 || chip->w109;

    chip->w87 = chip->tm_w1;

    SDFFR_Update(&chip->dff23, !chip->w59, chip->dff33.o1, chip->dff33.o1);

    // ts4
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~4096;
        if (chip->w265)
            chip->ext_zaddress_out |= 4096;
    }
    // ts5
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~512;
        if (chip->w278)
            chip->ext_zaddress_out |= 512;
    }
    // ts6
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~8192;
        if (chip->w276)
            chip->ext_zaddress_out |= 8192;
    }
    // ts7
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~256;
        if (chip->w284)
            chip->ext_zaddress_out |= 256;
    }
    chip->w88 = chip->w278;
    chip->w89 = chip->w284;
    chip->w93 = !chip->w284;

    chip->w90 = chip->w93 && chip->w88;
    chip->w91 = chip->w89 && chip->w93;
    chip->w92 = chip->w89 && chip->w88;

    chip->w94 = chip->w128 || chip->w267;
    chip->w95 = !(chip->w186 || chip->w87);

    chip->w96 = !(chip->w95 && chip->w90 && chip->w117);

    chip->w97 = !(chip->w95 && chip->w91 && chip->w117);

    chip->w98 = !chip->w278;

    chip->w99 = chip->w98 && chip->w89;

    chip->w100 = !chip->w367;

    chip->w101 = !(chip->dff20.o1 || chip->dff25.l2);

    chip->w102 = !(chip->w70 && chip->w107 && chip->w238);
    chip->w103 = !(chip->dff24.l2 || chip->w87 || chip->w130);
    SDFF_Update(&chip->dff24, chip->ext_vclk, chip->w103);

    SDFFR_Update(&chip->dff25, !chip->ext_vclk, chip->dff12.l1, chip->w73); // FIXME: check reset wire

    chip->w104 = !chip->w61;

    chip->w105 = chip->w76 && chip->w367;

    chip->w106 = chip->w76;

    chip->w107 = chip->w61 || chip->w220 || chip->w367 || chip->w135;

    chip->w108 = chip->w367 ? chip->w61 : chip->w67;

    chip->w109 = !(chip->w61 && chip->w67 && chip->w367 && chip->w135);

    chip->w110 = chip->w367 ? chip->w67 : chip->w37;

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

    // ts9
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~2048;
        if (chip->w281)
            chip->ext_zaddress_out |= 2048;
    }

    chip->w116 = chip->w126;

    chip->w117 = !chip->w122;

    chip->w118 = chip->w122 || chip->w267;

    chip->w119 = chip->w121 || chip->w145 || chip->w250;

    chip->w120 = !chip->dff24.l2;

    chip->w121 = !(chip->w127 && chip->w367 && chip->w306 && chip->w373);
    chip->w122 = !(chip->w125 && chip->w145 && chip->w157);

    chip->w123 = chip->w140;

    chip->w124 = !(chip->w125 && chip->w91 && chip->w145 && chip->w156);
    chip->w125 = !(chip->w121 || chip->w210 || chip->w250);

    chip->w126 = chip->w124 || chip->w267;

    chip->w127 = !chip->w324;

    chip->w128 = !(chip->w91 && chip->w125 && chip->w145 && chip->w154);

    chip->w129 = !(chip->w91 && chip->w125 && chip->w145 && chip->w153);

    chip->w130 = chip->w267 || chip->w129;

    SDFFR_Update(&chip->dff26, chip->w97, chip->w56, chip->dff32.l2);

    SDFF_Update(&chip->dff27, chip->ext_zclk, chip->w14);

    chip->w131 = chip->w105 || chip->w152 || chip->w323;

    chip->w132 = chip->w72 || chip->w211;

    chip->w133 = !(chip->w132 && chip->w118 && chip->w130 && chip->w126 && chip->w94 && chip->w134);

    chip->w134 = chip->w66 || chip->w341;

    chip->w135 = !chip->w62;

    SDFF_Update(&chip->dff28, chip->ext_vclk, chip->w79);

    chip->w136 = !(chip->w104 && chip->w135 && chip->w141 && chip->w367);

    chip->w137 = !(chip->w106 || chip->w152 || chip->w323);

    chip->w138 = !chip->w67;

    chip->w139 = chip->w367 ? chip->w148 : chip->w61;

    chip->w140 = !(chip->w61 && 1 && chip->w135 && chip->w138 && chip->w141 && chip->w367);

    chip->w141 = !chip->w220;

    chip->w142 = !chip->w137;

    chip->w143 = chip->w144 || chip->w220 || chip->w135;

    chip->w144 = !chip->w367;

    chip->w145 = (chip->ext_vaddress_in & 0x8000) != 0;

    SDFF_Update(&chip->dff29, chip->ext_zclk, chip->tm_w1);

    chip->w146 = chip->w76;

    chip->w147 = !chip->w149;

    chip->w148 = chip->w86 && chip->dff38.l2;

    chip->w149 = !(chip->w152 || chip->w323 || chip->w146);

    chip->w150 = chip->w18 || chip->w109 || chip->w114 || chip->w220;

    // ts10
    if (!chip->w60)
    {
        chip->ext_zaddress_out &= ~16384;
        if (chip->w280)
            chip->ext_zaddress_out |= 16384;
    }

    chip->w151 = chip->w130;
    chip->w152 = chip->tm_w2;

    chip->w153 = chip->w155 && chip->w161;
    chip->w154 = chip->w165 && chip->w161;

    chip->w155 = chip->w276;

    chip->w156 = chip->w158 && chip->w155;

    chip->w157 = chip->w158 && chip->w165;

    chip->w158 = chip->w265;

    chip->w159 = 1 && chip->w145 && chip->w195 && chip->w280 && chip->w306 && chip->w373;

    chip->w160 = !chip->w102;

    chip->w161 = !chip->w265;

    chip->w162 = !chip->w172;

    chip->w163 = chip->w56 || chip->w82 || chip->w324 || chip->w367; // FIXME

    chip->w164 = !(chip->w34 && chip->w166);

    chip->w165 = !chip->w276;

    chip->w166 = chip->w367 ? chip->dff31.l2 : chip->w328;

    chip->w167 = chip->w170 && chip->w202;

    SDFF_Update(&chip->dff30, chip->ext_zclk, chip->dff27.l2);

    chip->w168 = !(chip->w69 || !chip->dff26.l2);

    chip->w169 = chip->w168 || chip->w211 || chip->w205;

    chip->w170 = !chip->dff26.l2 || chip->tm_w2;

    SDFFR_Update(&chip->dff31, chip->w96, chip->w56, chip->w328);

    chip->w171 = chip->w62 || chip->w220 || chip->w367;

    chip->w172 = !(chip->w169 && chip->w167 && chip->w171 && chip->w173);

    chip->w173 = chip->w101 || !chip->dff26.l2;

    chip->w174 = chip->w175 || chip->w176 || chip->w182 || chip->tm_w4;

    chip->w175 = !chip->w267;

    chip->w176 = !chip->w190;

    chip->w177 = chip->w110 && chip->w219;

    chip->w178 = chip->w174 && chip->w79;

    chip->w179 = chip->w22 && chip->w219;

    chip->w180 = chip->w23 && chip->w219;

    chip->w181 = chip->w21 && chip->w219;

    chip->w182 = chip->w188 && chip->dff34.l2;

    SDFF_Update(&chip->dff32, chip->ext_vclk, chip->w38);

    SDFFR2_Update(&chip->dff33, chip->ext_vclk, chip->w283, chip->dff32.l2);

    chip->w183 = !(chip->dff33.o2 || chip->dff23.l2 || chip->w356 || chip->w259);

    chip->w184 = chip->w146 || chip->w152;

    chip->w185 = chip->w86 || chip->w220;

    chip->w186 = chip->tm_w1;

    chip->w187 = chip->w114;

    chip->w188 = chip->w185 && chip->w143;

    chip->w189 = chip->dff32.l2;

    chip->w190 = chip->tm_w1;
    chip->w191 = chip->tm_w1;

    chip->w193 = !(chip->w159 && chip->w251);

    chip->w194 = 0 || chip->w193 || chip->w278 || chip->w281 || chip->w282 || chip->w284 || chip->w345 || chip->w186;

    chip->w195 = !chip->w267;

    chip->w196 = !chip->w198;

    chip->w197 = chip->w206 && chip->tm_w2;

    chip->w198 = !(chip->w197 && chip->w101 && chip->w204);

    chip->w199 = chip->dff30.l2;

    chip->w200 = !(chip->w133 && chip->w249);

    chip->w201 = !chip->w306;

    chip->w202 = chip->w208 || chip->w209;

    chip->w203 = !chip->w211;

    chip->w204 = !(chip->w203 && chip->w69 && chip->w205 && chip->w306);

    chip->w205 = !chip->w228;

    chip->w206 = chip->w201 || chip->w228 || chip->w254;

    chip->w207 = chip->w199; // FIXME: delay?

    chip->w208 = !chip->dff26.l2 ? chip->w248 : chip->w254;

    chip->w209 = !chip->w228;

    chip->w210 = chip->w277 || chip->w280 || chip->w281 || chip->w345;

    chip->w211 = chip->w221 || chip->w267 || chip->w373;

    chip->w212 = chip->w20 && chip->w219;

    chip->w213 = chip->dff35.l2 && chip->w86;

    chip->w214 = chip->w108 && chip->w219;

    chip->w215 = chip->w306 || chip->w82;

    chip->w216 = !chip->w367;

    chip->w217 = chip->dff36.l2 && chip->w86;

    chip->w218 = chip->w80 && chip->w219;

    chip->w219 = !chip->w263;

    chip->w220 = chip->w82 || !chip->dff44.l2;

    chip->w221 = !chip->w367;

    SDFF_Update(&chip->dff34, chip->ext_zclk, chip->tm_w2);

    chip->w222 = !(chip->w200 || chip->w152);

    chip->w223 = chip->w48 || chip->w259 || chip->w216;

    chip->w224 = chip->dff37.l2 && chip->w86;

    SDFFR_Update(&chip->dff43, chip->w150, chip->tm_w1, chip->w189);
    SDFFR_Update(&chip->dff40, chip->w150, chip->dff43.l2, chip->w189);
    SDFFR_Update(&chip->dff39, chip->w150, chip->dff40.l2, chip->w189);
    SDFFR_Update(&chip->dff42, chip->w150, chip->dff39.l2, chip->w189);
    SDFFR_Update(&chip->dff41, chip->w150, chip->dff42.l2, chip->w189);
    SDFFR_Update(&chip->dff36, chip->w150, chip->dff41.l2, chip->w189);
    SDFFR_Update(&chip->dff35, chip->w150, chip->dff36.l2, chip->w189);
    SDFFR_Update(&chip->dff37, chip->w150, chip->dff35.l2, chip->w189);
    SDFFR_Update(&chip->dff38, chip->w150, chip->dff37.l2, chip->w189);

    chip->w226 = chip->w166;

    chip->w227 = !(chip->w324 && chip->w373 && chip->w229 && chip->w195);

    chip->w228 = chip->w324 ^ chip->tm_w2;

    chip->w229 = !chip->w306;

    // ts11
    if (!chip->w142)
    {
        chip->ext_vaddress_out &= ~0x100000;
        if (chip->w236)
            chip->ext_vaddress_out |= 0x100000;
    }

    chip->w230 = !chip->w235;

    SDFF_Update(&chip->dff44, !chip->ext_zclk, chip->w207);

    // ts12
    {
        chip->ext_vaddress_out &= ~0x200000;
        if (chip->w233)
            chip->ext_vaddress_out |= 0x200000;
    }

    chip->w231 = !chip->w367;

    chip->w232 = chip->w228 || chip->w248 || chip->w306;

    chip->w233 = chip->w237 ? chip->w242 : 0;

    chip->w234 = chip->w228 || chip->w306 || chip->w211;

    chip->w235 = !(chip->w234 && chip->w232);

    chip->w236 = chip->w237 ? chip->w240 : 0;

    chip->w237 = chip->w367;

    chip->w238 = chip->w352 || chip->w223;

    chip->w239 = chip->w367 ? chip->w213 : chip->w215;

    chip->w240 = chip->dff39.l2 && chip->w86;

    chip->w241 = chip->w367 ? chip->w213 : chip->w215;

    chip->w242 = chip->w246 || chip->w263;

    chip->w243 = chip->w367 ? chip->w245 : chip->w191;

    chip->w244 = chip->w367 ? chip->w217 : chip->w82;

    chip->w245 = chip->dff41.l2 && chip->w86;

    chip->w246 = chip->dff40.l2 && chip->w86;

    //chip->w247 = chip->tm_w1;

    chip->w248 = chip->w223 || chip->w269;

    chip->w249 = !(chip->w105 && chip->w369);

    chip->w250 = chip->w261 || chip->w275 || chip->w303 || chip->w327;

    chip->w251 = !(chip->w261 || chip->w265 || chip->w275 || chip->w276 || chip->w277 || chip->w303 || chip->w324 || chip->w327);

    chip->w252 = chip->w237 ? chip->w260 : chip->w166;

    chip->w253 = chip->w237 ? chip->w264 : 0;

    chip->w254 = chip->w223 || chip->w373;

    chip->w255 = !(chip->tm_w1 || chip->w79);

    chip->w256 = chip->dff43.l2 && chip->w86;

    chip->w257 = !(chip->w282 && chip->w186);

    chip->w258 = !(chip->w255 || chip->w323 || chip->w182);

    chip->w259 = !chip->w223;

    chip->w260 = chip->dff42.l2 && chip->w86;

    chip->w261 = (chip->ext_vaddress_in & 0x20000) != 0;

    chip->w262 = chip->w219 && chip->w139;

    chip->w263 = !chip->w86;

    chip->w264 = chip->w263 || chip->w256;

    chip->w265 = (chip->ext_vaddress_in & 0x800) != 0;

    chip->w266 = chip->w289 && chip->w356 && chip->w356;

    chip->w267 = chip->tm_w1;

    chip->w268 = !(chip->w152 || chip->w323 || chip->w146);

    chip->w269 = chip->dff45.o2 && chip->w373 && chip->w274;

    SDFFR2_Update(&chip->dff45, chip->w274, chip->w373, !chip->w223);

    chip->w270 = !(chip->w367 && chip->w280);

    SDFFR2_Update(&chip->dff46, chip->w274, chip->dff46.o1, chip->w298);

    chip->w271 = chip->dff46.o2 || chip->tm_w1;

    SDFFR2_Update(&chip->dff47, !chip->ext_vclk, chip->w273, chip->w164);

    chip->w272 = !(chip->dff47.o2 || chip->w267);

    // ts13
    if (!chip->w142)
    {
        chip->ext_vaddress_out &= ~0x400000;
        if (chip->w253)
            chip->ext_vaddress_out |= 0x400000;
    }

    chip->w273 = !(chip->w272 || chip->w307);

    chip->w274 = !chip->w352;

    chip->w275 = (chip->ext_vaddress_in & 0x10000) != 0;

    chip->w276 = (chip->ext_vaddress_in & 0x1000) != 0;

    chip->w277 = (chip->ext_vaddress_in & 0x4000) != 0;

    chip->w278 = (chip->ext_vaddress_in & 0x100) != 0;

    chip->w279 = !chip->w190;

    // ts14
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x400;
        if (chip->w212)
            chip->ext_vaddress_out |= 0x400;
    }

    // ts15
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x800;
        if (chip->w218)
            chip->ext_vaddress_out |= 0x800;
    }

    chip->w280 = (chip->ext_vaddress_in & 0x8000) != 0;

    chip->w281 = (chip->ext_vaddress_in & 0x400) != 0;

    chip->w282 = chip->tm_w1;

    chip->w283 = (chip->w183 || chip->w287 || chip->w343);

    chip->w284 = (chip->ext_vaddress_in & 0x80) != 0;

    chip->w285 = !chip->w222;

    chip->w286 = !(chip->w287 || !chip->dff32.l2);

    chip->w287 = chip->w309 && chip->w356;

    chip->w288 = chip->dff32.l2;

    chip->w289 = chip->w286;

    SCNT_Update(&chip->dff48, chip->ext_vclk, chip->w289, 0, chip->w266, 1);

    chip->w290 = !chip->w52;

    chip->w291 = !chip->w268;

    chip->w292 = !chip->w331;

    chip->w293 = chip->w295;

    chip->w294 = !chip->w318;

    chip->w295 = !(chip->w312 && chip->w367);

    chip->w296 = chip->w270;
    chip->w297 = chip->w249;

    chip->w298 = chip->w301 && chip->w373;

    SDFFR_Update(&chip->dff49, chip->ext_vclk, chip->w279, chip->dff51.l2);
    SDFFR_Update(&chip->dff50, chip->w340, chip->w322, chip->w9);
    SDFFR_Update(&chip->dff51, chip->w279, chip->w336, chip->w299);

    chip->w299 = !chip->w302;

    // ts16
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x8000;
        if (chip->w241)
            chip->ext_vaddress_out |= 0x8000;
    }

    chip->w300 = !(chip->w326 && (!chip->dff49.l2 || chip->dff50.l2));

    chip->w301 = !(chip->w223 && chip->tm_w2);

    chip->w302 = !(chip->w9 && (!chip->dff50.l2 || chip->dff62.l2));

    chip->w303 = (chip->ext_vaddress_in & 0x40000) != 0;
    
    chip->w304 = !chip->dff63.l2;

    SDFFR_Update(&chip->dff52, chip->w304, !chip->dff52.l2, chip->w305);

    chip->w305 = !!chip->dff32.l2;

    chip->w306 = (chip->ext_vaddress_in & 0x100000) != 0;

    // ts17
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x1000;
        if (chip->w177)
            chip->ext_vaddress_out |= 0x1000;
    }

    chip->w307 = !(chip->w308 || !chip->dff32.l2);
    chip->w308 = !(chip->w287 || chip->w343);

    // ts18
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x100;
        if (chip->w179)
            chip->ext_vaddress_out |= 0x100;
    }

    // ts19
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x80;
        if (chip->w181)
            chip->ext_vaddress_out |= 0x80;
    }

    SCNT_Update(&chip->dff53, chip->ext_vclk, chip->w289, 0, chip->dff54.cout, 1); // FIXME: check reset
    SCNT_Update(&chip->dff54, chip->ext_vclk, chip->w289, 0, chip->dff48.cout, 1); // FIXME: check reset
    SCNT_Update(&chip->dff55, chip->ext_vclk, chip->w289, chip->w367, chip->dff53.cout, 1); // FIXME: check reset

    chip->w309 = !(!chip->dff48.l2 || !chip->dff53.l2 || !chip->dff54.l2 || !chip->dff55.l2);

    chip->w310 = chip->w227;
    chip->w311 = !(chip->w367 && chip->w328);

    chip->w312 = !chip->w314;

    chip->w313 = chip->w314;

    chip->w314 = !chip->w300;

    chip->w315 = chip->dff56.o2;

    chip->w316 = !(chip->w319 || chip->dff70.l2);

    chip->w317 = chip->w267 || chip->w249;

    chip->w318 = chip->w316 || chip->w320;

    chip->w319 = !chip->w367;

    chip->w320 = !(chip->w319 || chip->dff44.l2 || chip->w82); // FIXME

    chip->w321 = !chip->dff61.l2 && chip->tm_w2;

    // ts20
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x10000;
        if (chip->w239)
            chip->ext_vaddress_out |= 0x10000;
    }

    chip->w322 = !!!!chip->dff62.l2; // FIXME

    chip->w323 = !1;

    chip->w324 = (chip->ext_vaddress_in & 0x200000) != 0;

    chip->w325 = chip->w352 && chip->dff62.l2;

    chip->w326 = chip->w321 || chip->w325;

    chip->w327 = (chip->ext_vaddress_in & 0x80000) != 0;

    SDFFR2_Update(&chip->dff56, chip->dff74.l2, chip->w373, chip->w332);

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

    // ts21
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x20000;
        if (chip->w177)
            chip->ext_vaddress_out |= 0x20000;
    }

    SDFFR_Update(&chip->dff63, chip->w371, !chip->dff63.l2, chip->w305);

    SDFF_Update(&chip->dff64, chip->ext_vclk, chip->w344);

    chip->w344 = chip->dff66.l2 || chip->w267 || chip->dff73.l2;

    SDFFR_Update(&chip->dff65, chip->w329, !chip->dff65.l2, chip->w305);

    SDFF_Update(&chip->dff66, !chip->ext_vclk, chip->w348);

    SDFFR_Update(&chip->dff67, chip->w330, !chip->dff67.l2, chip->w305);

    SDFFR_Update(&chip->dff68, !chip->w16, !chip->dff68.l2, chip->w350);

    SDFFR_Update(&chip->dff69, chip->dff74.l2, chip->w337, chip->w288);

    chip->w345 = (chip->ext_vaddress_in & 0x200) != 0;

    chip->w346 = !(chip->w355 || chip->tm_w2);

    chip->w347 = !chip->dff68.l2;

    chip->w348 = !(chip->w339 && chip->dff70.l2 && !chip->dff75.l2);

    SDFF_Update(&chip->dff70, !chip->ext_vclk, chip->w339);

    SDFFR_Update(&chip->dff71, chip->w347, !chip->dff71.l2, chip->w350);

    chip->w349 = !chip->dff71.l2;

    SDFFR_Update(&chip->dff72, chip->w349, !chip->dff72.l2, chip->w350);

    // ts22
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x80000;
        if (chip->w252)
            chip->ext_vaddress_out |= 0x80000;
    }

    // ts23
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x40000;
        if (chip->w243)
            chip->ext_vaddress_out |= 0x40000;
    }

    // ts24
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x4000;
        if (chip->w262)
            chip->ext_vaddress_out |= 0x4000;
    }

    // ts25
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x2000;
        if (chip->w214)
            chip->ext_vaddress_out |= 0x2000;
    }

    // ts26
    if (!chip->w131)
    {
        chip->ext_vaddress_out &= ~0x200;
        if (chip->w180)
            chip->ext_vaddress_out |= 0x200;
    }

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

    chip->w373 = (chip->ext_vaddress_in & 0x400000) != 0;

    chip->w374 = !(!chip->dff77.l2 || !chip->dff78.l2 || !chip->dff79.l2 || !chip->dff80.l2);

    SCNT_Update(&chip->dff79, chip->ext_vclk, chip->w289, 0, chip->dff80.cout, 1);

    SCNT_Update(&chip->dff80, chip->ext_vclk, chip->w289, 0, chip->dff78.cout, 1);
}

int main()
{
    return 0;
}
