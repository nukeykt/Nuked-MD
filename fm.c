// YM2612/YM3438 core

#include <stdio.h>

#include "fm.h"


void FM_SetIC(fm_t *chip, int ic)
{
    chip->ic = ic & 1;
}

void FM_FSM1(fm_t *chip)
{
    int reset = (chip->ic_check_latch[1] & 16) != 0;;
    chip->fsm_cnt1[0] = chip->fsm_cnt1[1] + 1;
    if (reset || (chip->fsm_cnt1[1] & 2) != 0)
        chip->fsm_cnt1[0] = 0;
    chip->fsm_cnt2[0] = chip->fsm_cnt2[1];
    if ((chip->fsm_cnt1[1] & 2) != 0)
        chip->fsm_cnt2[0]++;
    if (reset)
        chip->fsm_cnt2[0] = 0;
}

void FM_FSM2(fm_t *chip)
{
    chip->fsm_cnt1[1] = chip->fsm_cnt1[0] & 0x3;
    chip->fsm_cnt2[1] = chip->fsm_cnt2[0] & 0x7;
}

void FM_Clock1(fm_t *chip)
{
    FM_FSM1(chip);
}

void FM_Clock2(fm_t *chip)
{
    FM_FSM2(chip);
}

void FM_Clock(fm_t *chip, int phi)
{
    if (!phi)
    {
        int ic_check;

        chip->ic_latch[0] = chip->ic_latch[1] << 1;
        chip->ic_latch[0] |= chip->ic;

        ic_check = (chip->ic_latch[1] & 0x800) == 0 && chip->ic;

        chip->prescaler_latch[0] = chip->prescaler_latch[1] << 1;
        chip->prescaler_latch[0] |= !ic_check && (chip->prescaler_latch[1] & 0x1f) == 0;

        chip->ic_check_latch[0] = chip->ic_check_latch[1] << 1;
        chip->ic_check_latch[0] |= ic_check;

        chip->phi1_latch[0] = (chip->prescaler_latch[1] & 0x21) != 0;
        chip->phi2_latch[0] = (chip->prescaler_latch[1] & 0xc) != 0;
    }
    else
    {
        chip->ic_latch[1] = chip->ic_latch[0] & 0xfff;
        chip->ic_check_latch[1] = chip->ic_check_latch[0] & 0xf;
        chip->prescaler_latch[1] = chip->prescaler_latch[0] & 0x3f;
        chip->phi1_latch[1] = chip->phi1_latch[0] & 0x1;
        chip->phi2_latch[1] = chip->phi2_latch[0] & 0x1;
    }
    if (chip->phi1_latch[1])
    {
        FM_Clock1(chip);
    }
    if (chip->phi2_latch[1])
    {
        FM_Clock2(chip);
    }
}


void main(void)
{
    int i;
    fm_t fm;
    memset(&fm, 0, sizeof(fm));

    for (i = 0; i < 200; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        printf("%i %i %i\n", i, fm.fsm_cnt1[1], fm.fsm_cnt2[1]);
    }

    FM_SetIC(&fm, 1);
    for (;i < 400; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        printf("%i %i %i\n", i, fm.fsm_cnt1[1], fm.fsm_cnt2[1]);
    }
    FM_SetIC(&fm, 0);
    for (;i < 600; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        printf("%i %i %i\n", i, fm.fsm_cnt1[1], fm.fsm_cnt2[1]);
    }
}