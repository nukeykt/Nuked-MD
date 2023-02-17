
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
    int i;
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
        chip->w322 = !chip->tm_w2 && (chip->tm_w3 || chip->tm_w1);
        chip->w323 = !chip->tm_w1 && (chip->tm_w2 || !chip->tm_w3);
        chip->w324 = !chip->tm_w1;
    }

    chip->w325 = chip->w322 || chip->w323 || chip->w324;

    if (chip->c1)
        chip->w326 = chip->tm_w1;

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

    chip->w330 = chip->tm_w1 ? 0 : chip->c2;

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

    chip->w333 = !chip->tm_w1;

    chip->w334 = !(chip->tm_w1 || chip->w333 || chip->tm_w3);

    if (chip->c2)
        chip->w335 = !chip->w334;
    else if (clk1)
        chip->w335 = chip->w336;

    chip->w336 = chip->w335 || chip->w278;

    chip->w337 = !(chip->w333 || chip->tm_w2 || !chip->tm_w3);

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
        chip->w349 = chip->tm_w1;

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

    chip->w397 = !(chip->w267 || chip->w419 || (!chip->w421[1] && chip->tm_w4) || chip->w426);

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

    chip->w407 = chip->tm_w1 ? 0 : chip->c2;

    if (chip->w407)
        chip->w406 = !chip->w408;


    if (chip->c1)
        chip->w408 = !chip->tm_w1;

    chip->w409 = !(chip->tm_w1 || chip->w410);

    chip->w411 = chip->tm_w1 ^ chip->tm_w2;
    chip->w412 = !chip->w411;
    chip->w413 = !chip->w405;

    chip->w416 = !(chip->w359[3] || chip->w417);

    if (chip->w407)
        chip->w418[0] = chip->tm_w1;
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

    chip->w431 = !(chip->tm_w1 || chip->tm_w2);

    chip->w432 = !(chip->w269[2] || (chip->w270[0] & 1) == 0 || chip->w268[2] || chip->w276[2]);

    chip->w433 = !(chip->w278 || (chip->w270[0] & 2) == 0 || (chip->w270[0] & 1) == 0);

    chip->w434 = !(chip->w278 || (chip->w440 && chip->w437 && chip->w436[1] && chip->w435[2]));

    chip->w437 = !(chip->w276[2] && chip->w438);

    if (chip->c2)
        chip->w438 = chip->tm_w1;

    chip->w440 = !(chip->w439[1] || chip->w343[2]);

    chip->w441 = !(chip->tm_w1 || !chip->tm_w2);

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
        chip->w445 = chip->tm_w1;
    if (chip->tm_w1)
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
        chip->w460 = chip->tm_w1;
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
        chip->codebus2 |= (!chip->tm_w1) << 6;
        chip->codebus2 |= (!chip->tm_w2) << 7;
    }

    if (chip->w267)
    {
        chip->w472 = chip->w274;
        chip->w473 = chip->w273;
    }

    chip->w475 = !(chip->tm_w3 || !chip->tm_w2);
    chip->w474 = !(!chip->tm_w1 || chip->w475);

    chip->w476 = chip->w482[3] || chip->w482[4] || chip->w482[2];

    chip->w478 = !(chip->w267 && (chip->w360 || chip->w296[2]));
    chip->w477 = !chip->w478;

    if (chip->w478)
    {
        chip->w479 = chip->tm_w1;
        chip->w480 = chip->tm_w1;
        chip->w481 = chip->tm_w1;
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

    chip->w484 = !chip->tm_w1;
    chip->w485 = !chip->tm_w1;

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
        chip->codebus2 |= chip->tm_w1 & 0x33f;
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
