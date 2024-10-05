#include "t84c00.h"

void T84C00_Clock(t84c00_t* chip)
{
    chip->clk_p = chip->input.i_clk;
    chip->clk_n = !chip->input.i_clk;


    if (!chip->tm_w1)
        chip->w147 = chip->tm_w2 ^ 255;


    chip->w82 = !(chip->pla[20] || chip->pla[32]);

    chip->w90 = !chip->tm_w1;
    chip->w92 = !chip->tm_w1;

    chip->w96 = chip->tm_w1;

    chip->pla[0] = chip->w147 == 0x76 && chip->w90; // 3

    chip->pla[1] = (chip->w147 & 0xf7) == 0xd3 && chip->w90; // 0
    chip->pla[2] = ((chip->w147 & 0xf7) == 0xf3 && chip->w90) || !chip->tm_w2; // 1
    chip->pla[3] = ((chip->w147 & 0xc7) == 0x46 && chip->w92) || !chip->tm_w2; // 2
    chip->pla[4] = ((chip->w147 & 0xe6) == 0xa2 && chip->w92) || !chip->tm_w2; // 7
    chip->pla[5] = ((chip->w147 & 0xe7) == 0xa1 && chip->w92) || !chip->tm_w2; // 5
    chip->pla[6] = ((chip->w147 & 0xe7) == 0xa0 && chip->w92) || !chip->tm_w2; // 4
    chip->pla[7] = (chip->w147 == 0x10 && chip->w90) || !chip->tm_w2; // 8
    chip->pla[8] = ((chip->w147 & 0x38) == 0x30 && !chip->w82) || !chip->tm_w2; // 12
    chip->pla[9] = ((chip->w147 & 0xf7) == 0x57 && chip->w92 && chip->w74) || !chip->tm_w3; // 15

    chip->pla[10] = ((chip->w147 & 0xc0) == 0xc0 && !chip->w96) || !chip->tm_w2; // 24
    chip->pla[11] = (chip->w147 == 0x37 && chip->w90) || !chip->tm_w2; // 6
    chip->pla[12] = ((chip->w147 & 0xc7) == 0x42 && chip->w92) || !chip->tm_w2; // 30
    chip->pla[13] = (chip->w147 == 0x3f && chip->w90) || !chip->tm_w2; // 9
    chip->pla[14] = ((chip->w147 & 0x38) == 0x28 && !chip->w82) || !chip->tm_w2; // 10
    chip->pla[15] = ((chip->w147 & 0xf7) == 0x57 && chip->w92) || !chip->tm_w2; // 11
    chip->pla[16] = ((chip->w147 & 0xe7) == 0x20 && chip->w90) || !chip->tm_w2; // 50
    chip->pla[17] = ((chip->w147 & 0xe7) == 0x07 && chip->w90) || !chip->tm_w2; // 27
    chip->pla[18] = ((chip->w147 & 0xc0) == 0x00 && !chip->w96) || !chip->tm_w2; // 28
    chip->pla[19] = (chip->w147 == 0x27 && chip->w90) || !chip->tm_w2; // 21

    chip->pla[20] = ((chip->w147 & 0xc0) == 0x80 && chip->w90);

    chip->pla[21] = ((chip->w147 & 0xc0) == 0x80 && chip->w90) || !chip->tm_w2; // 33
    chip->pla[22] = !chip->w96 || !chip->tm_w2; // 36
    chip->pla[23] = ((chip->w147 & 0xc0) == 0x40 && chip->w90) || !chip->tm_w2; // 37
    chip->pla[24] = ((chip->w147 & 0xcf) == 0x09 && chip->w90) || !chip->tm_w2; // 29
    chip->pla[25] = ((chip->w147 & 0xc7) == 0x44 && chip->w92) || !chip->tm_w2; // 16
    chip->pla[26] = (chip->w147 == 0x2f && chip->w92) || !chip->tm_w2; // 17
    chip->pla[27] = ((chip->w147 & 0xf7) == 0x67 && chip->w90) || !chip->tm_w2; // 38
    chip->pla[28] = ((chip->w147 & 0x38) == 0x38 && !chip->w82) || !chip->tm_w2; // 22
    chip->pla[29] = ((chip->w147 & 0x38) == 0x20 && !chip->w82) || !chip->tm_w2; // 13
    chip->pla[30] = ((chip->w147 & 0xc0) == 0x80 && !chip->w96) || !chip->tm_w2; // 25
    chip->pla[31] = ((chip->w147 & 0xc0) == 0x40 && !chip->w96) || !chip->tm_w2; // 26

    chip->pla[32] = ((chip->w147 & 0xc7) == 0xc6 && chip->w90);

    chip->pla[33] = ((chip->w147 & 0xc7) == 0xc6 && chip->w90) || !chip->tm_w2; // 34
    chip->pla[34] = ((chip->w147 & 0x38) == 0x08 && !chip->w82) || !chip->tm_w2; // 18
    chip->pla[35] = ((chip->w147 & 0x38) == 0x18 && !chip->w82) || !chip->tm_w2; // 19
    chip->pla[36] = ((chip->w147 & 0x38) == 0x10 && !chip->w82) || !chip->tm_w2; // 20
    chip->pla[37] = (chip->w147 == 0x18 && chip->w90) || !chip->tm_w2; // 51
    chip->pla[38] = ((chip->w147 & 0xc7) == 0x05 && chip->w90) || !chip->tm_w2; // 23
    chip->pla[39] = ((chip->w147 & 0xc7) == 0x40 && chip->w92) || !chip->tm_w2; // 31
    chip->pla[40] = ((chip->w147 & 0x38) == 0x00 && !chip->w82) || !chip->tm_w2; // 14
    chip->pla[41] = ((chip->w147 & 0xc6) == 0x04 && chip->w90) || !chip->tm_w2; // 32
    chip->pla[42] = ((chip->w147 & 0xf7) == 0x47 && chip->w92) || !chip->tm_w2; // 41
    chip->pla[43] = ((chip->w147 & 0xc7) == 0x06 && chip->w90) || !chip->tm_w2; // 35

    chip->pla[44] = ((chip->w147 & 0xc7) == 0xc7 && chip->w90) || !chip->tm_w2; // 42
    chip->pla[45] = ((chip->w147 & 0xf8) == 0x70 && chip->w90 && !chip->pla[0]) || !chip->tm_w2; // 39
    chip->pla[46] = ((chip->w147 & 0xc7) == 0x46 && chip->w90 && !chip->pla[0]) || !chip->tm_w2; // 40
    chip->pla[47] = ((chip->w147 & 0xe7) == 0x20 && chip->w90) || !chip->tm_w2; // 50
    chip->pla[48] = ((chip->w147 & 0xc7) == 0xc0 && chip->w90) || !chip->tm_w2; // 53
    chip->pla[49] = ((chip->w147 & 0xc7) == 0xc4 && chip->w90) || !chip->tm_w2; // 56
    chip->pla[50] = ((chip->w147 & 0xfe) == 0x34 && chip->w90) || !chip->tm_w2; // 45
    chip->pla[51] = ((chip->w147 & 0xc7) == 0xc2 && chip->w90) || !chip->tm_w2; // 55
    chip->pla[52] = (chip->w147 == 0xcd && chip->w90) || !chip->tm_w2; // 74
    chip->pla[53] = (chip->w147 == 0x08 && chip->w90) || !chip->tm_w2; // 59
    chip->pla[54] = ((chip->w147 & 0xf7) == 0x32 && chip->w90) || !chip->tm_w2; // 60

    chip->pla[55] = ((chip->w147 & 0xf7) == 0xd3 && chip->w90) || !chip->tm_w2; // 61
    chip->pla[56] = ((chip->w147 & 0xe7) == 0x02 && chip->w90) || !chip->tm_w2; // 62
    chip->pla[57] = (chip->w147 == 0xcb && !chip->w100) || !chip->tm_w2; // 49
    chip->pla[58] = ((chip->w147 & 0xc7) == 0x06 && chip->w90) || !chip->tm_w2; // 35
    chip->pla[59] = (chip->w147 == 0x18 && chip->w90) || !chip->tm_w2; // 51
    chip->pla[60] = ((chip->w147 & 0xc7) == 0x86 && chip->w90) || !chip->tm_w2; // 46
    chip->pla[61] = (chip->w147 == 0x36 && chip->w90) || !chip->tm_w2; // 48
    chip->pla[62] = ((chip->w147 & 0xe7) == 0x47 && chip->w92) || !chip->tm_w2; // 66
    chip->pla[63] = ((chip->w147 & 0xc7) == 0x43 && chip->w92) || !chip->tm_w2; // 67
    chip->pla[64] = ((chip->w147 & 0xf7) == 0x22 && chip->w90) || !chip->tm_w2; // 68
    chip->pla[65] = (chip->w147 == 0xed && chip->w90) || !chip->tm_w2; // 47

    chip->pla[66] = (chip->w147 == 0xcb && chip->w90) || !chip->tm_w2; // 54
    chip->pla[67] = ((chip->w147 & 0xcf) == 0x43 && chip->w92) || !chip->tm_w2; // 65
    chip->pla[68] = (chip->w147 == 0xc3 && chip->w90) || !chip->tm_w2; // 69
    chip->pla[69] = (chip->w147 == 0xd3 && chip->w90) || !chip->tm_w2; // 70
    chip->pla[70] = ((chip->w147 & 0xc7) == 0x45 && chip->w92) || !chip->tm_w2; // 52
    chip->pla[71] = (chip->w147 == 0x36 && chip->w90 && !chip->w100) || !chip->tm_w2; // 58
    chip->pla[72] = ((chip->w147 & 0xc7) == 0xc6 && chip->w90) || !chip->tm_w2; // 34
    chip->pla[73] = (chip->w147 == 0xc9 && chip->w90) || !chip->tm_w2; // 63
    chip->pla[74] = ((chip->w147 & 0xc7) == 0x41 && chip->w92) || !chip->tm_w2; // 64
    chip->pla[75] = ((chip->w147 & 0xc6) == 0x40 && chip->w92) || !chip->tm_w2; // 71
    chip->pla[76] = ((chip->w147 & 0xdf) == 0xdd && chip->w90) || !chip->tm_w2; // 57

    chip->pla[77] = ((chip->w147 & 0xcf) == 0x0b && chip->w90) || !chip->tm_w2; // 84
    chip->pla[78] = ((chip->w147 & 0xe7) == 0x07 && chip->w90) || !chip->tm_w2; // 73
    chip->pla[79] = ((chip->w147 & 0xcb) == 0xc1 && chip->w90) || !chip->tm_w2; // 75
    chip->pla[80] = ((chip->w147 & 0xe7) == 0xa2 && chip->w92) || !chip->tm_w2; // 77
    chip->pla[81] = ((chip->w147 & 0xe7) == 0xa3 && chip->w92) || !chip->tm_w2; // 78
    chip->pla[82] = (chip->w147 == 0x10 && chip->w90) || !chip->tm_w2; // 72
    chip->pla[83] = ((chip->w147 & 0xcf) == 0x09 && chip->w90) || !chip->tm_w2; // 29
    chip->pla[84] = ((chip->w147 & 0xc0) == 0x40 && !chip->w96) || !chip->tm_w2; // 26
    chip->pla[85] = (chip->w147 == 0xcb && !chip->w100) || !chip->tm_w2; // 49
    chip->pla[86] = ((chip->w147 & 0xcf) == 0xc5 && chip->w90) || !chip->tm_w2; // 82

    chip->pla[87] = ((chip->w147 & 0xe7) == 0xa0 && chip->w92) || !chip->tm_w2; // 80
    chip->pla[88] = ((chip->w147 & 0xc7) == 0x06 && chip->w90) || !chip->tm_w2; // 81
    chip->pla[89] = ((chip->w147 & 0xe7) == 0xa1 && chip->w92) || !chip->tm_w2;
    chip->pla[90] = ((chip->w147 & 0xf7) == 0x67 && chip->w92) || !chip->tm_w2;
    chip->pla[91] = ((chip->w147 & 0x07) == 0x06 && !chip->w96) || !chip->tm_w2;
    chip->pla[92] = (!chip->w96 && !chip->w100) || !chip->tm_w2;
    chip->pla[93] = ((chip->w147 & 0xcf) == 0x02 && chip->w90) || !chip->tm_w2;
    chip->pla[94] = ((chip->w147 & 0xc7) == 0x42 && chip->w92) || !chip->tm_w2;
    chip->pla[95] = ((chip->w147 & 0xc7) == 0x03 && chip->w90) || !chip->tm_w2;
    chip->pla[96] = (chip->w147 == 0xf9 && chip->w90) || !chip->tm_w2;

    chip->pla[97] = ((chip->w147 & 0xe7) == 0xa0 && chip->w92) || !chip->tm_w2;
    chip->pla[98] = ((chip->w147 & 0xe7) == 0xa1 && chip->w92) || !chip->tm_w2;
    chip->pla[99] = (chip->w147 == 0xe3 && chip->w90) || !chip->tm_w2;
    chip->pla[100] = ((chip->w147 & 0xe7) == 0x02 && chip->w90) || !chip->tm_w2;
    chip->pla[101] = ((chip->w147 & 0xcf) == 0x01 && chip->w90) || !chip->tm_w2;
    chip->pla[102] = (chip->w147 == 0xe9 && chip->w90) || !chip->tm_w2;
    chip->pla[103] = ((chip->w147 & 0xe7) == 0x47 && chip->w92) || !chip->tm_w2;
    chip->pla[104] = ((chip->w147 & 0xdf) == 0xdd && chip->w90) || !chip->tm_w2;
    chip->pla[105] = (chip->w147 == 0xeb && chip->w90) || !chip->tm_w2;
    chip->pla[106] = ((chip->w147 & 0xf4) == 0xa0 && chip->w92) || !chip->tm_w2;
    chip->pla[107] = (chip->w147 == 0xd9 && chip->w90) || !chip->tm_w2;

    if (chip->w42)
        chip->w145 = chip->w146 ^ 255;
    else if (chip->w2)
        chip->w145 = chip->input.i_data;

    if (chip->w1)
        chip->w146 = chip->w145 ^ 255;

    chip->o_data = chip->w145;
    chip->o_data_z = chip->w44;

    if (chip->clk_p)
        chip->l14 = chip->tm_w1;
    if (chip->clk_p)
        chip->l15 = chip->w201 && chip->w110;
    if (chip->l14 || (chip->clk_p && chip->tm_w3))
        chip->w44 = 1;
    else if (chip->clk_n && chip->l15)
        chip->w44 = 0;

    chip->w42 = chip->clk_n && chip->l15 && !chip->pla[43];

    chip->w3 = !(chip->tm_w1 || chip->tm_w2);

    if (chip->clk_p && chip->w41 && !(chip->w201 || chip->tm_w2))
        chip->w1 = 1;
    else if (chip->w55 || (chip->clk_p && (chip->w201 || chip->w114)))
        chip->w1 = 0;

    if (clk_p)
        chip->l1 = chip->w55 || (chip->w41 && chip->tm_w3);

    int w15 = !(chip->w201 || chip->w202 || chip->tm_w3);

    if (chip->clk_p && w15)
        chip->w2 = 1;
    else if ((!chip->clk_n && chip->w131 && chip->w41) || (chip->clk_n && chip->l1))
        chip->w2 = 0;

    int w46 = !(chip->w131 || (chip->w127 && chip->w107) || (chip->w127 && chip->pla[43]);
    chip->w192 = (chip->w201 && chip->w110) || (chip->w41 && chip->w3 && w46);

    if (chip->clk_n)
        chip->w50 = !chip->input.i_reset;
    if (chip->clk_p)
        chip->w51 = chip->w50;

    if (chip->clk_p)
        chip->l19 = !(chip->w131 && chip->w114);

    int w52 = chip->clk_n && chip->l19;
    if (w52)
        chip->w55 = chip->w51;

    int w53 = !chip->l19 && chip->clk_n && !chip->w55;

    if (w53 && chip->w51)
        chip->w56 = 0;
    else if (chip->w55 || (w53 && !chip->w104 && !chip->w51))
        chip->w56 = 1;

    int w57 = chip->w56 || chip->w104;

    if (chip->clk_n)
        chip->w4 = !chip->input.i_int;
    if (chip->clk_p)
        chip->w5 = chip->w4;

    int nmi = !chip->input.i_nmi;

    if (chip->l2)
        chip->w7 = 0;
    else if (!nmi)
        chip->w7 = 1;

    if (chip->l2)
        chip->w6 = 0;
    else if (nmi)
        chip->w6 = chip->w7;

    if (chip->clk_n)
        chip->w8 = !chip->w6;
    if (chip->clk_p)
        chip->w9 = chip->w8;

    if (chip->clk_p)
        chip->l2 = chip->w55 || chip->tm_w2;
    if (chip->clk_p)
        chip->l3 = chip->w73 && !chip->pla[2];

    int w12 = !(chip->w5 && chip->w9 && chip->l3);

    int w118 = chip->tm_w1 || chip->tm_w1 || (chip->w131 && chip->tm_w1);

    int w137 = !(chip->tm_w1 && chip->tm_w2);
    int w133 = chip->w55 || w137;

    if (chip->clk_p)
        chip->l4 = !(chip->w55 || !w118 || !w133 || chip->tm_w5);

    int w16 = chip->clk_n && chip->l4;

    if (w16)
        chip->w19 = chip->w9;
    if (chip->w55)
        chip->w19 = 0;

    if (chip->clk_p)
        chip->l26 = chip->w131 && chip->pla[2] && chip->w110;
    if (chip->clk_p)
        chip->l27 = chip->w131 && chip->pla[70] && chip->w114;

    int w71 = chip->clk_n && chip->l26;
    int w75 = chip->clk_n && chip->l27 && !chip->w19;

    if (chip->w55 || chip->w18)
        chip->w74 = 0;
    else if (w71)
        chip->w74 = (chip->w147 >> 3) & 1;

    if (chip->w19 || chip->w55 || chip->w18)
        chip->w73 = 0;
    else if (w71)
        chip->w73 = (chip->w147 >> 3) & 1;
    else if (w75)
        chip->w73 = chip->w74;

    chip->w110 = !(chip->tm_w1 || chip->tm_w2);
    if (chip->clk_p)
        chip->l31 = chip->w110;
    if (chip->clk_n)
        chip->w114 = chip->l31 && chip->w112;

    if (chip->clk_p)
        chip->l12 = (chip->w114 || !chip->w34) && !chip->w41;
    if (chip->clk_n)
        chip->w34 = !(chip->l12 && chip->w112);

    if (chip->w202)
        chip->w40 = 0;
    else if (chip->clk_n)
        chip->w40 = chip->w39;

    chip->w41 = !chip->w40 && !chip->w34;

    if (chip->clk_p)
        chip->l30 = chip->w41;
    if (chip->clk_n)
        chip->w109 = chip->l30 && chip->w112;

    if (chip->clk_p)
    if (chip->clk_p)
        chip->l25 = chip->w109;
    if (chip->clk_n)
        chip->w68 = chip->l25 && chip->w112;

    if (chip->clk_p)
        chip->l21 = chip->w68;
    if (chip->clk_n)
        chip->w61 = chip->l25 && chip->w112;

    if (chip->clk_p)
        chip->l36 = w133;

    int w132 = chip->clk_n && chip->l36;

    if (chip->clk_p)
        chip->w130 = w118;
    if (w132)
        chip->w131 = chip->w130;
    if (chip->clk_p)
        chip->l32 = !chip->w131;
    if (w132)
        chip->w120 = !(chip->l32 || chip->w130 || chip->w134);

    if (chip->clk_p)
    {
        int w125 = !((chip->tm_w1 && chip->tm_w2) || (chip->tm_w3 && chip->tm_w4));
        chip->w134 = w125 && (chip->tm_w1 || (chip->w131 && chip->tm_w3));
    }

    if (chip->clk_p)
        chip->l35 = !chip->w120;
    if (w132)
        chip->w127 = !(chip->l35 || chip->w130 || chip->w134);

    if (chip->clk_p)
        chip->l34 = chip->w127;
    if (w132)
        chip->w123 = !chip->w130 && (chip->l34 || chip->w134);

    if (chip->clk_p)
        chip->l33 = !chip->w123;
    if (w132)
        chip->w121 = !(chip->l33 || chip->w130);

    int w11 = w12 || !chip->w9 || !chip->pla[0];
    int w10 = !w11 || w12 || !chip->w9;

    if (w16 && !w11)
        chip->halt = 1;
    else if (chip->w19 || chip->w18 || chip->w55 || !w57)
        chip->halt = 0;

    chip->o_halt = !chip->halt;

    if (w16)
        chip->w18 = chip->tm_w1;
    else if (chip->w55)
        chip->w18 = w12;
    int w18_l = chip->w18 && !chip->w55;

    int w13 = (chip->halt || (w16 && w10)) || (chip->w19 || w18_l);
    int w14 = w13 && (w10 || !w16);

    int w106 = (chip->pla[80] && chip->w120) || (chip->w127 && chip->pla[81]) || ((chip->pla[55] || chip->pla[75]) && chip->w123);

    if (chip->clk_p)
        chip->l82 = chip->w114;
    if (chip->clk_n)
        chip->w37 = !(chip->w131 && chip->w18 && chip->l82);
    if (chip->clk_p)
        chip->w38 = !((chip->w131 && chip->w18) || w106) || !(!chip->w37 || chip->w114);
    if (chip->clk_p)
        chip->w39 = !(chip->input.i_wait && chip->w38);

    if (chip->clk_p)
        chip->l6 = !(chip->w110 && !(chip->w131 || w106)) && !(chip->w131 && (chip->w41 || !(!chip->w110 || chip->w18)));

    int w24 = chip->clk_n && !chip->w202 && chip->l6;
    int w26 = chip->w131 && chip->w41 && chip->clk_p;

    if (chip->clk_p)
        chip->l9 = (!chip->w131 && chip->w41) || chip->w55 || chip->w109;

    int w32 = chip->clk_n && chip->l9;

    if (w24)
        chip->w21 = 0;
    else if (w26 || w32)
        chip->w21 = 1;

    if (chip->clk_p)
        chip->l5 = chip->w131 && chip->w18 && chip->w37;

    int w23 = !(chip->clk_n && chip->l5);

    int w36 = chip->w114 && w106;

    if (!w23 || (chip->clk_p && w36))
        chip->w22 = 0;
    else if (w26 || w32)
        chip->w22 = 1;

    if (chip->clk_p)
        chip->l8 = !chip->w202 && !chip->w201 && !(chip->w131 && (chip->w41 || chip->w18)); // w101

    if (!(!w24 && !(chip->clk_p && w36) && w23) && chip->l8)
        chip->w31 = 0;
    else if (w26 || w32)
        chip->w31 = 1;

    if (chip->clk_p)
        chip->l11 = chip->w201 && chip->w114;

    if (chip->clk_p)
        chip->l10 = chip->w41 || chip->w55;

    if ((chip->clk_p && (chip->w201 && w106 && chip->w114)) || (chip->clk_n && chip->l11))
        chip->w33 = 0;
    else if (chip->clk_n && chip->l10)
        chip->w33 = 1;

    if (chip->clk_n)
        chip->w58 = !chip->input.i_busrq;
    if (chip->clk_p)
        chip->w59 = chip->w58;

    int w67 = chip->clk_n && !chip->w59;
    int w65 = chip->clk_n && chip->w59 && !chip->l24;

    if (chip->clk_p)
        chip->l24 = chip->w63 || !w133;

    if (chip->clk_p)
        chip->l23 = chip->w55;
    if (chip->clk_n)
        chip->w63 = chip->l23;

    if (w67 || chip->w63)
        chip->w66 = 0;
    else if (w65)
        chip->w66 = 1;
    int w66n = !chip->w66 && !w65;

    int busak = w67 || w66n || w65;

    chip->o_busak = busak;

    if (chip->clk_p)
        chip->l22 = busak;

    int w113 = w65 || chip->w66 || chip->w63;

    int w62 = chip->l22 && busak;

    chip->o_mreq_z = 1;
    if (!chip->w21)
    {
        chip->o_mreq = 0;
        chip->o_mreq_z = 0;
    }
    if (chip->w21 && w62)
    {
        chip->o_mreq = 1;
        chip->o_mreq_z = 0;
    }

    chip->o_iorq_z = 1;
    if (!chip->w21)
    {
        chip->o_iorq = 0;
        chip->o_iorq_z = 0;
    }
    if (chip->w21 && w62)
    {
        chip->o_iorq = 1;
        chip->o_iorq_z = 0;
    }

    chip->o_rd_z = 1;
    if (!chip->w31)
    {
        chip->o_rd = 0;
        chip->o_rd_z = 0;
    }
    if (chip->w31 && w62)
    {
        chip->o_rd = 1;
        chip->o_rd_z = 0;
    }

    chip->o_wr_z = 1;
    if (!chip->w33)
    {
        chip->o_wr = 0;
        chip->o_wr_z = 0;
    }
    if (chip->w33 && w62)
    {
        chip->o_wr = 1;
        chip->o_wr_z = 0;
    }
}
