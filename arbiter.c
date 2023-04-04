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
    chip->w11 = !(!chip->w27 || !chip->dff9.l2);

    SDFFR_Update(&chip->dff9, chip->w2, chip->w10, chip->w7);

    chip->w12 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3;

    chip->w14 = DELAY_Update(&chip->d1, cycles, chip->w85);

    chip->w15 = chip->tm_w1 || chip->tm_w2;

    // ts1
    if (!chip->w12)
        chip->tm_w1 = chip->w33;

    SDFF_Update(&chip->dff10, chip->ext_w3, chip->w78);

    chip->w16 = !(chip->tm_w1 || chip->tm_w2);
    chip->w17 = !chip->dff10.l2;

    chip->w18 = !(1 && !chip->w30 && !chip->w28
        && !chip->w29 && !chip->w37 && !chip->w39);

    chip->w19 = !(1 && chip->w30 && chip->w28
        && chip->w29 && chip->w37 && chip->w39);

    chip->w20 = chip->tm_w1 ? chip->w39 : chip->w28;
    chip->w21 = chip->tm_w1 ? chip->w30 : chip->tm_w3;
    chip->w22 = chip->tm_w1 ? chip->w29 : chip->w30;
    chip->w23 = chip->tm_w1 ? chip->w29 : chip->w28;

    chip->w24 = chip->tm_w1;
    chip->w25 = chip->tm_w1;

    SDFF_Update(&chip->dff11, chip->ext_w2, chip->tm_w2);
    SDFF_Update(&chip->dff12, chip->ext_w2, chip->w41);

    chip->w26 = !(chip->tm_w1 && !chip->dff12.l2);
    chip->w27 = !chip->dff11.l2 || chip->w44;

    chip->w28 = chip->tm_w1;
    chip->w29 = chip->tm_w2;
    chip->w30 = chip->tm_w1;

    chip->w31 = !chip->w65;
    chip->w32 = !chip->w68;

    chip->w33 = chip->tm_w1;
    chip->w34 = chip->w33 || chip->dff14.l2;
    chip->w35 = chip->dff14.l2;

    SDFF_Update(&chip->dff13, chip->ext_w2, chip->tm_w1);

    chip->w36 = chip->w63 || chip->tm_w2;

    SDFFR_Update(&chip->dff14, chip->w36, chip->w56, chip->tm_w1);

    chip->w37 = chip->tm_w1;
    chip->w38 = chip->tm_w1;
    chip->w39 = chip->tm_w1;

    SDFFR2_Update(&chip->dff15, chip->ext_w3, chip->w40, chip->w73);

    chip->w40 = chip->w26 && chip->w83;

    chip->w41 = chip->w27 || chip->dff15.o2;
    chip->w42 = !(chip->dff19.o2 && chip->w71);
    chip->w43 = chip->w44 || !chip->dff16.l2;

    SDFF_Update(&chip->dff16, chip->ext_w3, chip->w44);

    chip->w44 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3;

    // ???
    chip->w45 = chip->w46 && chip->tm_w2;
    chip->w46 = chip->w45 || chip->tm_w2;

    chip->w47 = !chip->w75;

    chip->w48 = !chip->w45;

    chip->w49 = chip->dff17.o2;

    SDFFR2_Update(&chip->dff17, chip->ext_w3, chip->w58, chip->w73);

    chip->w50 = chip->w77 || chip->tm_w2;

    SDFF_Update(&chip->dff18, chip->ext_w3, chip->w77);

    chip->w51 = !chip->dff18.l2 || chip->tm_w2;

    chip->w52 = !(chip->w53 || chip->tm_w2);

    chip->w53 = chip->w50 && chip->w51;

    chip->w54 = !(!chip->dff23.l2 && chip->tm_w2);

    chip->w55 = chip->w87 || chip->tm_w2;

    chip->w56 = chip->tm_w1;

    chip->w57 = chip->w53 || chip->tm_w2;

    chip->w58 = chip->w54 && chip->w84;

    chip->w59 = chip->tm_w1 || chip->tm_w2;

    chip->w60 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3;

    // ts2
    if (!chip->tm_w1)
        chip->tm_w1 = chip->tm_w2;
    // ts3
    if (!chip->tm_w1)
        chip->tm_w1 = 0;

    chip->w61 = chip->tm_w1;
    chip->w62 = chip->tm_w1;

    chip->w63 = !(chip->tm_w1 && chip->tm_w3 && chip->tm_w3);

    chip->w64 = !(chip->w43 && chip->tm_w2);

    chip->w65 = !(!chip->dff13.l2 && chip->tm_w2);

    chip->w66 = chip->tm_w1 || chip->tm_w2;

    chip->w67 = chip->tm_w1;

    chip->w68 = !(chip->w56 || chip->tm_w2);

    SDFFR2_Update(&chip->dff19, chip->ext_w4, chip->w71, chip->w73);

    chip->w69 = !(chip->w44 || chip->tm_w2);

    chip->w70 = chip->w27 && chip->w71;

    chip->w71 = chip->dff20.o2 && chip->w74;

    chip->w72 = chip->dff15.o1 || chip->w43;

    SDFFR2_Update(&chip->dff20, chip->ext_w4, chip->w74, chip->w73);

    chip->w73 = chip->tm_w1 && chip->tm_w2;

    chip->w74 = chip->w49; // FIXME: delay??

    chip->w75 = !(chip->tm_w1 && chip->tm_w2);

    chip->w76 = chip->tm_w1 || chip->tm_w2;
    chip->w77 = !chip->dff22.l2 || chip->tm_w2;

    chip->w78 = !chip->w79 || chip->tm_w2 || chip->tm_w3;

    chip->w79 = !chip->dff21.l2 || chip->tm_w2 || chip->tm_w4;

    SDFF_Update(&chip->dff21, chip->ext_w4, chip->tm_w1);

    SDFF_Update(&chip->dff22, chip->ext_w3, chip->tm_w1);

    chip->w80 = chip->tm_w1 ? chip->w37 : chip->w39;

    chip->w81 = chip->w77;

    chip->w82 = chip->tm_w1;

    chip->w83 = chip->dff23.l2 || chip->tm_w2;

    chip->w84 = !(chip->dff23.l2 && chip->tm_w2 && chip->tm_w3);

    chip->w85 = chip->tm_w1;

    chip->w86 = chip->w19 || chip->tm_w2;

    chip->w87 = chip->tm_w1;

    SDFFR_Update(&chip->dff23, !chip->w59, chip->tm_w1, chip->tm_w1);
}

int main()
{
    return 0;
}
