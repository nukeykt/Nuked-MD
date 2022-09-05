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
    chip->w11 = !(chip->w12 || chip->w9 || chip->tm_w3);
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
    chip->w43 = !(chip->tm_w3 && chip->l13);
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
    chip->w45 = (chip->tm_w1 && chip->tm_w2) || (chip->w41 && chip->w3 && chip->w46);
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
    chip->w70 = !(chip->tm_w1 && chip->tm_w2 && chip->tm_w3);
    if (clk)
        chip->l26 = chip->w70;
    chip->w71 = !clk && !chip->l26;
    chip->w72 = !(!chip->w73 || chip->tm_w2);

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

    chip->w76 = !(chip->tm_w1 && chip->tm_w2 && chip->tm_w3);
    chip->w77 = chip->tm_w1 && chip->tm_w2;

    if (chip->w55)
        chip->w78 = 1;
    else if (!clk)
    {
        if (chip->w79)
            chip->w78 = !chip->tm_w1;
    }
    if (clk)
        chip->l28 = !(chip->tm_w1 && chip->tm_w2 && chip->tm_w3);
    chip->w79 = !clk && !chip->l28;
    if (chip->w55)
        chip->w80 = 0;
    else if (!clk)
    {
        if (chip->w79)
            chip->w80 = chip->tm_w1;
    }

    chip->w81 = chip->w80 && !(chip->tm_w1 && chip->tm_w2 && chip->w18);
    chip->w82 = !(chip->tm_w1 || chip->tm_w2);
    chip->w83 = !(chip->tm_w1 || !chip->tm_w2);
    chip->w84 = !(!chip->w80 || chip->w85);
    chip->w85 = !(chip->tm_w1 && chip->w18);
    chip->w86 = (chip->tm_w1 && (chip->w84 || chip->tm_w2)) || (!chip->tm_w1 && chip->tm_w4);
    chip->w87 = !(chip->tm_w1 || !chip->w80);
    chip->w88 = !(chip->w87 && chip->tm_w1 && chip->w18);
    chip->w89 = !(chip->tm_w1 || !chip->w30);
    chip->w90 = !(!chip->w91 || chip->w30);
    chip->w91 = !(chip->w92 || !chip->w95);
    if (chip->w55)
        chip->w92 = 1;
    else if (!clk)
    {
        if (chip->tm_w1)
            chip->w92 = !chip->tm_w2;
    }
    chip->w93 = !(chip->tm_w1 || chip->tm_w2);
    chip->w94 = (chip->w41 && chip->tm_w2) || chip->w55 || chip->tm_w3;
    if (chip->w55)
        chip->w95 = 0;
    else if (!clk)
    {
        if (chip->tm_w1)
            chip->w95 = !chip->w98;
    }
    chip->w96 = chip->w95 || chip->tm_w1;
    chip->w97 = !(chip->tm_w1 || chip->tm_w2 || chip->tm_w3);
    if (clk)
        chip->w98 = chip->tm_w1;
    if (clk)
        chip->w99 = !chip->tm_w1;
    if (chip->w55)
        chip->w100 = 0;
    else if (!clk)
    {
        if (!chip->w98 && chip->tm_w1)
            chip->w100 = chip->w99;
    }
    chip->w101 = !(chip->tm_w4 || chip->tm_w5 || (chip->tm_w3 && (chip->w41 || chip->tm_w2)));
    chip->w102 = !((chip->tm_w1 && chip->tm_w2) || (chip->tm_w3 && chip->tm_w4 && chip->tm_w5));
    if (clk)
        chip->l29 = chip->w102;
    chip->w103 = !chip->l29 && !clk;
    if (clk)
        chip->w104 = chip->w97;
    chip->w105 = chip->tm_w1 || chip->tm_w2;
    chip->w106 = (chip->tm_w1 && chip->tm_w2) || (chip->tm_w3 && chip->tm_w4) || (chip->w105 && chip->tm_w5);
    if (clk)
        chip->w107 = chip->tm_w1;
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
            chip->w115 = 0;
        if (chip->tm_w1 || chip->tm_w2)
            chip->w115 = 1;
    }

    chip->w117 = chip->tm_w1 || chip->tm_w2 || (chip->tm_w3 && chip->tm_w4) || (chip->tm_w10 && chip->tm_w11 && chip->tm_w12)
        || (chip->tm_w7 && (chip->tm_w5 || (chip->tm_w6 && (chip->tm_w8 || chip->tm_w9))));
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
        chip->l36 = !chip->tm_w1;

    chip->w132 = !clk && !chip->l36;
    chip->w133 = !chip->w137 && !chip->w55;

    if (clk)
        chip->w134 = chip->w125 && ((chip->tm_w1 && chip->w131) || chip->w120);

    chip->w135 = !((chip->tm_w1 && chip->w68) || (chip->w131 && chip->w109 && chip->tm_w2));
    chip->w136 = !(chip->w61 || (chip->w41 && chip->tm_w1) || (chip->w109 && chip->tm_w2));
    chip->w137 = !chip->w135 || !chip->w136;
}
