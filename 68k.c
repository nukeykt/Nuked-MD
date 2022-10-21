#include "68k.h"

void M68K_RegisterLogic(busstate_t *l, busstate_t *h, int *val)
{
    // Update register value if either line pulls to gnd
    int read1 = l->pull ^ 0xffff;
    int read2 = h->pull ^ 0xffff;
    int pg1 = (l->pull & (~l->val)) & 0xffff;
    int pg2 = (h->pull & (~h->val)) & 0xffff;
    *val &= ~pg1;
    *val |= pg2;

    // If 
    l->val &= ~read1;
    h->val &= ~read2;
    l->val |= *val & read1;
    h->val |= (~*val) & read2;
}

void M68K_Clock(m68k_t* chip, int clk)
{
    chip->b1[0].pull = 0;
    chip->b1[1].pull = 0;
    chip->b1[2].pull = 0;
    chip->b1[3].pull = 0;

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

    if (chip->w80)
        chip->w107 = (~chip->b1[3].val) & 0xffff;
    else if (chip->w82)
        chip->w107 = (~chip->b1[1].val) & 0xffff;
    else if (chip->w84)
        chip->w107 = chip->tm_w1;
    else
    {
        // FIXME: can b1[2] 'leak' into w107?
    }
    chip->w108 = (~chip->w107) & 0x80ff;

    if (chip->w79)
    {
        chip->b1[2].val = (~chip->w107) & 0xffff;
        chip->b1[2].pull = 0xffff;
        chip->b1[3].val = chip->w107 & 0xffff;
        chip->b1[3].pull = 0xffff;
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


}
