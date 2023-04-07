// FC1004 bus arbiter
#include <stdio.h>
#include "arbiter.h"

void ARB_Clock(arbiter_t *chip, int cycles)
{
    SCNT_Update(&chip->dff1, chip->ext_w1, chip->w1, 1, chip->w3, chip->tm_w3);
    SCNT_Update(&chip->dff2, chip->ext_w1, chip->w1, chip->dff9.l2, 1, chip->tm_w3);
    SCNT_Update(&chip->dff3, chip->ext_w1, chip->w1, chip->dff2.l2, chip->tm_w2, chip->tm_w3);
    chip->w1 = !(!chip->dff1.l2 && !chip->dff2.l2 && !chip->dff3.l2);
    chip->w2 = chip->dff3.l2;
    chip->w3 = chip->dff2.l2 && chip->dff3.l2;
    chip->w4 = chip->w2;
    chip->w5 = !(!chip->dff4.l2 || !chip->dff5.l2 || !chip->dff6.l2 || !chip->dff7.l2);
    SCNT_Update(&chip->dff4, chip->w4, chip->tm_w1, 1, chip->tm_w1, chip->w8);
    SCNT_Update(&chip->dff5, chip->w4, chip->tm_w1, 0, chip->dff4.cout, chip->w8);
    SCNT_Update(&chip->dff6, chip->w4, chip->tm_w1, 0, chip->dff5.cout, chip->w8);
    SCNT_Update(&chip->dff7, chip->w4, chip->tm_w1, 0, chip->dff6.cout, chip->w8);

    chip->w6 = !!!!chip->w2; // FIXME
    chip->w7 = !!!!chip->dff8.o1; // FIXME
    chip->w8 = chip->tm_w1;
    chip->w9 = chip->tm_w1;

    SDFFR2_Update(&chip->dff8, chip->w2, chip->w5, chip->w8);

    chip->w10 = !(chip->w11 || (0 && chip->tm_w3));
    chip->w11 = !(!chip->w27 || chip->dff9.l2);

    SDFFR_Update(&chip->dff9, chip->w2, chip->w10, chip->w7);

    chip->w12 = chip->w152 || chip->tm_w2 || chip->tm_w3;

    chip->w14 = DELAY_Update(&chip->d1, cycles, chip->w85);

    chip->w15 = chip->tm_w1 || chip->tm_w2;

    // ts1
    if (!chip->w12)
        chip->tm_w1 = chip->w33;

    SDFF_Update(&chip->dff10, chip->ext_w3, chip->w78);

    chip->w16 = !(chip->tm_w1 || chip->tm_w2);
    chip->w17 = chip->dff10.l2;

    chip->w18 = !(1 && !chip->w30 && !chip->w28
        && !chip->w29 && !chip->w37 && !chip->w39);

    chip->w19 = !(1 && chip->w30 && chip->w28
        && chip->w29 && chip->w37 && chip->w39);

    chip->w20 = chip->tm_w1 ? chip->w39 : chip->w28;
    chip->w21 = chip->tm_w1 ? chip->w30 : chip->tm_w3;
    chip->w22 = chip->tm_w1 ? chip->w29 : chip->w30;
    chip->w23 = chip->tm_w1 ? chip->w29 : chip->w28;

    chip->w24 = chip->w105;
    chip->w25 = chip->w38;

    SDFF_Update(&chip->dff11, chip->ext_w2, chip->tm_w2);
    SDFF_Update(&chip->dff12, chip->ext_w2, chip->w41);

    chip->w26 = !(chip->tm_w1 && chip->dff12.l2);
    chip->w27 = chip->dff11.l2 || chip->w44;

    chip->w28 = chip->tm_w1;
    chip->w29 = chip->tm_w2;
    chip->w30 = chip->tm_w1;

    chip->w31 = !chip->w65;
    chip->w32 = !chip->w68;

    chip->w33 = chip->tm_w1;
    chip->w34 = chip->w33 || !chip->dff14.l2;
    chip->w35 = !chip->dff14.l2;

    SDFF_Update(&chip->dff13, chip->ext_w2, chip->tm_w1);

    chip->w36 = chip->w63 || chip->tm_w2;

    SDFFR_Update(&chip->dff14, chip->w36, chip->w56, chip->dff32.l2);

    chip->w37 = chip->tm_w1;
    chip->w38 = chip->tm_w1;
    chip->w39 = chip->tm_w1;

    SDFFR2_Update(&chip->dff15, chip->ext_w3, chip->w40, chip->w73);

    chip->w40 = chip->w26 && chip->w83;

    chip->w41 = chip->w27 || chip->dff15.o2;
    chip->w42 = !(chip->dff19.o2 && chip->w71);
    chip->w43 = chip->w44 || chip->dff16.l2;

    SDFF_Update(&chip->dff16, chip->ext_w3, chip->w44);

    chip->w44 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3;

    // ???
    chip->w45 = chip->w46 && chip->w105;
    chip->w46 = chip->w45 || chip->tm_w2;

    chip->w47 = !chip->w75;

    chip->w48 = !chip->w45;

    chip->w49 = chip->dff17.o2;

    SDFFR2_Update(&chip->dff17, chip->ext_w3, chip->w58, chip->w73);

    chip->w50 = chip->w77 || chip->tm_w2;

    SDFF_Update(&chip->dff18, chip->ext_w3, chip->w77);

    chip->w51 = chip->dff18.l2 || chip->w114;

    chip->w52 = !(chip->w53 || chip->tm_w2);

    chip->w53 = chip->w50 && chip->w51;

    chip->w54 = !(chip->dff23.l2 && chip->tm_w2);

    chip->w55 = chip->w87 || chip->tm_w2;

    chip->w56 = chip->tm_w1;

    chip->w57 = chip->w53 || chip->tm_w2;

    chip->w58 = chip->w54 && chip->w84;

    chip->w59 = chip->tm_w1 || chip->tm_w2;

    chip->w60 = chip->w119 || chip->w152 || chip->tm_w3;

    // ts2
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;
    // ts3
    if (!chip->tm_w1)
        chip->tm_w1 = 0;

    chip->w61 = chip->tm_w1;
    chip->w62 = chip->tm_w1;

    chip->w63 = !(chip->w99 && chip->w117 && chip->tm_w3);

    chip->w64 = !(chip->w43 && chip->tm_w2);

    chip->w65 = !(chip->dff13.l2 && chip->tm_w2);

    chip->w66 = chip->w119 || chip->tm_w2;

    chip->w67 = chip->tm_w1;

    chip->w68 = !(chip->w56 || chip->w163);

    SDFFR2_Update(&chip->dff19, chip->ext_w4, chip->w71, chip->w73);

    chip->w69 = !(chip->w44 || chip->dff12.l1);

    chip->w70 = chip->w27 && chip->w71;

    chip->w71 = chip->dff20.o2 && chip->w74;

    chip->w72 = chip->dff15.o1 || chip->w43;

    SDFFR2_Update(&chip->dff20, chip->ext_w4, chip->w74, chip->w73);

    chip->w73 = chip->dff32.l2 && chip->tm_w2;

    chip->w74 = chip->w49; // FIXME: delay??

    chip->w75 = !(chip->w112 && chip->tm_w2);

    chip->w76 = !chip->w38 || chip->tm_w2;
    chip->w77 = chip->dff22.l2 || chip->w182;

    chip->w78 = !chip->w79 || chip->w182 || !chip->w38;

    chip->w79 = chip->dff21.l2 || chip->w182 || !chip->w38;

    SDFF_Update(&chip->dff21, chip->ext_w4, chip->w178);

    SDFF_Update(&chip->dff22, chip->ext_w3, chip->w111);

    chip->w80 = chip->tm_w1 ? chip->w37 : chip->w39;

    chip->w81 = chip->w77;

    chip->w82 = chip->tm_w1;

    chip->w83 = !chip->dff23.l2 || chip->tm_w2;

    chip->w84 = !(!chip->dff23.l2 && chip->dff33.o1 && chip->tm_w3);

    chip->w85 = chip->tm_w1;

    chip->w86 = chip->w19 || chip->w109;

    chip->w87 = chip->tm_w1;

    SDFFR_Update(&chip->dff23, !chip->w59, chip->dff33.o1, chip->dff33.o1);

    // ts4
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;
    // ts5
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;
    // ts6
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;
    // ts7
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;
    chip->w88 = chip->tm_w1;
    chip->w89 = chip->tm_w1;
    chip->w93 = !chip->tm_w1;

    chip->w90 = chip->w93 && chip->w88;
    chip->w91 = chip->w89 && chip->w93;
    chip->w92 = chip->w89 && chip->w88;

    chip->w94 = chip->w128 || chip->tm_w2;
    chip->w95 = !(chip->tm_w1 || chip->tm_w2);

    chip->w96 = !(chip->w95 && chip->w90 && chip->w117);

    chip->w97 = !(chip->w95 && chip->w91 && chip->w117);

    chip->w98 = !chip->tm_w1;

    chip->w99 = chip->w98 && chip->w89;

    chip->w100 = !chip->tm_w1;

    chip->w101 = !(chip->dff20.o1 || chip->dff25.l2);

    chip->w102 = !(chip->w70 && chip->w107 && chip->w238);
    chip->w103 = !(chip->dff24.l2 || chip->tm_w2 || chip->tm_w3);
    SDFF_Update(&chip->dff24, chip->ext_w3, chip->w103);

    SDFFR_Update(&chip->dff25, chip->ext_w4, chip->dff12.l1, chip->tm_w1); // FIXME: check reset wire

    chip->w104 = !chip->w61;

    chip->w105 = chip->w76 && chip->tm_w2;

    chip->w106 = chip->w76;

    chip->w107 = chip->w61 || chip->w220 || chip->tm_w3 || chip->tm_w4;

    chip->w108 = chip->tm_w1 ? chip->w61 : chip->w67;

    chip->w109 = !(chip->w61 && chip->w67 && chip->tm_w3 && chip->tm_w4);

    chip->w110 = chip->tm_w1 ? chip->w67 : chip->w37;

    chip->w111 = chip->dff28.l2 || chip->w182;

    chip->w112 = chip->w113 && chip->dff29.l2;

    chip->w113 = chip->w191 || chip->tm_w2 || chip->tm_w3;

#if 0
    // ts8
    if (!chip->w147)
        chip->tm_w1 = 0;
#endif

    chip->w114 = chip->tm_w1;

    chip->w115 = !chip->w64;

    // ts9
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;

    chip->w116 = chip->w126;

    chip->w117 = !chip->tm_w1;

    chip->w118 = chip->w122 || chip->tm_w2;

    chip->w119 = chip->w121 || chip->w145 || chip->tm_w3;

    chip->w120 = !chip->dff24.l2;

    chip->w121 = !(chip->w127 && chip->tm_w2 && chip->tm_w3 && chip->tm_w4);
    chip->w122 = !(chip->w125 && chip->w145 && chip->tm_w3);

    chip->w123 = chip->w140;

    chip->w124 = !(chip->w125 && chip->w91 && chip->w145 && chip->tm_w4);
    chip->w125 = !(chip->w121 || chip->w210 || chip->tm_w3);

    chip->w126 = chip->w124 || chip->tm_w2;

    chip->w127 = !chip->tm_w1;

    chip->w128 = !(chip->w91 && chip->w125 && chip->w145 && chip->w154);

    chip->w129 = !(chip->w91 && chip->w125 && chip->w145 && chip->w153);

    chip->w130 = chip->tm_w1 || chip->w129;

    SDFFR_Update(&chip->dff26, chip->w97, chip->w56, chip->dff32.l2);

    SDFF_Update(&chip->dff27, chip->ext_w5, chip->w14);

    chip->w131 = chip->w105 || chip->w152 || chip->tm_w3;

    chip->w132 = chip->w72 || chip->w211;

    chip->w133 = !(chip->w132 && chip->w118 && chip->w130 && chip->w126 && chip->w94 && chip->w134);

    chip->w134 = chip->w66 || chip->tm_w2;

    chip->w135 = !chip->w62;

    SDFF_Update(&chip->dff28, chip->ext_w3, chip->w79);

    chip->w136 = !(chip->w104 && chip->w135 && chip->w141 && chip->tm_w4);

    chip->w137 = !(chip->w106 || chip->w152 || chip->tm_w3);

    chip->w138 = !chip->w67;

    chip->w139 = chip->tm_w1 ? chip->w148 : chip->w61;

    chip->w140 = !(chip->w61 && 1 && chip->w135 && chip->w138 && chip->w141 && chip->tm_w6);

    chip->w141 = !chip->w220;

    chip->w142 = !chip->w137;

    chip->w143 = chip->w144 || chip->w220 || chip->tm_w3;

    chip->w144 = !chip->tm_w1;

    chip->w145 = chip->tm_w1;

    SDFF_Update(&chip->dff29, chip->ext_w5, chip->tm_w1);

    chip->w146 = chip->w76;

    chip->w147 = !chip->w149;

    chip->w148 = chip->w86 && chip->dff38.l2;

    chip->w149 = !(chip->w152 || chip->tm_w2 || chip->tm_w3);

    chip->w150 = chip->w18 || chip->w109 || chip->w114 || chip->w220;

    // ts10
    if (!chip->w60)
        chip->tm_w1 = chip->tm_w2;

    chip->w151 = chip->tm_w1;
    chip->w152 = chip->tm_w2;

    chip->w153 = chip->w155 && chip->w161;
    chip->w154 = chip->w165 && chip->w161;

    chip->w155 = chip->tm_w1;

    chip->w156 = chip->w158 && chip->w155;

    chip->w157 = chip->w158 && chip->w165;

    chip->w158 = chip->tm_w1;

    chip->w159 = 1 && chip->w145 && chip->w195 && chip->tm_w4 && chip->tm_w5 && chip->tm_w6;

    chip->w160 = !chip->w102;

    chip->w161 = !chip->tm_w1;

    chip->w162 = !chip->w172;

    chip->w163 = chip->w56 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4;

    chip->w164 = !(chip->w34 && chip->w166);

    chip->w165 = !chip->tm_w1;

    chip->w166 = (chip->w100 && chip->tm_w2) || (chip->dff31.l2 && chip->tm_w4);

    chip->w167 = chip->w170 && chip->w202;

    SDFF_Update(&chip->dff30, chip->ext_w5, chip->dff27.l2);

    chip->w168 = !(chip->w69 || !chip->dff26.l2);

    chip->w169 = chip->w168 || chip->w211 || chip->tm_w3;

    chip->w170 = !chip->dff26.l2 || chip->tm_w2;

    SDFFR_Update(&chip->dff31, chip->w96, chip->w56, chip->tm_w1);

    chip->w171 = chip->w62 || chip->w220 || chip->tm_w3;

    chip->w172 = !(chip->w169 && chip->w167 && chip->w171 && chip->w173);

    chip->w173 = chip->w101 || !chip->dff26.l2;

    chip->w174 = chip->w175 || chip->w176 || chip->w182 || chip->tm_w4;

    chip->w175 = !chip->tm_w1;

    chip->w176 = !chip->tm_w1;

    chip->w177 = chip->w110 && chip->w219;

    chip->w178 = chip->w174 && chip->w79;

    chip->w179 = chip->w22 && chip->w219;

    chip->w180 = chip->w23 && chip->w219;

    chip->w181 = chip->w21 && chip->tm_w2;

    chip->w182 = chip->w188 && chip->dff34.l2;

    SDFF_Update(&chip->dff32, chip->ext_w3, chip->w38);

    SDFFR2_Update(&chip->dff33, chip->ext_w3, chip->tm_w1, chip->dff32.l2);

    chip->w183 = !(chip->dff33.o2 || chip->dff23.l2 || chip->tm_w3 || chip->tm_w4);

    chip->w184 = chip->w146 || chip->w152;

    chip->w185 = chip->w86 || chip->w220;

    chip->w186 = chip->tm_w1;

    chip->w187 = chip->w114;

    chip->w188 = chip->w185 && chip->w143;

    chip->w189 = chip->dff32.l2;

    chip->w190 = chip->tm_w1;
    chip->w191 = chip->tm_w1;

    chip->w192 = chip->tm_w1;

    chip->w193 = !(chip->w159 && chip->tm_w2);

    chip->w194 = 0 || chip->w193 || chip->tm_w3 || chip->tm_w4 || chip->tm_w5 || chip->tm_w6 || chip->tm_w1 || chip->tm_w1;

    chip->w195 = !chip->tm_w1;

    chip->w196 = !chip->w198;

    chip->w197 = chip->w206 && chip->tm_w2;

    chip->w198 = !(chip->w197 && chip->w101 && chip->w204);

    chip->w199 = chip->tm_w1;

    chip->w200 = !(chip->w133 && chip->tm_w2);

    chip->w201 = !chip->tm_w1;

    chip->w202 = chip->w208 || chip->w209;

    chip->w203 = !chip->w211;

    chip->w204 = !(chip->w203 && chip->w69 && chip->w205 && chip->tm_w4);

    chip->w205 = !chip->w228;

    chip->w206 = chip->w201 || chip->w228 || chip->tm_w3;

    chip->w207 = chip->w199; // FIXME: delay?

    chip->w208 = chip->tm_w1 ? chip->tm_w2 : chip->tm_w3;

    chip->w209 = !chip->w228;

    chip->w210 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4;

    chip->w211 = chip->w221 || chip->tm_w2 || chip->tm_w3;

    chip->w212 = chip->w20 && chip->w219;

    chip->w213 = chip->dff35.l2 && chip->w86;

    chip->w214 = chip->w108 && chip->w219;

    chip->w215 = chip->tm_w1 || chip->tm_w2;

    chip->w216 = !chip->tm_w1;

    chip->w217 = chip->dff36.l2 && chip->w86;

    chip->w218 = chip->w80 && chip->w219;

    chip->w219 = !chip->tm_w1;

    chip->w220 = chip->w82 || chip->tm_w3;

    chip->w221 = !chip->tm_w1;

    SDFF_Update(&chip->dff34, chip->ext_w5, chip->tm_w2);

    chip->w222 = !(chip->w200 || chip->tm_w2);

    chip->w223 = chip->w48 || chip->tm_w2 || chip->tm_w3;

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

    chip->w225 = !chip->w192;

    chip->w226 = chip->tm_w1;

    chip->w227 = !(chip->tm_w1 && chip->tm_w2 && chip->tm_w3 && chip->tm_w4);

    chip->w228 = chip->tm_w1 ^ chip->tm_w2;

    chip->w229 = !chip->tm_w1;

    // ts11
    if (!chip->w142)
        chip->tm_w1 = chip->tm_w2;

    chip->w230 = !chip->w235;

    SDFF_Update(&chip->dff44, !chip->ext_w5, chip->w207);

    // ts12
    if (!chip->w142)
        chip->tm_w1 = chip->w233;

    chip->w231 = !chip->tm_w1;

    chip->w232 = chip->w228 || chip->tm_w2 || chip->tm_w3;

    chip->w233 = chip->w237 ? chip->tm_w2 : 0;

    chip->w234 = chip->w228 || chip->tm_w2 || chip->tm_w3;

    chip->w235 = !(chip->w234 && chip->w232);

    chip->w236 = chip->w237 ? chip->tm_w2 : 0;

    chip->w237 = chip->tm_w1;

    chip->w238 = chip->tm_w1 || chip->tm_w2;

    chip->w239 = chip->tm_w1 ? chip->w213 : chip->w215;

    chip->w240 = chip->dff39.l2 && chip->w86;

    chip->w241 = chip->tm_w1 ? chip->w213 : chip->w215;
}

int main()
{
    return 0;
}
