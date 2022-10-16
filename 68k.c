#include "68k.h"

void M68K_Clock(m68k_t* chip, int clk)
{
    int v1, v2;
    if (chip->tm_w1)
        chip->l1 = chip->tm_w2;
    if (chip->tm_w1)
        chip->l2 = chip->tm_w3;
    if (chip->l1 && chip->l2)
        chip->w1 = 0;
    else if (!chip->l1)
        chip->w1 = chip->tm_w4;
    else if (!chip->l2)
        chip->w1 = chip->tm_w5;

    if (chip->tm_w1)
        chip->l3 = chip->tm_w2;
    if (chip->tm_w1)
        chip->l4 = chip->tm_w3;
    if (chip->l3 && chip->l4)
        chip->w2 = 0;
    else if (!chip->l3)
        chip->w2 = chip->tm_w4;
    else if (!chip->l4)
        chip->w2 = chip->tm_w5;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w3 = chip->w1;
    else
        chip->w3 = 0;
    if (v2 && chip->tm_w6)
        chip->w4 = chip->w2;
    else
        chip->w4 = 0;
    if (v2 && chip->tm_w7)
        chip->w5 = chip->w2;
    else
        chip->w5 = 0;
    if (v1 && chip->tm_w4)
        chip->w6 = chip->w1;
    else
        chip->w6 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w7 = chip->w1;
    else
        chip->w7 = 0;
    if (v2 && chip->tm_w6)
        chip->w8 = chip->w2;
    else
        chip->w8 = 0;
    if (v2 && chip->tm_w7)
        chip->w9 = chip->w2;
    else
        chip->w9 = 0;
    if (v1 && chip->tm_w4)
        chip->w10 = chip->w1;
    else
        chip->w10 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w11 = chip->w1;
    else
        chip->w11 = 0;
    if (v2 && chip->tm_w6)
        chip->w12 = chip->w2;
    else
        chip->w12 = 0;
    if (v2 && chip->tm_w7)
        chip->w13 = chip->w2;
    else
        chip->w13 = 0;
    if (v1 && chip->tm_w4)
        chip->w14 = chip->w1;
    else
        chip->w14 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w15 = chip->w1;
    else
        chip->w15 = 0;
    if (v2 && chip->tm_w6)
        chip->w16 = chip->w2;
    else
        chip->w16 = 0;
    if (v2 && chip->tm_w7)
        chip->w17 = chip->w2;
    else
        chip->w17 = 0;
    if (v1 && chip->tm_w4)
        chip->w18 = chip->w1;
    else
        chip->w18 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w19 = chip->w1;
    else
        chip->w19 = 0;
    if (v2 && chip->tm_w6)
        chip->w20 = chip->w2;
    else
        chip->w20 = 0;
    if (v2 && chip->tm_w7)
        chip->w21 = chip->w2;
    else
        chip->w21 = 0;
    if (v1 && chip->tm_w4)
        chip->w22 = chip->w1;
    else
        chip->w22 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w23 = chip->w1;
    else
        chip->w23 = 0;
    if (v2 && chip->tm_w6)
        chip->w24 = chip->w2;
    else
        chip->w24 = 0;
    if (v2 && chip->tm_w7)
        chip->w25 = chip->w2;
    else
        chip->w25 = 0;
    if (v1 && chip->tm_w4)
        chip->w26 = chip->w1;
    else
        chip->w26 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w27 = chip->w1;
    else
        chip->w27 = 0;
    if (v2 && chip->tm_w6)
        chip->w28 = chip->w2;
    else
        chip->w28 = 0;
    if (v2 && chip->tm_w7)
        chip->w29 = chip->w2;
    else
        chip->w29 = 0;
    if (v1 && chip->tm_w4)
        chip->w30 = chip->w1;
    else
        chip->w30 = 0;

    v1 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    v2 = chip->tm_w8 && chip->tm_w9 && chip->tm_w10;
    if (v1 && chip->tm_w5)
        chip->w31 = chip->w1;
    else
        chip->w31 = 0;
    if (v2 && chip->tm_w6)
        chip->w32 = chip->w2;
    else
        chip->w32 = 0;
    if (v2 && chip->tm_w7 && chip->tm_w11)
        chip->w33 = chip->w2;
    else
        chip->w33 = 0;
    if (v1 && chip->tm_w4 && chip->tm_w11)
        chip->w34 = chip->w1;
    else
        chip->w34 = 0;
    if (v1 && chip->tm_w4 && chip->tm_w12)
        chip->w35 = chip->w1;
    else
        chip->w35 = 0;
    if (v2 && chip->tm_w7 && chip->tm_w12)
        chip->w36 = chip->w2;
    else
        chip->w36 = 0;
}
