
#include <stdio.h>
#include <string.h>
#include "68k.h"

#include "68k_ucode.h"

void M68K_RegisterLogic1(busstate_t *l, busstate_t *h, int *val)
{
    l->val &= *val;
    h->val &= ~*val;
}

void M68K_RegisterLogic(busstate_t *l, busstate_t *h, int *val)
{
    // Update register value if either line pulls to gnd
    int pg1 = (~l->val) & 0xffff;
    int pg2 = (~h->val) & 0xffff;
    *val &= ~pg1;
    *val |= pg2;
}

void M68K_Clock(m68k_t* chip, int clk1, int clk2)
{
    int v1, v2;
    int i, j;
    int t1;
    int t2;
    int t3;
    chip->b1[0].val = 0xffff;
    chip->b1[1].val = 0xffff;
    chip->b1[2].val = 0xffff;
    chip->b1[3].val = 0xffff;
    chip->b2[0].val = 0xffff;
    chip->b2[1].val = 0xffff;
    chip->b2[2].val = 0xffff;
    chip->b2[3].val = 0xffff;

    if (chip->w38)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[0]);
    if (chip->w37)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[0]);
    if (chip->w36)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[1]);
    if (chip->w35)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[1]);
    if (chip->w34)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[2]);
    if (chip->w33)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[2]);
    if (chip->w32)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[3]);
    if (chip->w31)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[3]);
    if (chip->w30)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[4]);
    if (chip->w29)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[4]);
    if (chip->w28)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[5]);
    if (chip->w27)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[5]);
    if (chip->w26)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[6]);
    if (chip->w25)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[6]);
    if (chip->w24)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[7]);
    if (chip->w23)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[7]);
    if (chip->w22)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[8]);
    if (chip->w21)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[8]);
    if (chip->w20)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[9]);
    if (chip->w19)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[9]);
    if (chip->w18)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[10]);
    if (chip->w17)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[10]);
    if (chip->w16)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[11]);
    if (chip->w15)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[11]);
    if (chip->w14)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[12]);
    if (chip->w13)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[12]);
    if (chip->w12)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[13]);
    if (chip->w11)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[13]);
    if (chip->w10)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[14]);
    if (chip->w9)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[14]);
    if (chip->w8)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[15]);
    if (chip->w7)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[15]);
    if (chip->w6)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[16]);
    if (chip->w5)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[16]);
    if (chip->w4)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r1[17]);
    if (chip->w3)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r1[17]);

    if (chip->w87)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r2);
    if (chip->w86)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r2);

    if (chip->w101)
        M68K_RegisterLogic1(&chip->b1[2], &chip->b1[3], &chip->r3);
    if (chip->w102)
        M68K_RegisterLogic1(&chip->b1[0], &chip->b1[1], &chip->r3);

    if (chip->w155)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r4);
    if (chip->w156)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r4);

    if (chip->w179)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r5);
    if (chip->w178)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r5);

    if (chip->w235)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[0]);
    if (chip->w239)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[0]);

    if (chip->w240)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[1]);
    if (chip->w241)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[1]);

    if (chip->w242)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[2]);
    if (chip->w243)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[2]);

    if (chip->w244)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[3]);
    if (chip->w245)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[3]);

    if (chip->w246)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[4]);
    if (chip->w247)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[4]);

    if (chip->w248)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[5]);
    if (chip->w249)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[5]);

    if (chip->w250)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[6]);
    if (chip->w251)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[6]);

    if (chip->w252)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[7]);
    if (chip->w253)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[7]);

    if (chip->w254)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[8]);
    if (chip->w255)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[8]);

    if (chip->w256)
        M68K_RegisterLogic1(&chip->b2[2], &chip->b2[3], &chip->r6[9]);
    if (chip->w257)
        M68K_RegisterLogic1(&chip->b2[0], &chip->b2[1], &chip->r6[9]);

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

    v1 = chip->w42 && chip->w43 && chip->w45;
    v2 = chip->w51 && chip->w53 && chip->w39;
    if (v1 && chip->w48)
        chip->w3 = chip->w1;
    else
        chip->w3 = 0;
    if (v2 && chip->w49)
        chip->w4 = chip->w2;
    else
        chip->w4 = 0;
    if (v2 && chip->w50)
        chip->w5 = chip->w2;
    else
        chip->w5 = 0;
    if (v1 && chip->w47)
        chip->w6 = chip->w1;
    else
        chip->w6 = 0;

    v1 = chip->w42 && chip->w43 && chip->w46;
    v2 = chip->w52 && chip->w53 && chip->w39;
    if (v1 && chip->w48)
        chip->w7 = chip->w1;
    else
        chip->w7 = 0;
    if (v2 && chip->w49)
        chip->w8 = chip->w2;
    else
        chip->w8 = 0;
    if (v2 && chip->w50)
        chip->w9 = chip->w2;
    else
        chip->w9 = 0;
    if (v1 && chip->w47)
        chip->w10 = chip->w1;
    else
        chip->w10 = 0;

    v1 = chip->w42 && chip->w44 && chip->w45;
    v2 = chip->w51 && chip->w54 && chip->w39;
    if (v1 && chip->w48)
        chip->w11 = chip->w1;
    else
        chip->w11 = 0;
    if (v2 && chip->w49)
        chip->w12 = chip->w2;
    else
        chip->w12 = 0;
    if (v2 && chip->w50)
        chip->w13 = chip->w2;
    else
        chip->w13 = 0;
    if (v1 && chip->w47)
        chip->w14 = chip->w1;
    else
        chip->w14 = 0;

    v1 = chip->w42 && chip->w44 && chip->w46;
    v2 = chip->w52 && chip->w54 && chip->w39;
    if (v1 && chip->w48)
        chip->w15 = chip->w1;
    else
        chip->w15 = 0;
    if (v2 && chip->w49)
        chip->w16 = chip->w2;
    else
        chip->w16 = 0;
    if (v2 && chip->w50)
        chip->w17 = chip->w2;
    else
        chip->w17 = 0;
    if (v1 && chip->w47)
        chip->w18 = chip->w1;
    else
        chip->w18 = 0;

    v1 = chip->w41 && chip->w43 && chip->w45;
    v2 = chip->w51 && chip->w53 && chip->w40;
    if (v1 && chip->w48)
        chip->w19 = chip->w1;
    else
        chip->w19 = 0;
    if (v2 && chip->w49)
        chip->w20 = chip->w2;
    else
        chip->w20 = 0;
    if (v2 && chip->w50)
        chip->w21 = chip->w2;
    else
        chip->w21 = 0;
    if (v1 && chip->w47)
        chip->w22 = chip->w1;
    else
        chip->w22 = 0;

    v1 = chip->w43 && chip->w41 && chip->w46;
    v2 = chip->w52 && chip->w53 && chip->w40;
    if (v1 && chip->w48)
        chip->w23 = chip->w1;
    else
        chip->w23 = 0;
    if (v2 && chip->w49)
        chip->w24 = chip->w2;
    else
        chip->w24 = 0;
    if (v2 && chip->w50)
        chip->w25 = chip->w2;
    else
        chip->w25 = 0;
    if (v1 && chip->w47)
        chip->w26 = chip->w1;
    else
        chip->w26 = 0;

    v1 = chip->w41 && chip->w44 && chip->w45;
    v2 = chip->w51 && chip->w54 && chip->w40;
    if (v1 && chip->w48)
        chip->w27 = chip->w1;
    else
        chip->w27 = 0;
    if (v2 && chip->w49)
        chip->w28 = chip->w2;
    else
        chip->w28 = 0;
    if (v2 && chip->w50)
        chip->w29 = chip->w2;
    else
        chip->w29 = 0;
    if (v1 && chip->w47)
        chip->w30 = chip->w1;
    else
        chip->w30 = 0;

    v1 = chip->w41 && chip->w44 && chip->w46;
    v2 = chip->w52 && chip->w54 && chip->w40;
    if (v1 && chip->w48)
        chip->w31 = chip->w1;
    else
        chip->w31 = 0;
    if (v2 && chip->w49)
        chip->w32 = chip->w2;
    else
        chip->w32 = 0;
    if (v2 && chip->w50 && chip->tm_w11)
        chip->w33 = chip->w2;
    else
        chip->w33 = 0;
    if (v1 && chip->w47 && chip->tm_w11)
        chip->w34 = chip->w1;
    else
        chip->w34 = 0;
    if (v1 && chip->w47 && chip->w88)
        chip->w35 = chip->w1;
    else
        chip->w35 = 0;
    if (v2 && chip->w50 && chip->w88)
        chip->w36 = chip->w2;
    else
        chip->w36 = 0;

    if (!chip->w55 && !chip->w77)
        chip->w37 = chip->w2;
    else
        chip->w37 = 0;

    if (!chip->w58 && !chip->w75)
        chip->w38 = chip->w2;
    else
        chip->w38 = 0;

    chip->w39 = !chip->w57 && !chip->w73;
    chip->w40 = !chip->w57 && chip->w73;
    chip->w41 = chip->w68 && !chip->w60;
    chip->w42 = !chip->w68 && !chip->w60;
    chip->w43 = !chip->w67;
    chip->w44 = !!chip->w67;
    chip->w45 = !chip->w66;
    chip->w46 = !!chip->w66;
    chip->w47 = !!chip->w65;
    chip->w48 = !chip->w65;
    chip->w49 = !chip->w64;
    chip->w50 = !!chip->w64;
    chip->w51 = !chip->w63;
    chip->w52 = !!chip->w63;
    chip->w53 = !chip->w62;
    chip->w54 = !!chip->w62;

    chip->w55 = !chip->w72;
    chip->w56 = !(chip->w71 || chip->w77);
    chip->w57 = chip->w71 || chip->w72 || chip->w77;

    chip->w58 = !chip->w70;
    chip->w59 = !(chip->w69 || chip->w75);
    chip->w60 = chip->w69 || chip->w70 || chip->w75;

    chip->w61 = !chip->tm_w1;

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w62 = chip->tm_w1;
        else
            chip->w62 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w63 = chip->tm_w2;
        else
            chip->w63 = chip->tm_w1;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w64 = chip->tm_w1;
        else
            chip->w64 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w64 = chip->tm_w1;
        else
            chip->w64 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w65 = chip->tm_w2;
        else
            chip->w65 = chip->tm_w1;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w66 = chip->tm_w1;
        else
            chip->w66 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w67 = chip->tm_w2;
        else
            chip->w67 = chip->tm_w1;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w68 = chip->tm_w1;
        else
            chip->w68 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w69 = 0;
        else
            chip->w69 = chip->tm_w1;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w70 = chip->tm_w1;
        else
            chip->w70 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w71 = chip->tm_w2;
        else
            chip->w71 = 0;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w72 = chip->tm_w1;
        else
            chip->w72 = chip->tm_w2;
    }

    if (chip->tm_w3)
    {
        if (chip->w61)
            chip->w73 = chip->tm_w2;
        else
            chip->w73 = chip->tm_w1;
    }

    chip->w74 = !chip->tm_w1;

    if (chip->tm_w3)
        chip->w75 = !(chip->w74 || chip->tm_w1);

    chip->w76 = !chip->tm_w1;

    if (chip->tm_w3)
        chip->w77 = !(chip->tm_w1 || chip->w76);

    chip->w78 = !(chip->w74 || chip->w76);

    chip->w79 = chip->tm_w1 ? 0 : chip->tm_w2;

    chip->w80 = chip->w81 ? chip->tm_w2 : 0;

    chip->w81 = !(chip->tm_w1 || !chip->tm_w2);

    chip->w82 = chip->w83 ? chip->tm_w2 : 0;

    chip->w83 = !(!chip->tm_w1 || chip->tm_w2);

    chip->w84 = chip->w85 ? chip->tm_w2 : 0;

    chip->w85 = !(!chip->tm_w1 || !chip->tm_w2);

    chip->w86 = chip->w56 ? 0 : chip->w2;

    chip->w87 = chip->w59 ? 0 : chip->w1;

    chip->w88 = !chip->tm_w1;

    chip->w89 = !(!chip->tm_w1 || chip->tm_w2);
    chip->w90 = !(!chip->tm_w1 || !chip->tm_w2);
    chip->w91 = !(chip->tm_w1 || !chip->tm_w2);

    chip->w92 = chip->w90 ? chip->tm_w1 : 0;
    chip->w93 = chip->w91 ? chip->tm_w1 : 0;
    chip->w94 = chip->w89 ? chip->tm_w1 : 0;

    if (chip->tm_w2)
        chip->l5 = chip->tm_w1;
    chip->w95 = chip->l5 ? chip->tm_w3 : 0;
    if (chip->tm_w1)
        chip->w95 = 0;

    chip->w96 = chip->tm_w1;
    chip->w97 = !chip->tm_w1;

    chip->w98 = chip->tm_w1;
    chip->w99 = chip->w103;
    chip->w100 = chip->w105;

    if (chip->tm_w6)
    {
        chip->l6 = chip->tm_w1;
        chip->l7 = chip->tm_w2;
        chip->l8 = chip->tm_w3;
        chip->l9 = chip->tm_w4;
        chip->l10 = chip->tm_w5;
    }

    if (chip->l7)
        chip->w101 = 0;
    else
    {
        if (!chip->l6)
            chip->w101 = chip->tm_w7;
        if (chip->l8)
            chip->w101 = chip->tm_w7;
    }

    if (chip->l9)
        chip->w102 = 0;
    else
    {
        if (!chip->l10)
            chip->w102 = chip->tm_w7;
        if (chip->l8)
            chip->w102 = chip->tm_w7;
    }

    if (chip->tm_w2)
        chip->w103 = !chip->tm_w1;
    chip->w104 = chip->w103 ? chip->tm_w3 : 0;

    if (chip->tm_w2)
        chip->w105 = !chip->tm_w1;
    chip->w106 = chip->w105 ? chip->tm_w3 : 0;

    if (chip->w95)
        chip->w109 = (~chip->w114) & 0xffff;
    if (chip->w93)
    {
        chip->b1[0].val &= chip->w109;
        chip->b1[1].val &= chip->w109 ^ 0xffff;
    }
    if (chip->w94)
    {
        chip->b1[2].val &= chip->w109;
        chip->b1[3].val &= chip->w109 ^ 0xffff;
    }

    if (chip->w80)
        chip->w107 = (~chip->b1[3].val) & 0xffff;
    else if (chip->w82)
        chip->w107 = (~chip->b1[1].val) & 0xffff;
    else if (chip->w84)
        chip->w107 = chip->w109;
    else
    {
        // FIXME: can b1[2] 'leak' into w107?
    }
    chip->w108 = (~chip->w107) & 0x80ff;

    if (chip->w79)
    {
        chip->b1[2].val &= (~chip->w107) & 0xffff;
        chip->b1[3].val &= chip->w107 & 0xffff;
    }

    if (chip->w97)
        chip->w110 = chip->w98 ? 0xffff : 0;
    else if (chip->w96)
        chip->w110 = chip->b1[3].val;

    chip->w111 = (~(chip->w110 | chip->b1[1].val)) & 0xffff;
    chip->w112 = (chip->w110 ^ chip->b1[1].val) & 0xffff;

    if (chip->tm_w2)
    {
        chip->w113[0] = 1;
        chip->w113[1] = 1;
        chip->w113[2] = 1;
        chip->w113[3] = 1;
        chip->w115[0] = 1;
        chip->w115[1] = 1;
        chip->w115[2] = 1;
        chip->w115[3] = 1;
        chip->w115[4] = 1;
        chip->w116[0] = 1;
        chip->w116[1] = 1;
        chip->w116[2] = 1;
        chip->w116[3] = 1;
        chip->w116[4] = 1;
        chip->w117[0] = 1;
        chip->w117[1] = 1;
        chip->w117[2] = 1;
        chip->w117[3] = 1;
        chip->w117[4] = 1;
    }
    else
    {
        if (chip->w139[1])
            chip->w113[0] = 0;

        if (chip->w112 & 1)
            chip->w113[1] &= chip->w113[0];
        if (chip->w111 & 1)
            chip->w113[1] = 0;

        if (chip->w112 & 2)
            chip->w113[2] &= chip->w113[1];
        if (chip->w111 & 2)
            chip->w113[2] = 0;

        if (chip->w112 & 4)
            chip->w113[3] &= chip->w113[2];
        if (chip->w111 & 4)
            chip->w113[3] = 0;

        if (chip->w112 & 8)
            chip->w115[0] &= chip->w113[3];
        if (chip->w111 & 8)
            chip->w115[0] = 0;

        chip->w118 = !(chip->w113[0] || !(chip->w112 & 1) || !(chip->w112 & 2) || !(chip->w112 & 4)
            || !(chip->w112 & 8));

        if (!chip->w115[0])
            chip->w115[1] = 0;
        if (chip->w118)
            chip->w115[1] = 0;

        if (chip->w112 & 16)
            chip->w115[2] &= chip->w115[1];
        if (chip->w111 & 16)
            chip->w115[2] = 0;

        if (chip->w112 & 32)
            chip->w115[3] &= chip->w115[2];
        if (chip->w111 & 32)
            chip->w115[3] = 0;

        if (chip->w112 & 64)
            chip->w115[4] &= chip->w115[3];
        if (chip->w111 & 64)
            chip->w115[4] = 0;

        if (chip->w112 & 128)
            chip->w116[0] &= chip->w115[4];
        if (chip->w111 & 128)
            chip->w116[0] = 0;

        chip->w119 = !(chip->w115[1] || !(chip->w112 & 16) || !(chip->w112 & 32) || !(chip->w112 & 64)
            || !(chip->w112 & 128));

        chip->w120 = !(chip->w113[0] || !(chip->w112 & 1) || !(chip->w112 & 2) || !(chip->w112 & 4)
            || !(chip->w112 & 8) || !(chip->w112 & 16) || !(chip->w112 & 32) || !(chip->w112 & 64)
            || !(chip->w112 & 128));

        if (!chip->w116[0])
            chip->w116[1] = 0;
        if (chip->w119)
            chip->w116[1] = 0;
        if (chip->w120)
            chip->w116[1] = 0;

        if (chip->w112 & 256)
            chip->w116[2] &= chip->w116[1];
        if (chip->w111 & 256)
            chip->w116[2] = 0;

        if (chip->w112 & 512)
            chip->w116[3] &= chip->w116[2];
        if (chip->w111 & 512)
            chip->w116[3] = 0;

        if (chip->w112 & 1024)
            chip->w116[4] &= chip->w116[3];
        if (chip->w111 & 1024)
            chip->w116[4] = 0;

        if (chip->w112 & 2048)
            chip->w117[0] &= chip->w116[4];
        if (chip->w111 & 2048)
            chip->w117[0] = 0;

        chip->w121 = !(chip->w116[1] || !(chip->w112 & 256) || !(chip->w112 & 512) || !(chip->w112 & 1024)
            || !(chip->w112 & 2048));

        chip->w122 = !(chip->w113[0] || !(chip->w112 & 1) || !(chip->w112 & 2) || !(chip->w112 & 4)
            || !(chip->w112 & 8) || !(chip->w112 & 16) || !(chip->w112 & 32) || !(chip->w112 & 64)
            || !(chip->w112 & 128) || !(chip->w112 & 256) || !(chip->w112 & 512) || !(chip->w112 & 1024)
            || !(chip->w112 & 2048));

        if (!chip->w117[0])
            chip->w117[1] = 0;
        if (chip->w121)
            chip->w117[1] = 0;
        if (chip->w122)
            chip->w117[1] = 0;

        if (chip->w112 & 4096)
            chip->w117[2] &= chip->w117[1];
        if (chip->w111 & 4096)
            chip->w117[2] = 0;

        if (chip->w112 & 8192)
            chip->w117[3] &= chip->w117[2];
        if (chip->w111 & 8192)
            chip->w117[3] = 0;

        if (chip->w112 & 16384)
            chip->w117[4] &= chip->w117[3];
        if (chip->w111 & 16384)
            chip->w117[4] = 0;
    }

    v1 = 0;
    for (i = 0; i < 4; i++)
        v1 |= chip->w113[i] << i;
    for (i = 1; i < 5; i++)
        v1 |= chip->w115[i] << (i + 3);
    for (i = 1; i < 5; i++)
        v1 |= chip->w116[i] << (i + 7);
    for (i = 1; i < 5; i++)
        v1 |= chip->w117[i] << (i + 11);

    chip->w114 = (chip->w112 ^ v1) & 0xffff;

    if (chip->w104)
    {
        chip->b1[0].val &= ~chip->b1[1].val;
        chip->b1[1].val &= ~chip->b1[0].val;
    }

    if (chip->w106)
    {
        chip->b1[2].val &= ~chip->b1[3].val;
        chip->b1[3].val &= ~chip->b1[2].val;
    }
    
    if (chip->tm_w1)
    {
        chip->b1[0].val = 0xffff;
        chip->b1[1].val = 0xffff;
        chip->b1[2].val = 0xffff;
        chip->b1[3].val = 0xffff;
    }

    chip->w123 = !(chip->tm_w1 || chip->tm_w2);
    if (chip->tm_w3)
        chip->w123 = 0;

    chip->w124 = !(chip->tm_w1 || chip->tm_w2);
    if (chip->tm_w3)
        chip->w124 = 0;

    chip->w125 = !(chip->tm_w1 || chip->tm_w2);
    if (chip->tm_w3)
        chip->w125 = 0;

    chip->w126 = !(chip->tm_w1 || chip->tm_w2);
    if (chip->tm_w3)
        chip->w126 = 0;

    if (chip->w123)
        chip->b1[2].val = 0;

    if (chip->w124)
        chip->b1[1].val = 0;

    if (chip->w125)
        chip->b1[0].val = 0;

    if (chip->w126)
        chip->b1[3].val = 0;

    if (chip->tm_w2)
        chip->w127 = chip->tm_w1;

    if (chip->tm_w2)
        chip->w128 = chip->tm_w1;

    chip->w129 = !chip->tm_w1;

    chip->w130 = !chip->tm_w1;
    chip->w131 = chip->tm_w1;

    if (chip->w130)
    {
        chip->w132 = chip->w129 ? 0xfffc : 0;
        chip->w132 |= chip->tm_w2 ? 2 : 0;
        chip->w132 |= chip->tm_w1 ? 1 : 0;
    }
    if (chip->w131)
        chip->w132 = chip->b2[3].val;

    chip->w133 = (~(chip->w132 | chip->b2[1].val)) & 0xffff;
    chip->w134 = (chip->w132 ^ chip->b2[1].val) & 0xffff;

    if (chip->tm_w2)
    {
        chip->w135[0] = 1;
        chip->w135[1] = 1;
        chip->w135[2] = 1;
        chip->w135[3] = 1;
        chip->w136[0] = 1;
        chip->w136[1] = 1;
        chip->w136[2] = 1;
        chip->w136[3] = 1;
        chip->w136[4] = 1;
        chip->w137[0] = 1;
        chip->w137[1] = 1;
        chip->w137[2] = 1;
        chip->w137[3] = 1;
        chip->w137[4] = 1;
        chip->w138[0] = 1;
        chip->w138[1] = 1;
        chip->w138[2] = 1;
        chip->w138[3] = 1;
        chip->w138[4] = 1;
        chip->w139[0] = 1;
        chip->w139[1] = 1;
    }
    else
    {
        chip->w135[0] = !(chip->tm_w3 && chip->tm_w4);

        if (chip->w134 & 1)
            chip->w135[1] &= chip->w135[0];
        if (chip->w133 & 1)
            chip->w135[1] = 0;

        if (chip->w134 & 2)
            chip->w135[1] &= chip->w135[0];
        if (chip->w133 & 2)
            chip->w135[1] = 0;

        if (chip->w134 & 2)
            chip->w135[2] &= chip->w135[1];
        if (chip->w133 & 2)
            chip->w135[2] = 0;

        if (chip->w134 & 4)
            chip->w135[3] &= chip->w135[2];
        if (chip->w133 & 4)
            chip->w135[3] = 0;

        if (chip->w134 & 8)
            chip->w136[0] &= chip->w135[3];
        if (chip->w133 & 8)
            chip->w136[0] = 0;

        if (!chip->w136[0])
            chip->w136[1] = 0;

        if (chip->w134 & 16)
            chip->w136[2] &= chip->w136[1];
        if (chip->w133 & 16)
            chip->w136[2] = 0;

        if (chip->w134 & 32)
            chip->w136[3] &= chip->w136[2];
        if (chip->w133 & 32)
            chip->w136[3] = 0;

        if (chip->w134 & 64)
            chip->w136[4] &= chip->w136[3];
        if (chip->w133 & 64)
            chip->w136[4] = 0;

        if (chip->w134 & 128)
            chip->w137[0] &= chip->w136[4];
        if (chip->w133 & 128)
            chip->w137[0] = 0;

        chip->w140 = !(chip->w136[1] || !(chip->w134 & 16) || !(chip->w134 & 32) ||
            !(chip->w134 & 64) || !(chip->w134 & 128));

        if (!chip->w137[0])
            chip->w137[1] = 0;
        if (chip->w140)
            chip->w137[1] = 0;

        if (chip->w134 & 256)
            chip->w137[2] &= chip->w137[1];
        if (chip->w133 & 256)
            chip->w137[2] = 0;

        if (chip->w134 & 512)
            chip->w137[3] &= chip->w137[2];
        if (chip->w133 & 512)
            chip->w137[3] = 0;

        if (chip->w134 & 1024)
            chip->w137[4] &= chip->w137[3];
        if (chip->w133 & 1024)
            chip->w137[4] = 0;

        if (chip->w134 & 2048)
            chip->w138[0] &= chip->w137[4];
        if (chip->w133 & 2048)
            chip->w138[0] = 0;

        chip->w141 = !(chip->w136[1] || !(chip->w134 & 16) || !(chip->w134 & 32) ||
            !(chip->w134 & 64) || !(chip->w134 & 128) || !(chip->w134 & 256) || !(chip->w134 & 512) ||
            !(chip->w134 & 1024) || !(chip->w134 & 2048));
        chip->w142 = !(chip->w137[1] || !(chip->w134 & 256) || !(chip->w134 & 512) ||
            !(chip->w134 & 1024) || !(chip->w134 & 2048));

        if (!chip->w138[0])
            chip->w138[1] = 0;
        if (chip->w141)
            chip->w138[1] = 0;
        if (chip->w142)
            chip->w138[1] = 0;

        if (chip->w134 & 4096)
            chip->w138[2] &= chip->w138[1];
        if (chip->w134 & 4096)
            chip->w138[2] = 0;

        if (chip->w134 & 8192)
            chip->w138[3] &= chip->w138[2];
        if (chip->w134 & 8192)
            chip->w138[3] = 0;

        if (chip->w134 & 16384)
            chip->w138[4] &= chip->w138[3];
        if (chip->w134 & 16384)
            chip->w138[4] = 0;

        if (chip->w134 & 32768)
            chip->w139[0] &= chip->w138[4];
        if (chip->w133 & 32768)
            chip->w139[0] = 0;

        chip->w143 = !(chip->w136[1] || !(chip->w134 & 16) || !(chip->w134 & 32) ||
            !(chip->w134 & 64) || !(chip->w134 & 128) || !(chip->w134 & 256) || !(chip->w134 & 512) ||
            !(chip->w134 & 1024) || !(chip->w134 & 2048) || !(chip->w134 & 4096) || !(chip->w134 & 8192) ||
            !(chip->w134 & 16384) || !(chip->w134 & 32768));
        chip->w144 = !(chip->w138[1] || !(chip->w134 & 4096) || !(chip->w134 & 8192) ||
            !(chip->w134 & 16384) || !(chip->w134 & 32768));

        chip->w139[1] = 1;
        if (!chip->w139[0])
            chip->w139[1] = 0;
        if (chip->w143)
            chip->w139[1] = 0;
        if (chip->w144)
            chip->w139[1] = 0;
    }

    v1 = 0;
    for (i = 0; i < 4; i++)
        v1 |= chip->w135[i] << i;
    for (i = 1; i < 5; i++)
        v1 |= chip->w136[i] << (i + 3);
    for (i = 1; i < 5; i++)
        v1 |= chip->w137[i] << (i + 7);
    for (i = 1; i < 5; i++)
        v1 |= chip->w138[i] << (i + 11);

    chip->w145 = (chip->w112 ^ v1) & 0xffff;

    if (chip->tm_w2)
        chip->l11 = chip->tm_w1;
    chip->w148 = chip->l11 ? chip->tm_w3 : 0;
    if (chip->tm_w2)
        chip->w148 = 0;
    chip->w149 = !(!chip->tm_w1 || chip->tm_w2);
    chip->w150 = !(chip->tm_w1 || !chip->tm_w2);
    chip->w151 = !(!chip->tm_w1 || !chip->tm_w2);
    chip->w152 = chip->w149 ? chip->tm_w1 : 0;
    chip->w153 = chip->w150 ? chip->tm_w1 : 0;
    chip->w154 = chip->w151 ? chip->tm_w1 : 0;
    chip->w155 = chip->tm_w1 ? 0 : chip->tm_w2;
    chip->w156 = chip->tm_w1 ? 0 : chip->tm_w2;

    if (chip->w148)
        chip->w147 = (~chip->w145) & 0xffff;
    if (chip->w153)
    {
        chip->b2[0].val &= chip->w147;
        chip->b2[1].val &= chip->w147 ^ 0xffff;
    }
    if (chip->w152)
    {
        chip->b2[2].val &= chip->w147;
        chip->b2[3].val &= chip->w147 ^ 0xffff;
    }

    chip->w157 = (chip->w147 & 63) == 0;

    chip->w164 = !(!chip->tm_w1 || !chip->tm_w2);
    chip->w165 = !(!chip->tm_w1 || chip->tm_w2);
    chip->w166 = !(chip->tm_w1 || !chip->tm_w2);

    chip->w160 = chip->w164 ? chip->tm_w1 : 0;
    chip->w161 = chip->w165 ? chip->tm_w1 : 0;
    chip->w162 = chip->w166 ? chip->tm_w1 : 0;
    chip->w163 = chip->tm_w1 ? 0 : chip->tm_w2;

    if (chip->w160)
        chip->w158 = chip->w147;
    else if (chip->w161)
        chip->w158 = (~chip->b2[1].val) & 0xffff;
    else if (chip->w162)
        chip->w158 = (~chip->b2[3].val) & 0xffff;
    else
    {
        // TODO
    }
    chip->w159 = (~chip->w158) & 0xffff;

    if (chip->w163)
    {
        chip->b2[2].val &= (~chip->w158) & 0xffff;
        chip->b2[3].val &= chip->w158 & 0xffff;
    }

    chip->w167 = chip->tm_w1 ? chip->tm_w2 : 0;
    chip->w168 = chip->tm_w1 ? chip->tm_w2 : 0;

    if (chip->w168)
        chip->w169 = chip->b2[2].val;
    if (chip->w167)
        chip->w169 &= (~chip->w173) & 0xffff;

    chip->w170 = (chip->w169 & 0xffff) == 0;

    if (chip->tm_w1)
        chip->w171 = (~chip->w169) & 0xffff;

    if (chip->tm_w1)
    {
        chip->w172 = 0xffff;
    }
    else
    {
        v1 = 0;
        v2 = 0;
        for (i = 0; i < 16; i++)
        {
            int bit = (chip->w172 >> i) & 1;
            if (chip->w171 & (1<<i))
                bit &= v1;
            v2 |= bit << i;
            v1 = bit;
        }
        chip->w172 = v2;
    }
    chip->w173 = (~((chip->w172 << 1) | chip->w171)) & 0xffff;

    chip->w174 = (chip->w173 & 0x5555) == 0;
    chip->w175 = (chip->w173 & 0x3333) == 0;
    chip->w176 = (chip->w173 & 0x0f0f) == 0;
    chip->w177 = (chip->w173 & 0x00ff) == 0;

    chip->w178 = chip->tm_w1 ? (chip->tm_w2 ? chip->tm_w4 : chip->tm_w3) : 0;
    chip->w179 = chip->tm_w1 ? (chip->tm_w2 ? chip->tm_w4 : chip->tm_w3) : 0;

    chip->w180 = chip->tm_w1;
    chip->w181 = chip->tm_w1 ? chip->tm_w2 : 0;

    if (chip->w180)
        chip->w182 = chip->r5;

    chip->w183 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;
    chip->w184 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;

    chip->w185 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w186 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w187 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;
    chip->w188 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;

    chip->w189 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;
    chip->w190 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;

    chip->w191 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;
    chip->w192 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;

    chip->w193 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w194 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w195 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w196 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w197 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w198 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w199 = chip->tm_w1;

    chip->w200 = chip->tm_w1;

    chip->w201 = chip->tm_w1;

    chip->w202 = chip->tm_w1;

    chip->w203 = chip->tm_w1;

    chip->w204 = chip->tm_w1;

    chip->w205 = chip->tm_w1;

    chip->w206 = chip->tm_w1;

    chip->w207 = chip->tm_w1;
    chip->w208 = chip->tm_w2;

    chip->w209 = chip->tm_w1;

    chip->w210 = chip->tm_w1;

    chip->w211 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w212 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w213 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w214 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w215 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w216 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w217 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w218 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w219 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w220 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w221 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w222 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4;

    chip->w223 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w224 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4 && chip->tm_w5;
    chip->w225 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4 && chip->tm_w6;

    chip->w226 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3;
    chip->w227 = chip->tm_w1 && chip->tm_w2 && chip->tm_w4 && chip->tm_w5;

    chip->w228 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3 && chip->tm_w4;

    if (chip->tm_w2)
        chip->w229 = chip->tm_w1;

    chip->w230 = !((chip->tm_w1 && chip->tm_w2 && chip->tm_w3) || chip->w229);

    if (chip->tm_w2)
        chip->w231 = chip->tm_w1;

    if (chip->tm_w2)
        chip->w232 = chip->tm_w1;

    chip->w233 = !(chip->w231 || chip->w232);
    chip->w234 = !(chip->w232 || !chip->w231);

    if (chip->w232)
        chip->w235 = 0;
    if (chip->w233)
        chip->w235 = chip->tm_w1;
    if (chip->w234)
        chip->w235 = chip->tm_w2;

    if (chip->tm_w2)
        chip->w238 = chip->tm_w1;

    chip->w236 = !(!chip->w231 || chip->w238);
    chip->w237 = !(chip->w238 || chip->w231);

    if (chip->w238)
        chip->w239 = 0;
    if (chip->w237)
        chip->w239 = chip->tm_w1;
    if (chip->w236)
        chip->w239 = chip->tm_w2;

    chip->w240 = chip->w228 ? chip->tm_w1 : 0;

    chip->w241 = chip->w225 ? chip->tm_w1 : 0;

    chip->w242 = chip->w224 ? chip->tm_w1 : 0;

    chip->w243 = chip->w227 ? chip->tm_w1 : 0;

    chip->w244 = chip->w226 ? chip->tm_w1 : 0;

    chip->w245 = chip->w223 ? chip->tm_w1 : 0;

    chip->w246 = chip->w216 ? chip->tm_w1 : 0;

    chip->w247 = chip->w222 ? chip->tm_w1 : 0;

    chip->w248 = chip->w221 ? chip->tm_w1 : 0;

    chip->w249 = chip->w215 ? chip->tm_w1 : 0;

    chip->w250 = chip->w214 ? chip->tm_w1 : 0;

    chip->w251 = chip->w220 ? chip->tm_w1 : 0;

    chip->w252 = chip->w219 ? chip->tm_w1 : 0;

    chip->w253 = chip->w213 ? chip->tm_w1 : 0;

    chip->w254 = chip->w212 ? chip->tm_w1 : 0;

    chip->w255 = chip->w218 ? chip->tm_w1 : 0;

    chip->w256 = chip->w217 ? chip->tm_w1 : 0;

    chip->w257 = chip->w211 ? chip->tm_w1 : 0;

    if (chip->tm_w1)
    {
        chip->b2[0].val &= ~chip->b2[1].val;
        chip->b2[1].val &= ~chip->b2[0].val;
        chip->b2[2].val &= ~chip->b2[3].val;
        chip->b2[3].val &= ~chip->b2[2].val;
    }

    if (chip->w38)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[0]);
    if (chip->w37)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[0]);
    if (chip->w36)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[1]);
    if (chip->w35)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[1]);
    if (chip->w34)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[2]);
    if (chip->w33)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[2]);
    if (chip->w32)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[3]);
    if (chip->w31)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[3]);
    if (chip->w30)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[4]);
    if (chip->w29)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[4]);
    if (chip->w28)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[5]);
    if (chip->w27)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[5]);
    if (chip->w26)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[6]);
    if (chip->w25)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[6]);
    if (chip->w24)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[7]);
    if (chip->w23)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[7]);
    if (chip->w22)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[8]);
    if (chip->w21)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[8]);
    if (chip->w20)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[9]);
    if (chip->w19)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[9]);
    if (chip->w18)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[10]);
    if (chip->w17)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[10]);
    if (chip->w16)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[11]);
    if (chip->w15)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[11]);
    if (chip->w14)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[12]);
    if (chip->w13)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[12]);
    if (chip->w12)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[13]);
    if (chip->w11)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[13]);
    if (chip->w10)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[14]);
    if (chip->w9)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[14]);
    if (chip->w8)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[15]);
    if (chip->w7)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[15]);
    if (chip->w6)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[16]);
    if (chip->w5)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[16]);
    if (chip->w4)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r1[17]);
    if (chip->w3)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r1[17]);


    if (chip->w87)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r2);
    if (chip->w86)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r2);
    if (chip->w92)
        chip->r2 = chip->w109;


    if (chip->w101)
        M68K_RegisterLogic(&chip->b1[2], &chip->b1[3], &chip->r3);
    if (chip->w102)
        M68K_RegisterLogic(&chip->b1[0], &chip->b1[1], &chip->r3);


    if (chip->w155)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r4);
    if (chip->w156)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r4);
    if (chip->w154)
        chip->r4 = chip->w147;

    if (chip->w179)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r5);
    if (chip->w178)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r5);
    if (chip->w181)
        chip->r5 = chip->w182;

    if (chip->w235)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[0]);
    if (chip->w239)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[0]);

    if (chip->w240)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[1]);
    if (chip->w241)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[1]);

    if (chip->w242)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[2]);
    if (chip->w243)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[2]);

    if (chip->w244)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[3]);
    if (chip->w245)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[3]);

    if (chip->w246)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[4]);
    if (chip->w247)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[4]);

    if (chip->w248)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[5]);
    if (chip->w249)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[5]);

    if (chip->w250)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[6]);
    if (chip->w251)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[6]);

    if (chip->w252)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[7]);
    if (chip->w253)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[7]);

    if (chip->w254)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[8]);
    if (chip->w255)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[8]);

    if (chip->w256)
        M68K_RegisterLogic(&chip->b2[2], &chip->b2[3], &chip->r6[9]);
    if (chip->w257)
        M68K_RegisterLogic(&chip->b2[0], &chip->b2[1], &chip->r6[9]);

    chip->w266 = chip->i_vpa == state_test;

    if (clk1)
    {
        chip->o_e = !chip->w258;
        chip->w259[0] = (chip->w259[1] << 1) | chip->w262;
        if (chip->w260)
            chip->w259[0] = 15;

        chip->w261[1] = chip->w261[0];

        chip->w268[1] = chip->w268[0];

        chip->w269[1] = chip->w269[0];

        chip->w270[0] = 7;

        if (chip->w270[1] == 7 && !chip->tm_w1 && chip->w268[2] && !chip->w269[2])
        {
            chip->w270[0] &= 6;
        }

        if (chip->w270[1] == 1 && chip->w268[2])
        {
            chip->w270[0] &= 4;
        }

        if (chip->w270[1] == 4)
        {
            chip->w270[0] &= 2;
        }

        if (chip->w270[1] == 2 && chip->w268[2])
        {
            chip->w270[0] &= 2;
        }

        if (chip->w270[1] == 6)
        {
            chip->w270[0] = 0;
        }

        if (chip->w270[1] == 0 && chip->w268[2] && !chip->w269[2])
        {
            chip->w270[0] = 0;
        }

        if (chip->w270[1] == 7 && !chip->tm_w1 && chip->w269[2])
        {
            chip->w270[0] &= 1;
        }

        if (chip->w270[1] == 5 && chip->w269[2])
        {
            chip->w270[0] &= 1;
        }

        if (chip->w270[1] == 1 && !chip->w268[2] && chip->w269[2])
        {
            chip->w270[0] &= 1;
        }

        if (chip->w270[1] == 2 && !chip->w268[2] && chip->w269[2])
        {
            chip->w270[0] &= 5;
        }

        if (chip->w270[1] == 2 && chip->w268[2] && !chip->w269[2])
        {
            chip->w270[0] &= 5;
        }

        if (chip->w270[1] == 0 && chip->w269[2])
        {
            chip->w270[0] &= 5;
        }

        if (chip->w270[1] == 5 && chip->w268[2])
        {
            chip->w270[0] &= 1;
        }

        if (chip->w270[1] == 5 && !chip->w268[2] && !chip->w269[2])
        {
            chip->w270[0] &= 5;
        }

        if (chip->w270[1] == 0)
        {
            chip->w270[0] = 0;
        }

        chip->w275[1] = chip->w275[0];

        chip->w276[1] = chip->w276[0];

        chip->w277[0] = chip->tm_w1;
        chip->w277[2] = chip->w277[1];
        chip->w277[4] = chip->w277[3];

        chip->w278 = (chip->w275[2] && chip->w276[2]) || (chip->w275[2] && chip->tm_w1 && chip->w277[5]);

        if (chip->w278)
            chip->w279[0] = 0;
        chip->w279[1] = chip->w279[0];

        chip->w281[0] = chip->tm_w1;
        if (chip->w278)
            chip->w281[1] = 0;

        if (chip->w286)
            chip->w284[0] = 1;
        if (chip->w278)
            chip->w284[0] = 0;
        chip->w284[1] = chip->w284[0];

        chip->w290 = chip->w291;

        chip->w294[0] = chip->w435[2];

        chip->w296[1] = chip->w296[0];
        chip->w296[3] = chip->w296[2];
        chip->w297[1] = chip->w297[0];
        chip->w297[3] = chip->w297[2];
        chip->w298[1] = chip->w298[0];
        chip->w298[3] = chip->w298[2];
        chip->w299 = !chip->w296[3];
        chip->w301 = !chip->w297[3];
        chip->w303 = !chip->w298[3];

        chip->w315[0] = !chip->w314;

        chip->w343[1] = chip->w343[0];

        chip->w359[1] = chip->w359[0];

        chip->w359[2] = chip->w359[3];

        chip->w363 = !((chip->w395 && chip->w418[1]) || chip->w364[1] || !chip->w383);

        chip->w364[0] = chip->w397 && chip->w389[0];

        chip->w366 = !(chip->w367 || chip->w365);

        chip->w368 = !(chip->w367 || chip->tm_w2);

        chip->w369 = chip->w391;

        chip->w370 = chip->w391;

        chip->w371 = !(chip->w389[1] || chip->w372 || !chip->w386);

        chip->w373 = !chip->w365;

        chip->w374 = !(chip->w389[2] || !chip->w384);

        chip->w378 = !(!chip->w388 || (chip->w389[7] && chip->w397) || chip->w267);

        chip->w379 = !(chip->w267 || chip->w397 || chip->tm_w3);

        chip->w380 = !(chip->w267 || !chip->w391 || !chip->w387);

        chip->w398 = !(!chip->w397 || chip->w381 || chip->w267);

        chip->w414[0] = chip->w394;

        chip->w414[2] = chip->w414[1];

        chip->w415 = chip->w402;

        chip->w417 = chip->w265;

        chip->w435[1] = chip->w435[0];

        chip->w436[0] = chip->w435[2];

        chip->w439[0] = chip->w400;
    }
    if (clk2)
    {
        if ((chip->w259[0] & 15) == 6)
            chip->w258 = 0;
        else if ((chip->w259[0] & 15) == 8)
            chip->w258 = 1;
        chip->w259[1] = chip->w259[0];

        chip->w260 = chip->w261[1] || (chip->w259[0] & 15) == 6 || (chip->w259[0] & 15) == 0;
        chip->w261[0] = chip->w266;

        chip->w262 = (chip->w259[0] & 12) == 8 || (chip->w259[0] & 12) == 4;

        if ((chip->w259[0] & 15) == 8)
            chip->w263 = 1;
        else if ((chip->w259[0] & 15) == 9 && chip->w343[2] && chip->w400)
            chip->w263 = 0;

        if ((chip->w259[0] & 15) == 8)
            chip->w264 = 1;
        else if ((chip->w259[0] & 15) == 12 && !chip->w263)
            chip->w264 = 0;

        chip->w267 = chip->w266;

        chip->w268[0] = !chip->i_br;
        chip->w268[2] = chip->w268[1];

        chip->w269[0] = !chip->i_br;
        chip->w269[2] = chip->w269[1];

        chip->w273 = chip->w268[2];
        chip->w274 = chip->w269[2];

        chip->w270[1] = chip->w270[0];

        chip->o_bg = chip->w270[0] & 1;

        chip->w275[0] = !chip->i_reset;
        chip->w275[2] = chip->w275[1];

        chip->w276[0] = !chip->i_halt;
        chip->w276[2] = chip->w276[1];

        chip->w277[1] = chip->w277[0];
        chip->w277[3] = chip->w277[2];
        chip->w277[5] = chip->w277[4];

        chip->w279[0] = chip->tm_w1;
        if (chip->w278)
            chip->w279[1] = 0;

        if (chip->w278)
            chip->w281[0] = 0;
        chip->w281[1] = chip->w281[0];

        chip->w284[0] = 0;
        if (chip->w286)
            chip->w284[1] = 1;
        if (chip->w278)
            chip->w284[1] = 0;

        chip->w287 = chip->w285;
        chip->w289 = chip->w288;

        chip->w294[1] = chip->w294[0];

        chip->w296[0] = !chip->i_ipl0;
        chip->w296[2] = chip->w296[1];

        chip->w297[0] = !chip->i_ipl1;
        chip->w297[2] = chip->w297[1];

        chip->w298[0] = !chip->i_ipl2;
        chip->w298[2] = chip->w298[1];

        chip->w308 = !chip->w307;

        chip->w312 = !chip->w305;

        chip->w314 = !chip->w306;
        chip->w315[1] = chip->w315[0];

        chip->w317 = chip->w305;

        chip->w343[0] = !chip->i_vpa;
        chip->w343[2] = chip->w343[0];

        chip->w359[0] = !chip->i_dtack;
        chip->w359[2] = chip->w359[1];

        chip->w364[1] = chip->w364[0];

        chip->w367 = !chip->w387;

        chip->w383 = chip->w382;

        chip->w384 = chip->w374 || chip->w373;

        chip->w386 = chip->w385;

        chip->w387 = chip->w376;

        chip->w388 = chip->w377;

        chip->w401 = chip->w377;

        chip->w404 = chip->w403;

        chip->w410 = !chip->w377;

        chip->w414[1] = chip->w414[0];

        chip->w435[0] = !chip->i_berr;
        chip->w435[2] = chip->w435[1];

        chip->w436[1] = chip->w436[0];

        chip->w439[1] = !chip->w439[0];
    }

    chip->w359[3] = chip->w359[2] && !chip->w343[2];
    chip->w360 = chip->w359[3];

    if (!chip->w279[1])
        chip->w280 = 0;
    else if (chip->w279[1] && !chip->w278)
        chip->w280 = 1;

    if (!chip->w281[1])
        chip->w282 = 0;
    else if (chip->w281[1] && !chip->w278)
        chip->w282 = 1;

    t1 = chip->w284[1] || chip->tm_w1;
    if (!t1)
        chip->w285 = 0;
    else if (t1 && !chip->w278)
        chip->w285 = 1;

    chip->w265 = !chip->w264 || (!chip->w343[2] && (chip->w435[2] || chip->w292));

    chip->o_reset = chip->tm_w1 ? state_z : state_1;

    chip->w286 = !(chip->tm_w1 || chip->w287 || chip->w289 || clk2 || chip->tm_w5 || chip->w435[2]);


    chip->w288 = !(chip->w290 || chip->w280 || chip->w285);

    if (chip->tm_w1)
        chip->w292 = 1;
    else if (chip->tm_w2 && chip->w340)
        chip->w292 = 0;

    chip->w293 = chip->tm_w1 && chip->w294[1] && chip->w325 && chip->w351;

    chip->w291 = !(chip->w293 || chip->w278 || chip->w292);

    chip->w295 = chip->i_ipl0;
    chip->o_ipl0 = state_z;
    if (chip->w297[2] && chip->w298[2] && chip->w266)
    {
        chip->w295 = 0;
        chip->o_ipl0 = state_0;
    }


    chip->o_ipl1 = (chip->w295 && chip->w266) ? state_0 : state_z;
    chip->o_ipl2 = (chip->w295 && chip->w266) ? state_0 : state_z;
    chip->o_berr = (chip->w295 && chip->w266) ? state_0 : state_z;

    chip->w300 = !((chip->w296[2] && chip->w296[3]) || (!chip->w296[2] && !chip->w296[3]));
    chip->w302 = !((chip->w297[2] && chip->w297[3]) || (!chip->w297[2] && !chip->w297[3]));
    chip->w304 = !((chip->w298[2] && chip->w298[3]) || (!chip->w298[2] && !chip->w298[3]));

    // interrupt priority comparator
    chip->w305 = 1;
    t2 = chip->w299 | (chip->w301 << 1) | (chip->w303 << 2);
    t3 = chip->tm_w1 | (chip->tm_w2 << 1) | (chip->tm_w3 << 2);
    if ((t2 & 5) == 0 && (t3 & 3) == 0)
        chip->w305 = 0;
    else if ((t2 & 7) == 0 && (t3 & 1) == 0)
        chip->w305 = 0;
    else if ((t2 & 4) == 0 && (t3 & 4) == 0)
        chip->w305 = 0;
    else if ((t2 & 2) == 0 && (t3 & 6) == 0)
        chip->w305 = 0;
    else if ((t2 & 3) == 0 && (t3 & 5) == 0)
        chip->w305 = 0;
    else if ((t2 & 1) == 0 && (t3 & 7) == 0)
        chip->w305 = 0;
    else if ((t2 & 6) == 0 && (t3 & 2) == 0)
        chip->w305 = 0;

    chip->w306 = (t2 & 7) == 0;
    chip->w307 = !(chip->w302 || chip->w304 || chip->w300);

    chip->w309 = !(chip->w310 || chip->w311 || chip->w318 || chip->w308);
    chip->w310 = !(chip->w313 || chip->w309 || chip->w316);
    chip->w311 = !(chip->w308 || clk2 || chip->w312 || chip->w306);
    chip->w313 = !(chip->w314 || clk2 || chip->w315[1] || chip->w308);
    chip->w316 = !(chip->w308 || clk2 || chip->w317);
    chip->w318 = !(chip->w321 || clk2 || chip->w319 || chip->w325 || chip->w320);

    if (chip->w328)
    {
        chip->w319 = chip->w299;
        chip->w320 = chip->w301;
        chip->w321 = chip->w303;
    }
    if (chip->w278)
    {
        chip->w319 = 0;
        chip->w320 = 0;
        chip->w321 = 0;
    }

    if (chip->w330)
    {
        chip->w322 = !chip->w522[15] && (chip->tm_w3 || chip->w522[16]);
        chip->w323 = !chip->w522[16] && (chip->w522[15] || !chip->tm_w3);
        chip->w324 = !chip->tm_w1;
    }

    chip->w325 = chip->w322 || chip->w323 || chip->w324;

    if (chip->c1)
        chip->w326 = chip->w522[0];

    chip->w327 = !(chip->w326 || chip->w267);

    chip->w328 = chip->w327 ? 0 : chip->c2;

    // TODO
    if (clk1)
    {
        chip->c1 = chip->c1_l;
        chip->c2_l = chip->w285;
        chip->c3_l = chip->w280;
        chip->c4 = chip->c4_l;
        chip->c5_l = chip->w288;
    }
    else
    {
        chip->c1 = 0;
        chip->c4 = 0;
    }
    if (clk2)
    {
        chip->c1_l = !chip->w282;
        chip->c2 = chip->c2_l;
        chip->c3 = chip->c3_l;
        chip->c4_l = chip->w282;
        chip->c5 = chip->c5_l;
    }
    else
    {
        chip->c2 = 0;
        chip->c3 = 0;
        chip->c5 = 0;
    }

    chip->w330 = chip->w567 ? 0 : chip->c2;

    if (chip->w409)
    {
        chip->o_fc0 = state_z;
        chip->o_fc1 = state_z;
        chip->o_fc2 = state_z;
    }
    else
    {
        chip->o_fc0 = !chip->w322;
        chip->o_fc1 = !chip->w323;
        chip->o_fc2 = !chip->w324;
    }

    chip->w331 = !chip->w323;
    chip->w332 = !chip->w322;

    chip->w333 = !chip->w567;

    chip->w334 = !(chip->w522[16] || chip->w333 || !chip->w522[15]);

    if (chip->c2)
        chip->w335 = !chip->w334;
    else if (clk1)
        chip->w335 = chip->w336;

    chip->w336 = chip->w335 || chip->w278;

    chip->w337 = !(chip->w333 || chip->w522[15] || !chip->w522[16]);

    if (chip->c2)
        chip->w338 = !chip->w334;
    else if (clk1)
        chip->w338 = chip->w339;

    chip->w339 = chip->w338 || chip->w278;

    chip->w340 = !chip->w400;
    chip->w341 = (!chip->w403 || chip->w340 || clk1 || chip->c2);

    if (chip->c1)
        chip->w342 = chip->w325 || chip->w267 || !chip->w343[2];

    if (clk1)
        chip->w345 = !chip->w294[1];

    if (chip->c1)
        chip->w344 = chip->w345 || chip->w267 || chip->w325;

    chip->w346 = !(!chip->w435[2] || chip->w340 || !chip->w325);
    chip->w347 = !(chip->w340 || chip->w346);

    if (chip->c1)
        chip->w349 = chip->w567;

    if (clk2)
    {
        if (chip->tm_w2)
            chip->w348 = 0;
        else if (!chip->w349)
            chip->w348 = 1;
    }

    if (clk1)
        chip->w350 = !chip->w348;

    if (clk1)
    {
        if (chip->w346 && chip->w347) { }
        else if (chip->w346)
            chip->w351 = 1;
        else if (chip->w347)
            chip->w351 = 0;
    }

    chip->w352 = !(chip->w403 || chip->w351);

    chip->w353 = !(chip->w352 || chip->tm_w2);

    chip->w354 = !chip->w352;

    chip->w355 = !(chip->c5 || chip->c3);

    if (chip->c3)
    {
        chip->w356[0] = chip->w350;
        chip->w357[0] = chip->w354;
        chip->w358[0] = chip->w353;
    }
    else if (chip->c5)
    {
        chip->w356[0] = 0;
        chip->w357[0] = 0;
        chip->w358[0] = 0;
    }
    else if (chip->w355)
    {
        chip->w356[0] = chip->w356[1];
        chip->w357[0] = chip->w357[1];
        chip->w358[0] = chip->w358[1];
    }
    chip->w356[1] = chip->w356[0];
    chip->w357[1] = chip->w357[0];
    chip->w358[1] = chip->w358[0];
    if (chip->w356[1])
    {
        chip->w357[1] = 0;
        chip->w358[1] = 0;
    }


    chip->o_rw = state_z;
    if (clk2 && !chip->tm_w1)
        chip->o_rw = 0;
    if (clk2 && chip->tm_w1 && !chip->w409)
        chip->o_rw = 1;

    if (clk2)
        chip->w362 = chip->tm_w1;
    if (chip->w362)
        chip->w361 = 0;
    if (!chip->w362 && clk1)
        chip->w361 = 1;

    chip->w365 = !(chip->w391 || chip->w389[5] || chip->w389[3] || chip->w389[4]);

    chip->w372 = !(!chip->w395 || chip->w418[1]);

    chip->w375 = !(chip->w414[2] || chip->w416 || chip->w415 || chip->w420);

    chip->w376 = chip->w369 || chip->w368 || chip->w375;

    chip->w377 = chip->w380 || chip->w379 || chip->w378;

    chip->w381 = !(chip->w389[4] || chip->w389[5]);

    chip->w382 = chip->w363 || chip->w366;

    chip->w385 = chip->w371 || chip->w370 || chip->tm_w3;

    chip->w389[0] = chip->w383 && chip->w384 && chip->w386 && !chip->w387 && !chip->w388;
    chip->w389[1] = !chip->w383 && chip->w384 && chip->w386 && !chip->w387 && !chip->w388;
    chip->w389[2] = chip->w383 && !chip->w386 && !chip->w387 && !chip->w388;
    chip->w389[3] = chip->w383 && !chip->w384 && chip->w386 && !chip->w387 && !chip->w388;
    chip->w389[4] = chip->w383 && !chip->w384 && chip->w386 && chip->w387 && !chip->w388;
    chip->w389[5] = !chip->w383 && chip->w384 && chip->w386 && chip->w387 && !chip->w388;
    chip->w389[6] = chip->w383 && chip->w384 && chip->w386 && chip->w387 && !chip->w388;
    chip->w389[7] = chip->w383 && chip->w384 && chip->w386 && chip->w387 && chip->w388;
    chip->w389[8] = !chip->w383 && chip->w384 && !chip->w387 && !chip->w388;

    chip->w390 = !chip->w389[0] && !chip->w389[1] && !chip->w389[2] && !chip->w389[3]
        && !chip->w389[4] && !chip->w389[5] && !chip->w389[6] && !chip->w389[7] && !chip->w389[8];

    chip->w391 = chip->w390 || chip->tm_w2;

    chip->w392 = chip->w389[0];

    chip->w393 = !(chip->w389[3] || chip->w389[4] || chip->w389[5]);

    chip->w394 = !(chip->w389[2] || chip->w389[8]);

    chip->w395 = chip->w389[6];

    chip->w396 = !(chip->w414[2] || chip->w415 || chip->w416);

    chip->w397 = !(chip->w267 || chip->w419 || (!chip->w421[1] && chip->w567) || chip->w426);

    chip->w399 = chip->w398 ? clk2 : 0;

    if (!chip->tm_w5 && clk1)
        chip->w400 = 1;
    if (chip->w399)
        chip->w400 = 0;
    if (chip->c2 && chip->w267)
        chip->w400 = 0;
    if (chip->tm_w5)
        chip->w400 = 0;

    chip->w402 = !(chip->w404 || chip->w422);

    chip->w403 = chip->tm_w1 && !chip->w267 && chip->w405;

    chip->w405 = !chip->tm_w1;

    chip->w407 = chip->w567 ? 0 : chip->c2;

    if (chip->w407)
        chip->w406 = !chip->w408;


    if (chip->c1)
        chip->w408 = !chip->w563;

    chip->w409 = !(chip->tm_w1 || chip->w410);

    chip->w411 = chip->tm_w1 ^ chip->tm_w2;
    chip->w412 = !chip->w411;
    chip->w413 = !chip->w405;

    chip->w416 = !(chip->w359[3] || chip->w417);

    if (chip->w407)
        chip->w418[0] = chip->w568;
    else
        chip->w418[0] = chip->w418[1];
    chip->w418[1] = chip->w418[0] && !chip->tm_w2;

    chip->w419 = !(chip->w392 || chip->w432);

    if (chip->w407)
        chip->w420 = chip->w431;

    if (chip->w407)
        chip->w421[0] = 1;
    else
        chip->w421[0] = chip->w421[1];
    chip->w421[1] = chip->w421[0] && !chip->w425 && !chip->w428;

    chip->w422 = !(chip->w428 || chip->w425 || chip->w267 || chip->w424);
    chip->w423 = !chip->w422;

    chip->w424 = chip->c2 ? chip->w441 : chip->w423;

    chip->w425 = !(chip->w393 || chip->w426 || clk2);

    chip->w426 = !(chip->w403 || chip->w427);

    chip->w427 = !(chip->w435[2] || chip->w276[2] || chip->w438);

    chip->w428 = !(clk2 || chip->w434);

    if (clk2)
        chip->w429 = chip->w396;

    chip->w430 = !(chip->w423 || chip->w429);

    chip->w431 = !(chip->w568 || chip->w546);

    chip->w432 = !(chip->w269[2] || (chip->w270[0] & 1) == 0 || chip->w268[2] || chip->w276[2]);

    chip->w433 = !(chip->w278 || (chip->w270[0] & 2) == 0 || (chip->w270[0] & 1) == 0);

    chip->w434 = !(chip->w278 || (chip->w440 && chip->w437 && chip->w436[1] && chip->w435[2]));

    chip->w437 = !(chip->w276[2] && chip->w438);

    if (chip->c2)
        chip->w438 = chip->w546;

    chip->w440 = !(chip->w439[1] || chip->w343[2]);

    chip->w441 = !(chip->w568 || !chip->w544);

    if (chip->w450)
        chip->w442[0] = 1;
    else if (chip->c1)
        chip->w442[0] = 0;
    if (chip->w450)
        chip->w443[0] = 0;
    else if (chip->c1)
        chip->w443[0] = 1;

    if (!chip->c1)
    {
        chip->w442[1] = chip->w442[0];
        chip->w443[1] = chip->w443[0];
    }

    if (chip->w443[1])
        chip->w444 = 0;
    else if (chip->w442[1])
        chip->w444 = chip->c1;

    if (chip->w444)
        chip->w445 = chip->w531;
    if (chip->w466)
        chip->codebus = chip->w445;

    if (chip->c1)
    {
        chip->w446 = chip->w477;
        chip->w447 = chip->w474;
        chip->w448 = chip->w475;
    }

    chip->w449 = chip->w448 ? chip->c3 : 0;

    chip->w450 = (chip->w446 || chip->w447) ? chip->c3 : 0;

    if (chip->w449)
    {
        chip->w451 = chip->tm_w1;
        chip->w452 = chip->tm_w1;
        chip->w453 = chip->tm_w1;
        chip->w454 = chip->tm_w1;
        chip->w455 = chip->tm_w1;
    }
    if (chip->w450)
    {
        chip->w456 = chip->tm_w1;
        chip->w457 = chip->tm_w1;
        chip->w458 = chip->tm_w1;
        chip->w459 = chip->tm_w1;
        chip->w460 = chip->w548;
        chip->w461 = chip->tm_w1;
    }

    chip->w462[0] = chip->w455;
    chip->w462[1] = !chip->w451 && !chip->w452 && !chip->w454 && !chip->w455 && !chip->w460;
    chip->w462[2] = !chip->w451 && chip->w452 && !chip->w453 && !chip->w454 && !chip->w455 && !chip->w460;
    chip->w462[3] = !chip->w451 && chip->w452 && chip->w453 && !chip->w454 && !chip->w455 && chip->w457 && !chip->w460 && chip->w461;
    chip->w462[4] = !chip->w451 && chip->w452 && chip->w453 && !chip->w454 && !chip->w455 && chip->w456 && !chip->w457 && !chip->w460 && chip->w461;
    chip->w462[5] = !chip->w451 && chip->w452 && chip->w453 && !chip->w454 && !chip->w455 && !chip->w456 && !chip->w457 && !chip->w458 && !chip->w460 && chip->w461;
    chip->w462[6] = !chip->w451 && chip->w452 && chip->w453 && !chip->w454 && !chip->w455 && !chip->w456 && !chip->w457 && chip->w458 && chip->w459 && !chip->w460 && chip->w461;
    chip->w462[7] = !chip->w451 && chip->w452 && chip->w453 && !chip->w454 && !chip->w455 && !chip->w460 && !chip->w461;
    chip->w462[8] = !chip->w451 && !chip->w454 && !chip->w455 && chip->w460;
    chip->w462[9] = chip->w451 && !chip->w455;
    chip->w462[10] = !chip->w451 && chip->w454 && !chip->w455;

    chip->w463 = !chip->w451 && !chip->w454 && !chip->w455;

    chip->w464 = 0x3ff;
    if (chip->w462[3])
        chip->w464 &= 0x1c0;
    if (chip->w462[4])
        chip->w464 &= 0x1c0;
    if (chip->w462[5])
        chip->w464 &= 0x1c0;
    if (chip->w462[6])
        chip->w464 &= 0x1c0;
    if (chip->w462[7])
        chip->w464 &= 0x1c4;
    if (chip->w462[8])
        chip->w464 &= 0x1c0;
    if (chip->w467)
        chip->codebus = chip->w464;

    chip->w465[0] = 1;
    chip->w465[1] = 1;
    chip->w465[2] = 1;
    chip->w465[3] = 1;
    chip->w465[4] = 1;
    if (chip->w462[0])
    {
        chip->w465[3] = 0;
        chip->w465[4] = 0;
    }
    if (chip->w462[1])
    {
        chip->w465[2] = 0;
        chip->w465[4] = 0;
    }
    if (chip->w462[2])
    {
        chip->w465[2] = 0;
        chip->w465[3] = 0;
    }
    if (chip->w462[3])
    {
        chip->w465[0] = 0;
        chip->w465[1] = 0;
        chip->w465[3] = 0;
        chip->w465[4] = 0;
    }
    if (chip->w462[4])
    {
        chip->w465[0] = 0;
        chip->w465[1] = 0;
        chip->w465[2] = 0;
    }
    if (chip->w462[5])
    {
        chip->w465[0] = 0;
        chip->w465[1] = 0;
        chip->w465[2] = 0;
        chip->w465[4] = 0;
    }
    if (chip->w462[6])
    {
        chip->w465[0] = 0;
        chip->w465[1] = 0;
        chip->w465[2] = 0;
        chip->w465[3] = 0;
    }
    if (chip->w462[7])
    {
        chip->w465[0] = 0;
        chip->w465[2] = 0;
        chip->w465[3] = 0;
        chip->w465[4] = 0;
    }
    if (chip->w462[8])
    {
        chip->w465[0] = 0;
        chip->w465[2] = 0;
    }
    if (chip->w462[9])
    {
        chip->w465[4] = 0;
    }
    if (chip->w462[9])
    {
        chip->w465[3] = 0;
    }

    chip->w466 = !(chip->w483 || !chip->w465[0]);
    chip->w467 = !(chip->w483 || chip->w465[0]);

    chip->w468 = !chip->w465[1];
    chip->w469 = !chip->w465[2];
    chip->w470 = !chip->w465[3];
    chip->w471 = !chip->w465[4];

    if (chip->w476)
        chip->codebus2 = chip->codebus ^ 0x3ff;

    if (chip->w482[0])
    {
        chip->codebus2 &= ~0xc0;
        chip->codebus2 |= (!chip->w472) << 6;
        chip->codebus2 |= (!chip->w473) << 7;
    }

    if (chip->w267)
    {
        chip->w472 = chip->w274;
        chip->w473 = chip->w273;
    }

    chip->w475 = !(chip->w522[1] || !chip->w522[4]);
    chip->w474 = !(!chip->w522[0] || chip->w475);

    chip->w476 = chip->w482[3] || chip->w482[4] || chip->w482[2];

    chip->w478 = !(chip->w267 && (chip->w360 || chip->w296[2]));
    chip->w477 = !chip->w478;

    if (chip->w478)
    {
        chip->w479 = chip->w522[2];
        chip->w480 = chip->w522[3];
        chip->w481 = chip->w522[1];
    }
    if (chip->w477)
    {
        chip->w479 = chip->w296[2];
        chip->w480 = chip->w360;
        chip->w481 = 0;
    }

    chip->w482[0] = chip->w481;
    chip->w482[1] = !chip->w479 && !chip->w480 && !chip->w481;
    chip->w482[2] = chip->w479 && chip->w480 && !chip->w481;
    chip->w482[3] = !chip->w479 && chip->w480 && !chip->w481;
    chip->w482[4] = chip->w479 && !chip->w480 && !chip->w481;

    chip->w483 = !chip->w482[4];

    chip->w484 = !chip->w522[5];
    chip->w485 = !chip->w522[6];

    if (chip->w482[1])
    {
        chip->codebus2 &= ~0xc0;
        chip->codebus2 |= chip->w484 << 6;
        chip->codebus2 |= chip->w485 << 7;
    }

    chip->w486 = (chip->w482[1] || chip->w482[0]) && !chip->w477;

    if (chip->w486)
    {
        chip->codebus2 &= ~0x33f;
        chip->codebus2 |= !chip->w522[11];
        chip->codebus2 |= (!chip->w522[12]) << 1;
        chip->codebus2 |= (!chip->w522[7]) << 2;
        chip->codebus2 |= (!chip->w522[8]) << 3;
        chip->codebus2 |= (!chip->w522[9]) << 4;
        chip->codebus2 |= (!chip->w522[10]) << 5;
        chip->codebus2 |= (!chip->w522[13]) << 8;
        chip->codebus2 |= (!chip->w522[14]) << 9;
    }

    chip->w487 = !((chip->codebus2 & 0x40) != 0 || chip->w508);
    chip->w488 = !((chip->codebus2 & 0x80) != 0 || chip->w508);

    if (chip->c4)
    {
        chip->w489 = chip->w487;
        chip->w490 = chip->w488;
    }

    chip->w491 = chip->w489 && !chip->w490;
    chip->w492 = !chip->w489 && !chip->w490;
    chip->w493 = chip->w489 && chip->w490;
    chip->w494 = !chip->w489 && chip->w490;

    chip->w496 = chip->w494 ? chip->c3 : 0;
    chip->w497 = chip->w493 ? chip->c3 : 0;
    chip->w498 = chip->w492 ? chip->c3 : 0;
    chip->w499 = chip->w491 ? chip->c3 : 0;

    if (chip->c2)
    {
        chip->w495 = !((chip->codebus2 & 0x08) != 0 || chip->w508);
        chip->w500 = !((chip->codebus2 & 0x04) != 0 || chip->w508);
        chip->w501 = !((chip->codebus2 & 0x20) != 0 || chip->w508);
        chip->w502 = !((chip->codebus2 & 0x10) != 0 || chip->w508);
        chip->w503 = !((chip->codebus2 & 0x100) != 0 || chip->w508);
        chip->w504 = !((chip->codebus2 & 0x200) != 0 || chip->w508);
        chip->w505 = !(((chip->codebus2 & 0x02) != 0 && chip->w507) || chip->w358);
        chip->w506 = !(((chip->codebus2 & 0x01) != 0 && chip->w507) || chip->w356);
    }

    chip->w507 = !(chip->w356 || chip->w357 || chip->w358);
    chip->w508 = !chip->w507;
    chip->w509 = !(!chip->w495 || !chip->w500);
    chip->w510 = !(!chip->w495 || chip->w500);
    chip->w511 = !(chip->w495 || !chip->w500);
    chip->w512 = !(chip->w495 || chip->w500);
    chip->w513 = !(chip->c1 || chip->c2 || !chip->w501);
    chip->w514 = !(chip->c1 || chip->c2 || chip->w501);
    chip->w515 = !(chip->w506 || chip->w505);
    chip->w516 = !(!chip->w506 || chip->w505);
    chip->w517 = !(chip->w506 || !chip->w505);
    chip->w518 = !(!chip->w506 || !chip->w505);

    if (chip->c2)
    {
        for (i = 0; i < 118; i++)
            chip->w519[i] = 1;
    }

    if (chip->w513 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[0] = 0;
    if (chip->w514 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[1] = 0;
    if (chip->w513 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[2] = 0;
    if (chip->w514 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[3] = 0;
    if (chip->w513 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[4] = 0;
    if (chip->w514 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[5] = 0;
    if (chip->w513 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[6] = 0;
    if (chip->w514 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[7] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || chip->w504)
        chip->w519[8] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || chip->w504)
        chip->w519[9] = 0;
    if (chip->w513 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[10] = 0;
    if (chip->w514 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[11] = 0;
    if (chip->w513 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[12] = 0;
    if (chip->w514 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[13] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || chip->w504)
        chip->w519[14] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || chip->w504)
        chip->w519[15] = 0;
    if (chip->w513 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[16] = 0;
    if (chip->w514 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[17] = 0;
    if (chip->w513 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[18] = 0;
    if (chip->w514 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[19] = 0;
    if (chip->w513 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[20] = 0;
    if (chip->w514 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[21] = 0;
    if (chip->w513 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[22] = 0;
    if (chip->w514 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[23] = 0;
    if (chip->w513 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[24] = 0;
    if (chip->w514 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[25] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[26] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[27] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[28] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[29] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[30] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[31] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[32] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[33] = 0;

    if (chip->w513 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[34] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[35] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[36] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[37] = 0;
    if (chip->w513 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[38] = 0;
    if (chip->w514 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[39] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[40] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[41] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[42] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[43] = 0;
    if (chip->w513 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[44] = 0;
    if (chip->w514 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[45] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[46] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[47] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[48] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[49] = 0;
    if (chip->w513 || chip->w500 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[50] = 0;
    if (chip->w514 || chip->w500 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[51] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[52] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[53] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[54] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[55] = 0;
    if (chip->w513 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[56] = 0;
    if (chip->w514 || !chip->w495 || chip->w502 || chip->w503 || chip->w504)
        chip->w519[57] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || chip->w504)
        chip->w519[58] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || chip->w504)
        chip->w519[59] = 0;
    if (chip->w513 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[60] = 0;
    if (chip->w514 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[61] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[62] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[63] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[64] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[65] = 0;
    if (chip->w513 || chip->w500 || !chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[66] = 0;
    if (chip->w514 || chip->w500 || !chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[67] = 0;
    if (chip->w513 || !chip->w500 || !chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[68] = 0;
    if (chip->w514 || !chip->w500 || !chip->w495 || !chip->w502 || !chip->w503 || chip->w504)
        chip->w519[69] = 0;
    if (!chip->w503 || chip->w504)
        chip->w519[70] = 0;
    if (!chip->w503 || chip->w504)
        chip->w519[71] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[72] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[73] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[74] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[75] = 0;

    if (chip->w513 || chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[76] = 0;
    if (chip->w514 || chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[77] = 0;
    if (chip->w513 || !chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[78] = 0;
    if (chip->w514 || !chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[79] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[80] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[81] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[82] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[83] = 0;
    if (chip->w513 || chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[84] = 0;
    if (chip->w514 || chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[85] = 0;
    if (chip->w513 || !chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[86] = 0;
    if (chip->w514 || !chip->w500 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[87] = 0;
    if (chip->w513 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[88] = 0;
    if (chip->w514 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[89] = 0;
    if (chip->w513 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[90] = 0;
    if (chip->w514 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[91] = 0;
    if (chip->w513 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[92] = 0;
    if (chip->w514 || chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[93] = 0;
    if (chip->w513 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[94] = 0;
    if (chip->w514 || !chip->w495 || !chip->w502 || chip->w503 || !chip->w504)
        chip->w519[95] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[96] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[97] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[98] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[99] = 0;
    if (chip->w513 || chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[100] = 0;
    if (chip->w514 || chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[101] = 0;
    if (chip->w513 || !chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[102] = 0;
    if (chip->w514 || !chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[103] = 0;
    if (chip->w513 || chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[104] = 0;
    if (chip->w514 || chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[105] = 0;
    if (chip->w513 || !chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[106] = 0;
    if (chip->w514 || !chip->w500 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[107] = 0;
    if (chip->w513 || chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[108] = 0;
    if (chip->w514 || chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[109] = 0;
    if (chip->w513 || !chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[110] = 0;
    if (chip->w514 || !chip->w500 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[111] = 0;
    if (chip->w513 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[112] = 0;
    if (chip->w514 || chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[113] = 0;
    if (chip->w513 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[114] = 0;
    if (chip->w514 || !chip->w495 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[115] = 0;
    if (chip->w513 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[116] = 0;
    if (chip->w514 || chip->w502 || !chip->w503 || !chip->w504)
        chip->w519[117] = 0;

    if (chip->w519[0])
        chip->w520[0] = chip->w498;
    if (chip->w519[1])
        chip->w520[1] = chip->w498;
    if (chip->w519[2])
        chip->w520[2] = chip->w499;
    if (chip->w519[3])
        chip->w520[3] = chip->w499;
    if (chip->w519[4])
        chip->w520[4] = chip->w496;
    if (chip->w519[5])
        chip->w520[5] = chip->w496;
    if (chip->w519[6])
        chip->w520[6] = chip->w497;
    if (chip->w519[7])
        chip->w520[7] = chip->w497;
    if (chip->w519[8])
        chip->w520[8] = chip->w498;
    if (chip->w519[9])
        chip->w520[9] = chip->w498;
    if (chip->w519[10])
        chip->w520[10] = chip->w498;
    if (chip->w519[11])
        chip->w520[11] = chip->w498;
    if (chip->w519[12])
        chip->w520[12] = chip->w499;
    if (chip->w519[13])
        chip->w520[13] = chip->w499;
    if (chip->w519[14])
        chip->w520[14] = chip->w497;
    if (chip->w519[15])
        chip->w520[15] = chip->w497;
    if (chip->w519[16])
        chip->w520[16] = chip->w497;
    if (chip->w519[17])
        chip->w520[17] = chip->w497;
    if (chip->w519[18])
        chip->w520[18] = chip->w498;
    if (chip->w519[19])
        chip->w520[19] = chip->w498;
    if (chip->w519[20])
        chip->w520[20] = chip->w499;
    if (chip->w519[21])
        chip->w520[21] = chip->w499;
    if (chip->w519[22])
        chip->w520[22] = chip->w496;
    if (chip->w519[23])
        chip->w520[23] = chip->w496;
    if (chip->w519[24])
        chip->w520[24] = chip->w497;
    if (chip->w519[25])
        chip->w520[25] = chip->w497;
    if (chip->w519[26])
        chip->w520[26] = chip->w498;
    if (chip->w519[27])
        chip->w520[27] = chip->w498;
    if (chip->w519[28])
        chip->w520[28] = chip->w499;
    if (chip->w519[29])
        chip->w520[29] = chip->w499;
    if (chip->w519[30])
        chip->w520[30] = chip->w496;
    if (chip->w519[31])
        chip->w520[31] = chip->w496;
    if (chip->w519[32])
        chip->w520[32] = chip->w497;
    if (chip->w519[33])
        chip->w520[33] = chip->w497;

    if (chip->w519[34])
        chip->w520[34] = chip->w498;
    if (chip->w519[35])
        chip->w520[35] = chip->w498;
    if (chip->w519[36])
        chip->w520[36] = chip->w498;
    if (chip->w519[37])
        chip->w520[37] = chip->w498;
    if (chip->w519[38])
        chip->w520[38] = chip->w498;
    if (chip->w519[39])
        chip->w520[39] = chip->w498;
    if (chip->w519[40])
        chip->w520[40] = chip->w499;
    if (chip->w519[41])
        chip->w520[41] = chip->w499;
    if (chip->w519[42])
        chip->w520[42] = chip->w499;
    if (chip->w519[43])
        chip->w520[43] = chip->w499;
    if (chip->w519[44])
        chip->w520[44] = chip->w499;
    if (chip->w519[45])
        chip->w520[45] = chip->w499;
    if (chip->w519[46])
        chip->w520[46] = chip->w496;
    if (chip->w519[47])
        chip->w520[47] = chip->w496;
    if (chip->w519[48])
        chip->w520[48] = chip->w496;
    if (chip->w519[49])
        chip->w520[49] = chip->w496;
    if (chip->w519[50])
        chip->w520[50] = chip->w496;
    if (chip->w519[51])
        chip->w520[51] = chip->w496;
    if (chip->w519[52])
        chip->w520[52] = chip->w497;
    if (chip->w519[53])
        chip->w520[53] = chip->w497;
    if (chip->w519[54])
        chip->w520[54] = chip->w497;
    if (chip->w519[55])
        chip->w520[55] = chip->w497;
    if (chip->w519[56])
        chip->w520[56] = chip->w497;
    if (chip->w519[57])
        chip->w520[57] = chip->w497;
    if (chip->w519[58])
        chip->w520[58] = chip->w498;
    if (chip->w519[59])
        chip->w520[59] = chip->w498;
    if (chip->w519[60])
        chip->w520[60] = chip->w498;
    if (chip->w519[61])
        chip->w520[61] = chip->w498;
    if (chip->w519[62])
        chip->w520[62] = chip->w499;
    if (chip->w519[63])
        chip->w520[63] = chip->w499;
    if (chip->w519[64])
        chip->w520[64] = chip->w499;
    if (chip->w519[65])
        chip->w520[65] = chip->w499;
    if (chip->w519[66])
        chip->w520[66] = chip->w499;
    if (chip->w519[67])
        chip->w520[67] = chip->w499;
    if (chip->w519[68])
        chip->w520[68] = chip->w499;
    if (chip->w519[69])
        chip->w520[69] = chip->w499;
    if (chip->w519[70])
        chip->w520[70] = chip->w497;
    if (chip->w519[71])
        chip->w520[71] = chip->w497;
    if (chip->w519[72])
        chip->w520[72] = chip->w498;
    if (chip->w519[73])
        chip->w520[73] = chip->w498;
    if (chip->w519[74])
        chip->w520[74] = chip->w498;
    if (chip->w519[75])
        chip->w520[75] = chip->w498;

    if (chip->w519[76])
        chip->w520[76] = chip->w498;
    if (chip->w519[77])
        chip->w520[77] = chip->w498;
    if (chip->w519[78])
        chip->w520[78] = chip->w498;
    if (chip->w519[79])
        chip->w520[79] = chip->w498;
    if (chip->w519[80])
        chip->w520[80] = chip->w499;
    if (chip->w519[81])
        chip->w520[81] = chip->w499;
    if (chip->w519[82])
        chip->w520[82] = chip->w499;
    if (chip->w519[83])
        chip->w520[83] = chip->w499;
    if (chip->w519[84])
        chip->w520[84] = chip->w499;
    if (chip->w519[85])
        chip->w520[85] = chip->w499;
    if (chip->w519[86])
        chip->w520[86] = chip->w499;
    if (chip->w519[87])
        chip->w520[87] = chip->w499;
    if (chip->w519[88])
        chip->w520[88] = chip->w496;
    if (chip->w519[89])
        chip->w520[89] = chip->w496;
    if (chip->w519[90])
        chip->w520[90] = chip->w496;
    if (chip->w519[91])
        chip->w520[91] = chip->w496;
    if (chip->w519[92])
        chip->w520[92] = chip->w497;
    if (chip->w519[93])
        chip->w520[93] = chip->w497;
    if (chip->w519[94])
        chip->w520[94] = chip->w497;
    if (chip->w519[95])
        chip->w520[95] = chip->w497;
    if (chip->w519[96])
        chip->w520[96] = chip->w498;
    if (chip->w519[97])
        chip->w520[97] = chip->w498;
    if (chip->w519[98])
        chip->w520[98] = chip->w498;
    if (chip->w519[99])
        chip->w520[99] = chip->w498;
    if (chip->w519[100])
        chip->w520[100] = chip->w498;
    if (chip->w519[101])
        chip->w520[101] = chip->w498;
    if (chip->w519[102])
        chip->w520[102] = chip->w498;
    if (chip->w519[103])
        chip->w520[103] = chip->w498;
    if (chip->w519[104])
        chip->w520[104] = chip->w499;
    if (chip->w519[105])
        chip->w520[105] = chip->w499;
    if (chip->w519[106])
        chip->w520[106] = chip->w499;
    if (chip->w519[107])
        chip->w520[107] = chip->w499;
    if (chip->w519[108])
        chip->w520[108] = chip->w499;
    if (chip->w519[109])
        chip->w520[109] = chip->w499;
    if (chip->w519[110])
        chip->w520[110] = chip->w499;
    if (chip->w519[111])
        chip->w520[111] = chip->w499;
    if (chip->w519[112])
        chip->w520[112] = chip->w496;
    if (chip->w519[113])
        chip->w520[113] = chip->w496;
    if (chip->w519[114])
        chip->w520[114] = chip->w496;
    if (chip->w519[115])
        chip->w520[115] = chip->w496;
    if (chip->w519[116])
        chip->w520[116] = chip->w497;
    if (chip->w519[117])
        chip->w520[117] = chip->w497;


    if (chip->c4)
    {
        for (i = 0; i < 68; i++)
            chip->w521[i] = 1;
    }

    if (chip->w516)
    {
        for (i = 0; i < 34; i++)
        {
            if (!chip->w520[i])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[117 - i][j * 4 + 3])
                    chip->w521[j] = 0;
            }
        }
    }
    if (chip->w517)
    {
        for (i = 0; i < 34; i++)
        {
            if (!chip->w520[i])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[117 - i][j * 4 + 2])
                    chip->w521[j] = 0;
            }
        }
    }
    if (chip->w518)
    {
        for (i = 0; i < 34; i++)
        {
            if (!chip->w520[i])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[117 - i][j * 4 + 1])
                    chip->w521[j] = 0;
            }
        }
    }
    if (chip->w519)
    {
        for (i = 0; i < 34; i++)
        {
            if (!chip->w520[i])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[117 - i][j * 4 + 0])
                    chip->w521[j] = 0;
            }
        }
    }

    if (chip->w512)
    {
        for (i = 0; i < 17; i++)
        {
            chip->w523[i] = chip->w521[i * 4 + 3];
        }
    }
    if (chip->w511)
    {
        for (i = 0; i < 17; i++)
        {
            chip->w523[i] = chip->w521[i * 4 + 2];
        }
    }
    if (chip->w510)
    {
        for (i = 0; i < 17; i++)
        {
            chip->w523[i] = chip->w521[i * 4 + 1];
        }
    }
    if (chip->w509)
    {
        for (i = 0; i < 17; i++)
        {
            chip->w523[i] = chip->w521[i * 4 + 0];
        }
    }

    if (chip->c3)
    {
        for (i = 0; i < 17; i++)
        {
            chip->w522[i] = !chip->w523[i];
        }
    }

    if (chip->c5)
    {
        chip->w522[15] = 0;
        chip->w522[16] = 0;
    }

    chip->w524 = !(!chip->w505 || !chip->w506);
    chip->w525 = !(chip->w505 || !chip->w506);
    chip->w526 = !(!chip->w505 || chip->w506);
    chip->w527 = !(chip->w505 || chip->w506);

    if (chip->c4)
    {
        for (i = 0; i < 68; i++)
            chip->w528[i] = 1;
    }

    if (chip->w527)
    {
        for (i = 0; i < 84; i++)
        {
            if (!chip->w520[i + 34])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[83 - i][j * 4 + 3])
                    chip->w528[j] = 0;
            }
        }
    }
    if (chip->w526)
    {
        for (i = 0; i < 84; i++)
        {
            if (!chip->w520[i + 34])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[83 - i][j * 4 + 1])
                    chip->w528[j] = 0;
            }
        }
    }
    if (chip->w525)
    {
        for (i = 0; i < 84; i++)
        {
            if (!chip->w520[i + 34])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[83 - i][j * 4 + 2])
                    chip->w528[j] = 0;
            }
        }
    }
    if (chip->w524)
    {
        for (i = 0; i < 84; i++)
        {
            if (!chip->w520[i + 34])
                continue;
            for (j = 0; j < 68; j++)
            {
                if (ucode[83 - i][j * 4 + 0])
                    chip->w528[j] = 0;
            }
        }
    }

    if (chip->c3)
    {
        for (i = 0; i < 68; i++)
        {
            chip->w529[i] = !chip->w528[i];
        }
    }
    if (chip->c5)
    {
        for (i = 0; i < 68; i++)
        {
            chip->w529[i] = 0;
        }
    }

    if (chip->tm_w2)
        chip->w530 = chip->tm_w1;

    chip->a0_pla[0] = (chip->w530 & 0xf100) == 0x0100;
    chip->a0_pla[1] = (chip->w530 & 0xd000) == 0x1000;
    chip->a0_pla[2] = (chip->w530 & 0xf1c0) == 0x4180;
    chip->a0_pla[3] = (chip->w530 & 0xf1c0) == 0x4000;
    chip->a0_pla[4] = (chip->w530 & 0xf940) == 0x4040;
    chip->a0_pla[5] = (chip->w530 & 0xff40) == 0x4a40;
    chip->a0_pla[6] = (chip->w530 & 0xb080) == 0x8000;
    chip->a0_pla[7] = (chip->w530 & 0xb040) == 0x8040;
    chip->a0_pla[8] = (chip->w530 & 0x9080) == 0x9000;
    chip->a0_pla[9] = (chip->w530 & 0x8140) == 0x8040;
    chip->a0_pla[10] = (chip->w530 & 0xf080) == 0x5000;
    chip->a0_pla[11] = (chip->w530 & 0xf040) == 0x5040;
    chip->a0_pla[12] = (chip->w530 & 0xf8c0) == 0xe0c0;

    chip->w532 = !(chip->a0_pla[0] || chip->a0_pla[1] || chip->a0_pla[2] || chip->a0_pla[3] || chip->a0_pla[4] || chip->a0_pla[5]
        || chip->a0_pla[6] || chip->a0_pla[7] || chip->a0_pla[8] || chip->a0_pla[9] || chip->a0_pla[10] || chip->a0_pla[11] || chip->a0_pla[12]);

    chip->a0_pla[13] = (chip->w530 & 0xf000) == 0x2000;
    chip->a0_pla[14] = (chip->w530 & 0xf9c0) == 0x4080;
    chip->a0_pla[15] = (chip->w530 & 0xffc0) == 0x4a80;
    chip->a0_pla[16] = (chip->w530 & 0xf0c0) == 0x5080;
    chip->a0_pla[17] = (chip->w530 & 0xa0c0) == 0x8080;
    chip->a0_pla[18] = (chip->w530 & 0x90c0) == 0x9080;
    chip->a0_pla[19] = (chip->w530 & 0x9180) == 0x9180;

    chip->w533 = !(chip->a0_pla[13] || chip->a0_pla[14] || chip->a0_pla[15] || chip->a0_pla[16] || chip->a0_pla[17]
        || chip->a0_pla[18] || chip->a0_pla[19]);

    if (chip->w450)
    {
        for (i = 20; i <= 164; i++)
        {
            chip->a0_pla[i] = 1;
        }
    }

    chip->a0_pla[20] &= (chip->w530 & 0x003f) == 0x0039 && !chip->w533;
    chip->a0_pla[21] &= (chip->w530 & 0x003f) == 0x0039 && !chip->w532;
    chip->a0_pla[22] &= (chip->w530 & 0x003f) == 0x0038 && !chip->w533;
    chip->a0_pla[23] &= (chip->w530 & 0x003f) == 0x0038 && !chip->w532;
    chip->a0_pla[24] &= (chip->w530 & 0x0038) == 0x0010 && !chip->w533;
    chip->a0_pla[25] &= (chip->w530 & 0x0038) == 0x0010 && !chip->w532;
    chip->a0_pla[26] &= (chip->w530 & 0x0038) == 0x0028 && !chip->w533;
    chip->a0_pla[27] &= (chip->w530 & 0x003f) == 0x003a && !chip->w533;
    chip->a0_pla[28] &= (chip->w530 & 0x0038) == 0x0028 && !chip->w532;
    chip->a0_pla[29] &= (chip->w530 & 0x003f) == 0x003a && !chip->w532;
    chip->a0_pla[30] &= (chip->w530 & 0x0038) == 0x0030 && !chip->w533;
    chip->a0_pla[31] &= (chip->w530 & 0x003f) == 0x003b && !chip->w533;
    chip->a0_pla[32] &= (chip->w530 & 0x0038) == 0x0030 && !chip->w532;
    chip->a0_pla[33] &= (chip->w530 & 0x003f) == 0x003b && !chip->w532;
    chip->a0_pla[34] &= (chip->w530 & 0xb1f8) == 0x8108;
    chip->a0_pla[35] &= (chip->w530 & 0xb1f8) == 0x9188;
    chip->a0_pla[36] &= (chip->w530 & 0xb1b8) == 0x9108;
    chip->a0_pla[37] &= (chip->w530 & 0xffff) == 0x4e71;
    chip->a0_pla[38] &= (chip->w530 & 0xfff8) == 0x4ac0;
    chip->a0_pla[39] &= (chip->w530 & 0xfff0) == 0x4e40;
    chip->a0_pla[40] &= (chip->w530 & 0xffff) == 0x4e76;
    chip->a0_pla[41] &= (chip->w530 & 0xf1f8) == 0x0180;
    chip->a0_pla[42] &= (chip->w530 & 0xf178) == 0x0140;
    chip->a0_pla[43] &= (chip->w530 & 0xfff8) == 0x4a80;
    chip->a0_pla[44] &= (chip->w530 & 0xf1f8) == 0x0100;
    chip->a0_pla[45] &= (chip->w530 & 0xf1f8) == 0x4180;
    chip->a0_pla[46] &= (chip->w530 & 0xf1b8) == 0xb108;
    chip->a0_pla[47] &= (chip->w530 & 0xf1f8) == 0xb188;
    chip->a0_pla[48] &= (chip->w530 & 0xf1f0) == 0xb080;
    chip->a0_pla[49] &= (chip->w530 & 0xf1f0) == 0xb1c0;
    chip->a0_pla[50] &= (chip->w530 & 0xf1f0) == 0xb0c0;
    chip->a0_pla[51] &= (chip->w530 & 0xf1b0) == 0xb000;
    chip->a0_pla[52] &= (chip->w530 & 0xf0f8) == 0x50c8;
    chip->a0_pla[53] &= (chip->w530 & 0xf1f8) == 0x81c0;
    chip->a0_pla[54] &= (chip->w530 & 0xf1f8) == 0x80c0;
    chip->a0_pla[55] &= (chip->w530 & 0xf1f0) == 0xc140;
    chip->a0_pla[56] &= (chip->w530 & 0xf1f8) == 0xc188;
    chip->a0_pla[57] &= (chip->w530 & 0xfff8) == 0x48c0;
    chip->a0_pla[58] &= (chip->w530 & 0x003f) == 0x003c && !chip->w533;
    chip->a0_pla[59] &= (chip->w530 & 0x003f) == 0x003c && !chip->w532;
    chip->a0_pla[60] &= (chip->w530 & 0xffff) == 0x4ef9;
    chip->a0_pla[61] &= (chip->w530 & 0xffff) == 0x4ef8;
    chip->a0_pla[62] &= (chip->w530 & 0xfff8) == 0x4ed0;
    chip->a0_pla[63] &= (chip->w530 & 0xfff8) == 0x4ee8;
    chip->a0_pla[64] &= (chip->w530 & 0xffff) == 0x4efa;
    chip->a0_pla[65] &= (chip->w530 & 0xfff8) == 0x4ef0;
    chip->a0_pla[66] &= (chip->w530 & 0xffff) == 0x4efb;
    chip->a0_pla[67] &= (chip->w530 & 0xffff) == 0x4eb9;
    chip->a0_pla[68] &= (chip->w530 & 0xffff) == 0x4eb8;
    chip->a0_pla[69] &= (chip->w530 & 0xfff8) == 0x4e90;
    chip->a0_pla[70] &= (chip->w530 & 0xfff8) == 0x4ea8;
    chip->a0_pla[71] &= (chip->w530 & 0xffff) == 0x4eba;
    chip->a0_pla[72] &= (chip->w530 & 0xfff8) == 0x4eb0;
    chip->a0_pla[73] &= (chip->w530 & 0xffff) == 0x4ebb;
    chip->a0_pla[74] &= (chip->w530 & 0xf1ff) == 0x41f9;
    chip->a0_pla[75] &= (chip->w530 & 0xf1ff) == 0x41f8;
    chip->a0_pla[76] &= (chip->w530 & 0xffb8) == 0x4ca8;
    chip->a0_pla[77] &= (chip->w530 & 0xffbf) == 0x4cba;
    chip->a0_pla[78] &= (chip->w530 & 0xffb8) == 0x4c90;
    chip->a0_pla[79] &= (chip->w530 & 0xffb8) == 0x4cb0;
    chip->a0_pla[80] &= (chip->w530 & 0xffbf) == 0x4cbb;
    chip->a0_pla[81] &= (chip->w530 & 0xf1f8) == 0x41d0;
    chip->a0_pla[82] &= (chip->w530 & 0xf1f8) == 0x41e8;
    chip->a0_pla[83] &= (chip->w530 & 0xf1ff) == 0x41fa;
    chip->a0_pla[84] &= (chip->w530 & 0xf1f8) == 0x41f0;
    chip->a0_pla[85] &= (chip->w530 & 0xf1ff) == 0x41fb;
    chip->a0_pla[86] &= (chip->w530 & 0xfff8) == 0x4e50;
    chip->a0_pla[87] &= (chip->w530 & 0xffbf) == 0x4cb9;
    chip->a0_pla[88] &= (chip->w530 & 0xffbf) == 0x4cb8;
    chip->a0_pla[89] &= (chip->w530 & 0xfff8) == 0x4e60;
    chip->a0_pla[90] &= (chip->w530 & 0xf1f8) == 0x0148;
    chip->a0_pla[91] &= (chip->w530 & 0xf1f8) == 0x0108;
    chip->a0_pla[92] &= (chip->w530 & 0xf1f8) == 0x01c8;
    chip->a0_pla[93] &= (chip->w530 & 0xf1f8) == 0x0188;
    chip->a0_pla[94] &= (chip->w530 & 0xf0f8) == 0xc0c0;
    chip->a0_pla[95] &= (chip->w530 & 0xfff8) == 0x4800;
    chip->a0_pla[96] &= (chip->w530 & 0xf9f8) == 0x4080;
    chip->a0_pla[97] &= (chip->w530 & 0xf9b8) == 0x4000;
    chip->a0_pla[98] &= (chip->w530 & 0xfff8) == 0x4880;
    chip->a0_pla[99] &= (chip->w530 & 0xffb8) == 0x4a00;
    chip->a0_pla[100] &= (chip->w530 & 0xf180) == 0x0000;
    chip->a0_pla[101] &= (chip->w530 & 0xfff8) == 0x4e58;
    chip->a0_pla[102] &= (chip->w530 & 0xffff) == 0x4879;
    chip->a0_pla[103] &= (chip->w530 & 0xffff) == 0x4878;
    chip->a0_pla[104] &= (chip->w530 & 0x0038) == 0x0020 && !chip->w533;
    chip->a0_pla[105] &= (chip->w530 & 0x0038) == 0x0020 && !chip->w532;
    chip->a0_pla[106] &= (chip->w530 & 0xfff8) == 0x4850;
    chip->a0_pla[107] &= (chip->w530 & 0xfff8) == 0x4868;
    chip->a0_pla[108] &= (chip->w530 & 0xffff) == 0x487a;
    chip->a0_pla[109] &= (chip->w530 & 0xfff8) == 0x4870;
    chip->a0_pla[110] &= (chip->w530 & 0xffff) == 0x487b;
    chip->a0_pla[111] &= (chip->w530 & 0x0038) == 0x0018 && !chip->w533;
    chip->a0_pla[112] &= (chip->w530 & 0x0038) == 0x0018 && !chip->w532;
    chip->a0_pla[113] &= (chip->w530 & 0xffb8) == 0x4c98;
    chip->a0_pla[114] &= (chip->w530 & 0xffb8) == 0x48a0;
    chip->a0_pla[115] &= (chip->w530 & 0xfff0) == 0x23c0;
    chip->a0_pla[116] &= (chip->w530 & 0xdff0) == 0x13c0;
    chip->a0_pla[117] &= (chip->w530 & 0xf0f0) == 0x5080;
    chip->a0_pla[118] &= (chip->w530 & 0xf0f8) == 0x5048;
    chip->a0_pla[119] &= (chip->w530 & 0xf0b8) == 0x5000;
    chip->a0_pla[120] &= (chip->w530 & 0xfff0) == 0x21c0;
    chip->a0_pla[121] &= (chip->w530 & 0xdff0) == 0x11c0;
    chip->a0_pla[122] &= (chip->w530 & 0xb1f8) == 0x8100;
    chip->a0_pla[123] &= (chip->w530 & 0xf100) == 0x7000;
    chip->a0_pla[124] &= (chip->w530 & 0xf1f0) == 0x2140;
    chip->a0_pla[125] &= (chip->w530 & 0xd1f0) == 0x1140;
    chip->a0_pla[126] &= (chip->w530 & 0xf1f0) == 0x20c0;
    chip->a0_pla[127] &= (chip->w530 & 0xd1f0) == 0x10c0;
    chip->a0_pla[128] &= (chip->w530 & 0xf1f0) == 0x2100;
    chip->a0_pla[129] &= (chip->w530 & 0xd1f0) == 0x1100;
    chip->a0_pla[130] &= (chip->w530 & 0xf1f0) == 0x2080;
    chip->a0_pla[131] &= (chip->w530 & 0xd1f0) == 0x1080;
    chip->a0_pla[132] &= (chip->w530 & 0xf1f0) == 0x2180;
    chip->a0_pla[133] &= (chip->w530 & 0xd1f0) == 0x1180;
    chip->a0_pla[134] &= (chip->w530 & 0xf1f8) == 0xb180;
    chip->a0_pla[135] &= (chip->w530 & 0xf1b8) == 0xb100;
    chip->a0_pla[136] &= (chip->w530 & 0xa1f0) == 0x8080;
    chip->a0_pla[137] &= (chip->w530 & 0xb1b8) == 0x9180;
    chip->a0_pla[138] &= (chip->w530 & 0xb1f0) == 0x91c0;
    chip->a0_pla[139] &= (chip->w530 & 0xb1f0) == 0x90c0;
    chip->a0_pla[140] &= (chip->w530 & 0xa1b0) == 0x8000;
    chip->a0_pla[141] &= (chip->w530 & 0xb1b8) == 0x9100;
    chip->a0_pla[142] &= (chip->w530 & 0xf1b0) == 0x2000;
    chip->a0_pla[143] &= (chip->w530 & 0xf1f0) == 0x3040;
    chip->a0_pla[144] &= (chip->w530 & 0xd1f0) == 0x1000;
    chip->a0_pla[145] &= (chip->w530 & 0xfdf8) == 0x44c0;
    chip->a0_pla[146] &= (chip->w530 & 0xfffb) == 0x4e73;
    chip->a0_pla[147] &= (chip->w530 & 0xffff) == 0x4e75;
    chip->a0_pla[148] &= (chip->w530 & 0xf0f8) == 0x50c0;
    chip->a0_pla[149] &= (chip->w530 & 0xffbf) == 0x48b9;
    chip->a0_pla[150] &= (chip->w530 & 0xffbf) == 0x48b8;
    chip->a0_pla[151] &= (chip->w530 & 0xf0e0) == 0xe080;
    chip->a0_pla[152] &= (chip->w530 & 0xf0a0) == 0xe000;
    chip->a0_pla[153] &= (chip->w530 & 0xf0e0) == 0xe0a0;
    chip->a0_pla[154] &= (chip->w530 & 0xf0a0) == 0xe020;
    chip->a0_pla[155] &= (chip->w530 & 0xffb8) == 0x48a8;
    chip->a0_pla[156] &= (chip->w530 & 0xffb8) == 0x4890;
    chip->a0_pla[157] &= (chip->w530 & 0xffb8) == 0x48b0;
    chip->a0_pla[158] &= (chip->w530 & 0xffff) == 0x4e72;
    chip->a0_pla[159] &= (chip->w530 & 0xfff8) == 0x40c0;
    chip->a0_pla[160] &= (chip->w530 & 0xfff8) == 0x4e68;
    chip->a0_pla[161] &= (chip->w530 & 0xfff8) == 0x4840;
    chip->a0_pla[162] &= (chip->w530 & 0xffff) == 0x4e70;
    chip->a0_pla[167] = (chip->w530 & 0xffff) == 0x6100;
    chip->a0_pla[168] = (chip->w530 & 0xff80) == 0x0880;
    chip->a0_pla[169] = (chip->w530 & 0xf000) == 0xf000;
    chip->a0_pla[170] = (chip->w530 & 0xf000) == 0xa000;

    chip->a0_pla[163] &= (chip->w530 & 0xf1c0) == 0x0080 && !chip->a0_pla[168];
    chip->a0_pla[165] = (chip->w530 & 0xf0ff) == 0x6000 && !chip->a0_pla[166];
    chip->a0_pla[166] = (chip->w530 & 0xff00) == 0x6100 && !chip->a0_pla[166];
    chip->a0_pla[164] &= (chip->w530 & 0xf020) == 0x6020 && !chip->a0_pla[164] && !chip->a0_pla[165] && !chip->a0_pla[166];

    chip->w531 = 0x3ff;
    if (chip->a0_pla[20])
        chip->w531 &= 0x1e6;
    if (chip->a0_pla[21])
        chip->w531 &= 0x1e2;
    if (chip->a0_pla[22])
        chip->w531 &= 0x00e;
    if (chip->a0_pla[23])
        chip->w531 &= 0x00a;
    if (chip->a0_pla[24])
        chip->w531 &= 0x00b;
    if (chip->a0_pla[25])
        chip->w531 &= 0x006;
    if (chip->a0_pla[26])
        chip->w531 &= 0x1c6;
    if (chip->a0_pla[27])
        chip->w531 &= 0x1c6;
    if (chip->a0_pla[28])
        chip->w531 &= 0x1c2;
    if (chip->a0_pla[29])
        chip->w531 &= 0x1c2;
    if (chip->a0_pla[30])
        chip->w531 &= 0x1e7;
    if (chip->a0_pla[31])
        chip->w531 &= 0x1e7;
    if (chip->a0_pla[32])
        chip->w531 &= 0x1e3;
    if (chip->a0_pla[33])
        chip->w531 &= 0x1e3;
    if (chip->a0_pla[34])
        chip->w531 &= 0x107;
    if (chip->a0_pla[35])
        chip->w531 &= 0x10b;
    if (chip->a0_pla[36])
        chip->w531 &= 0x10f;
    if (chip->a0_pla[37])
        chip->w531 &= 0x363;
    if (chip->a0_pla[38])
        chip->w531 &= 0x345;
    if (chip->a0_pla[39])
        chip->w531 &= 0x1d0;
    if (chip->a0_pla[40])
        chip->w531 &= 0x06d;
    if (chip->a0_pla[41])
        chip->w531 &= 0x3eb;
    if (chip->a0_pla[42])
        chip->w531 &= 0x3ef;
    if (chip->a0_pla[43])
        chip->w531 &= 0x125;
    if (chip->a0_pla[44])
        chip->w531 &= 0x3e7;
    if (chip->a0_pla[45])
        chip->w531 &= 0x152;
    if (chip->a0_pla[46])
        chip->w531 &= 0x06b;
    if (chip->a0_pla[47])
        chip->w531 &= 0x06f;
    if (chip->a0_pla[48])
        chip->w531 &= 0x1d5;
    if (chip->a0_pla[49])
        chip->w531 &= 0x1d5;
    if (chip->a0_pla[50])
        chip->w531 &= 0x1d9;
    if (chip->a0_pla[51])
        chip->w531 &= 0x1d1;
    if (chip->a0_pla[52])
        chip->w531 &= 0x06c;
    if (chip->a0_pla[53])
        chip->w531 &= 0x0ae;
    if (chip->a0_pla[54])
        chip->w531 &= 0x0a6;
    if (chip->a0_pla[55])
        chip->w531 &= 0x3e3;
    if (chip->a0_pla[56])
        chip->w531 &= 0x3e3;
    if (chip->a0_pla[57])
        chip->w531 &= 0x232;
    if (chip->a0_pla[58])
        chip->w531 &= 0x0a7;
    if (chip->a0_pla[59])
        chip->w531 &= 0x0ea;
    if (chip->a0_pla[60])
        chip->w531 &= 0x1f6;
    if (chip->a0_pla[61])
        chip->w531 &= 0x297;
    if (chip->a0_pla[62])
        chip->w531 &= 0x255;
    if (chip->a0_pla[63])
        chip->w531 &= 0x2b4;
    if (chip->a0_pla[64])
        chip->w531 &= 0x2b4;
    if (chip->a0_pla[65])
        chip->w531 &= 0x1f7;
    if (chip->a0_pla[66])
        chip->w531 &= 0x1f7;
    if (chip->a0_pla[67])
        chip->w531 &= 0x1f2;
    if (chip->a0_pla[68])
        chip->w531 &= 0x293;
    if (chip->a0_pla[69])
        chip->w531 &= 0x273;
    if (chip->a0_pla[70])
        chip->w531 &= 0x2b0;
    if (chip->a0_pla[71])
        chip->w531 &= 0x2b0;
    if (chip->a0_pla[72])
        chip->w531 &= 0x1f3;
    if (chip->a0_pla[73])
        chip->w531 &= 0x1f3;
    if (chip->a0_pla[74])
        chip->w531 &= 0x3e4;
    if (chip->a0_pla[75])
        chip->w531 &= 0x275;
    if (chip->a0_pla[76])
        chip->w531 &= 0x1fd;
    if (chip->a0_pla[77])
        chip->w531 &= 0x1fd;
    if (chip->a0_pla[78])
        chip->w531 &= 0x127;
    if (chip->a0_pla[79])
        chip->w531 &= 0x1f5;
    if (chip->a0_pla[80])
        chip->w531 &= 0x1f5;
    if (chip->a0_pla[81])
        chip->w531 &= 0x2f1;
    if (chip->a0_pla[82])
        chip->w531 &= 0x2f2;
    if (chip->a0_pla[83])
        chip->w531 &= 0x2f2;
    if (chip->a0_pla[84])
        chip->w531 &= 0x1fb;
    if (chip->a0_pla[85])
        chip->w531 &= 0x1fb;
    if (chip->a0_pla[86])
        chip->w531 &= 0x30b;
    if (chip->a0_pla[87])
        chip->w531 &= 0x1e9;
    if (chip->a0_pla[88])
        chip->w531 &= 0x1f9;
    if (chip->a0_pla[89])
        chip->w531 &= 0x2f5;
    if (chip->a0_pla[90])
        chip->w531 &= 0x1d6;
    if (chip->a0_pla[91])
        chip->w531 &= 0x1d2;
    if (chip->a0_pla[92])
        chip->w531 &= 0x1ce;
    if (chip->a0_pla[93])
        chip->w531 &= 0x1ca;
    if (chip->a0_pla[94])
        chip->w531 &= 0x15b;
    if (chip->a0_pla[95])
        chip->w531 &= 0x13b;
    if (chip->a0_pla[96])
        chip->w531 &= 0x137;
    if (chip->a0_pla[97])
        chip->w531 &= 0x133;
    if (chip->a0_pla[98])
        chip->w531 &= 0x133;
    if (chip->a0_pla[99])
        chip->w531 &= 0x12d;
    if (chip->a0_pla[100])
        chip->w531 &= 0x2b9;
    if (chip->a0_pla[101])
        chip->w531 &= 0x119;
    if (chip->a0_pla[102])
        chip->w531 &= 0x1fa;
    if (chip->a0_pla[103])
        chip->w531 &= 0x178;
    if (chip->a0_pla[104])
        chip->w531 &= 0x179;
    if (chip->a0_pla[105])
        chip->w531 &= 0x103;
    if (chip->a0_pla[106])
        chip->w531 &= 0x17c;
    if (chip->a0_pla[107])
        chip->w531 &= 0x17d;
    if (chip->a0_pla[108])
        chip->w531 &= 0x17d;
    if (chip->a0_pla[109])
        chip->w531 &= 0x1ff;
    if (chip->a0_pla[110])
        chip->w531 &= 0x1ff;
    if (chip->a0_pla[111])
        chip->w531 &= 0x00f;
    if (chip->a0_pla[112])
        chip->w531 &= 0x21c;
    if (chip->a0_pla[113])
        chip->w531 &= 0x123;
    if (chip->a0_pla[114])
        chip->w531 &= 0x3a4;
    if (chip->a0_pla[115])
        chip->w531 &= 0x1ee;
    if (chip->a0_pla[116])
        chip->w531 &= 0x1ea;
    if (chip->a0_pla[117])
        chip->w531 &= 0x2dc;
    if (chip->a0_pla[118])
        chip->w531 &= 0x2dc;
    if (chip->a0_pla[119])
        chip->w531 &= 0x2d8;
    if (chip->a0_pla[120])
        chip->w531 &= 0x2dd;
    if (chip->a0_pla[121])
        chip->w531 &= 0x2d9;
    if (chip->a0_pla[122])
        chip->w531 &= 0x1cd;
    if (chip->a0_pla[123])
        chip->w531 &= 0x23b;
    if (chip->a0_pla[124])
        chip->w531 &= 0x2de;
    if (chip->a0_pla[125])
        chip->w531 &= 0x2da;
    if (chip->a0_pla[126])
        chip->w531 &= 0x2fd;
    if (chip->a0_pla[127])
        chip->w531 &= 0x2fe;
    if (chip->a0_pla[128])
        chip->w531 &= 0x2fc;
    if (chip->a0_pla[129])
        chip->w531 &= 0x2f8;
    if (chip->a0_pla[130])
        chip->w531 &= 0x2f9;
    if (chip->a0_pla[131])
        chip->w531 &= 0x2fa;
    if (chip->a0_pla[132])
        chip->w531 &= 0x1ef;
    if (chip->a0_pla[133])
        chip->w531 &= 0x1eb;
    if (chip->a0_pla[134])
        chip->w531 &= 0x10c;
    if (chip->a0_pla[135])
        chip->w531 &= 0x100;
    if (chip->a0_pla[136])
        chip->w531 &= 0x1c5;
    if (chip->a0_pla[137])
        chip->w531 &= 0x1c5;
    if (chip->a0_pla[138])
        chip->w531 &= 0x1c5;
    if (chip->a0_pla[139])
        chip->w531 &= 0x1c9;
    if (chip->a0_pla[140])
        chip->w531 &= 0x1c1;
    if (chip->a0_pla[141])
        chip->w531 &= 0x1c1;
    if (chip->a0_pla[142])
        chip->w531 &= 0x129;
    if (chip->a0_pla[143])
        chip->w531 &= 0x279;
    if (chip->a0_pla[144])
        chip->w531 &= 0x121;
    if (chip->a0_pla[145])
        chip->w531 &= 0x301;
    if (chip->a0_pla[146])
        chip->w531 &= 0x12a;
    if (chip->a0_pla[147])
        chip->w531 &= 0x126;
    if (chip->a0_pla[148])
        chip->w531 &= 0x384;
    if (chip->a0_pla[149])
        chip->w531 &= 0x1e5;
    if (chip->a0_pla[150])
        chip->w531 &= 0x1ed;
    if (chip->a0_pla[151])
        chip->w531 &= 0x385;
    if (chip->a0_pla[152])
        chip->w531 &= 0x381;
    if (chip->a0_pla[153])
        chip->w531 &= 0x386;
    if (chip->a0_pla[154])
        chip->w531 &= 0x382;
    if (chip->a0_pla[155])
        chip->w531 &= 0x1f1;
    if (chip->a0_pla[156])
        chip->w531 &= 0x3a0;
    if (chip->a0_pla[157])
        chip->w531 &= 0x325;
    if (chip->a0_pla[158])
        chip->w531 &= 0x3a2;
    if (chip->a0_pla[159])
        chip->w531 &= 0x3a5;
    if (chip->a0_pla[160])
        chip->w531 &= 0x230;
    if (chip->a0_pla[161])
        chip->w531 &= 0x341;
    if (chip->a0_pla[162])
        chip->w531 &= 0x3a6;
    if (chip->a0_pla[163])
        chip->w531 &= 0x3e0;
    if (chip->a0_pla[164])
        chip->w531 &= 0x308;
    if (chip->a0_pla[165])
        chip->w531 &= 0x068;
    if (chip->a0_pla[166])
        chip->w531 &= 0x089;
    if (chip->a0_pla[167])
        chip->w531 &= 0x0a9;
    if (chip->a0_pla[168])
        chip->w531 &= 0x2b9;

    chip->a2_pla[0] = (chip->w530 & 0x003d) == 0x003d && !chip->a2_pla[2] && chip->a2_pla[3];
    chip->a2_pla[1] = (chip->w530 & 0x003e) == 0x003e && !chip->a2_pla[2] && chip->a2_pla[3];
    chip->a2_pla[2] = (chip->w530 & 0xf000) == 0xe000;
    chip->a2_pla[3] = (chip->w530 & 0xe000) == 0x6000;
    chip->a2_pla[4] = (chip->w530 & 0xf1c0) == 0x00c0 && !chip->a2_pla[5];
    chip->a2_pla[5] = (chip->w530 & 0x0e00) == 0x0800;
    chip->a2_pla[6] = (chip->w530 & 0xff00) == 0x0e00;
    chip->a2_pla[7] = (chip->w530 & 0xf03e) == 0x003a && !chip->a2_pla[8] && !chip->a2_pla[9];
    chip->a2_pla[8] = (chip->w530 & 0x0fc0) == 0x0800;
    chip->a2_pla[9] = (chip->w530 & 0x01c0) == 0x0100;
    chip->a2_pla[10] = (chip->w530 & 0xf03f) == 0x003c && !chip->a2_pla[9] && !chip->a2_pla[11] && !chip->a2_pla[14];
    chip->a2_pla[11] = (chip->w530 & 0x0780) == 0x0200 && !chip->a2_pla[12];
    chip->a2_pla[12] = (chip->w530 & 0xe038) == 0x0008;
    chip->a2_pla[13] = (chip->w530 & 0x1100) == 0x0100;
    chip->a2_pla[14] = (chip->w530 & 0x0d80) == 0x0000;
    chip->a2_pla[15] = (chip->w530 & 0xf1c0) == 0x1040;
    chip->a2_pla[16] = (chip->w530 & 0xc9c0) == 0x09c0 && !chip->a2_pla[18];
    chip->a2_pla[17] = (chip->w530 & 0xc5c0) == 0x05c0 && !chip->a2_pla[18];
    chip->a2_pla[18] = (chip->w530 & 0x3000) == 0x0000;
    chip->a2_pla[19] = (chip->w530 & 0xffc0) == 0x42c0;
    chip->a2_pla[20] = (chip->w530 & 0xfdc0) == 0x4c00;
    chip->a2_pla[21] = (chip->w530 & 0xff80) == 0x4c00;
    chip->a2_pla[22] = (chip->w530 & 0xf038) == 0x4008 && !chip->a2_pla[24];
    chip->a2_pla[23] = (chip->w530 & 0xf0be) == 0x403a && !chip->a2_pla[25];
    chip->a2_pla[24] = (chip->w530 & 0x0fc0) == 0x0e40;
    chip->a2_pla[25] = (chip->w530 & 0x0f40) == 0x0840;
    chip->a2_pla[26] = (chip->w530 & 0xf5be) == 0x40ba;
    chip->a2_pla[27] = (chip->w530 & 0xf9fe) == 0x40ba;
    chip->a2_pla[28] = (chip->w530 & 0x0dc0) == 0x04c0;
    chip->a2_pla[29] = (chip->w530 & 0xf03f) == 0x403c && !chip->a2_pla[28] && !chip->a2_pla[30];
    chip->a2_pla[30] = (chip->w530 & 0x01c0) == 0x0180;
    chip->a2_pla[31] = (chip->w530 & 0xf180) == 0x4100;
    chip->a2_pla[32] = (chip->w530 & 0xfff7) == 0x4e74;
    chip->a2_pla[33] = (chip->w530 & 0xff78) == 0x4858;
    chip->a2_pla[34] = (chip->w530 & 0xffb8) == 0x4898;
    chip->a2_pla[35] = (chip->w530 & 0xf1f8) == 0x41d8;
    chip->a2_pla[36] = (chip->w530 & 0xffb8) == 0x4e98;
    chip->a2_pla[37] = (chip->w530 & 0xfff8) == 0x4860;
    chip->a2_pla[38] = (chip->w530 & 0xfd98) == 0x4c80;
    chip->a2_pla[39] = (chip->w530 & 0xf1d8) == 0x41c0;
    chip->a2_pla[40] = (chip->w530 & 0xf0f8) == 0x5008;
    chip->a2_pla[41] = (chip->w530 & 0xf03a) == 0x503a;
    chip->a2_pla[42] = (chip->w530 & 0xf03c) == 0x503c;
    chip->a2_pla[43] = (chip->w530 & 0xf100) == 0x7100;
    chip->a2_pla[44] = (chip->w530 & 0xf038) == 0x8008 && !chip->a2_pla[45];
    chip->a2_pla[45] = (chip->w530 & 0x01c0) == 0x0100;
    chip->a2_pla[46] = (chip->w530 & 0x81be) == 0x813a;
    chip->a2_pla[47] = (chip->w530 & 0x817e) == 0x813a && !chip->a2_pla[51];
    chip->a2_pla[48] = (chip->w530 & 0x81bc) == 0x813c && !chip->a2_pla[51];
    chip->a2_pla[49] = (chip->w530 & 0x817c) == 0x813c && !chip->a2_pla[51];
    chip->a2_pla[50] = (chip->w530 & 0xf1f8) == 0x8140;
    chip->a2_pla[51] = (chip->w530 & 0xf000) == 0xe000;
    chip->a2_pla[52] = (chip->w530 & 0x91f8) == 0x9008;
    //chip->a2_pla[53] = (chip->w530 & 0x0000) == 0x0000;
    //chip->a2_pla[54] = (chip->w530 & 0x0000) == 0x0000;
    //chip->a2_pla[55] = (chip->w530 & 0x0000) == 0x0000;
    chip->a2_pla[56] = (chip->w530 & 0xf8c0) == 0xe8c0;
    chip->a2_pla[57] = (chip->w530 & 0xb138) == 0x8008;
    chip->a2_pla[58] = (chip->w530 & 0xb1f8) == 0x81c8;
    chip->a2_pla[59] = (chip->w530 & 0xb1f8) == 0x8180;
    chip->a2_pla[60] = (chip->w530 & 0xfff0) == 0x4e60;
    chip->a2_pla[61] = (chip->w530 & 0xf8f0) == 0xe0c0;
    chip->a2_pla[62] = (chip->w530 & 0xf8fc) == 0xe0fc;
    chip->a2_pla[63] = (chip->w530 & 0xf8fa) == 0xe0fa;
    chip->a2_pla[64] = (chip->w530 & 0xf5ff) == 0x007c;
    chip->a2_pla[65] = (chip->w530 & 0xfffe) == 0x4e72;
    chip->a2_pla[66] = (chip->w530 & 0xfffd) == 0x4e70;
    chip->a2_pla[67] = (chip->w530 & 0xffc0) == 0x46c0;
    chip->a2_pla[68] = (chip->w530 & 0xfff8) == 0x4e78;
    //chip->a2_pla[69] = (chip->w530 & 0x0000) == 0x0000;
    chip->a2_pla[70] = (chip->w530 & 0x01c0) == 0x0080; // g2
    chip->a2_pla[71] = (chip->w530 & 0xf000) == 0x0000; // g1
    chip->a2_pla_g1 = !chip->a2_pla[71];
    chip->a2_pla_g2 = !chip->a2_pla[70];
    chip->a2_pla[72] = (chip->w530 & 0x0038) == 0x0010 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[73] = (chip->w530 & 0x0e00) == 0x0800 && !chip->a2_pla_g1 && !chip->a2_pla_g2; // g3
    chip->a2_pla_g3 = chip->a2_pla[73];
    chip->a2_pla[74] = (chip->w530 & 0x0138) == 0x0010 && !chip->a2_pla_g1 && !chip->a2_pla[72];
    chip->a2_pla[75] = (chip->w530 & 0x0038) == 0x0018 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[76] = (chip->w530 & 0x0038) == 0x0018 && !chip->a2_pla_g1 && !chip->a2_pla[75];
    chip->a2_pla[77] = (chip->w530 & 0x0038) == 0x0020 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[78] = (chip->w530 & 0x0138) == 0x0020 && !chip->a2_pla_g1 && !chip->a2_pla[77];
    chip->a2_pla[79] = (chip->w530 & 0x0038) == 0x0028 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[80] = (chip->w530 & 0x0fff) == 0x083a && !chip->a2_pla_g1;
    chip->a2_pla[81] = (chip->w530 & 0x0138) == 0x0028 && !chip->a2_pla_g1 && !chip->a2_pla[79];
    chip->a2_pla[82] = (chip->w530 & 0x0038) == 0x0030 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[83] = (chip->w530 & 0x0fff) == 0x083b && !chip->a2_pla_g1;
    chip->a2_pla[84] = (chip->w530 & 0x0138) == 0x0030 && !chip->a2_pla_g1 && !chip->a2_pla[82];
    chip->a2_pla[85] = (chip->w530 & 0x003f) == 0x0038 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[86] = (chip->w530 & 0x013f) == 0x0038 && !chip->a2_pla_g1 && !chip->a2_pla[85];
    chip->a2_pla[87] = (chip->w530 & 0x003f) == 0x0039 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla_g3;
    chip->a2_pla[88] = (chip->w530 & 0x013f) == 0x0039 && !chip->a2_pla_g1 && !chip->a2_pla[87];
    chip->a2_pla[89] = (chip->w530 & 0x0fb8) == 0x0c00 && !chip->a2_pla_g1;
    chip->a2_pla[90] = (chip->w530 & 0x0ff8) == 0x0800 && !chip->a2_pla_g1;
    chip->a2_pla[91] = (chip->w530 & 0x0f78) == 0x0840 && !chip->a2_pla_g1;
    chip->a2_pla[92] = (chip->w530 & 0x01b8) == 0x0000 && !chip->a2_pla[89] && !chip->a2_pla[90] && !chip->a2_pla[91];
    chip->a2_pla[93] = (chip->w530 & 0x01bf) == 0x003c && !chip->a2_pla_g1;
    chip->a2_pla[94] = (chip->w530 & 0x0e38) == 0x0800 && !chip->a2_pla_g1 && !chip->a2_pla_g2;
    chip->a2_pla[95] = (chip->w530 & 0x0038) == 0x0000 && !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla[94] && !chip->a2_pla[95];
    chip->a2_pla[96] = (chip->w530 & 0x0e38) == 0x0c00 && !chip->a2_pla_g1 && !chip->a2_pla_g2;
    chip->a2_pla[97] = (chip->w530 & 0x01c0) == 0x0100 && !chip->a2_pla_g1;
    chip->a2_pla[98] = (chip->w530 & 0x0fc0) == 0x0800 && !chip->a2_pla_g1;
    chip->a2_pla[99] = (chip->w530 & 0x0f40) == 0x0840 && !chip->a2_pla_g1;
    chip->a2_pla[100] = (chip->w530 & 0x0140) == 0x0140 && !chip->a2_pla_g1;
    chip->a2_pla[101] = (chip->w530 & 0x0f80) == 0x0c00 && !chip->a2_pla_g1;
    chip->a2_pla[102] = (chip->w530 & 0x0180) == 0x0000 && !chip->a2_pla_g1 && !chip->a2_pla[98] && chip->a2_pla[99] && chip->a2_pla[101];
    chip->a2_pla[103] = (chip->w530 & 0x8180) == 0x8100;
    chip->a2_pla[104] = (chip->w530 & 0xf8c0) == 0xe0c0;
    chip->a2_pla[105] = (chip->w530 & 0x0e00) == 0x0800 && !chip->a2_pla_g1 && !chip->a2_pla_g2;
    chip->a2_pla[106] = (chip->w530 & 0x0e00) == 0x0c00 && !chip->a2_pla_g1 && !chip->a2_pla_g2;
    chip->a2_pla[107] = (chip->w530 & 0x01c0) == 0x0180 && !chip->a2_pla_g1;
    chip->a2_pla[108] = !chip->a2_pla_g1 && !chip->a2_pla_g2 && !chip->a2_pla[105] && !chip->a2_pla[106];
    chip->a2_pla[109] = (chip->w530 & 0xfe00) == 0x4a00 && !chip->a2_pla_g2;
    chip->a2_pla[110] = (chip->w530 & 0xf000) == 0x2000 && !chip->a2_pla_g2;
    chip->a2_pla[111] = (chip->w530 & 0xf800) == 0x4000 && !chip->a2_pla_g2;
    chip->a2_pla[112] = (chip->w530 & 0xd000) == 0x1000 && !chip->a2_pla_g2;
    chip->a2_pla[113] = (chip->w530 & 0xa000) == 0x8000 && !chip->a2_pla_g2;
    chip->a2_pla[114] = (chip->w530 & 0xf000) == 0xb000 && !chip->a2_pla_g2;
    chip->a2_pla[115] = (chip->w530 & 0xd1c0) == 0x1140;
    chip->a2_pla[116] = (chip->w530 & 0xd1c0) == 0x1180;
    chip->a2_pla[117] = (chip->w530 & 0xdfc0) == 0x11c0;
    chip->a2_pla[118] = (chip->w530 & 0xf1c0) == 0x3040;
    chip->a2_pla[119] = (chip->w530 & 0xf180) == 0x2000;
    chip->a2_pla[120] = (chip->w530 & 0xd1c0) == 0x1000;
    chip->a2_pla[121] = (chip->w530 & 0xf1c0) == 0x20c0;
    chip->a2_pla[122] = (chip->w530 & 0xf1c0) == 0x2100;
    chip->a2_pla[123] = (chip->w530 & 0xf1c0) == 0x2140;
    chip->a2_pla[124] = (chip->w530 & 0xf1c0) == 0x2180;
    chip->a2_pla[125] = (chip->w530 & 0xffc0) == 0x21c0;
    chip->a2_pla[126] = (chip->w530 & 0xffc0) == 0x23c0;
    chip->a2_pla[127] = (chip->w530 & 0xf980) == 0x4000;
    chip->a2_pla[128] = (chip->w530 & 0xdfc0) == 0x13c0;
    chip->a2_pla[129] = (chip->w530 & 0xffc0) == 0x40c0;
    chip->a2_pla[130] = (chip->w530 & 0xfdc0) == 0x44c0;
    chip->a2_pla[131] = (chip->w530 & 0xffc0) == 0x4800;
    chip->a2_pla[132] = (chip->w530 & 0xff80) == 0x4a00;
    chip->a2_pla[133] = (chip->w530 & 0x81c0) == 0x8180;
    chip->a2_pla[134] = (chip->w530 & 0xffc0) == 0x4ac0;
    chip->a2_pla[135] = (chip->w530 & 0xf1c0) == 0x4180;
    chip->a2_pla[136] = (chip->w530 & 0xf080) == 0x5000;
    chip->a2_pla[137] = (chip->w530 & 0xf0c0) == 0x5080;
    chip->a2_pla[138] = (chip->w530 & 0xf0c0) == 0x50c0;
    chip->a2_pla[139] = (chip->w530 & 0xa180) == 0x8000;
    chip->a2_pla[140] = (chip->w530 & 0xb1c0) == 0x90c0;
    chip->a2_pla[141] = (chip->w530 & 0xd1c0) == 0x10c0;
    chip->a2_pla[142] = (chip->w530 & 0xb1c0) == 0x91c0;
    chip->a2_pla[143] = (chip->w530 & 0xf1c0) == 0x80c0;
    chip->a2_pla[144] = (chip->w530 & 0xf1c0) == 0x81c0;
    chip->a2_pla[145] = (chip->w530 & 0xd1c0) == 0x1100;
    chip->a2_pla[146] = (chip->w530 & 0xf1c0) == 0xb1c0;
    chip->a2_pla[147] = (chip->w530 & 0xf180) == 0xb000;
    chip->a2_pla[148] = (chip->w530 & 0xf1c0) == 0xb0c0;
    chip->a2_pla[149] = (chip->w530 & 0xf0c0) == 0xc0c0;

    chip->w536 = !(
        chip->a2_pla[0] || chip->a2_pla[1] || chip->a2_pla[4] || chip->a2_pla[6] || chip->a2_pla[7] || chip->a2_pla[10] || chip->a2_pla[12]
        || chip->a2_pla[15] || chip->a2_pla[16] || chip->a2_pla[17] || chip->a2_pla[19] || chip->a2_pla[20] || chip->a2_pla[21] || chip->a2_pla[22]
        || chip->a2_pla[23] || chip->a2_pla[26] || chip->a2_pla[27] || chip->a2_pla[29] || chip->a2_pla[31] || chip->a2_pla[32] || chip->a2_pla[33]
        || chip->a2_pla[34] || chip->a2_pla[35] || chip->a2_pla[36] || chip->a2_pla[37] || chip->a2_pla[38] || chip->a2_pla[39] || chip->a2_pla[40]
        || chip->a2_pla[41] || chip->a2_pla[42] || chip->a2_pla[43] || chip->a2_pla[44] || chip->a2_pla[46] || chip->a2_pla[47] || chip->a2_pla[48]
        || chip->a2_pla[49] || chip->a2_pla[50] || chip->a2_pla[52] || chip->a2_pla[56] || chip->a2_pla[57] || chip->a2_pla[58] || chip->a2_pla[59]
        || chip->a2_pla[61] || chip->a2_pla[62] || chip->a2_pla[63] || chip->a2_pla[68]
        );

    chip->w537 = !(
        chip->a2_pla[60] || chip->a2_pla[64] || chip->a2_pla[65] || chip->a2_pla[66] || chip->a2_pla[67]
        );

    chip->w534 = 0x3ff;
    chip->w535 = 0x3ff;
    if (chip->a2_pla[72])
    {
        chip->w534 &= 0x00b;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[73])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[74])
    {
        chip->w534 &= 0x006;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[75])
    {
        chip->w534 &= 0x00f;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[76])
    {
        chip->w534 &= 0x21c;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[77])
    {
        chip->w534 &= 0x179;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[78])
    {
        chip->w534 &= 0x103;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[79])
    {
        chip->w534 &= 0x1c6;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[80])
    {
        chip->w534 &= 0x1c2;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[81])
    {
        chip->w534 &= 0x1c2;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[82])
    {
        chip->w534 &= 0x1e7;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[83])
    {
        chip->w534 &= 0x1e3;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[84])
    {
        chip->w534 &= 0x1e3;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[85])
    {
        chip->w534 &= 0x00e;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[86])
    {
        chip->w534 &= 0x00a;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[87])
    {
        chip->w534 &= 0x1e6;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[88])
    {
        chip->w534 &= 0x1e2;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[89])
    {
        chip->w534 &= 0x108;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[90])
    {
        chip->w534 &= 0x3e7;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[91])
    {
        chip->w534 &= 0x3ef;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[92])
    {
        chip->w534 &= 0x100;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[93])
    {
        chip->w534 &= 0x1cc;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[94])
    {
        chip->w534 &= 0x3eb;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[95])
    {
        chip->w534 &= 0x10c;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[96])
    {
        chip->w534 &= 0x104;
        chip->w535 &= 0x3ff;
    }
    if (chip->a2_pla[97])
    {
        chip->w534 &= 0x0ab;
        chip->w535 &= 0x215;
    }
    if (chip->a2_pla[98])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x215;
    }
    if (chip->a2_pla[99])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x081;
    }
    if (chip->a2_pla[100])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x081;
    }
    if (chip->a2_pla[101])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x087;
    }
    if (chip->a2_pla[102])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x299;
    }
    if (chip->a2_pla[103])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x299;
    }
    if (chip->a2_pla[104])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x3c7;
    }
    if (chip->a2_pla[105])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x069;
    }
    if (chip->a2_pla[106])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x08f;
    }
    if (chip->a2_pla[107])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x069;
    }
    if (chip->a2_pla[108])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x29d;
    }
    if (chip->a2_pla[109])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x3cb;
    }
    if (chip->a2_pla[110])
    {
        chip->w534 &= 0x2f9;
        chip->w535 &= 0x3a9;
    }
    if (chip->a2_pla[111])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x2bc;
    }
    if (chip->a2_pla[112])
    {
        chip->w534 &= 0x2fa;
        chip->w535 &= 0x3ab;
    }
    if (chip->a2_pla[113])
    {
        chip->w534 &= 0x1c5;
        chip->w535 &= 0x1cb;
    }
    if (chip->a2_pla[114])
    {
        chip->w534 &= 0x1d5;
        chip->w535 &= 0x1d7;
    }
    if (chip->a2_pla[115])
    {
        chip->w534 &= 0x2da;
        chip->w535 &= 0x38a;
    }
    if (chip->a2_pla[116])
    {
        chip->w534 &= 0x1eb;
        chip->w535 &= 0x298;
    }
    if (chip->a2_pla[117])
    {
        chip->w534 &= 0x2d9;
        chip->w535 &= 0x388;
    }
    if (chip->a2_pla[118])
    {
        chip->w534 &= 0x279;
        chip->w535 &= 0x158;
    }
    if (chip->a2_pla[119])
    {
        chip->w534 &= 0x129;
        chip->w535 &= 0x29f;
    }
    if (chip->a2_pla[120])
    {
        chip->w534 &= 0x121;
        chip->w535 &= 0x29b;
    }
    if (chip->a2_pla[121])
    {
        chip->w534 &= 0x2fd;
        chip->w535 &= 0x3ad;
    }
    if (chip->a2_pla[122])
    {
        chip->w534 &= 0x2fc;
        chip->w535 &= 0x38f;
    }
    if (chip->a2_pla[123])
    {
        chip->w534 &= 0x2de;
        chip->w535 &= 0x38e;
    }
    if (chip->a2_pla[124])
    {
        chip->w534 &= 0x1ef;
        chip->w535 &= 0x29c;
    }
    if (chip->a2_pla[125])
    {
        chip->w534 &= 0x2dd;
        chip->w535 &= 0x38c;
    }
    if (chip->a2_pla[126])
    {
        chip->w534 &= 0x1ee;
        chip->w535 &= 0x30f;
    }
    if (chip->a2_pla[127])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x2b8;
    }
    if (chip->a2_pla[128])
    {
        chip->w534 &= 0x1ea;
        chip->w535 &= 0x32b;
    }
    if (chip->a2_pla[129])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x3a1;
    }
    if (chip->a2_pla[130])
    {
        chip->w534 &= 0x301;
        chip->w535 &= 0x159;
    }
    if (chip->a2_pla[131])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x15c;
    }
    if (chip->a2_pla[132])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x3c3;
    }
    if (chip->a2_pla[133])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x29d;
    }
    if (chip->a2_pla[134])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x343;
    }
    if (chip->a2_pla[135])
    {
        chip->w534 &= 0x152;
        chip->w535 &= 0x151;
    }
    if (chip->a2_pla[136])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x2f3;
    }
    if (chip->a2_pla[137])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x2f7;
    }
    if (chip->a2_pla[138])
    {
        chip->w534 &= 0x3ff;
        chip->w535 &= 0x380;
    }
    if (chip->a2_pla[139])
    {
        chip->w534 &= 0x1c1;
        chip->w535 &= 0x1c3;
    }
    if (chip->a2_pla[140])
    {
        chip->w534 &= 0x1c9;
        chip->w535 &= 0x1c7;
    }
    if (chip->a2_pla[141])
    {
        chip->w534 &= 0x2fe;
        chip->w535 &= 0x3af;
    }
    if (chip->a2_pla[142])
    {
        chip->w534 &= 0x1c5;
        chip->w535 &= 0x1cb;
    }
    if (chip->a2_pla[143])
    {
        chip->w534 &= 0x0a6;
        chip->w535 &= 0x0a4;
    }
    if (chip->a2_pla[144])
    {
        chip->w534 &= 0x0ae;
        chip->w535 &= 0x0ac;
    }
    if (chip->a2_pla[145])
    {
        chip->w534 &= 0x2f8;
        chip->w535 &= 0x38b;
    }
    if (chip->a2_pla[146])
    {
        chip->w534 &= 0x1d5;
        chip->w535 &= 0x1d7;
    }
    if (chip->a2_pla[147])
    {
        chip->w534 &= 0x1d1;
        chip->w535 &= 0x1d3;
    }
    if (chip->a2_pla[148])
    {
        chip->w534 &= 0x1d9;
        chip->w535 &= 0x1cf;
    }
    if (chip->a2_pla[149])
    {
        chip->w534 &= 0x15b;
        chip->w535 &= 0x15a;
    }

    if (chip->w482[3])
        chip->codebus = chip->w534;

    if (chip->w482[2])
        chip->codebus = chip->w535;

    if (chip->w539)
        chip->w538 = chip->tm_w1;
    if (!chip->w267)
    {
        chip->irdbus = 0;
        for (i = 0; i < 16; i++)
        {
            j = (chip->w538 >> i) & 1;
            chip->irdbus |= j << (i * 2);
            chip->irdbus |= (!j) << (i * 2 + 1);
        }
    }
    
    chip->w539 = chip->tm_w1 ? chip->c2 : 0;

    chip->w540 = !(chip->w267 || chip->tm_w2);
    chip->w541 = !(chip->w522[0] || chip->w477);
    chip->w542 = !(chip->w540 || chip->w541);

    chip->w543 = !(chip->w477 || (chip->w529[1] && !chip->w267));

    chip->w544 = !(chip->w529[7] || chip->w529[1]);

    if (chip->c4)
        chip->w545 = chip->tm_w1;

    chip->w546 = !(chip->w545 && chip->w529[25]);

    chip->w547 = !chip->w267 && chip->tm_w2;

    chip->w548 = !(chip->tm_w1 || !chip->tm_w2);

    if (chip->w539)
    {
        chip->w549 = chip->w468;
        chip->w550 = chip->w469;
        chip->w551 = chip->w470;
        chip->w552 = chip->w471;
    }

    chip->w553 = !chip->tm_w1;
    chip->w554 = !chip->tm_w1;

    chip->w555 = 1;
    chip->w556 = 1;
    chip->w557 = 1;
    chip->w558 = 1;

    chip->w559 = chip->w522[2] | (chip->w522[3] << 1) | (chip->w522[4] << 2) | (chip->w522[5] << 3);
    chip->w560 = ((chip->irdbus >> 16) & 1) | ((chip->irdbus >> 17) & 2) | ((chip->irdbus >> 18) & 4)
        | ((chip->irdbus >> 19) & 8);

    // w6 - N
    // w7 - V
    // w8 - C
    // w9 - Z
    if (chip->w559 == 9)
    {
        if (chip->w560 == 15 && !chip->tm_w9 && chip->tm_w7 && chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 15 && !chip->tm_w9 && !chip->tm_w7 && !chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 14 && chip->tm_w9)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 13 && chip->tm_w7 && chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 13 && !chip->tm_w7 && !chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if ((chip->w560 & 13) == 12 && !chip->tm_w7 && chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if ((chip->w560 & 13) == 12 && chip->tm_w7 && !chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 11 && !chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 10 && chip->tm_w6)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 9 && !chip->tm_w7)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 8 && chip->tm_w7)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 7 && !chip->tm_w9)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 5 && !chip->tm_w8)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 4 && chip->tm_w8)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 3 && !chip->tm_w9 && !chip->tm_w8)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if ((chip->w560 & 11) == 2 && chip->tm_w9)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 2 && chip->tm_w8)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
        if (chip->w560 == 1)
        {
            chip->w555 = 0;
            chip->w556 = 0;
        }
    }
    if (chip->w559 == 14 && !chip->tm_w5 && (chip->irdbus & (1<<12)) == 0)
    {
        chip->w556 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 14 && chip->tm_w5)
    {
        chip->w555 = 0;
        chip->w557 = 0;
        chip->w558 = 0;
    }
    if (chip->w559 == 13 && chip->tm_w7)
    {
        chip->w555 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 12 && !chip->w554)
    {
        chip->w555 = 0;
        chip->w556 = 0;
    }
    if (chip->w559 == 11 && !chip->tm_w6 && !chip->tm_w7)
    {
        chip->w555 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 10 && !chip->tm_w14)
    {
        chip->w555 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 8 && (chip->w560 & 1) == 0 && chip->tm_w11)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 8 && (chip->w560 & 1) == 1 && !chip->tm_w11 && chip->tm_w10)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 8 && chip->tm_w4)
    {
        chip->w555 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 8 && (chip->w560 & 1) == 1 && chip->tm_w11 && !chip->tm_w10)
    {
        chip->w557 = 0;
    }
    if (chip->w559 == 7 && (chip->w560 & 1) == 1 && chip->tm_w10)
    {
        chip->w557 = 0;
    }
    if (chip->w559 == 7 && (chip->w560 & 1) == 0 && chip->tm_w10)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 6 && chip->tm_w9)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 6 && chip->tm_w6)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 5 && !chip->tm_w6)
    {
        chip->w555 = 0;
        chip->w556 = 0;
    }
    if (chip->w559 == 4 && chip->tm_w6 && !chip->tm_w9)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 4 && !chip->tm_w6 && !chip->tm_w9)
    {
        chip->w557 = 0;
    }
    if (chip->w559 == 3 && !chip->tm_w9)
    {
        chip->w555 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 2)
    {
        chip->w555 = 0;
    }
    if (chip->w559 == 2 && chip->tm_w8)
    {
        chip->w556 = 0;
        chip->w557 = 0;
    }
    if (chip->w559 == 1 && chip->tm_w4)
    {
        chip->w555 = 0;
        chip->w556 = 0;
        chip->w558 = 0;
    }
    if (chip->w559 == 0 && !chip->w553)
    {
        chip->w555 = 0;
        chip->w557 = 0;
    }

    chip->w561 = !(chip->w267 || chip->w522[5]);
    chip->w562 = !(chip->w561 || chip->w267);

    if (chip->w561)
    {
        chip->w472 = chip->w557;
        chip->w473 = chip->w555;
    }
    if (chip->w562)
    {
        chip->w472 = chip->w556;
        chip->w473 = chip->w558;
    }

    chip->w563 = !(chip->tm_w1 || (chip->w529[25] && chip->tm_w3));

    chip->w564 = !(!chip->w320 || !chip->w267 || !chip->w321);
    chip->w565 = !(chip->w320 || !chip->w267 || !chip->w321);
    chip->w566 = !(!chip->w320 || !chip->w267 || chip->w321);

    if (chip->w267)
    {
        chip->irdbus = 0;
        if (chip->w564)
        {
            chip->irdbus |= chip->w529[67] << 10;
            chip->irdbus |= chip->w529[64] << 12;
            chip->irdbus |= (!chip->w529[61]) << 14;
            chip->irdbus |= (!chip->w529[58]) << 16;
            chip->irdbus |= chip->w529[55] << 18;
            chip->irdbus |= chip->w529[52] << 20;
            chip->irdbus |= chip->w529[49] << 22;
            chip->irdbus |= chip->w529[46] << 24;
            chip->irdbus |= chip->w529[43] << 25;
            chip->irdbus |= chip->w529[40] << 26;
            chip->irdbus |= (!chip->w529[37]) << 27;
            chip->irdbus |= (!chip->w529[34]) << 28;
            chip->irdbus |= (!chip->w529[31]) << 29;
            chip->irdbus |= chip->w529[28] << 30;
            chip->irdbus |= chip->w529[25] << 31;
            chip->irdbus |= chip->w529[22] << 9;
            chip->irdbus |= chip->w529[19] << 11;
            chip->irdbus |= chip->w529[16] << 13;
            chip->irdbus |= chip->w529[13] << 15;
            chip->irdbus |= chip->w529[10] << 17;
            chip->irdbus |= (!chip->w529[7]) << 19;
            chip->irdbus |= chip->w529[4] << 21;
            chip->irdbus |= chip->w529[1] << 23;
        }
        if (chip->w565)
        {
            chip->irdbus |= chip->w529[66] << 10;
            chip->irdbus |= chip->w529[63] << 12;
            chip->irdbus |= (!chip->w529[60]) << 14;
            chip->irdbus |= chip->w529[57] << 16;
            chip->irdbus |= chip->w529[54] << 18;
            chip->irdbus |= chip->w529[51] << 20;
            chip->irdbus |= (!chip->w529[48]) << 22;
            chip->irdbus |= chip->w529[45] << 24;
            chip->irdbus |= chip->w529[42] << 25;
            chip->irdbus |= chip->w529[39] << 26;
            chip->irdbus |= (!chip->w529[36]) << 27;
            chip->irdbus |= chip->w529[33] << 28;
            chip->irdbus |= (!chip->w529[30]) << 29;
            chip->irdbus |= chip->w529[27] << 30;
            chip->irdbus |= chip->w529[24] << 31;
            chip->irdbus |= chip->w529[21] << 9;
            chip->irdbus |= chip->w529[18] << 11;
            chip->irdbus |= (!chip->w529[15]) << 13;
            chip->irdbus |= chip->w529[12] << 15;
            chip->irdbus |= (!chip->w529[9]) << 17;
            chip->irdbus |= chip->w529[6] << 19;
            chip->irdbus |= chip->w529[3] << 21;
            chip->irdbus |= (!chip->w529[0]) << 23;
        }
        if (chip->w566)
        {
            chip->irdbus |= chip->w529[65] << 10;
            chip->irdbus |= (!chip->w529[62]) << 12;
            chip->irdbus |= (!chip->w529[59]) << 14;
            chip->irdbus |= (!chip->w529[56]) << 16;
            chip->irdbus |= chip->w529[53] << 18;
            chip->irdbus |= chip->w529[50] << 20;
            chip->irdbus |= chip->w529[47] << 22;
            chip->irdbus |= chip->w529[44] << 24;
            chip->irdbus |= chip->w529[41] << 25;
            chip->irdbus |= chip->w529[38] << 26;
            chip->irdbus |= (!chip->w529[35]) << 27;
            chip->irdbus |= (!chip->w529[32]) << 28;
            chip->irdbus |= (!chip->w529[29]) << 29;
            chip->irdbus |= chip->w529[26] << 30;
            chip->irdbus |= chip->w529[23] << 31;
            chip->irdbus |= chip->w529[20] << 9;
            chip->irdbus |= (!chip->w529[17]) << 11;
            chip->irdbus |= chip->w529[14] << 13;
            chip->irdbus |= chip->w529[11] << 15;
            chip->irdbus |= chip->w529[8] << 17;
            chip->irdbus |= chip->w529[5] << 19;
            chip->irdbus |= chip->w529[2] << 21;
            chip->irdbus |= chip->w522[0] << 23;
        }
    }

    chip->w567 = !(chip->w529[63] || chip->w529[64]);

    chip->w568 = chip->w529[11] || chip->w529[14];

    chip->ird_pla1[0] = !(chip->irdbus & 0x55000580ul);
    chip->ird_pla1[1] = !(chip->irdbus & 0x9a000000ul) && !chip->ird_pla1[2] && !chip->ird_pla1[3] && !chip->ird_pla1[4];
    chip->ird_pla1[2] = !(chip->irdbus & 0x9a010000ul);
    chip->ird_pla1[3] = !(chip->irdbus & 0x9a02a000ul);
    chip->ird_pla1[4] = !(chip->irdbus & 0x9a000580ul);
    chip->ird_pla1[5] = !(chip->irdbus & 0xa9010000ul);
    chip->ird_pla1[6] = !(chip->irdbus & 0xa9020000ul);
    chip->ird_pla1[7] = !(chip->irdbus & 0xa924a000ul);
    chip->ird_pla1[8] = !(chip->irdbus & 0xa9000240ul) && !chip->ird_pla1[15];
    chip->ird_pla1[9] = !(chip->irdbus & 0xa914a000ul);
    chip->ird_pla1[10] = !(chip->irdbus & 0xa9000140ul) && !chip->ird_pla1[15];
    chip->ird_pla1[11] = !(chip->irdbus & 0xa928a000ul);
    chip->ird_pla1[12] = !(chip->irdbus & 0xa9000280ul) && !chip->ird_pla1[15];
    chip->ird_pla1[13] = !(chip->irdbus & 0xa918a000ul);
    chip->ird_pla1[14] = !(chip->irdbus & 0xa9000180ul) && !chip->ird_pla1[15];
    chip->ird_pla1[15] = !(chip->irdbus & 0xa900a000ul);
    chip->ird_pla1[16] = !(chip->irdbus & 0x65000000ul);
    chip->ird_pla1[17] = !(chip->irdbus & 0x65029000ul);
    chip->ird_pla1[18] = !(chip->irdbus & 0x45590000ul);
    chip->ird_pla1[19] = !(chip->irdbus & 0x45954000ul);
    chip->ird_pla1[20] = !(chip->irdbus & 0x45650000ul);
    chip->ird_pla1[21] = !(chip->irdbus & 0x45690000ul);
    chip->ird_pla1[22] = !(chip->irdbus & 0x45550000ul);
    chip->ird_pla1[23] = !(chip->irdbus & 0x45990000ul);
    chip->ird_pla1[24] = !(chip->irdbus & 0x45958000ul);
    chip->ird_pla1[25] = !(chip->irdbus & 0x55a50000ul);
    chip->ird_pla1[26] = !(chip->irdbus & 0x55024000ul);
    chip->ird_pla1[27] = !(chip->irdbus & 0x55028000ul);
    chip->ird_pla1[28] = !(chip->irdbus & 0x55000000ul);
    chip->ird_pla1[29] = !(chip->irdbus & 0x46010000ul) && !chip->ird_pla1[31];
    chip->ird_pla1[30] = !(chip->irdbus & 0x46020000ul) && !chip->ird_pla1[31];
    chip->ird_pla1[31] = !(chip->irdbus & 0x4600a000ul);
    chip->ird_pla1[32] = !(chip->irdbus & 0x48000000ul);
    chip->ird_pla1[33] = !(chip->irdbus & 0x95000000ul);
    chip->ird_pla1[34] = !(chip->irdbus & 0x85000000ul) && !chip->ird_pla1[35] && !chip->ird_pla1[36];
    chip->ird_pla1[35] = !(chip->irdbus & 0x85025500ul);
    chip->ird_pla1[36] = !(chip->irdbus & 0x8500a000ul);
    chip->ird_pla1[37] = !(chip->irdbus & 0xa5000000ul);
    chip->ird_pla1[38] = !(chip->irdbus & 0x96000000ul);
    chip->ird_pla1[39] = !(chip->irdbus & 0x86000000ul) && !chip->ird_pla1[40] && !chip->ird_pla1[41];
    chip->ird_pla1[40] = !(chip->irdbus & 0x86021500ul);
    chip->ird_pla1[41] = !(chip->irdbus & 0x86024500ul);
    chip->ird_pla1[42] = !(chip->irdbus & 0xa6000000ul);
    chip->ird_pla1[43] = !(chip->irdbus & 0x6599a000ul);
    chip->ird_pla1[44] = !(chip->irdbus & 0x8600a000ul);
    chip->ird_pla1[45] = !(chip->irdbus & 0x58016000ul);
    chip->ird_pla1[46] = !(chip->irdbus & 0x64000580ul);
    chip->ird_pla1[47] = !(chip->irdbus & 0xa9005000ul);
    chip->ird_pla1[48] = !(chip->irdbus & 0xa9002000ul);
    chip->ird_pla1[49] = !(chip->irdbus & 0xa9009000ul);

    chip->ird_pla2[0] = !(chip->irdbus & 0x68008000ul);
    chip->ird_pla2[1] = !(chip->irdbus & 0x00000500ul);
    chip->ird_pla2[2] = !(chip->irdbus & 0x8500a000ul);
    chip->ird_pla2[3] = !(chip->irdbus & 0x6599a000ul);
    chip->ird_pla2[4] = !(chip->irdbus & 0xa9000000ul);
    chip->ird_pla2[5] = !(chip->irdbus & 0x66004000ul);
    chip->ird_pla2[6] = !(chip->irdbus & 0x66001000ul);
    chip->ird_pla2[7] = !(chip->irdbus & 0x6a010000ul);
    chip->ird_pla2[8] = !(chip->irdbus & 0x69000000ul);
    chip->ird_pla2[9] = !(chip->irdbus & 0x55020000ul) && !chip->ird_pla2[1];
    chip->ird_pla2[10] = !(chip->irdbus & 0x6519a000ul);
    chip->ird_pla2[11] = !(chip->irdbus & 0x55950000ul) && !chip->ird_pla2[1];
    chip->ird_pla2[12] = !(chip->irdbus & 0x55024580ul);
    chip->ird_pla2[13] = !(chip->irdbus & 0x6600a580ul);
    chip->ird_pla2[14] = !(chip->irdbus & 0x6600a000ul) && !chip->ird_pla2[13];
    chip->ird_pla2[15] = !(chip->irdbus & 0x55015000ul) && !chip->ird_pla2[16];
    chip->ird_pla2[16] = !(chip->irdbus & 0x00940500ul);
    chip->ird_pla2[17] = !(chip->irdbus & 0x80005000ul);
    chip->ird_pla2[18] = !(chip->irdbus & 0x20005000ul);
    chip->ird_pla2[19] = !(chip->irdbus & 0x56000000ul);
    chip->ird_pla2[20] = !(chip->irdbus & 0xa9000a80ul);
    chip->ird_pla2[21] = !(chip->irdbus & 0x00000a98ul) && !chip->ird_pla2[20] && !chip->w529[24];
    chip->ird_pla2[22] = !(chip->irdbus & 0x00000a84ul) && !chip->ird_pla2[20] && !chip->w529[24];
    chip->ird_pla2[23] = !(chip->irdbus & 0x66000000ul);
    chip->ird_pla2[24] = !(chip->irdbus & 0x55010000ul);
    chip->ird_pla2[25] = !(chip->irdbus & 0xa9001000ul);
    chip->ird_pla2[26] = !(chip->irdbus & 0xa9004000ul);
    chip->ird_pla2[27] = !(chip->irdbus & 0x00000540ul);
    chip->ird_pla2[28] = !(chip->irdbus & 0x6600a580ul);
    chip->ird_pla2[29] = !(chip->irdbus & 0x65a96a6aul);
    chip->ird_pla2[30] = !(chip->irdbus & 0x6565a000ul);
    chip->ird_pla2[31] = !(chip->irdbus & 0x55015000ul);

    chip->ird_pla3[0] = (chip->tm_w1 & 7) == 0;
    chip->ird_pla3[1] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00008000ul);
    chip->ird_pla3[2] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00002000ul);
    chip->ird_pla3[3] = (chip->tm_w1 & 15) == 3;
    chip->ird_pla3[4] = (chip->tm_w1 & 15) == 6 && !chip->tm_w2;
    chip->ird_pla3[5] = (chip->tm_w1 & 15) == 6 && !chip->tm_w2;
    chip->ird_pla3[6] = (chip->tm_w1 & 15) == 6 && !chip->tm_w2;
    chip->ird_pla3[7] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65a96a69ul);
    chip->ird_pla3[8] = (chip->tm_w1 & 15) == 12;
    chip->ird_pla3[9] = (chip->tm_w1 & 15) == 11;
    chip->ird_pla3[10] = (chip->tm_w1 & 15) == 4;
    chip->ird_pla3[11] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65a96500ul);
    chip->ird_pla3[12] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00000800ul);
    chip->ird_pla3[13] = (chip->tm_w1 & 15) == 14;
    chip->ird_pla3[14] = (chip->tm_w1 & 15) == 6;
    chip->ird_pla3[15] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00000200ul);
    chip->ird_pla3[16] = (chip->tm_w1 & 15) == 5;
    chip->ird_pla3[17] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65a96580ul);
    chip->ird_pla3[18] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00000080ul);
    chip->ird_pla3[19] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65029000ul);
    chip->ird_pla3[20] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x9500a000ul);
    chip->ird_pla3[21] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65a96520ul);
    chip->ird_pla3[22] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00000020ul);
    chip->ird_pla3[23] = (chip->tm_w1 & 15) == 13;
    chip->ird_pla3[24] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65a96502ul);
    chip->ird_pla3[25] = (chip->tm_w1 & 15) == 0 && !(chip->irdbus & 0x65a96508ul);
    chip->ird_pla3[26] = (chip->tm_w1 & 15) == 2;
    chip->ird_pla3[27] = (chip->tm_w1 & 15) == 1;
    chip->ird_pla3[28] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00000008ul);
    chip->ird_pla3[29] = (chip->tm_w1 & 15) == 7 && !(chip->irdbus & 0x00000002ul);


    chip->ird_pla4[0] = !(chip->irdbus & 0x00000a84ul);
    chip->ird_pla4[1] = !(chip->irdbus & 0x00000a98ul);
    chip->ird_pla4[2] = !(chip->irdbus & 0xa9000a80ul);
    chip->ird_pla4[3] = !(chip->irdbus & 0x65a96900ul);
    chip->ird_pla4[4] = !(chip->irdbus & 0x66000000ul);
    chip->ird_pla4[5] = !(chip->irdbus & 0x55010000ul);
    chip->ird_pla4[6] = !(chip->irdbus & 0x69560000ul);
    chip->ird_pla4[7] = !(chip->irdbus & 0x65a90000ul);
    chip->ird_pla4[8] = !(chip->irdbus & 0x65956000ul);
    chip->ird_pla4[9] = !(chip->irdbus & 0x00080000ul);
    chip->ird_pla4[10] = !(chip->irdbus & 0x00200000ul);
    chip->ird_pla4[11] = !(chip->irdbus & 0x00800000ul);
    chip->ird_pla4[12] = !(chip->irdbus & 0xa5029580ul);
    chip->ird_pla4[13] = !(chip->irdbus & 0x84020580ul);
    chip->ird_pla4[14] = !(chip->irdbus & 0x90020580ul);
    chip->ird_pla4[15] = !(chip->irdbus & 0x8200a000ul);
    chip->ird_pla4[16] = !(chip->irdbus & 0x6502a000ul);
    chip->ird_pla4[17] = !(chip->irdbus & 0x52000000ul);
    chip->ird_pla4[18] = !(chip->irdbus & 0x58000000ul);
    chip->ird_pla4[19] = !(chip->irdbus & 0x00015000ul);
    chip->ird_pla4[20] = !(chip->irdbus & 0x65858000ul);
    chip->ird_pla4[21] = !(chip->irdbus & 0x65958940ul);

}

int main()
{
    int i;
    m68k_t chip;
    memset(&chip, 0, sizeof(chip));

    //for (i = 0; i < 1000; i++)
    //{
    //    M68K_Clock(&chip, i & 1);
    //    printf("%i %i %i\n", i, chip.o_e, chip.w259[0] & 15);
    //}
    for (int t2 = 0; t2 < 8; t2++)
    {
        for (int t4 = 0; t4 < 8; t4++)
        {
            int t3 = t4;
            int v1 = 1;
            if ((t2 & 5) == 0 && (t3 & 3) == 0)
                v1 = 0;
            else if ((t2 & 7) == 0 && (t3 & 1) == 0)
                v1 = 0;
            else if ((t2 & 4) == 0 && (t3 & 4) == 0)
                v1 = 0;
            else if ((t2 & 2) == 0 && (t3 & 6) == 0)
                v1 = 0;
            else if ((t2 & 3) == 0 && (t3 & 5) == 0)
                v1 = 0;
            else if ((t2 & 1) == 0 && (t3 & 7) == 0)
                v1 = 0;
            else if ((t2 & 6) == 0 && (t3 & 2) == 0)
                v1 = 0;
            printf("%i", v1);
        }
        printf("\n");
    }
}
