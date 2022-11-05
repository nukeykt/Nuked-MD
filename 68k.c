#include "68k.h"

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

void M68K_Clock(m68k_t* chip, int clk)
{
    int v1, v2;
    int i;
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
}
