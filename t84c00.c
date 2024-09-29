#include "t84c00.h"

void T84C00_Clock(t84c00_t* chip)
{

    if (!chip->tm_w1)
        chip->w147 = chip->tm_w2 ^ 255;

    chip->pla[3] = chip->w147 == 0x76 && !chip->tm_w1;
    chip->pla[0] = (chip->w147 & 0xf7) == 0xd3 && !chip->tm_w1;
    chip->pla[1] = ((chip->w147 & 0xf7) == 0xf3 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[2] = ((chip->w147 & 0xc7) == 0x46 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[7] = ((chip->w147 & 0xe6) == 0xa2 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[5] = ((chip->w147 & 0xe7) == 0xa1 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[4] = ((chip->w147 & 0xe7) == 0xa0 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[8] = (chip->w147 == 0x10 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[12] = ((chip->w147 & 0x38) == 0x30 && !chip->tm_w1) || !chip->tm_w2;
    chip->pla[15] = ((chip->w147 & 0xf7) == 0x57 && !chip->tm_w1 && !chip->tm_w2) || !chip->tm_w3;
}

// 10001001 = 0x89
// 01110110 = 0x76