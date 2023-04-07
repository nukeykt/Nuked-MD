#include "tmss.h"

void TMSS_Clock(tmss_t *chip)
{
    SDFFR_Update(&chip->dff1, chip->w40, chip->w3, chip->w27);
    SDFFR2_Update(&chip->dff2, chip->w10, chip->dff1.l2, chip->w27);

    chip->w1 = !(chip->tm_w1 && chip->tm_w2);
    chip->w2 = !(chip->w1 || chip->w67);

    chip->w3 = chip->l1 == 'SE' && chip->l2 == 'GA';

    chip->w8 = !chip->tm_w1;

    chip->w9 = !chip->tm_w1;

    chip->w10 = !(chip->w9 && chip->w12 && chip->w13 && chip->tm_w4);

    chip->w11 = !chip->tm_w1;
    chip->w12 = !chip->tm_w1;
    chip->w13 = !chip->tm_w1;

    chip->w14 = !(chip->w11 || chip->w12 || chip->tm_w4 || chip->tm_w5 || chip->tm_w1 || chip->tm_w2 || chip->tm_w3);

    chip->w15 = !(chip->w14 && chip->w22 && chip->w26 && chip->w35);

    chip->w16 = !chip->w15;

    chip->w17 = !(chip->w15 || chip->tm_w2);

    chip->w18 = !(chip->w17 || chip->tm_w1);

    if (chip->w38)
        chip->l1 = chip->ext_w1;

    if (chip->w39)
        chip->l2 = chip->ext_w1;

    chip->w20 = chip->tm_w1 ? chip->l2 : chip->l1;
    chip->w21 = chip->tm_w1 ? chip->w20 : chip->tm_w1;

    if (!chip->w42)
        chip->ext_w2 = chip->w21;

    chip->w22 = !(chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4 || chip->tm_w5 || chip->tm_w1 || chip->tm_w2);

    chip->w23 = !(chip->w14 && chip->w22 && chip->w26 && chip->w34);

    chip->w24 = chip->w24 || chip->tm_w2;
    SDFFR_Update(&chip->dff3, chip->w24, (chip->ext_w1 & 1) != 0, chip->w27);

    chip->w25 = !chip->tm_w1;

    chip->w26 = !(chip->w25 || chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4 || chip->tm_w5 || chip->tm_w1);

    chip->w27 = chip->tm_w1;

    chip->w28 = chip->dff3.l2 || chip->tm_w2 || chip->tm_w3;

    chip->w29 = chip->w30 || chip->tm_w2;

    chip->w30 = !(chip->dff3.l2 || chip->tm_w2);

    chip->w31 = chip->tm_w1 || chip->w32;

    chip->w32 = !chip->tm_w1;
    
    chip->w33 = !chip->tm_w1;

    chip->w34 = !(chip->w33 || chip->tm_w1);

    chip->w35 = !(chip->tm_w1 || chip->tm_w2);

    chip->w36 = !chip->tm_w1;
    chip->w37 = !chip->w36;

    chip->w38 = chip->w36 && chip->w43 && chip->w16;

    chip->w39 = chip->w37 && chip->w43 && chip->w16;

    chip->w40 = !(chip->w43 && chip->w16);
    chip->w41 = !(chip->w44 && chip->w16);

    chip->w42 = (chip->w41 && chip->w28) || chip->tm_w3;

    chip->w43 = !chip->tm_w1;
    chip->w44 = !chip->w43;

    chip->w45 = chip->w18 || chip->tm_w2;

    chip->w46 = !chip->tm_w1;
    chip->w47 = !chip->w46;
    
    chip->w48 = !chip->tm_w1;
    chip->w49 = !chip->w48;

    chip->w50 = chip->w47 || chip->w49 || chip->w61;
    chip->w51 = chip->w46 || chip->w49 || chip->w61;

    chip->w52 = chip->w50 ^ chip->w56;

    chip->w53 = chip->w47 || chip->w48 || chip->w61;
    chip->w54 = chip->w46 || chip->w48 || chip->w61;
    chip->w55 = chip->w47 || chip->w49 || chip->w60;
    chip->w56 = chip->w46 || chip->w49 || chip->w60;

    chip->w57 = chip->w51 ^ chip->w56;
    chip->w58 = chip->w53 ^ chip->w56;
    chip->w59 = chip->w54 ^ chip->w56;

    chip->w60 = !chip->tm_w1;
    chip->w61 = !chip->w60;

    chip->w62 = chip->w56 ^ chip->w55;

    chip->w63 = !chip->w52;
    chip->w64 = !chip->w57;
    chip->w65 = !chip->w58;
    chip->w66 = !chip->w59;
    chip->w67 = !chip->w62;
}
