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
        chip->l1 = chip->tm_w2;
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
        chip->l3 = chip->tm_w1;
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
    if (chip->tm_w1)
        chip->w18 = 0;
    if (chip->w16)
        chip->w19 = chip->w9;
    if (chip->tm_w1)
        chip->w19 = 0;
    if (chip->w13 && chip->w16)
        chip->halt = 1;
    if (chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4)
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
    chip->w28 = !(chip->halt || (chip->tm_w1 && chip->tm_w2) || chip->tm_w3 || chip->tm_w4 || !(chip->tm_w1 || chip->l7));

    if (chip->tm_w2)
        chip->w29 = chip->w28;
    if (clk)
        chip->w29 = !chip->w30;
    if (chip->tm_w1)
        chip->w29 = 0;
    chip->w30 = !chip->w29;

    if (clk)
        chip->l8 = chip->tm_w1;

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
        chip->l9 = chip->tm_w1;
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
}
