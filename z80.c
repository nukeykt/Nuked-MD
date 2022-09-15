#include <stdint.h>
#include "z80.h"


void Z80_SetData(z80_t *chip, int data)
{
    chip->ext_data_i = data & 255;
}

int Z80_GetData(z80_t *chip)
{
    return chip->ext_data_o;
}

void Z80_Clock(z80_t *chip, int clk)
{
    if (clk && chip->w3 && chip->w41)
        chip->w1 = 1;
    if (chip->tm_w4 || (clk && (chip->tm_w5 || chip->tm_w6)))
        chip->w1 = 0;

    if (clk && chip->tm_w1 && chip->w41)
        chip->w2 = 0;
    if (clk)
        chip->l1 = chip->w69;
    if (!clk && chip->l1)
        chip->w2 = 0;
    if (clk && chip->w15)
        chip->w2 = 1;
    chip->w3 = !(chip->tm_w5 || chip->tm_w4);

    if (!clk)
        chip->w4 = chip->i_int;
    else
        chip->w5 = chip->w4;

    if (clk)
        chip->l2 = chip->w17;

    if (!chip->i_nmi)
        chip->w7 = 1;
    if (!chip->l2)
        chip->w7 = 0;

    if (chip->i_nmi)
        chip->w6 = chip->w7;

    if (!clk)
        chip->w8 = chip->w6;
    else
        chip->w9 = chip->w8;

    if (clk)
        chip->l3 = !chip->w72;
    chip->w12 = !(chip->w5 || (chip->w9 && chip->l3));
    chip->w11 = !(chip->w12 || chip->w9 || !chip->pla[3]);
    chip->w10 = !(chip->w12 || chip->w9 || chip->w11);
    chip->w13 = !((chip->w16 && !chip->w10) || chip->w18 || chip->w19 || chip->halt);
    chip->w14 = !(chip->w13 || (chip->w16 && chip->w10));
    chip->w15 = !(chip->tm_w1 || chip->tm_w2 || chip->tm_w3);
    if (clk)
        chip->l4 = chip->w20;
    chip->w16 = chip->l4 && !clk;
    chip->w17 = !(chip->tm_w1 || chip->tm_w2);
    if (chip->w16)
        chip->w18 = chip->w12;
    if (chip->w55)
        chip->w18 = 0;
    if (chip->w16)
        chip->w19 = chip->w9;
    if (chip->tm_w1)
        chip->w19 = 0;
    if (chip->w13 && chip->w16)
        chip->halt = 1;
    if (chip->tm_w1 || chip->w18 || chip->tm_w3 || chip->tm_w4)
        chip->halt = 0;
    chip->o_halt = chip->halt;
    chip->w20 = !(chip->tm_w1 || chip->tm_w2 || !chip->tm_w3 || chip->tm_w4);
    if (chip->w32 || chip->w26)
        chip->w21 = 0;
    if (chip->w23)
        chip->w21 = 1;
    chip->o_mreq = state_z;
    if (!chip->tm_w4 && !chip->w21)
        chip->o_mreq = state_0;
    if (chip->w21)
        chip->o_mreq = state_1;
    if (chip->w26 || chip->w32)
        chip->w22 = 0;
    if (chip->w23 || (chip->tm_w5 && clk))
        chip->w22 = 1;
    chip->o_iorq = state_z;
    if (!chip->tm_w1 && !chip->w22)
        chip->o_iorq = state_0;
    if (chip->w22)
        chip->o_iorq = state_1;
    if (clk)
        chip->l5 = chip->w35;
    chip->w23 = !clk && !chip->l5;
    if (clk)
        chip->l6 = chip->w27;
    chip->w24 = !clk && !chip->tm_w1 && !chip->l6;

    chip->w25 = !(chip->w24 || chip->w23 || (chip->w36 && clk));
    chip->w26 = chip->tm_w1 && chip->w41 && clk;
    chip->w27 = !((chip->tm_w1 && chip->tm_w5) || (chip->tm_w4 && (chip->w41 || (chip->tm_w1 && chip->tm_w2))));

    if (clk)
        chip->l7 = chip->tm_w5;
    chip->w28 = !(chip->halt || (chip->w18 && chip->tm_w2) || chip->tm_w3 || chip->tm_w4 || !(chip->w18 || chip->l7));

    if (chip->tm_w2)
        chip->w29 = chip->w28;
    if (clk)
        chip->w29 = !chip->w30;
    if (chip->tm_w1)
        chip->w29 = 0;
    chip->w30 = !chip->w29;

    if (clk)
        chip->l8 = chip->w101;

    if (!chip->w25 && chip->l8)
        chip->w31 = 1;
    if (chip->w26 || chip->w32)
        chip->w31 = 0;
    chip->o_rd = state_z;
    if (!chip->tm_w4 && !chip->w31)
        chip->o_rd = state_0;
    if (chip->w31)
        chip->o_rd = state_1;

    if (clk)
        chip->l9 = chip->w94;
    chip->w32 = !clk && chip->l9;

    if (clk)
        chip->l10 = !chip->w41 && !chip->tm_w2;
    if (!clk && !chip->l10)
        chip->w33 = 0;
    if (clk)
        chip->l11 = !(chip->tm_w3 && chip->tm_w4);
    if (!chip->l11)
        chip->w33 = 1;
    if (clk && chip->tm_w5 && chip->tm_w3 && chip->tm_w4)
        chip->w33 = 1;

    chip->o_wr = state_z;
    if (!chip->w33 && !chip->tm_w6)
        chip->o_wr = state_0;
    if (chip->w33)
        chip->o_wr = state_1;

    if (clk)
        chip->l12 = !chip->w41 && !(!chip->tm_w1 && chip->w34);
    else
        chip->w34 = !(chip->l12 && chip->tm_w3);

    chip->w35 = !(!chip->w37 && chip->tm_w2 && chip->tm_w3);
    chip->w36 = chip->tm_w1 && chip->tm_w2;
    if (!clk)
        chip->w37 = chip->tm_w1;

    if (clk)
        chip->w38 = !(((chip->tm_w1 && chip->tm_w2) || chip->tm_w3) && (!chip->w37 || chip->tm_w4));

    if (clk)
        chip->w39 = chip->w38 && !chip->i_wait;
    else
        chip->w40 = !chip->w39;
    if (chip->tm_w1)
        chip->w40 = 0;

    chip->w41 = !chip->w40 && !chip->w34;

    if (clk)
        chip->l13 = chip->tm_w1 && chip->tm_w2;
    chip->w43 = !(!chip->pla[35] && chip->l13);
    chip->w42 = !clk && !chip->w43;

    if (chip->w45)
        chip->w44 = 0;
    if (clk)
        chip->l14 = chip->tm_w2;
    if (chip->l14 || (clk && chip->tm_w3))
        chip->w44 = 1;

    if (clk)
        chip->l15 = !(chip->tm_w1 && chip->tm_w2);
    chip->w45 = !clk && !chip->l15;

    chip->w46 = !(chip->tm_w1 || (chip->tm_w2 && chip->tm_w3) || (chip->tm_w2 && chip->tm_w4));
    chip->w192 = (chip->tm_w1 && chip->tm_w2) || (chip->w41 && chip->w3 && chip->w46);
    if (clk)
        chip->l16 = !(chip->tm_w1 && chip->tm_w2 && chip->w41);
    chip->w47 = !clk && !chip->l16;
    if (clk)
    {
        chip->l17 = !(chip->tm_w1 && chip->tm_w2);
        chip->l18 = !(chip->w41 || chip->tm_w3);
    }
    else
    {
        if (!chip->l17)
            chip->w48 = 1;
        if (!chip->l18)
            chip->w48 = 0;
    }
    chip->w49 = !(chip->w48 || chip->w47);
    if (!clk)
        chip->w50 = chip->i_reset;
    else
        chip->w51 = chip->w50;
    if (clk)
        chip->l19 = !(chip->tm_w1 && chip->tm_w2);
    chip->w52 = !clk && chip->l19;
    if (clk)
        chip->l20 = !(chip->tm_w1 && chip->tm_w2);
    chip->w53 = !clk && !chip->l20 && !chip->tm_w3;
    if (chip->w52)
        chip->w54 = !chip->w51;
    chip->w55 = !chip->w54;
    if (chip->w53 && chip->tm_w1 && !chip->w51)
        chip->w56 = 1;
    if (chip->w53 && chip->w51)
        chip->w56 = 0;
    if (chip->w55)
        chip->w56 = 1;
    chip->w57 = chip->w56 || chip->tm_w1;

    if (!clk)
        chip->w58 = chip->i_busrq;
    else
        chip->w59 = chip->w58;

    if (clk)
        chip->l21 = chip->w68;
    chip->w60 = chip->l21 && chip->tm_w2;
    if (!clk)
        chip->w61 = chip->w60;

    if (clk)
        chip->l22 = chip->w67;
    chip->w62 = chip->l22 || chip->w67;

    if (clk)
        chip->l23 = chip->tm_w1;
    else
        chip->w63 = chip->l23;

    if (clk)
        chip->l24 = !chip->w63 && !chip->tm_w1;
    chip->w64 = !chip->l24;
    chip->w65 = !(chip->w64 || clk || !chip->w59);
    chip->w67 = !clk && !chip->w59;
    if (chip->w63 || chip->w67)
        chip->w66 = 0;
    if (chip->w65)
        chip->w66 = 1;
    chip->o_busak = !chip->w65 && chip->w66 && !chip->w67;

    if (clk)
        chip->l25 = chip->tm_w1;
    else
        chip->w68 = chip->l25 && chip->tm_w2;

    chip->w69 = !(chip->w55 || (chip->w41 && chip->tm_w1));
    chip->w70 = !(chip->tm_w1 && chip->pla[1] && chip->tm_w3);
    if (clk)
        chip->l26 = chip->w70;
    chip->w71 = !clk && !chip->l26;
    chip->w72 = !(!chip->w73 || chip->pla[1]);

    if (chip->tm_w1 || chip->w18 || chip->tm_w5)
        chip->w73 = 0;
    else if (!clk)
    {
        if (chip->w71)
            chip->w73 = chip->tm_w2;
        if (chip->w75)
            chip->w73 = chip->w74;
    }
    if (chip->w18 || chip->tm_w4)
        chip->w74 = 0;
    else if (!clk)
    {
        if (chip->w71)
            chip->w74 = chip->tm_w1;
    }
    if (clk)
        chip->l27 = chip->tm_w2;
    chip->w75 = !clk && !chip->l27 && !chip->tm_w1;

    chip->w76 = !(chip->pla[52] && chip->tm_w2 && chip->tm_w3);
    chip->w77 = chip->tm_w1 && chip->tm_w2;

    if (chip->w55)
        chip->w78 = 1;
    else if (!clk)
    {
        if (chip->w79)
            chip->w78 = !chip->tm_w1;
    }
    if (clk)
        chip->l28 = !(chip->pla[2] && chip->tm_w2 && chip->tm_w3);
    chip->w79 = !clk && !chip->l28;
    if (chip->w55)
        chip->w80 = 0;
    else if (!clk)
    {
        if (chip->w79)
            chip->w80 = chip->tm_w1;
    }

    chip->w81 = chip->w80 && !(chip->tm_w1 && chip->tm_w2 && chip->w18);
    chip->w82 = !(chip->pla[33] || chip->pla[34]);
    chip->w83 = !(chip->tm_w1 || !chip->tm_w2);
    chip->w84 = !(!chip->w80 || chip->w85);
    chip->w85 = !(chip->tm_w1 && chip->w18);
    chip->w86 = (chip->tm_w1 && (chip->w84 || chip->tm_w2)) || (!chip->tm_w1 && chip->pla[42]);
    chip->w87 = !(chip->tm_w1 || !chip->w80);
    chip->w88 = !(chip->w87 && chip->tm_w1 && chip->w18);
    chip->w89 = !(chip->w103 || !chip->w30);
    chip->w90 = !(!chip->w91 || chip->w30);
    chip->w91 = !(chip->w92 || !chip->w95);

    if (clk)
        chip->l43 = !chip->pla[47];

    if (chip->w55)
        chip->w92 = 1;
    else if (!clk)
    {
        if (chip->w103)
            chip->w92 = !chip->l43;
    }
    chip->w93 = !(chip->tm_w1 || chip->tm_w2);
    chip->w94 = (chip->w41 && chip->tm_w2) || chip->w55 || chip->tm_w3;
    if (chip->w55)
        chip->w95 = 0;
    else if (!clk)
    {
        if (chip->w103)
            chip->w95 = !chip->w98;
    }
    chip->w96 = chip->w95 || chip->w103;
    chip->w97 = !(chip->pla[47] || chip->pla[54] || chip->pla[57]);
    if (clk)
        chip->w98 = chip->pla[54];
    if (clk)
        chip->w99 = !chip->tm_w1;
    if (chip->w55)
        chip->w100 = 0;
    else if (!clk)
    {
        if (!chip->w98 && chip->w103)
            chip->w100 = chip->w99;
    }
    chip->w101 = !(chip->tm_w4 || chip->tm_w5 || (chip->tm_w3 && (chip->w41 || chip->tm_w2)));
    chip->w102 = !((chip->tm_w1 && chip->tm_w2) || (chip->tm_w3 && chip->tm_w4 && chip->tm_w5));
    if (clk)
        chip->l29 = chip->w102;
    chip->w103 = !chip->l29 && !clk;
    if (clk)
        chip->w104 = chip->w97;
    chip->w105 = chip->pla[61] || chip->pla[71];
    chip->w106 = (chip->pla[77] && chip->tm_w2) || (chip->tm_w3 && chip->pla[78]) || (chip->w105 && chip->tm_w5);
    if (clk)
        chip->w107 = chip->pla[76];
    chip->w108 = !chip->w104;
    if (clk)
        chip->l30 = chip->w41;
    chip->w108 = !(chip->l30 && chip->tm_w1);
    if (!clk)
        chip->w109 = !chip->w108;
    chip->w110 = !(chip->w113 || chip->w111);
    if (clk)
        chip->w112 = !chip->tm_w1 && chip->tm_w2;
    if (!clk)
        chip->w111 = chip->w112;
    chip->w113 = !(chip->w66 || chip->w63 || chip->w65);

    if (clk)
        chip->l31 = chip->w110;
    chip->w114 = !(chip->w112 && chip->l31);
    if (!clk)
        chip->w113 = !chip->w114;

    chip->w116 = chip->w114 && clk && chip->tm_w3;

    if (clk)
    {
        if (chip->w116)
            chip->w115 = 1;
        if (chip->tm_w1 || chip->tm_w2)
            chip->w115 = 0;
    }

    chip->w117 = chip->tm_w1 || chip->tm_w2 || (chip->tm_w3 && chip->tm_w4) || (chip->tm_w10 && chip->w138 && chip->tm_w12)
        || (chip->tm_w7 && (chip->pla[98] || (chip->tm_w6 && (!(chip->tm_w4 || !chip->w151) || !chip->w151))));
    chip->w118 = chip->w117 || chip->tm_w2 || (chip->tm_w3 && chip->tm_w4);
    if (clk)
        chip->l32 = chip->tm_w1;
    chip->w119 = chip->l32 && !chip->tm_w2 && !chip->tm_w3;
    if (clk)
        chip->w120 = chip->w119;

    if (clk)
        chip->l33 = chip->tm_w1;
    chip->w122 = chip->l33 && !chip->tm_w2;
    if (clk)
        chip->w121 = chip->w122;
    if (clk)
        chip->l34 = chip->tm_w1;
    chip->w124 = !chip->tm_w3 && (chip->l34 || chip->tm_w2);
    if (clk)
        chip->w123 = chip->w124;
    chip->w125 = !((chip->tm_w1 && !chip->w100) || (!chip->tm_w1 && chip->tm_w2));
    chip->w126 = (chip->tm_w1 && !chip->w100) || chip->tm_w2;

    if (clk)
        chip->l35 = chip->tm_w1;
    chip->w128 = !(chip->tm_w2 || chip->tm_w3 || !chip->l35);
    if (clk)
        chip->w127 = chip->w128;

    if (clk)
    {
        if (chip->tm_w3 || chip->tm_w4)
            chip->o_m1 = 0;
        if (chip->tm_w1 && chip->tm_w2)
            chip->o_m1 = 1;
    }
    chip->w129 = !(chip->tm_w1 && (chip->tm_w2 || chip->tm_w3));
    if (clk)
        chip->o_rfsh = !chip->w129;
    if (clk)
        chip->w130 = chip->tm_w1;

    if (chip->w132)
    {
        if (chip->tm_w2)
            chip->w131 = 1;
        if (!chip->w130)
            chip->w131 = 0;
    }

    if (clk)
        chip->l36 = !chip->w133;

    chip->w132 = !clk && chip->l36;
    chip->w133 = !chip->w137 && !chip->w55;

    if (clk)
        chip->w134 = chip->w125 && ((chip->tm_w1 && chip->w131) || chip->w120);

    chip->w135 = !((chip->tm_w1 && chip->w68) || (chip->w131 && chip->w109 && chip->w149));
    chip->w136 = !(chip->w61 || (chip->w41 && chip->w143) || (chip->w109 && chip->w141));
    chip->w137 = !chip->w135 || !chip->w136;
    chip->w138 = !chip->tm_w1 && !chip->w126;
    chip->w139 = !chip->tm_w1 && !chip->tm_w2 && !chip->tm_w3 && !chip->tm_w4;
    chip->w140 = !chip->tm_w1 && chip->w151 && !chip->tm_w3;
    chip->w141 = !chip->tm_w1 && ((chip->w140 && chip->w127) || chip->w123);
    chip->w142 = !chip->tm_w1 && !chip->tm_w2 && !chip->w234;

    chip->w143 = chip->w120 || (chip->w142 && chip->w123) || (chip->w121 && chip->tm_w2)
        || (chip->w127 && (!chip->w151 || (chip->w140 && chip->tm_w3)));

    if (clk)
    {
        chip->l37 = chip->w133;
        chip->l38 = !chip->w110 && !chip->w55;
    }
    else
    {
        if (!chip->l37)
            chip->w144 = 1;
        if (!chip->l38)
            chip->w144 = 0;
    }

    if (chip->w2)
        chip->w145 = chip->ext_data_o ^ 255;
    else if (chip->w42)
        chip->w145 = chip->w146;
    if (chip->w1)
        chip->w146 = chip->w145;
    if (!chip->w44)
        chip->ext_data_o = chip->w145 ^ 255;

    if (!chip->w49)
        chip->w147 = chip->w145 ^ 255;

    chip->pla[0] = (chip->w147 & 0xf7) == 0xd3 && chip->w90;
    chip->pla[1] = (chip->w147 & 0xf7) == 0xf3 && chip->w90;
    chip->pla[2] = (chip->w147 & 0xc7) == 0x46 && chip->w92;
    chip->pla[3] = chip->w147 == 0x76 && chip->w90;
    chip->pla[4] = (chip->w147 & 0xe7) == 0xa0 && chip->w92;
    chip->pla[5] = (chip->w147 & 0xe7) == 0xa1 && chip->w92;
    chip->pla[6] = chip->w147 == 0x37 && chip->w90;
    chip->pla[7] = (chip->w147 & 0xe6) == 0xa2 && chip->w92;
    chip->pla[8] = chip->w147 == 0x10 && chip->w90;
    chip->pla[9] = chip->w147 == 0x3f && chip->w90;
    chip->pla[10] = (chip->w147 & 0x38) == 0x28 && !chip->w82;
    chip->pla[11] = (chip->w147 & 0xf7) == 0x57 && chip->w92;
    chip->pla[12] = (chip->w147 & 0x38) == 0x30 && !chip->w82;
    chip->pla[13] = (chip->w147 & 0x38) == 0x20 && !chip->w82;
    chip->pla[14] = (chip->w147 & 0x38) == 0x00 && !chip->w82;
    chip->pla[15] = (chip->w147 & 0xf7) == 0x57 && chip->w92 && !chip->w74;
    chip->pla[16] = (chip->w147 & 0xc7) == 0x44 && chip->w92;
    chip->pla[17] = chip->w147 == 0x2f && chip->w90;
    chip->pla[18] = (chip->w147 & 0x38) == 0x08 && !chip->w82;
    chip->pla[19] = (chip->w147 & 0x38) == 0x18 && !chip->w82;
    chip->pla[20] = (chip->w147 & 0x38) == 0x10 && !chip->w82;
    chip->pla[21] = chip->w147 == 0x27 && chip->w90;
    chip->pla[22] = (chip->w147 & 0x38) == 0x38 && !chip->w82;
    chip->pla[23] = (chip->w147 & 0xc7) == 0x05 && chip->w90;
    chip->pla[24] = (chip->w147 & 0xc0) == 0xc0 && !chip->w96;
    chip->pla[25] = (chip->w147 & 0xc0) == 0x80 && !chip->w96;
    chip->pla[26] = (chip->w147 & 0xc0) == 0x40 && !chip->w96;
    chip->pla[27] = (chip->w147 & 0xe7) == 0x07 && chip->w90;
    chip->pla[28] = (chip->w147 & 0xc0) == 0x00 && !chip->w96;
    chip->pla[29] = (chip->w147 & 0xcf) == 0x09 && chip->w90;
    chip->pla[30] = (chip->w147 & 0xc7) == 0x42 && chip->w92;
    chip->pla[31] = (chip->w147 & 0xc7) == 0x40 && chip->w92;
    chip->pla[32] = (chip->w147 & 0xc6) == 0x04 && chip->w90;
    chip->pla[33] = (chip->w147 & 0xc0) == 0x80 && chip->w90;
    chip->pla[34] = (chip->w147 & 0xc7) == 0xc6 && chip->w90;
    chip->pla[35] = (chip->w147 & 0xc7) == 0x06 && chip->w90;
    chip->pla[36] = !chip->w96;
    chip->pla[37] = (chip->w147 & 0xc0) == 0x40 && chip->w90;
    chip->pla[38] = (chip->w147 & 0xf7) == 0x67 && chip->w92;
    chip->pla[39] = (chip->w147 & 0xf8) == 0x70 && chip->w90 && !chip->pla[3];
    chip->pla[40] = (chip->w147 & 0xc7) == 0x46 && chip->w90 && !chip->pla[3];
    chip->pla[41] = (chip->w147 & 0xf7) == 0x47 && chip->w92;
    chip->pla[42] = (chip->w147 & 0xc7) == 0xc7 && chip->w90;
    chip->pla[43] = (chip->w147 & 0x07) == 0x06 && !chip->w96;
    chip->pla[44] = !chip->w96 && !chip->w100;
    chip->pla[45] = (chip->w147 & 0xfe) == 0x34 && chip->w90;
    chip->pla[46] = (chip->w147 & 0xc7) == 0x86 && chip->w90;
    chip->pla[47] = chip->w147 == 0xed && chip->w90;
    chip->pla[48] = chip->w147 == 0x36 && chip->w90;
    chip->pla[49] = chip->w147 == 0xcb && !chip->w100;
    chip->pla[50] = (chip->w147 & 0xe7) == 0x20 && chip->w90;
    chip->pla[51] = chip->w147 == 0x18 && chip->w90;
    chip->pla[52] = (chip->w147 & 0xc7) == 0x45 && chip->w92;
    chip->pla[53] = (chip->w147 & 0xc7) == 0xc0 && chip->w90;
    chip->pla[54] = chip->w147 == 0xcb && chip->w90;
    chip->pla[55] = (chip->w147 & 0xc7) == 0xc2 && chip->w90;
    chip->pla[56] = (chip->w147 & 0xc7) == 0xc4 && chip->w90;
    chip->pla[57] = (chip->w147 & 0xdf) == 0xdd && chip->w90;
    chip->pla[58] = chip->w147 == 0x36 && chip->w90 && !chip->w100;
    chip->pla[59] = chip->w147 == 0x08 && chip->w90;
    chip->pla[60] = (chip->w147 & 0xf7) == 0x32 && chip->w90;
    chip->pla[61] = (chip->w147 & 0xf7) == 0xd3 && chip->w90;
    chip->pla[62] = (chip->w147 & 0xe7) == 0x02 && chip->w90;
    chip->pla[63] = chip->w147 == 0xc9 && chip->w90;
    chip->pla[64] = (chip->w147 & 0xc7) == 0x41 && chip->w92;
    chip->pla[65] = (chip->w147 & 0xcf) == 0x43 && chip->w92;
    chip->pla[66] = (chip->w147 & 0xe7) == 0x47 && chip->w92;
    chip->pla[67] = (chip->w147 & 0xc7) == 0x43 && chip->w92;
    chip->pla[68] = (chip->w147 & 0xf7) == 0x22 && chip->w90;
    chip->pla[69] = chip->w147 == 0xc3 && chip->w90;
    chip->pla[70] = chip->w147 == 0xd3 && chip->w90;
    chip->pla[71] = (chip->w147 & 0xc6) == 0x40 && chip->w92;
    chip->pla[72] = chip->w147 == 0x10 && chip->w90;
    chip->pla[73] = (chip->w147 & 0xe7) == 0x07 && chip->w90;
    chip->pla[74] = chip->w147 == 0xcd && chip->w90;
    chip->pla[75] = (chip->w147 & 0xcb) == 0xc1 && chip->w90;
    chip->pla[76] = chip->w147 == 0xcb && !chip->w100;
    chip->pla[77] = (chip->w147 & 0xe7) == 0xa2 && chip->w92;
    chip->pla[78] = (chip->w147 & 0xe7) == 0xa3 && chip->w92;
    chip->pla[79] = (chip->w147 & 0xe7) == 0xa1 && chip->w92;
    chip->pla[80] = (chip->w147 & 0xe7) == 0xa0 && chip->w92;
    chip->pla[81] = (chip->w147 & 0xc7) == 0x06 && chip->w90;
    chip->pla[82] = (chip->w147 & 0xcf) == 0xc5 && chip->w90;
    chip->pla[83] = (chip->w147 & 0xf7) == 0x67 && chip->w92;
    chip->pla[84] = (chip->w147 & 0xcf) == 0x0b && chip->w90;
    chip->pla[85] = (chip->w147 & 0xcf) == 0x02 && chip->w90;
    chip->pla[86] = (chip->w147 & 0xe7) == 0xa0 && chip->w92;
    chip->pla[87] = (chip->w147 & 0xe7) == 0xa1 && chip->w92;
    chip->pla[88] = chip->w147 == 0xe3 && chip->w90;
    chip->pla[89] = (chip->w147 & 0xc7) == 0x03 && chip->w90;
    chip->pla[90] = (chip->w147 & 0xe7) == 0x02 && chip->w90;
    chip->pla[91] = (chip->w147 & 0xcf) == 0x01 && chip->w90;
    chip->pla[92] = chip->w147 == 0xe9 && chip->w90;
    chip->pla[93] = chip->w147 == 0xf1 && chip->w90;
    chip->pla[94] = (chip->w147 & 0xe7) == 0x67 && chip->w92;
    chip->pla[95] = (chip->w147 & 0xdf) == 0xdd && chip->w90;
    chip->pla[96] = chip->w147 == 0xeb && chip->w90;
    chip->pla[97] = chip->w147 == 0xd9 && chip->w90;
    chip->pla[98] = (chip->w147 & 0xf4) == 0xa0 && chip->w92;

    chip->w148 = !(chip->pla[11] || chip->pla[16] || chip->pla[17] ||
        chip->pla[21] || chip->pla[27] || chip->pla[33] || chip->pla[34]
        || chip->pla[38]);
    chip->w149 = !(chip->w86 || !chip->w88 || chip->pla[53] || chip->pla[72]
        || chip->pla[77] || chip->pla[78] || chip->pla[82] || chip->pla[89]
        || chip->pla[93] || chip->pla[94]);
    chip->w150 = !(chip->pla[11] || chip->pla[21] || chip->pla[27]
        || chip->pla[28] || chip->pla[31] || chip->pla[33] || chip->pla[34]
        || chip->pla[35] || chip->pla[37]);
    chip->w151 = !(!chip->w88 || chip->pla[55] || chip->pla[60]
        || chip->pla[67] || chip->pla[68] || chip->pla[69] || chip->pla[77]
        || chip->pla[78] || chip->pla[91]);
    chip->w152 = !(chip->pla[4] || chip->pla[5] || chip->pla[6] || chip->pla[7]
        || chip->pla[9] || chip->pla[26] || chip->pla[28] || chip->pla[29]
        || chip->pla[30] || chip->pla[31] || chip->pla[32] || chip->pla[33]
        || chip->pla[34]);
    chip->w153 = !(chip->w86 || !chip->w88 || chip->pla[50] || chip->pla[51]
        || chip->pla[52] || chip->pla[53] || chip->pla[55] || chip->pla[56]
        || chip->pla[63] || chip->pla[69] || chip->pla[72] || chip->pla[74]
        || chip->pla[92]);
    chip->w154 = !(chip->pla[11] || chip->pla[16] || chip->pla[17]
        || chip->pla[27] || chip->pla[28] || chip->pla[31] || chip->pla[35]
        || chip->pla[37] || chip->w86);
    chip->w155 = !(!chip->w88 || chip->pla[44] || chip->pla[45]
        || chip->pla[49] || chip->pla[56] || chip->pla[60] || chip->pla[67]
        || chip->pla[68] || chip->pla[74] || chip->pla[77] || chip->pla[78]
        || chip->pla[83] || chip->pla[88]);
    chip->w156 = !(chip->pla[10] || chip->pla[12] || chip->pla[14]
        || chip->pla[16] || chip->pla[18] || chip->pla[19] || chip->pla[20]
        || chip->pla[22] || chip->pla[29] || chip->pla[30]);
    chip->w157 = !(!chip->w88 || chip->pla[50] || chip->pla[51]
        || chip->pla[55] || chip->pla[56] || chip->pla[60] || chip->pla[67]
        || chip->pla[68] || chip->pla[69] || chip->pla[72] || chip->pla[74]
        || chip->pla[77] || chip->pla[78] || chip->pla[79] || chip->pla[80]
        || chip->pla[83] || chip->pla[88] || chip->pla[91]);
    chip->w158 = !(chip->pla[11] || chip->pla[14] || chip->pla[16]
        || chip->pla[18] || chip->pla[19] || chip->pla[20] || chip->pla[22]
        || chip->pla[30] || chip->pla[32]);
    chip->w159 = !(chip->pla[34] || chip->pla[35] || chip->pla[50]
        || chip->pla[51] || chip->pla[61] || chip->pla[72]);
    chip->w160 = !(chip->pla[5] || chip->pla[7] || chip->pla[8]
        || chip->pla[16] || chip->pla[17] || chip->pla[19] || chip->pla[20]
        || chip->pla[22] || chip->pla[23] || chip->pla[25] || chip->pla[26]);
    chip->w161 = !(chip->pla[29] || chip->pla[30] || chip->w86
        || chip->pla[48] || chip->pla[52] || chip->pla[53] || chip->pla[61]
        || chip->pla[62] || chip->pla[63] || chip->pla[71] || chip->pla[75]);
    chip->w162 = !(chip->pla[5] || chip->pla[7] || chip->pla[8]
        || chip->pla[11] || chip->pla[16] || chip->pla[21] || chip->pla[26]
        || chip->pla[28] || chip->pla[30] || chip->pla[31] || chip->pla[32]
        || chip->pla[33] || chip->pla[34] || chip->pla[38]);
    chip->w163 = !(chip->pla[32] || chip->pla[33] || chip->pla[34]
        || chip->pla[36] || chip->pla[37]);
    chip->w164 = !(chip->pla[26] || chip->pla[39] || chip->pla[40]
        || chip->pla[46] || chip->pla[48] || chip->pla[60] || chip->pla[61]
        || chip->pla[62] || chip->pla[71] || chip->pla[77] || chip->pla[78]
        || chip->pla[79] || chip->pla[80] || chip->pla[83]);
    chip->w165 = !(chip->pla[7] || chip->pla[8] || chip->pla[13]
        || chip->pla[17] || chip->pla[26] || chip->pla[32]);
    chip->w166 = !(chip->pla[9] || chip->pla[18] || chip->pla[19]
        || chip->pla[30]);
    chip->w167 = !(chip->w86 || chip->pla[39] || chip->pla[48]
        || chip->pla[56] || chip->pla[64] || chip->pla[65] || chip->pla[70]
        || chip->pla[74] || chip->pla[82] || chip->pla[83] || chip->pla[85]
        || chip->pla[88] || chip->pla[89] || chip->pla[93]);
    chip->w168 = !(chip->pla[10] || chip->pla[12] || chip->pla[24]);
    chip->w169 = !(chip->pla[39] || chip->pla[40] || chip->pla[43]
        || chip->pla[44] || chip->pla[45] || chip->pla[46] || chip->pla[48]
        || chip->pla[49]);
    chip->w170 = !(chip->pla[49] || chip->pla[55] || chip->pla[56]
        || chip->pla[58] || chip->pla[60] || chip->pla[67] || chip->pla[68]
        || chip->pla[69] || chip->pla[74] || chip->pla[91]);
    chip->w171 = !(chip->pla[6] || chip->pla[9] || chip->pla[13]);
    chip->w172 = !(chip->pla[24] || chip->pla[25] || chip->pla[28]
        || chip->pla[31] || chip->pla[32] || chip->pla[35] || chip->pla[37]);
    chip->w173 = !(chip->w86 || chip->pla[53] || chip->pla[56] || chip->pla[44]
        || chip->pla[63] || chip->pla[74] || chip->pla[75] || chip->pla[88]);
    chip->w174 = !(chip->pla[7] || chip->pla[8] || chip->pla[32]
        || chip->pla[36] || chip->pla[50] || chip->pla[51]);
    chip->w175 = !(chip->pla[50] || chip->pla[51] || chip->pla[72]);
    chip->w176 = !(chip->pla[82] || chip->pla[84]);
    chip->w177 = !(chip->pla[4] || chip->pla[5] || chip->pla[6]
        || chip->pla[7] || chip->pla[9]);
    chip->w178 = !(chip->pla[7] || chip->pla[8]);
    chip->w179 = !(chip->pla[5] || chip->pla[7] || chip->pla[8]);
    chip->w180 = !(chip->pla[12] || chip->pla[24]);
    chip->w181 = !(chip->pla[13] || chip->pla[25] || chip->pla[26]);
    chip->w182 = !(chip->pla[33] || chip->pla[36]);
    chip->w183 = !(chip->w182 && (chip->w114 || chip->pla[37]));
    chip->w184 = !(chip->pla[55] || chip->pla[56]);
    chip->w185 = !(chip->pla[56] || chip->pla[74]);
    chip->w186 = !(chip->pla[77] || chip->pla[78] || chip->pla[79]
        || chip->pla[80]);
    chip->w187 = !(chip->pla[60] || chip->pla[61] || chip->pla[62]);
    chip->w188 = !(chip->pla[71] || chip->pla[72] || chip->pla[77]
        || chip->pla[78]);
    chip->w189 = !(chip->pla[72] || chip->pla[73] || chip->pla[77]
        || chip->pla[78]);
    chip->w190 = !(chip->pla[89] || chip->pla[93]);
    chip->w191 = !(chip->pla[79] || chip->pla[80] || chip->pla[81]
        || !chip->w169 || chip->pla[83] || chip->pla[92] || chip->pla[93]);

    chip->w193 = (chip->w144 && chip->w14) || chip->w205;
    chip->w194 = !chip->w202 && !chip->w203;

    chip->w196 = chip->pla[86] || chip->pla[87];
    chip->w195 = !(chip->pla[88] || !(chip->w196 || (!chip->tm_w1 && !chip->w173)));

    chip->w197 = !chip->tm_w1 && chip->w186;
    chip->w199 = !(chip->pla[83] || chip->pla[87] || chip->w254);
    chip->w198 = !chip->w199 && chip->w170;

    chip->w200 = !((chip->w127 && (!chip->w186 || !chip->w88))
        || (chip->w120 && !chip->w88)
        || (chip->w123 && !chip->w167)
        || (chip->w121 && (!chip->w167 || chip->tm_w1)));

    chip->w202 = ((chip->w121 || chip->w123) && !chip->w197)
        || (chip->w127 && !chip->w198);
    chip->w201 = !chip->w200 && !chip->w202;

    chip->w203 = !(chip->w110 || (chip->w41 && chip->w131));

    chip->w204 = !((chip->w109 && chip->pla[93])
        || (chip->pla[88] && chip->w121 && chip->w41));

    if (clk)
        chip->l39 = chip->w204;
    else
        chip->w205 = !chip->l39;

    chip->w207 = !(chip->w176 && !(chip->w86 || !chip->w88));

    chip->w206 = !((chip->w131 && chip->w109 && chip->w207)
        || (!chip->w186 && chip->w123 && (chip->w41 || chip->w110))
        || (chip->w195 && chip->w127 && chip->w41));

    chip->w209 = !chip->w186 && (chip->w147 & 8) != 0;

    chip->w208 = !(chip->w110 &&
        ((chip->w120 && chip->w209 && !chip->w88)
        || (chip->w123 && !chip->w173 && !chip->w167)
        || (chip->w127 && chip->w209)));

    if (clk)
        chip->l40 = !chip->w206 || !chip->w208;
    else
        chip->w210 = chip->l40;

    chip->w212 = !(!chip->w186 && (!chip->w169 || chip->tm_w1));
    chip->w213 = !(!chip->w186 && chip->w218);

    chip->w211 = !((chip->w114 && ((chip->w123 && chip->w212)
        || (chip->w120 && chip->w213)))
        || (chip->w109 && (chip->w121 || ((chip->w123 || chip->w127)
            && (!chip->w186 || !chip->w173)))));

    chip->w214 = !((chip->w41 && chip->w131)
        || (chip->w68 && chip->w131 && (!chip->w88 || !chip->w167))
        || (chip->w114 && ((chip->w127 && !chip->w186)
            || (chip->w121 && chip->w167 && !chip->w173))));

    if (clk)
        chip->l41 = chip->w55 || (!chip->w57 && chip->w110 && chip->w131);
    chip->w215 = chip->l41;

    chip->w216 = !chip->w214 || !chip->w211;

    chip->w218 = !chip->pla[88] && chip->w88;
    chip->w217 = !((chip->w120 && chip->w218) || chip->w131 || chip->w127);

    chip->w219 = !((chip->w41 && (chip->w121 || (chip->w127 && !chip->w186)))
        || (chip->w109 && chip->w131)
        || (chip->w114 && (chip->w131 || (chip->w127 && !chip->w173))));

    chip->w220 = !(chip->w127 && chip->w196);
    chip->w221 = !((chip->w110 && (chip->w123 || chip->w121)
        && (!chip->w185 || chip->w86))
        || (chip->w109 && chip->w123 && !chip->w186));

    chip->w222 = !((!chip->w175 && ((chip->w114 && chip->w120)
        || (chip->w41 && chip->w127)))
        || (chip->w110 && (chip->w127 || chip->w120) && !chip->w88));

    chip->w225 = !chip->w100 && !chip->w169;

    chip->w224 = !chip->w170 || chip->w225 || !chip->w159;

    chip->w223 = !((chip->w127 && !chip->w186)
        || (chip->w120 && !chip->w170)
        || (chip->w131 && chip->w224));

    chip->w226 = !(chip->w110 && (
        chip->w131
        || (chip->w120 && chip->w224)
        || (chip->w127 && !chip->w170)));

    chip->w227 = !(chip->w131 && chip->w114);
    if (clk)
        chip->l42 = chip->w227;
    chip->w228 = !(chip->w131 && chip->w41);
    chip->w229 = !((chip->w41 && chip->w120 && !chip->w88)
        || (chip->w109 && chip->w131 && chip->pla[94]));
    chip->w230 = !( (chip->w68 && chip->w131 && (chip->pla[93] || !chip->w173))
        || (chip->w114 && (((chip->w127 || chip->w123) && !chip->w173)
            || (chip->w121 && !chip->w173 && chip->w167))));
    chip->w231 = !(((chip->w68 || chip->w109) && (chip->w131 || chip->w120)
        && (!chip->w173 || !chip->w88))
        || (chip->w114 && chip->w120 && !chip->w88));
    chip->w232 = !((chip->w41 && (chip->w120 || chip->w127) && chip->pla[91])
        || ((chip->w109 || chip->w68)
            && (chip->w121 || (chip->w131
                && (chip->pla[89] || chip->pla[90]))))
        );

    chip->w234 = chip->pla[29] || chip->pla[30];

    chip->w236 = !(chip->pla[67] || chip->pla[68]);
    chip->w235 = !(chip->w236 || (chip->w147 & 8) != 0);
    chip->w237 = !(chip->w237 || !chip->w167);

    chip->w233 = !(
        (chip->w110 && (chip->w123 || chip->w121)
            && (chip->pla[88] || chip->w234 || chip->w235))
        || (chip->w41 && (chip->w123 || chip->w121)
            && chip->w237)
        );

    chip->w238 = !(
        ((chip->w41 && chip->w127) || (chip->w114 && chip->w120))
        && chip->w225);

    chip->w240 = !(chip->pla[77] || chip->w186);

    chip->w239 = !((chip->w114 && chip->w120 && chip->w240)
        || (chip->w109 && ((chip->w127 && chip->pla[83]) || (chip->w123 && chip->w234)))
        || (chip->w41 && (chip->w123 || chip->w121) && chip->w234)
        );

    chip->w241 = !(
        (chip->w131 && chip->w68 && chip->pla[78])
        || (chip->w131 && chip->w109 && (chip->w234 || !chip->w191))
        || (chip->w114 && chip->w127 && chip->pla[77])
        || (chip->w41 && chip->w120 && (chip->pla[77] || chip->pla[81]))
        );

    chip->w242 = !(
        (chip->w41 && chip->w120 && chip->pla[80])
        || (chip->w114 && chip->w127 && chip->pla[8])
        );

    chip->w243 = !(
        (chip->w109 && ((chip->w127 && !chip->w186) || (chip->w131 && !chip->w188)))
        || (chip->w68 && chip->w131 && chip->pla[77])
        || (chip->w110 && chip->w120 && !chip->w188)
        || (chip->w41 && ((chip->w127 && !chip->w186) || (chip->w120 && chip->pla[78])))
        );

    chip->w244 = !(
        (chip->w110 || chip->w41) && (chip->w123 || chip->w121) && chip->pla[75]
        );

    chip->w245 = !(!chip->w187 || (!chip->w236 && chip->pla[66])
        || (!chip->w153 && chip->w175) || chip->pla[75] || !chip->w173
        || chip->pla[91]);

    chip->w247 = !(chip->pla[22] || chip->w148);

    chip->w246 = !((chip->w110 && chip->w123 && !chip->w187)
        || (chip->w41 && chip->w123 && chip->w167 && !chip->w187)
        || (chip->w109 && chip->w131 && chip->pla[73])
        || (chip->w114 && chip->w131 && chip->w247)
        );

    chip->w248 = !(
        (chip->w110 && chip->w123 && (chip->pla[71] || !chip->w163))
        || (chip->w109 && chip->w123 && (!chip->w163 && chip->w169))
        );

    chip->w249 = !(chip->w109 && chip->w131 && chip->pla[66]);

    chip->w250 = !(chip->w114 && chip->w131 && !chip->w172);

    chip->w252 = chip->w187 && (chip->w86 || chip->w234 || (chip->w167 && !chip->w245));

    chip->w253 = !chip->w245 || chip->w235;

    chip->w256 = !chip->w169 && !chip->w100;

    chip->w255 = !chip->w174 || (chip->w115 && chip->w256);

    chip->w254 = !(!chip->w255 || !chip->w186);

    chip->w251 = !(
        (chip->w41 && ((chip->w123 && chip->w252)
            || (chip->w120 && chip->w88 && chip->w253)))
        || (chip->w114 && chip->w127 && (!chip->w88 || chip->w254))
        );

    chip->w257 = !(
        (chip->w110 && chip->w120 && (!chip->w189 || !chip->w187))
        || (chip->w41 && ((chip->w127 && chip->w253) || (chip->w121 && chip->w252)))
        );

    chip->w258 = !(
        (chip->w41 && chip->w123 && !chip->w187)
        || (chip->w68 && chip->w127 && chip->w255)
        || (chip->w114 && chip->w131 && chip->w247)
        );

    chip->w259 = !(chip->w110 && chip->w131 && chip->pla[59]);

    chip->w261 = chip->w235 || chip->w234;

    chip->w260 = !(
        (chip->w110 && chip->w121 && !chip->w245)
        || (chip->w109 && chip->w131 && chip->w261)
        );

    chip->w262 = !(
        (chip->w110 && ((chip->w120 && !chip->w88) || (chip->w123 && chip->w261)))
        || (chip->w114 && chip->w120)
        );

    chip->w263 = !(
        (chip->w109 && ((chip->w131 && !chip->w189) || chip->w123))
        || ((chip->w110 || chip->w41) && chip->w120 && !chip->w88)
        );

    chip->w264 = !(
        (chip->w110 && ((chip->w123 && (!chip->w245 || !chip->w187))
            || (chip->w121 && chip->w261)))
        || (chip->w41 && chip->w127 && chip->w255)
        );

    chip->w265 = (
        (chip->w127 && !chip->w184)
        || (chip->w131 && chip->pla[53])
        || (chip->w120 && chip->pla[50])
        );

    chip->w266 = !(
        (chip->w109 && chip->w131 && chip->pla[41])
        || (chip->w110 && chip->w127 && chip->w88)
        );

    chip->w267 = !(
        (chip->w110 && chip->w123 && chip->pla[38])
        || (chip->w41 && ((chip->w123 && chip->w86) 
            || (chip->w127 && chip->pla[38])))
        );

    chip->w268 = !(chip->w150 &&
        ((chip->w41 && chip->w123)
            || (chip->w109 && chip->w131))
        );

    chip->w269 = !(
        (chip->w110 && ((chip->w123 && (chip->w256 || chip->w234)) || (chip->w121 && chip->w234)))
        || (chip->w68 && chip->w131 && chip->w86)
        || (chip->w41 && (chip->w131 || chip->w120))
        );

    chip->w271 = chip->pla[27] || chip->pla[28];

    chip->w270 = !(
        (chip->w41 && chip->w123 && (chip->w256 || chip->w271))
        || (chip->w109 && chip->w141)
        );

    chip->w272 = !((chip->w41 && chip->w120 && chip->w255));

    chip->w273 = !(chip->w110 && chip->w131 && (chip->w247 || chip->w152));

    chip->w274 = !(
        (chip->w114 && chip->w123 && (chip->w256 || chip->w271))
        || (chip->w41 && chip->w131)
        );

    chip->w275 = !(
        (chip->w114 && chip->w131 && (!chip->w172 || chip->w247))
        || (chip->w110 && (chip->w120 || chip->w121) && chip->w255)
        || (chip->w41 && chip->w121 && chip->w234)
        || (chip->w68 && chip->w127)
        );

    chip->w276 = !(chip->w41 && chip->w120 && chip->w255);
    chip->w277 = !(chip->w114 && chip->w131 && !chip->w156);
    chip->w278 = !(chip->w114 && chip->w131 && !chip->w171);
    chip->w279 = !(
        (chip->w120 && chip->pla[8])
        || (chip->w127 && (chip->pla[7] || chip->pla[5]))
        );
    chip->w280 = !(
        (chip->w114 && ((chip->w127 && chip->pla[5]) || (chip->w131 && chip->w179)))
        || (chip->w110 && chip->w120 && !chip->w178)
        || (chip->w41 && chip->w123 && chip->w234)
        );

    chip->w281 = !(
        (chip->w110 && chip->w123) || (chip->w114 && chip->w120)
        || (chip->w109 && chip->w131)
        );

    chip->w282 = !(
        (chip->w110 && ((chip->w127 && (chip->pla[5] || chip->w255)) || (chip->w131 && chip->w177)))
        || (chip->w68 && chip->w131)
        || (chip->w114 && chip->w120 && chip->w234)
        );

    chip->w283 = !(
        chip->tm_w1 ||
        (chip->w68 && chip->w131 && !chip->w88)
        || (chip->w41 && (chip->w127 || chip->w123) && chip->w255)
        || (chip->w109 && ((chip->w131 && (chip->w255 || chip->w234))
            || (chip->w123 && chip->w234)))
        || (chip->w114 && chip->w120 && (chip->w255 || chip->w256))
        );

    chip->w284 = !(chip->w68 && chip->w131 && chip->w81);
    chip->w285 = !(
        (chip->w110 && chip->w120 && chip->pla[0])
        || (chip->w114 && chip->w127 && !chip->w88)
        || (chip->w41 && chip->w121 && chip->w86)
        );

    chip->w287 = !chip->w95 || (chip->w103 && chip->w98);

    chip->w286 = !(
        (chip->w41 && chip->w131 && chip->w287)
        || (chip->w110 && chip->w123 && (chip->w287 && chip->w256))
        );
}
