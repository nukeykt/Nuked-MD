/*
 * Copyright (C) 2024 nukeykt, org(ogamespec)
 *
 * This file is part of Nuked-MD.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  Toshiba TMPZ84C00 (CMOS Z80)
 *  Thanks:
 *      org:
 *          TMPZ84C00 poly/diffusion layer & RE.
 *      Boris Marmontel:
 *          TMPZ84C00 metal layer.
 */

 // Z80(Toshiba CMOS)
#include "t84c00.h"

void T84C00_Clock(t84c00_t* chip)
{
    chip->clk_p = chip->input.i_clk;
    chip->clk_n = !chip->input.i_clk;

    if (chip->clk_p)
        chip->l16 = chip->w107 && chip->w127 && chip->w41;

    if (chip->clk_p)
        chip->l17 = chip->w131 && chip->w114;

    if (chip->clk_p)
        chip->l18 = chip->w41 || chip->w55;

    if (chip->clk_n && chip->l17)
        chip->w48 = 0;
    else if (chip->clk_n & chip->l18)
        chip->w48 = 1;

    int w49 = !(chip->l16 && chip->clk_n) && chip->w48;

    if (!w49)
        chip->w147 = chip->w146 ^ 255;


    chip->pla[20] = ((chip->w147 & 0xc0) == 0x80 && !w90);
    chip->pla[32] = ((chip->w147 & 0xc7) == 0xc6 && !w90);
    int w82 = !(chip->pla[20] || chip->pla[32]);

    int w103 = chip->clk_n && chip->l29;

    int w96 = !chip->w95 || w103;

    int w90 = chip->w95 || !chip->w92 || chip->w30;

    int pla_en = !((chip->clk_p || chip->w127) && !w49);

    chip->pla[0] = chip->w147 == 0x76 && !w90; // 3

    chip->pla[1] = (chip->w147 & 0xf7) == 0xd3 && !w90; // 0
    chip->pla[2] = ((chip->w147 & 0xf7) == 0xf3 && !w90) || !pla_en; // 1
    chip->pla[3] = ((chip->w147 & 0xc7) == 0x46 && !chip->w92) || !pla_en; // 2
    chip->pla[4] = ((chip->w147 & 0xe6) == 0xa2 && !chip->w92) || !pla_en; // 7
    chip->pla[5] = ((chip->w147 & 0xe7) == 0xa1 && !chip->w92) || !pla_en; // 5
    chip->pla[6] = ((chip->w147 & 0xe7) == 0xa0 && !chip->w92) || !pla_en; // 4
    chip->pla[7] = (chip->w147 == 0x10 && !w90) || !pla_en; // 8
    chip->pla[8] = ((chip->w147 & 0x38) == 0x30 && !w82) || !pla_en; // 12
    chip->pla[9] = ((chip->w147 & 0xf7) == 0x57 && !chip->w92 && chip->w74) || !pla_en; // 15

    chip->pla[10] = ((chip->w147 & 0xc0) == 0xc0 && !w96) || !pla_en; // 24
    chip->pla[11] = (chip->w147 == 0x37 && !w90) || !pla_en; // 6
    chip->pla[12] = ((chip->w147 & 0xc7) == 0x42 && !chip->w92) || !pla_en; // 30
    chip->pla[13] = (chip->w147 == 0x3f && !w90) || !pla_en; // 9
    chip->pla[14] = ((chip->w147 & 0x38) == 0x28 && !w82) || !pla_en; // 10
    chip->pla[15] = ((chip->w147 & 0xf7) == 0x57 && !chip->w92) || !pla_en; // 11
    chip->pla[16] = ((chip->w147 & 0xe7) == 0x20 && !w90) || !pla_en; // 50
    chip->pla[17] = ((chip->w147 & 0xe7) == 0x07 && !w90) || !pla_en; // 27
    chip->pla[18] = ((chip->w147 & 0xc0) == 0x00 && !w96) || !pla_en; // 28
    chip->pla[19] = (chip->w147 == 0x27 && !w90) || !pla_en; // 21

    chip->pla[21] = ((chip->w147 & 0xc0) == 0x80 && !w90) || !pla_en; // 33
    chip->pla[22] = !w96 || !pla_en; // 36
    chip->pla[23] = ((chip->w147 & 0xc0) == 0x40 && !w90) || !pla_en; // 37
    chip->pla[24] = ((chip->w147 & 0xcf) == 0x09 && !w90) || !pla_en; // 29
    chip->pla[25] = ((chip->w147 & 0xc7) == 0x44 && !chip->w92) || !pla_en; // 16
    chip->pla[26] = (chip->w147 == 0x2f && !chip->w92) || !pla_en; // 17
    chip->pla[27] = ((chip->w147 & 0xf7) == 0x67 && !w90) || !pla_en; // 38
    chip->pla[28] = ((chip->w147 & 0x38) == 0x38 && !w82) || !pla_en; // 22
    chip->pla[29] = ((chip->w147 & 0x38) == 0x20 && !w82) || !pla_en; // 13
    chip->pla[30] = ((chip->w147 & 0xc0) == 0x80 && !w96) || !pla_en; // 25
    chip->pla[31] = ((chip->w147 & 0xc0) == 0x40 && !w96) || !pla_en; // 26

    chip->pla[33] = ((chip->w147 & 0xc7) == 0xc6 && !w90) || !pla_en; // 34
    chip->pla[34] = ((chip->w147 & 0x38) == 0x08 && !w82) || !pla_en; // 18
    chip->pla[35] = ((chip->w147 & 0x38) == 0x18 && !w82) || !pla_en; // 19
    chip->pla[36] = ((chip->w147 & 0x38) == 0x10 && !w82) || !pla_en; // 20
    chip->pla[37] = (chip->w147 == 0x18 && !w90) || !pla_en; // 51
    chip->pla[38] = ((chip->w147 & 0xc7) == 0x05 && !w90) || !pla_en; // 23
    chip->pla[39] = ((chip->w147 & 0xc7) == 0x40 && !chip->w92) || !pla_en; // 31
    chip->pla[40] = ((chip->w147 & 0x38) == 0x00 && !w82) || !pla_en; // 14
    chip->pla[41] = ((chip->w147 & 0xc6) == 0x04 && !w90) || !pla_en; // 32
    chip->pla[42] = ((chip->w147 & 0xf7) == 0x47 && !chip->w92) || !pla_en; // 41
    chip->pla[43] = ((chip->w147 & 0xc7) == 0x06 && !w90) || !pla_en; // 35

    chip->pla[44] = ((chip->w147 & 0xc7) == 0xc7 && !w90) || !pla_en; // 42
    chip->pla[45] = ((chip->w147 & 0xf8) == 0x70 && !w90 && !chip->pla[0]) || !pla_en; // 39
    chip->pla[46] = ((chip->w147 & 0xc7) == 0x46 && !w90 && !chip->pla[0]) || !pla_en; // 40
    chip->pla[47] = ((chip->w147 & 0xe7) == 0x20 && !w90) || !pla_en; // 50
    chip->pla[48] = ((chip->w147 & 0xc7) == 0xc0 && !w90) || !pla_en; // 53
    chip->pla[49] = ((chip->w147 & 0xc7) == 0xc4 && !w90) || !pla_en; // 56
    chip->pla[50] = ((chip->w147 & 0xfe) == 0x34 && !w90) || !pla_en; // 45
    chip->pla[51] = ((chip->w147 & 0xc7) == 0xc2 && !w90) || !pla_en; // 55
    chip->pla[52] = (chip->w147 == 0xcd && !w90) || !pla_en; // 74
    chip->pla[53] = (chip->w147 == 0x08 && !w90) || !pla_en; // 59
    chip->pla[54] = ((chip->w147 & 0xf7) == 0x32 && !w90) || !pla_en; // 60

    chip->pla[55] = ((chip->w147 & 0xf7) == 0xd3 && !w90) || !pla_en; // 61
    chip->pla[56] = ((chip->w147 & 0xe7) == 0x02 && !w90) || !pla_en; // 62
    chip->pla[57] = (chip->w147 == 0xcb && !chip->w100) || !pla_en; // 49
    chip->pla[58] = ((chip->w147 & 0xc7) == 0x06 && !w90) || !pla_en; // 35
    chip->pla[59] = (chip->w147 == 0x18 && !w90) || !pla_en; // 51
    chip->pla[60] = ((chip->w147 & 0xc7) == 0x86 && !w90) || !pla_en; // 46
    chip->pla[61] = (chip->w147 == 0x36 && !w90) || !pla_en; // 48
    chip->pla[62] = ((chip->w147 & 0xe7) == 0x47 && !chip->w92) || !pla_en; // 66
    chip->pla[63] = ((chip->w147 & 0xc7) == 0x43 && !chip->w92) || !pla_en; // 67
    chip->pla[64] = ((chip->w147 & 0xf7) == 0x22 && !w90) || !pla_en; // 68
    chip->pla[65] = (chip->w147 == 0xed && !w90) || !pla_en; // 47

    chip->pla[66] = (chip->w147 == 0xcb && !w90) || !pla_en; // 54
    chip->pla[67] = ((chip->w147 & 0xcf) == 0x43 && !chip->w92) || !pla_en; // 65
    chip->pla[68] = (chip->w147 == 0xc3 && !w90) || !pla_en; // 69
    chip->pla[69] = (chip->w147 == 0xd3 && !w90) || !pla_en; // 70
    chip->pla[70] = ((chip->w147 & 0xc7) == 0x45 && !chip->w92) || !pla_en; // 52
    chip->pla[71] = (chip->w147 == 0x36 && !w90 && !chip->w100) || !pla_en; // 58
    chip->pla[72] = ((chip->w147 & 0xc7) == 0xc6 && !w90) || !pla_en; // 34
    chip->pla[73] = (chip->w147 == 0xc9 && !w90) || !pla_en; // 63
    chip->pla[74] = ((chip->w147 & 0xc7) == 0x41 && !chip->w92) || !pla_en; // 64
    chip->pla[75] = ((chip->w147 & 0xc6) == 0x40 && !chip->w92) || !pla_en; // 71
    chip->pla[76] = ((chip->w147 & 0xdf) == 0xdd && !w90) || !pla_en; // 57

    chip->pla[77] = ((chip->w147 & 0xcf) == 0x0b && !w90) || !pla_en; // 84
    chip->pla[78] = ((chip->w147 & 0xe7) == 0x07 && !w90) || !pla_en; // 73
    chip->pla[79] = ((chip->w147 & 0xcb) == 0xc1 && !w90) || !pla_en; // 75
    chip->pla[80] = ((chip->w147 & 0xe7) == 0xa2 && !chip->w92) || !pla_en; // 77
    chip->pla[81] = ((chip->w147 & 0xe7) == 0xa3 && !chip->w92) || !pla_en; // 78
    chip->pla[82] = (chip->w147 == 0x10 && !w90) || !pla_en; // 72
    chip->pla[83] = ((chip->w147 & 0xcf) == 0x09 && !w90) || !pla_en; // 29
    chip->pla[84] = ((chip->w147 & 0xc0) == 0x40 && !w96) || !pla_en; // 26
    chip->pla[85] = (chip->w147 == 0xcb && !chip->w100) || !pla_en; // 49
    chip->pla[86] = ((chip->w147 & 0xcf) == 0xc5 && !w90) || !pla_en; // 82

    chip->pla[87] = ((chip->w147 & 0xe7) == 0xa0 && !chip->w92) || !pla_en; // 80
    chip->pla[88] = ((chip->w147 & 0xc7) == 0x06 && !w90) || !pla_en; // 81
    chip->pla[89] = ((chip->w147 & 0xe7) == 0xa1 && !chip->w92) || !pla_en; // 79
    chip->pla[90] = ((chip->w147 & 0xf7) == 0x67 && !chip->w92) || !pla_en; // 83
    chip->pla[91] = ((chip->w147 & 0x07) == 0x06 && !w96) || !pla_en;
    chip->pla[92] = (!w96 && !chip->w100) || !pla_en;
    chip->pla[93] = ((chip->w147 & 0xcf) == 0x02 && !w90) || !pla_en;
    chip->pla[94] = ((chip->w147 & 0xc7) == 0x42 && !chip->w92) || !pla_en;
    chip->pla[95] = ((chip->w147 & 0xc7) == 0x03 && !w90) || !pla_en;
    chip->pla[96] = (chip->w147 == 0xf9 && !w90) || !pla_en; // 93

    chip->pla[97] = ((chip->w147 & 0xe7) == 0xa0 && !chip->w92) || !pla_en;
    chip->pla[98] = ((chip->w147 & 0xe7) == 0xa1 && !chip->w92) || !pla_en;
    chip->pla[99] = (chip->w147 == 0xe3 && !w90) || !pla_en; // 88
    chip->pla[100] = ((chip->w147 & 0xe7) == 0x02 && !w90) || !pla_en;
    chip->pla[101] = ((chip->w147 & 0xcf) == 0x01 && !w90) || !pla_en;
    chip->pla[102] = (chip->w147 == 0xe9 && !w90) || !pla_en; // 92
    chip->pla[103] = ((chip->w147 & 0xe7) == 0x47 && !chip->w92) || !pla_en;
    chip->pla[104] = ((chip->w147 & 0xdf) == 0xdd && !w90) || !pla_en;
    chip->pla[105] = (chip->w147 == 0xeb && !w90) || !pla_en;
    chip->pla[106] = ((chip->w147 & 0xf4) == 0xa0 && !chip->w92) || !pla_en;
    chip->pla[107] = (chip->w147 == 0xd9 && !w90) || !pla_en;

    int w89 = !w103 && chip->w30;

    int w81 = chip->w80 || !(chip->w78 && w89 && chip->w18);
    int w77 = w89 && chip->w19;
    int w86 = w89 ? !(!chip->w19 && (chip->w80 || !(chip->w78 && chip->w18))) : chip->pla[44];
    int w88 = !(chip->w78 || chip->w80) && chip->w18 && w89;
    int w83 = !w77 && w86;

    int w148 = !((chip->pla[15] || chip->pla[17] || chip->pla[19] || chip->pla[21] || chip->pla[25]
        || chip->pla[26] || chip->pla[27] || chip->pla[33]) && pla_en); // 11, 16, 17, 21, 27, 33, 34, 38
    int w150 = (chip->pla[15] || chip->pla[17] || chip->pla[18] || chip->pla[19] || chip->pla[21]
        || chip->pla[23] || chip->pla[33] || chip->pla[39] || chip->pla[43]) && pla_en;
    int w152 = (chip->pla[4] || chip->pla[5] || chip->pla[6] || chip->pla[11] || chip->pla[12] || chip->pla[13]
        || chip->pla[18] || chip->pla[21] || chip->pla[24] || chip->pla[31] || chip->pla[33] || chip->pla[39] || chip->pla[41]) && pla_en;
    int w154 = (chip->pla[15] || chip->pla[17] || chip->pla[18] || chip->pla[23] || chip->pla[25] || chip->pla[26]
        || chip->pla[39] || chip->pla[43] || w86) && pla_en;
    int w156 = (chip->pla[8] || chip->pla[12] || chip->pla[14] || chip->pla[24] || chip->pla[25] || chip->pla[28]
        || chip->pla[34] || chip->pla[35] || chip->pla[36] || chip->pla[40]) && pla_en;

    if (chip->clk_p)
        chip->w452 = (chip->pla[12] || chip->pla[15] || chip->pla[25] || chip->pla[28] || chip->pla[34]
            || chip->pla[35] || chip->pla[36] || chip->pla[40] || chip->pla[41]) && pla_en;

    int w160 = !((chip->pla[4] || chip->pla[5] || chip->pla[7] || chip->pla[25] || chip->pla[26] || chip->pla[28]
        || chip->pla[30] || chip->pla[35] || chip->pla[36] || chip->pla[38]) && pla_en);

    int w162 = (chip->pla[4] || chip->pla[5] || chip->pla[7] || chip->pla[12] || chip->pla[15] || chip->pla[18]
        || chip->pla[19] || chip->pla[21] || chip->pla[25] || chip->pla[27] || chip->pla[31] || chip->pla[33]
        || chip->pla[39] || chip->pla[41]) && pla_en;

    int w165 = (chip->pla[4] || chip->pla[7] || chip->pla[26] || chip->pla[29] || chip->pla[31]
        || chip->pla[41]) && pla_en;

    int w166 = (chip->pla[12] || chip->pla[13] || chip->pla[34] || chip->pla[35]) && pla_en;

    int w163 = !((chip->pla[21] || chip->pla[22] || chip->pla[23] || chip->pla[33] || chip->pla[41]) && pla_en);

    int w172 = (chip->pla[10] || chip->pla[18] || chip->pla[23] || chip->pla[30] || chip->pla[39]
        || chip->pla[41] || chip->pla[43]) && !pla_en;

    int w174 = (chip->pla[4] || chip->pla[7] || chip->pla[16] || chip->pla[22] || chip->pla[37] || chip->pla[41])
        & pla_en;

    int w171 = (chip->pla[11] || chip->pla[13] || chip->pla[29]) && pla_en;

    if (chip->clk_p)
        chip->l65 = !((chip->pla[8] || chip->pla[10] || chip->pla[14]) && pla_en);

    int w177 = !((chip->pla[4] || chip->pla[5] || chip->pla[6] || chip->pla[11] || chip->pla[13]) && pla_en);

    int w149 = !((w88 || chip->pla[48] || chip->pla[80] || chip->pla[81] || chip->pla[82] || chip->pla[86]
        || w86 || chip->pla[95] || chip->pla[96] || chip->pla[103]) && pla_en);

    int w151 = !((w88 || chip->pla[51] || chip->pla[54] || chip->pla[63] || chip->pla[64] || chip->pla[68]
        || chip->pla[80] || chip->pla[81] || chip->pla[101]) && pla_en);

    int w153 = !((w88 || chip->pla[47] || chip->pla[48] || chip->pla[49] || chip->pla[51] || chip->pla[52] || chip->pla[59]
        || chip->pla[68] || chip->pla[70] || chip->pla[73] || chip->pla[82] || w86 || chip->pla[102]) && pla_en);

    int w155 = !((w88 || chip->pla[49] || chip->pla[50] || chip->pla[52] || chip->pla[54] || chip->pla[57]
        || chip->pla[63] || chip->pla[64] || chip->pla[80] || chip->pla[81] || chip->pla[90] || chip->pla[92]
        || chip->pla[99]) && pla_en);

    int w157 = !((w88 || chip->pla[47] || chip->pla[49] || chip->pla[51] || chip->pla[52] || chip->pla[54]
        || chip->pla[59] || chip->pla[63] || chip->pla[64] || chip->pla[68] || chip->pla[80] || chip->pla[81]
        || chip->pla[82] || chip->pla[87] || chip->pla[89] || chip->pla[90] || chip->pla[99] || chip->pla[101]) && pla_en);

    int w159 = !((chip->pla[47] || chip->pla[55] || chip->pla[58] || chip->pla[59] || chip->pla[72] || chip->pla[82])
        && pla_en);

    int w161 = !((chip->pla[48] || chip->pla[55] || chip->pla[56] || chip->pla[61] || chip->pla[70] || chip->pla[73]
        || chip->pla[75] || chip->pla[79] || chip->pla[83] || w86 || chip->pla[94]) && pla_en);

    int w164 = !((chip->pla[45] || chip->pla[46] || chip->pla[54] || chip->pla[55] || chip->pla[56] || chip->pla[60]
        || chip->pla[61] || chip->pla[76] || chip->pla[80] || chip->pla[81] || chip->pla[84] || chip->pla[87]
        || chip->pla[89] || chip->pla[90]) && pla_en);

    int w167 = !((chip->pla[45] || chip->pla[49] || chip->pla[50] || chip->pla[61] || chip->pla[67] || chip->pla[69]
        || chip->pla[74] || chip->pla[86] || chip->pla[90] || w86 || chip->pla[93] || chip->pla[95] || chip->pla[96]
        || chip->pla[99]) && pla_en);

    int w170 = !((chip->pla[49] || chip->pla[51] || chip->pla[52] || chip->pla[54] || chip->pla[57] || chip->pla[63]
        || chip->pla[64] || chip->pla[68] || chip->pla[71] || chip->pla[92] || chip->pla[101]) && pla_en);

    int w173 = (chip->pla[48] || chip->pla[49] || chip->pla[52] || chip->pla[70] || chip->pla[73] || chip->pla[79]
        || w86 || chip->pla[99]) && pla_en;

    int w169_0 = !((chip->pla[45] || chip->pla[46] || chip->pla[50] || chip->pla[57] || chip->pla[60] || chip->pla[61]
        || chip->pla[91] || chip->pla[92]) && pla_en);
    int w169_1 = chip->w100 || w96;
    int w169 = !(w169_0 && w169_1);

    int w248_0 = !(w169 || w163 || chip->pla[0]);

    int w175 = (chip->pla[47] || chip->pla[59] || chip->pla[82]) && pla_en;

    int w186 = (chip->pla[80] || chip->pla[81] || chip->pla[87] || chip->pla[89]) && pla_en;

    int w188 = (chip->pla[75] || chip->pla[80] || chip->pla[81] || chip->pla[82]) && pla_en;

    int w189 = (chip->pla[78] || chip->pla[80] || chip->pla[81] || chip->pla[82]) && pla_en;

    if (chip->clk_p)
        chip->w453 = chip->pla[9];

    int w179 = !(chip->pla[5] || chip->pla[7] || chip->pla[4]);
    int w178 = chip->pla[4] || chip->pla[7];

    int w388 = !(chip->pla[4] || w177);

    int w457 = (chip->pla[12] && (chip->w147 & 8) == 0) || !w160;

    int w271 = chip->pla[17] || chip->pla[18];

    int w234 = chip->pla[12] || chip->pla[24];

    int w247 = !(chip->pla[28] || w148);

    if (chip->clk_p)
        chip->l64 = !(chip->pla[29] || chip->pla[30] || chip->pla[31]);

    int w455 = !(chip->l64 || chip->w115);

    int w236 = !(chip->pla[63] || chip->pla[64]);

    int w235 = !((chip->w147 & 8) != 0 || w236);

    int w261 = w234 || w235;

    int w406 = (chip->w147 & 32) == 0 || chip->pla[47];

    int w187 = (chip->pla[54] || chip->pla[55] || chip->pla[56]);

    int w245 = w187 || chip->pla[101] || !(w175 || w153) || chip->pla[79]
        || w173 || !((chip->w147 & 8) == 0 || w236);

    int w252 = ((w245 && w167) || w86 || w234) && !w187;

    int w257_0 = w189 || w187;

    int w185 = chip->pla[49] || chip->pla[52];

    int w253 = w235 || w245;

    int w237 = (!w167 || w236);

    int w256 = !(chip->w100 || !w169);
    int w225 = !(chip->w100 || !w169);
    int w312 = !(chip->w100 || w169);

    int w255 = (chip->w115 && w256) || w174;

    int w254 = !(!w255 || w186);

    int w191 = chip->pla[87] || chip->pla[89] || chip->pla[90] || w169 || chip->pla[102] || chip->pla[96];

    int w199 = !(chip->pla[90] || w254 || chip->pla[98]);

    int w240 = !(!w186 || chip->pla[80]);

    if (chip->clk_p)
        chip->l63 = !(chip->pla[8] || chip->pla[10]);

    int w454 = chip->l63 || chip->w115;

    int w287 = (chip->w98 && w103) || chip->w95;

    int w456 = chip->w115 || chip->l65;

    int w126 = w255 || (w169 && !chip->w100);
    if (chip->clk_p)
    {
        if (chip->w120 && chip->w114 && w126)
            chip->w115 = 1;
        else if (chip->w123 || chip->w131)
            chip->w115 = 0;
    }

    if (chip->w42)
        chip->w145 = chip->w146 ^ 255;
    else if (chip->w2)
        chip->w145 = chip->input.i_data;

    if (chip->w1)
        chip->w146 = chip->w145 ^ 255;

    chip->o_data = chip->w145;
    chip->o_data_z = chip->w44;

    int w200 = !((chip->w127 && (w88 || !w186))
        || (chip->w120 && w88)
        || (chip->w123 && !w167)
        || (chip->w121 && (!w167 || w255)));

    int w197 = w186 || w234;

    int w198 = !(w199 || !w170);

    int w202 = (w197 && (chip->w121 || chip->w123)) || (w198 && chip->w127);
    int w201 = !(w202 || w200);

    int w203 = !(chip->w110 || (chip->w41 && chip->w131));

    int w194 = !(w202 || w203);

    if (chip->clk_p)
    {
        int w204 = (chip->pla[96] && chip->w109) || (chip->pla[99] && chip->w41 && chip->w121);
        chip->l39 = !w204;
    }
    if (chip->clk_n)
        chip->w205 = !chip->l39;

    if (chip->clk_p)
        chip->l15 = w201 && chip->w110;
    if (chip->l14 || (chip->clk_p && chip->w110))
        chip->w44 = 1;
    else if (chip->clk_n && chip->l15)
        chip->w44 = 0;

    chip->w42 = chip->clk_n && chip->l15 && !chip->pla[43];

    int w3 = !(chip->w202 || w201);

    if (chip->clk_p && chip->w41 && w3)
        chip->w1 = 1;
    else if (chip->w55 || (chip->clk_p && (w201 || chip->w114)))
        chip->w1 = 0;

    if (clk_p)
        chip->l1 = chip->w55 || (chip->w41 && !chip->w131);

    int w15 = !(w201 || chip->w202 || !chip->w114);

    if (chip->clk_p && w15)
        chip->w2 = 1;
    else if ((!chip->clk_n && chip->w131 && chip->w41) || (chip->clk_n && chip->l1))
        chip->w2 = 0;

    int w46 = !(chip->w131 || (chip->w127 && chip->w107) || (chip->w127 && chip->pla[43]);
    int w192 = (w201 && chip->w110) || (chip->w41 && w3 && w46);

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

    int w97 = chip->pla[66] || chip->pla[76] || chip->pla[65];

    int w138 = !(w126 || !w161);
    int w117_0 = !(!w159 && w138 && chip->w120);
    int w117_1 = !(!w164 && chip->w123);
    int w117_3 = chip->pla[106] || (w155 && !(w151 && (!w155 || !w164)));
    int w117_2 = !(chip->w127 && w117_3);
    int w117_4 = w117_0 && w117_1 && w117_2;
    int w117 = !(w117_4 && !(chip->w55 || chip->w121));

    if (chip->clk_p)
        chip->w104 = w97;

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
        chip->l2 = chip->w55 || chip->w19;
    if (chip->clk_p)
        chip->l3 = chip->w73 && !chip->pla[2];

    int w12 = !(chip->w5 && chip->w9 && chip->l3);

    int w196 = chip->pla[98] || chip->pla[97];

    int w220 = !(w196 && chip->w127);

    int w184 = chip->pla[49] || chip->pla[51];

    int w265 = !((chip->pla[47] && chip->w120) || (chip->w131 && chip->pla[48]) || (chip->w127 && w184));

    int w279 = !(chip->pla[7] && chip->w120) && !(chip->w127 && (chip->pla[4] || chip->pla[5]));

    int w383 = !(chip->w486 || w279);

    int w183 = !(!(chip->pla[21] || chip->pla[22]) && (chip->w114 || !chip->pla[23]));

    int w318 = (!w183 && (chip->w147 & 8) == 0) || (w183 && (chip->w147 & 1) == 0);
    int w317 = (!w183 && (chip->w147 & 16) == 0) || (w183 && (chip->w147 & 2) == 0);
    int w315 = (!w183 && (chip->w147 & 32) == 0) || (w183 && (chip->w147 & 4) == 0);

    int w448 = w318 ^ chip->w420;

    int w299 = !(w265 || w448) || w383 || (!chip->w438 && !w220);

    int w139 = w159 && w157 && w161 && !w169;
    int w118 = w117 || w299 || (chip->w131 && w139);

    int w133 = chip->w55 || w137;

    int w140 = !(w255 || w155 || !w151);
    int w141 = !w186 && (chip->w123 || (chip->w127 && w140));
    int w142 = !(w234 || w255 || w186);
    int w143_0 = !w155 || (w140 && w299);
    int w143 = (chip->w120 || (chip->w121 && !chip->pla[99])) || ((chip->w127 && w143_0) || (chip->w123 && w142));
    int w136 = !((w143 && chip->w41) || (w141 && chip->w109) || chip->w61);
    int w190 = !(chip->pla[95] || chip->pla[96]);
    int w135 = !((chip->w68 && w190) || (w149 && chip->w109 && chip->w131));
    int w137 = !(w136 && w135);

    int w176 = !(chip->pla[86] || chip->pla[77]);

    int w207 = !(w176 && !(w86 || w88));

    int w195 = !(chip->pla[99] || !(w196 || (w173 && !w299))); 

    int w224 = !w159 || w225 || !w170;

    int w209 = !(!w186 || (chip->w147 & 8) == 0);

    int w218 = !(chip->pla[99] || w88);

    int w213 = !(w218 && !w186);

    int w212 = !(!w186 && (w169 || w255));

    int w288 = !((chip->pla[19] || w77) && (chip->w109 || chip->w68));

    int w289 = (w192 || (chip->w131 && chip->w68 && w288));

    int w284 = !(chip->w131 && chip->w68 && !w81);

    int w285 = !((chip->w110 && chip->w120 && chip->pla[1])
        || (chip->w114 && chip->w127 && w88)
        || (chip->w41 && chip->w121 && w86));

    int w373_0 = w284 && w285;

    int w286_0 = w287 && w256;
    int w286 = (w286_0 && chip->w123 && chip->w110) || (w287 && chip->w131 && chip->w41);

    int w283_0 = !(chip->w41 && w255 && (chip->w123 || chip->w127)) && !(w88 && chip->w131 && chip->w68);
    int w283_1 = !(chip->w131 && chip->w109 && (w255 || w234)) && !(w234 && chip->w123 && chip->w109)
        && !(chip->w120 && chip->w114 && (w255 || w256));

    int w282 = !(chip->w131 && chip->w68) && !(chip->w131 && w177 && chip->w110)
        && !(w234 && chip->w121 && chip->w114) && !(chip->w127 && chip->w110 && (w255 || chip->pla[5]));

    int w281 = !(chip->w123 && chip->w110) && !(chip->w131 && chip->w109) && !(chip->w120 && chip->w114);

    int w280 = !(chip->w120 && chip->w110 && w178) && !(w234 && chip->w123 && chip->w41)
        && !(chip->pla[5] && chip->w127 && chip->w114) && !(w179 && chip->w131 && chip->w114);

    int w278 = !(w171 && chip->w131 && chip->w114);

    int w276 = !(w255 && chip->w120 && chip->w41);

    int w277 = chip->w131 && chip->w114 && w156;

    int w275 = !(chip->w68 && chip->w127) && !(w234 && chip->w121 && chip->w41)
        && !(chip->w121 && chip->w114 && (w247 || w172))
        && !(w255 && chip->w110 && (chip->w120 || chip->w121));

    if (chip->clk_p)
        chip->l4 = !(chip->w55 || !w118 || !w133 || w97);

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

    if (chip->clk_n)
        chip->w111 = chip->w112;

    int w67 = chip->clk_n && !chip->w59;
    int w65 = chip->clk_n && chip->w59 && !chip->l24;

    int w113 = w65 || chip->w66 || chip->w63;
    if (chip->clk_p)
        chip->l14 = w113;

    chip->w110 = !(chip->w111 || w113);
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
        int w125 = !((w161 && !w169) || (w169 && !chip->w100));
        chip->w134 = w125 && (chip->w120 || (chip->w131 && w159));
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
        chip->w18 = w12;
    else if (chip->w55)
        chip->w18 = 0;
    int w18_l = chip->w18 && !chip->w55;

    int w13 = (chip->halt || (w16 && w10)) || (chip->w19 || w18_l);
    int w14 = w13 && (w10 || !w16);

    int w106 = (chip->pla[80] && chip->w120) || (chip->w127 && chip->pla[81]) || ((chip->pla[55] || chip->pla[75]) && chip->w123);

    if (chip->clk_p)
    {
        chip->l37 = chip->w133;
        chip->l38 = chip->w55 || chip->w110;
    }

    if (chip->clk_n && chip->l37)
        chip->w144 = 1;
    else if (chip->clk_n && chip->l38)
        chip->w144 = 1;
    int w193 = chip->w205 || (w14 && chip->w144);

    int w206 = !((w207 && chip->w109 && chip->w131)
        || (w186 && chip->w123 && (chip->w41 || chip->w110))
        || (w195 && chip->w41 && chip->w127));

    int w208 = !(chip->w110 &&
        ((w173 && chip->w123 && !w167)
        || (chip->w120 && (w88 || w209))
        || (w209 && chip->w127))
        );

    if (chip->clk_p)
        chip->l40 = !(w206 || w208);
    if (chip->clk_n)
        chip->w210 = chip->l40;

  
    int w214 = (((chip->w127 && w186) || (chip->w121 && w173 && w167)) && chip->w114)
        || (chip->w41 && chip->w131)
        || (chip->w131 && chip->w68 && (w88 || !w167));

    int w211 = (chip->w114 && ((chip->w123 && w212) || (chip->w120 && w213)))
        || (chip->w109 && (chip->w121 || ((chip->w123 || chip->w127) && (w186 || w173))));

    int w216 = w211 || w214;

    if (chip->clk_p)
        chip->w215 = chip->w55 || (chip->w131 && chip->w110 && !w57);

    int w217 = !(chip->w127 || chip->w131 || (chip->w120 && w218));

    int w219 = (chip->w41 && (chip->w121 || (chip->w127 && w186)))
        || (chip->w109 && chip->w131)
        || (chip->w114 && (chip->w131 || (chip->w127 && w173)));

    int w226 = (chip->w110 && 
        (chip->w131
            || (chip->w127 && !w170)
            || (chip->w120 && w224))
        ) || chip->w55;

    int w290_0 = !(((!w217 || w118) && w133) || w226);
    int w290 = w290_0 && !(w216 || w219);

    if (chip->clk_p)
        chip->w293 = w290;

    if (chip->clk_p)
        chip->w292 = !(w216 || w226);

    int w294 = (chip->w109 && chip->w123 && w186)
        || (chip->w110 && (chip->w121 || chip->w123) && (w86 || w185))
        || (chip->w110 && w88 && (chip->w127 || chip->w120))
        || (w175 && ((chip->w114 && chip->w120) || (chip->w41 && chip->w127)));

    int w223 = !((chip->w127 && w186) || (chip->w120 && !w170) || (chip->w131 && w224));
    int w296 = !(w299 || w153);
    int w295 = !(!w133 || (w223 && (!w118 || w296)));

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
        chip->l8 = !chip->w202 && !w201 && !(chip->w131 && (chip->w41 || chip->w18)); // w101

    if (!(!w24 && !(chip->clk_p && w36) && w23) && chip->l8)
        chip->w31 = 0;
    else if (w26 || w32)
        chip->w31 = 1;

    if (chip->clk_p)
        chip->l11 = w201 && chip->w114;

    if (chip->clk_p)
        chip->l10 = chip->w41 || chip->w55;

    if ((chip->clk_p && (w201 && w106 && chip->w114)) || (chip->clk_n && chip->l11))
        chip->w33 = 0;
    else if (chip->clk_n && chip->l10)
        chip->w33 = 1;

    if (chip->clk_n)
        chip->w58 = !chip->input.i_busrq;
    if (chip->clk_p)
        chip->w59 = chip->w58;

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

    if (chip->clk_p && (w113 || chip->w41))
        chip->m1 = 1;
    else if (chip->clk_p && (chip->w131 && chip->w110))
        chip->m1 = 0;
    chip->o_m1 = chip->m1;

    if (chip->clk_p)
        chip->rfsh = !(chip->w131 && (chip->w109 || chip->w41));
    chip->o_rfsh = chip->rfsh;

    if (chip->clk_p)
        chip->l7 = chip->w57;

    if (chip->clk_p)
        chip->w107 = chip->pla[85];

    if (chip->clk_p)
        chip->l29 = (chip->w127 && chip->w110 && chip->w107) || (chip->w131 && chip->w114);

    if (chip->clk_p)
        chip->l28 = chip->pla[3] && chip->w131 && chip->w110;

    int w79 = chip->clk_n && chip->l28;

    if (chip->w55)
        chip->w78 = 1;
    else if (w79)
        chip->w78 = (chip->w147 & 8) == 0;

    if (chip->w55)
        chip->w80 = 1;
    else if (w79)
        chip->w80 = (chip->w147 & 16) == 0;

    if (chip->w55)
        chip->w30 = 1;
    else if (w103)
        chip->w30 = (chip->w19 || chip->w55 || (!chip->w80 && chip->w18)) || (!(chip->l7 || chip->w18) || chip->halt);

    if (chip->clk_p)
        chip->w112 = !w133 && !w113;

    if (chip->clk_p)
        chip->w99 = chip->pla[76];

    if (chip->clk_p)

    if (chip->w55)
        chip->w100 = 1;
    else if (w103 && !chip->w98)
        chip->w100 = !chip->w99;

    if (chip->w55)
        chip->w95 = 0;
    else if (w103)
        chip->w95 = chip->w98;

    if (chip->clk_p)
        chip->l43 = chip->pla[65];

    if (chip->w55)
        chip->w92 = 1;
    else if (w103)
        chip->w92 = !chip->l43;

    if (chip->clk_p)
        chip->pla_105_l = chip->pla[105];

    if (chip->clk_p)
        chip->pla_107_l = chip->pla[107];

    int w274 = !((chip->w41 && chip->w131) || (chip->w123 && chip->w114 && (w271 || w256)));
    int w283 = !(w283_0 && w283_1 && w274);
    int w273 = !((w247 || w152) && chip->w131 && chip->w110);

    int w272 = w255 && chip->w120 && chip->w41;

    int w270 = (chip->w131 && chip->w109) || (chip->w123 && chip->w41 && (w271 || w256));

    int w269 = !(((chip->w131 || chip->w120) && chip->w41)
        || (chip->w131 && w86 && chip->w68)
        || (w234 && chip->w121 && chip->w110)
        || (chip->w110 && chip->w123 && (w234 || w256)));

    int w268 = (w150 && chip->w109 && chip->w131) || (w150 && chip->w123 && chip->w41);

    int w267 = !(((w88 || chip->pla[27]) && chip->w127 && chip->w41)
        || (chip->w41 && chip->w123 && w86)
        || (chip->w110 && chip->w123 && chip->pla[27]));

    int w266 = (!w88 && chip->w127 && chip->w110) || (chip->pla[42] && chip->w109 && chip->w131);

    int w264 = (w261 && chip->w121 && chip->w110)
        || (chip->w110 && chip->w123 && (w245 || w187))
        || (chip->w41 && chip->w127 && w255);

    int w263 = (chip->w120 && w88 && (chip->w110 || chip->w41))
        || (((chip->w131 && w189) || chip->w123) && chip->w109);

    int w262 = (w261 && chip->w123 && chip->w110)
        || (w88 && chip->w127 && chip->w110)
        || (chip->w114 && chip->w120);

    int w260 = (w261 && chip->w131 && chip->w109) || (w245 && chip->w110 && chip->w121);

    int w412 = w262 || w260;

    int w259 = chip->w110 && chip->w131 && chip->pla[53];

    int w258 = (chip->w114 && chip->w131 && w247)
        || (chip->w41 && chip->w123 && w187)
        || (chip->w68 && chip->w127 && w255);

    int w257 = (chip->w41 && chip->w121 && w252)
        || (chip->w41 && chip->w127 && w253)
        || (chip->w110 && chip->w120 && w257_0);

    int w251 = !((chip->w127 && chip->w114 && (w88 || w254))
        || (chip->w41 && chip->w120 && w253 && !w88)
        || (chip->w41 && chip->w123 && w252));

    int w250 = !(w172 && chip->w114 && chip->w131);

    int w249 = !(chip->w109 && chip->w131 && chip->pla[62]);

    int w366 = !(w250 && (w249 || !w317));

    int w248_0 = !(w169 || chip->pla[0] || w163);

    int w248_1 = !(chip->w131 && chip->w109 && w248_0);

    int w248_2 = !((!w163 || chip->pla[75]) && chip->w123 && chip->w110);

    int w248 = w248_1 && w248_2;

    int w365 =!(w248_1 && w248_2 && (w317 || w249));

    int w246 = (chip->w114 && chip->w131 && w247)
        || (chip->pla[78] && chip->w131 && chip->w109)
        || (chip->w41 && chip->w123 && w167 && w187)
        || (chip->w110 && chip->w123 && w187);

    int w244 = (chip->w110 || chip->w41) && (chip->w121 && chip->w123) && chip->pla[79];

    int w243 = !(
        (chip->w41 && chip->pla[81] && chip->w120)
        || (chip->w41 && w186 && chip->w127)
        || (chip->w110 && chip->w120 && w188)
        || (chip->w68 && chip->w131 && chip->pla[80])
        || (chip->w109 && w188 && chip->w131)
        || (chip->w109 && w186 && chip->w127)
        );

    int w242 = !(
        (chip->pla[87] && chip->w114 && chip->w127)
        || (chip->pla[87] && chip->w41 && chip->w120)
        );

    int w241 = !(
        ((chip->pla[80] || chip->pla[88]) && chip->w120 && chip->w41)
        || (chip->w114 && chip->w127 && chip->pla[80])
        || ((w234 || w191) && chip->w131 && chip->w109)
        || (chip->w131 && chip->w68 && chip->pla[81])
        );

    int w239 = !(
        ((chip->w121 || chip->w123) && chip->w41 && w234)
        || (w234 && chip->w123 && chip->w109)
        || (chip->pla[90] && chip->w127 && chip->w109)
        || (chip->w114 && chip->w120 && w240)
        );

    int w238 = !(
        (w225 && chip->w41 && chip->w127)
        || (w225 && chip->w114 && chip->w120)
        );

    int w233 = !(
        ((chip->w121 || chip->w123) && chip->w41 && w237)
        || ((w234 || chip->pla[99] || w235)
            && (chip->w121 || chip->w123) && chip->w110)
        );

    int w232 = !(
        ((chip->w121 || (chip->w131 && (chip->pla[95] || chip->pla[100]))
        && (chip->w68 || chip->w109))
        || ((chip->w127 || chip->w120) && chip->pla[101] && chip->w41)
        );

    int w231 = !(
        (chip->w114 && chip->w120 && w88)
        || ((w88 || w173) && (chip->w127 || chip->w131) && (chip->w68 || chip->w109))
        );

    int w230 = !(
        (chip->w68 && chip->w131 && (w173 || chip->pla[96]))
        || (chip->w114 && ((w173 && chip->w121 && w167) || (w173 && (chip->w127 || chip->w123))))
        );

    int w229 = !((w88 && chip->w120 && chip->w41)
        || (chip->w131 && chip->w109 && chip->pla[103]));

    int w228 = !(chip->w41 && chip->w131);

    int w227 = !(chip->w131 && chip->w114);

    if (chip->clk_p)
        chip->w301 = w295 || w226;

    if (chip->clk_p)
        chip->w298 = !(w295 || w226 || w294);

    if (chip->clk_n && chip->l51)
        chip->w380 = 1;
    else if (chip->clk_n && chip->l50)
        chip->w380 = 0;

    if (chip->clk_p)
    {
        chip->w431 = !w282;
        chip->l59 = !w281;
        chip->w372 = w286;
        chip->w373 = !w373_0;
        chip->l51 = !w274;
        chip->l50 = !w273;
        chip->w381_0 = !chip->w380;
        chip->l52 = !w274;

        chip->w391 = !w280;
        chip->l53 = w276;
    }

    int w381 = chip->w381_0 && chip->l52;
    int w382_0 = !w381 && chip->l52;

    int w371 = !w284 || w286 || (w271 && w268);

    int w375 = !w275 || (chip->w114 && chip->w127 && w255) || (w234 && chip->w123 && chip->w41);

    int w374 = !(!w267 || w375 || w266 || !w373_0);

    int w414_0 = w263 || w264;

    int w368 = !(w317 || w315);

    int w414 = w414_0 || !w274 || (w365 && (w318 || w368));

    int w415 = w412 || (!w274 && chip->w380) || (w365 && !(w318 || w368));

    if (chip->clk_p)
    {
        chip->w390 = w270;
        chip->w404 = !(w283 || w268 || !w269) || w371;
        chip->w379 = !w269 || w268;
        chip->w470 = w268 && w271;
        chip->w402 = w371 || w374;
        chip->w378 = !w267 || w266;
    }

    if (chip->clk_p)
        chip->w359 = w259;

    int w410_0 = w258 || w257;

    int w410 = w410_0 || (w366 && (w318 || w368));

    int w367 = !(w368 || w318);

    int w411 = !w251 && ((!chip->w380 && !w274) || (w366 && w367));

    int w344_0 = !(w248 && w250);

    int w357 = !(w318 || (w248 && w250));

    int l81_0 = w246 || !w274 || (w368 && (w244 || w357));

    int w310 = !(w232 && w233);

    int w344 = w344_0 || w244 || w310;

    int w347_0 = !(!w243 && (!(w315 && w317) || !w344));

    int w346_0 = !(w242 && (w317 || !w315 || !w344));

    int w313_0 = !(w241 && w239);

    int w309 = !(w230 && w231);

    int w313 = !(!w242 || !w274 || w243) && !(w246 || w309 || w313_0 || !w238);

    int w308 = !(w313 && !w294 && !w344);

    if (chip->clk_p)
    {
        chip->w307 = chip->w55 || !(w229 && w228 && w227);
        chip->w305 = !(w228 && w227);
        chip->w303 = !w227;
    }

    int w304_0 = chip->w303 && chip->pla[104];
    int w326 = chip->w303 && chip->pla_105_l;
    int w302 = chip->w303 && chip->pla_107_l;

    int w426 = !(w154 && chip->w390);

    int w395 = w165 && chip->w390;
    int w394 = !((w255 && chip->w41 && chip->w127)
        || (chip->w123 && w234 && chip->w109)
        || (chip->w390 && w166));

    int w343 = (w317 && !w315 && (w344 || w310)) || w313_0;

    int w345_0 = w343 && !w312;

    if (chip->clk_p)
    {
        chip->l57 = chip->w114 || chip->w109;
        chip->w430 = (w234 && chip->w123 && chip->w114)
            || ((chip->w123 || chip->w127) && chip->w109 && w255);

        chip->l58 = (chip->w127 && chip->w41) || (w234 && chip->w123 && chip->w109);

        chip->l60 = w388 && chip->w127 && chip->w109;

        chip->w377 = w375;

        chip->l66 = (chip->w114 && chip->w127 && w255) || (w234 && chip->w123 && chip->w41) || w277;

        chip->l67 = !w395 && (chip->w390 || chip->l53) && w394;

        chip->l68 = !w394;

        chip->l70 = w278;

        chip->l72 = !(chip->w127 && (chip->w68 || chip->w109 || chip->w41));

        chip->l76 = !(chip->w114 && chip->w123 && w83);

        chip->w400 = (chip->w41 && w255 && chip->w127)
            || (chip->w123 && chip->w114 && chip->pla[27]);

        chip->l77 = chip->w127 && chip->pla[27]
            && (chip->w114 || (chip->w109 && (chip->w147 & 8) == 0));

        chip->w418 = w414;
        chip->w416 = w410;
        chip->w417 = w415;
        chip->l79 = w411;
        chip->l81 = l81_0;
        chip->w347 = w347_0;
        chip->w346 = w346_0;

        chip->w345 = w345_0;

        chip->l45 = w315;
    }

    int w435 = chip->l58 || chip->l59;

    int w389 = w162 && chip->w390;

    int w392 = w162 && chip->w391;

    int w399 = chip->w400 || (chip->w390 && w255 && !chip->pla[22]);

    int w479 = chip->l76 && !w399;

    int w362 = chip->clk_n && chip->w359;

    if (w362)
        chip->w361 = !chip->w361_0;
    else
        chip->w361_0 = chip->w361;

    int w328 = chip->clk_n && w302;

    if (w328)
        chip->w327 = !chip->w327_0;
    else
        chip->w327_0 = chip->w327;

    int w338 = !(chip->w305 || chip->w301);

    int w331 = w326 && chip->w327 && chip->clk_n;

    if (w331)
        chip->w332 = !chip->w322_0;
    else
        chip->w322_0 = chip->w322;

    int w329 = w326 && !chip->w327 && chip->clk_n;

    if (w329)
        chip->w330 = !chip->w330_0;
    else
        chip->w330_0 = chip->w330;

    int w333 = !((!chip->w327 && chip->w330) || (chip->w327 && chip->w332));

    int w349 = w333 ? chip->w346 : chip->w345;
    int w351 = w333 ? chip->w345 : chip->w346;

    int w311 = !(w238 && !(w343 && w312));

    int w316 = !(w317 || w315);

    if (chip->clk_p)
    {
        chip->w341 = w311;
        chip->w319_0 = (w316 && w310) || w309;
        chip->l44 = w308;
    }

    int w314_0 = !(chip->l44 || chip->w307);

    if (chip->clk_n && chip->w305)
        chip->w321 = 1;
    else if (chip->clk_n && !chip->w305 && !chip->w293)
        chip->w321 = 0;

    if (chip->clk_n)
        chip->w320 = chip->l45;

    if (chip->clk_p)
    {
        chip->w369 = w289;
        chip->l56 = w283;
        chip->l61 = chip->w442;
    }

    int w428_0 = chip->l56 && w426;

    int w429 = (chip->w430 || chip->w431) && chip->l61;

    if (chip->clk_n && w429)
        chip->w442 = 0;
    else if (chip->clk_n && w435)
        chip->w442 = 1;

    int w446 = chip->w442 && !(w429 && chip->clk_n);

    if (w446)
        chip->l75_0 = !chip->w477;
    if (chip->clk_p)
        chip->l75 = !chip->l75_0;

    int w462 = w429 && chip->clk_n;

    int w460 = !(chip->clk_n && chip->l67);

    int w459 = chip->clk_n && w395;

    int w461 = chip->clk_n && chip->l68;

    if (chip->clk_p)
        chip->w423 = chip->tm_w1;

    if (w462)
        chip->w476 = chip->l75;
    else if (w461)
        chip->w476 = !chip->w423;
    else if (!w460)
        chip->w476 = !1;
    else if (w459)
        chip->w476 = !0;

    int w463 = chip->clk_n && chip->l70;
    int w458 = chip->clk_n && chip->l660;

    int w475 = !(chip->tm_w1 && chip->tm_w2);

    int w474 = chip->clk_n && !w475;

    int w382_1 = w382_0 && chip->clk_n;

    int w469 = chip->w470 && chip->clk_n;

    int w471 = chip->clk_n && (chip->w147 & 8) == 0;
    int w472 = chip->clk_n && (chip->w147 & 8) != 0;

    if (w472)
        chip->w473_0 = (chip->w484 & 1) == 0;
    else if (w471)
        chip->w473_0 = (chip->w484 & 128) == 0;

    if (w463)
        chip->w473 = !chip->w476;
    else if (w458)
        chip->w473 = chip->tm_w1;
    else if (w474)
        chip->w473 = !0;
    else if (w382_1)
        chip->w473 = (chip->w484 & 1) == 0;
    else if (w469)
        chip->w473 = chip->w473_0;

    if (chip->clk_p)
        chip->l71 = w272;

    int w405 = !((chip->w147 & 16) == 0 || !w406);
    int w407 = !((chip->w147 & 16) == 0 || w406);
    int w408 = !((chip->w147 & 16) != 0 || w406);
    int w409 = !((chip->w147 & 16) != 0 || !w406);

    int w422 = !((w405 && chip->w423) || w408);
    int w495 = w409 && (chip->w147 & 8) == 0 && chip->w470;

    if (chip->clk_p)
        chip->w419 = !w274;

    if (chip->w419 && chip->clk_n)
        chip->w420 = chip->tm_w1;

    int w432 = chip->clk_n && !chip->l57;

    if (w432)
    {
        chip->l83 = (chip->w484 & 1) != 0;
        chip->l84 = (chip->w484 & 16) != 0;
    }

    int w468_0 = !(chip->w115 && chip->l72);

    int w481 = w468_0 && chip->w464;

    int w467 = !(chip->w464 && !chip->w115)

    if (w381)
    {
        chip->w484 &= ~1;
        chip->w484 &= ~4;
        chip->w484 &= ~16;
        chip->w484 &= ~64;
        chip->w484 &= ~128;
        if (!chip->w473)
            chip->w484 |= 1;
        if (!w481)
            chip->w484 |= 2;
        if (!chip->w441)
            chip->w484 |= 4;
        if (!chip->w476)
            chip->w484 |= 16;
        if (!chip->w486)
            chip->w484 |= 64;
        if (!chip->w450)
            chip->w484 |= 128;
    }

    int w440 = w392 && chip->clk_n;
    int w382_2 = w382_0 && chip->clk_n;
    int w436 = chip->clk_n && w389;
    int w439 = chip->clk_n && w429 && w162;
    int w437 = chip->clk_n && chip->l60;
    int w466 = chip->clk_n && chip->w390 && !chip->pla[19];
    int w465 = chip->clk_n && chip->l71;
    int w382_3 = w382_0 && chip->clk_n;

    if (w440)
        chip->w486 = chip->tm_w1;
    else if (w382_2)
        chip->w486 = (chip->w484 & 64) == 0;
    else if (w436)
        chip->w486 = !0;

    if (w440)
        chip->w450 = chip->tm_w1;
    else if (w382_2)
        chip->w450 = (chip->w484 & 128) == 0;

    int w441_0 = chip->w452 ? (chip->tm_w1 || chip->w453) :
        chip->tm_w1;

    if (w440)
        chip->w441 = w441_0;
    else if (w382_2)
        chip->w441 = (chip->w484 & 4) == 0;
    else if (w439)
        chip->w441 = chip->tm_w1;
    else if (w436)
        chip->w441 = !0;
    else if (w437)
        chip->w441 = chip->w438;

    if (w466)
        chip->w464 = w457;
    else if (w465)
        chip->w464 = (chip->w484 & 128) == 0;
    else if (w382_3)
        chip->w464 = (chip->w484 & 2) == 0;


    int w425_0 = !(w407 || (chip->w423 && w405));
    int w425_1 = !(((chip->w484 & 128) != 0 && w408) || (w409 && (chip->w484 & 1) != 0))
    int w425_2 = w425_0 && w425_1;

    int w494 = !((w408 && (chip->w484 & 4) != 0)
        || (w409 && (chip->w484 & 64) != 0))
        && !((w405 && (chip->w484 & 1) != 0)
            || (w407 && (chip->w484 & 128) != 0));

    int w517 = chip->clk_n && chip->w416;

    int w518 = chip->w417;
    int w519 = !chip->w418;

    int w516 = chip->clk_n && chip->l79;

    int w339_1 = !(chip->clk_p && chip->w339);
    chip->w339 = chip->clk_p;

    int w364 = chip->clk_n && chip->l81 && chip->w361;
    int w363 = chip->clk_n && chip->l81 && !chip->w361;
    int w355 = chip->clk_n && chip->w347 && chip->w327;
    int w354 = chip->clk_n && chip->w347 && !chip->w327;
    int w353 = chip->clk_n && w351 && chip->w327;
    int w352 = chip->clk_n && w351 && !chip->w327;
    int w350 = chip->clk_n && w349 && chip->w327;
    int w348 = chip->clk_n && w349 && !chip->w327;
    int w342 = chip->clk_n && chip->w341 && chip->w320;
    int w340 = chip->clk_n && chip->w341 && !chip->w320;
    int w319 = chip->clk_n && chip->w319_0;
    int w314 = chip->clk_n && w314_0;

    int w337 = chip->clk_n && chip->w307;
    int w336 = chip->clk_n && !chip->w298;
    int w335 = chip->clk_n && !chip->w292;

    int w334 = chip->clk_n && !chip->w293;

    if (chip->clk_p && chip->w210)
        chip->w438 = chip->w522 == 0xfffe;

    if (w518)
    {
        chip->w484 = (~chip->w514) & 255;
    }

    if (w334)
        chip->w522 = chip->w520 ^ 0xffff;

    int w528 = !chip->w215 ? chip->w527 : 0;


    if (chip->clk_p)
    {
        int i;
        int c[16];
        int o[16];
        int o2[16];
        int w523 = 0;

        int w525 = chip->w210 ? (chip->w522 ^ 0xffff) : w522;
        for (i = 0; i < 16; i++)
        {
            o[i] = (w522 >> i) & 1;
            o2[i] = (w525 >> i) & 1;
        }

        c[0] = w193;
        c[1] = !(!w193 && o2[0]);
        c[2] = !(!w193 && o2[0] && o2[1]);
        c[3] = !(o2[2] && !c[2]);
        c[4] = !(o2[2] && o2[3] && !c[2]);
        c[5] = !(o2[4] && !c[4]);
        c[6] = !(o2[4] && o2[5] && !c[4]);
        c[7] = !(o2[4] && o2[5] && o2[6] && !chip->w321 && !w193 && o2[0] && o2[1] && o2[2] && o2[3]);
        c[8] = !(!c[7] && o2[7]);
        c[9] = !(!c[7] && o2[7] && o2[8]);
        c[10] = !(!c[9] && o2[9]);
        c[11] = !(!c[9] && o2[9] && o2[10]);
        c[12] = !(!c[9] && o2[9] && o2[10] && o2[11]);
        c[13] = !(!c[12] && o2[12]);
        c[14] = !(!c[12] && o2[12] && o2[13]);
        c[15] = !(!c[12] && o2[12] && o2[13] && o2[14]);

        for (i = 0; i < 16; i++)
            w523 |= (c[i] ^ o[i]) << i;

        chip->w527 = w523;
    }


    if (!w339_1)
    {
        chip->w514 = 0xffff;
        chip->w515 = 0xffff;
        chip->w520 = 0xffff;
        chip->w521 = 0xffff;
    }
    else
    {
        int ix1 = -1;
        if (w364)
            ix1 = 0;
        else if (w363)
            ix1 = 1;
        else if (w355)
            ix1 = 2;
        else if (w354)
            ix1 = 3;
        else if (w353)
            ix1 = 4;
        else if (w352)
            ix1 = 5;
        else if (w350)
            ix1 = 6;
        else if (w348)
            ix1 = 7;
        else if (w342)
            ix1 = 8;
        else if (w340)
            ix1 = 9;
        else if (w319)
            ix1 = 10;
        else if (w314)
            ix1 = 11;
        int ix2 = -1;
        if (w336)
            ix2 = 0;
        else if (w337)
            ix2 = 1;

        if (w338)
        {
            int v1 = chip->w514 & chip->w520;
            int v2 = chip->w515 & chip->w521;

            // strong
            int s_u = 0;
            int s_u1 = 0;
            int s_u2 = 0;

            if (w516)
            {
                s_u |= 255;
                s_u1 |= (~chip->w484) & 255;
                s_u2 |= (chip->w484) & 255;
            }
            if (w517)
            {
                s_u |= 255 << 8;
                s_u1 |= ((~chip->w513) & 255) << 8;
                s_u2 |= ((chip->w513) & 255) << 8;
            }
            if (w335)
            {
                s_u |= 65535;
                s_u1 |= w528 & 65535;
                s_u2 |= (~w528) & 65535;
            }

            v1 &= ~s_u;
            v2 &= ~s_u;
            v1 |= s_u1;
            v2 |= s_u2;

            // weak

            if (ix1 >= 0 || ix2 >= 0)
            {
                int w_u = 65536;
                int w_v1 = 0;
                int w_v2 = 0;

                if (ix1 >= 0)
                {
                    chip->regs1[ix1] &= ~s_u;
                    chip->regs1[ix1] |= v1 & s_u;

                    w_v1 = chip->regs1[ix1];
                    w_v2 = chip->regs1[ix1] ^ 65535;
                }
                if (ix2 >= 0)
                {
                    chip->regs2[ix2] &= ~s_u;
                    chip->regs2[ix2] |= v1 & s_u;

                    w_v1 = chip->regs2[ix2];
                    w_v2 = chip->regs2[ix2] ^ 65535;
                }

                w_u &= ~s_u;
                w_v1 &= ~s_u;
                w_v2 &= ~s_u;

                v1 &= ~w_u;
                v2 &= ~w_u;
                v1 |= w_u1;
                v2 |= w_u2;
            }

            chip->w514 = chip->w520 = v1;
            chip->w515 = chip->w521 = v2;
        }
        else
        {
            {
                int v1 = chip->w514;
                int v2 = chip->w515;

                // strong
                int s_u = 0;
                int s_u1 = 0;
                int s_u2 = 0;

                if (w516)
                {
                    s_u |= 255;
                    s_u1 |= (~chip->w484) & 255;
                    s_u2 |= (chip->w484) & 255;
                }
                if (w517)
                {
                    s_u |= 255 << 8;
                    s_u1 |= ((~chip->w513) & 255) << 8;
                    s_u2 |= ((chip->w513) & 255) << 8;
                }

                v1 &= ~s_u;
                v2 &= ~s_u;
                v1 |= s_u1;
                v2 |= s_u2;

                // weak

                if (ix1 >= 0)
                {
                    int w_u = 65536;
                    int w_v1 = 0;
                    int w_v2 = 0;

                    if (ix1 >= 0)
                    {
                        chip->regs1[ix1] &= ~s_u;
                        chip->regs1[ix1] |= v1 & s_u;

                        w_v1 = chip->regs1[ix1];
                        w_v2 = chip->regs1[ix1] ^ 65535;
                    }

                    w_u &= ~s_u;
                    w_v1 &= ~s_u;
                    w_v2 &= ~s_u;

                    v1 &= ~w_u;
                    v2 &= ~w_u;
                    v1 |= w_u1;
                    v2 |= w_u2;
                }

                chip->w514 = v1;
                chip->w515 = v2;
            }
            {
                int v1 = chip->w520;
                int v2 = chip->w521;

                // strong
                int s_u = 0;
                int s_u1 = 0;
                int s_u2 = 0;

                if (w335)
                {
                    s_u |= 65535;
                    s_u1 |= w528 & 65535;
                    s_u2 |= (~w528) & 65535;
                }

                v1 &= ~s_u;
                v2 &= ~s_u;
                v1 |= s_u1;
                v2 |= s_u2;

                // weak

                if (ix2 >= 0)
                {
                    int w_u = 65536;
                    int w_v1 = 0;
                    int w_v2 = 0;

                    if (ix1 >= 0)
                    {
                        chip->regs2[ix2] &= ~s_u;
                        chip->regs2[ix2] |= v1 & s_u;

                        w_v1 = chip->regs2[ix2];
                        w_v2 = chip->regs2[ix2] ^ 65535;
                    }

                    w_u &= ~s_u;
                    w_v1 &= ~s_u;
                    w_v2 &= ~s_u;

                    v1 &= ~w_u;
                    v2 &= ~w_u;
                    v1 |= w_u1;
                    v2 |= w_u2;
                }

                chip->w520 = v1;
                chip->w521 = v2;
            }
        }
    }
}
