// YM2612/YM3438 core

#include <stdio.h>

#include "fm.h"


void FM_HandleIO(fm_t *chip)
{
    int write_data = chip->cs && chip->wr && (chip->address & 1) == 1 && !chip->ic;
    int write_addr = (chip->cs && chip->wr && (chip->address & 1) == 0) || chip->ic;
    int read_enable = chip->cs && chip->rd && chip->address == 0 && !chip->ic;
    int io_dir = chip->cs && chip->rd && !chip->ic;
    int data_enable = !io_dir && !chip->ic;

    if (chip->cs && chip->wr)
    {
        chip->data_latch = chip->data | ((chip->address & 2) << 7);
        chip->bank_latch = (chip->address >> 1) & 1;
    }

    if (write_addr)
        chip->write_addr_trig = 1;
    if (write_data)
        chip->write_data_trig = 1;

    if (chip->phi1_latch[1])
    {
        chip->write_addr_trig_sync = chip->write_addr_trig;
        chip->write_data_trig_sync = chip->write_data_trig;
    }
}

void FM_SetIC(fm_t *chip, int ic)
{
    chip->ic = ic & 1;
    FM_HandleIO(chip);
}

void FM_SetWrite(fm_t *chip, int wr)
{
    chip->wr = wr & 1;
    FM_HandleIO(chip);
}

void FM_SetRead(fm_t *chip, int rd)
{
    chip->rd = rd & 1;
    FM_HandleIO(chip);
}

void FM_SetCS(fm_t *chip, int cs)
{
    chip->cs = cs & 1;
    FM_HandleIO(chip);
}

void FM_SetAddress(fm_t *chip, int address)
{
    chip->address = address & 3;
    FM_HandleIO(chip);
}

void FM_SetData(fm_t *chip, int data)
{
    chip->data = data & 255;
    FM_HandleIO(chip);
}

void FM_FSM1(fm_t *chip)
{
    int reset = (chip->ic_check_latch[1] & 16) != 0;
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
    int cnt_comb;
    chip->fsm_cnt1[1] = chip->fsm_cnt1[0] & 0x3;
    chip->fsm_cnt2[1] = chip->fsm_cnt2[0] & 0x7;

    cnt_comb = (chip->fsm_cnt2[1] << 2) | chip->fsm_cnt1[1];

    if (chip->chip_type == chip_type_ym2612)
    {
        chip->fsm_out[0] = (cnt_comb & 30) == 30;
        chip->fsm_out[1] = (cnt_comb & 28) == 0;
        chip->fsm_out[2] = (cnt_comb & 30) == 4;
        chip->fsm_out[3] = (cnt_comb & 30) == 22;
        chip->fsm_out[4] = (cnt_comb & 28) == 24;
        chip->fsm_out[5] = (cnt_comb & 30) == 28;
        chip->fsm_out[6] = (cnt_comb & 30) == 14;
        chip->fsm_out[7] = (cnt_comb & 28) == 16;
        chip->fsm_out[8] = (cnt_comb & 30) == 20;
        chip->fsm_out[9] = (cnt_comb & 30) == 6;
        chip->fsm_out[10] = (cnt_comb & 28) == 8;
        chip->fsm_out[11] = (cnt_comb & 30) == 12;
        chip->fsm_out[12] = (cnt_comb & 30) == 30;
        chip->fsm_out[13] = cnt_comb == 0;
        chip->fsm_out[14] = cnt_comb == 1;
        chip->fsm_out[15] = cnt_comb == 29;
        chip->fsm_out[16] = (cnt_comb & 7) == 1;
        chip->fsm_out[17] = (cnt_comb & 28) == 4;
        chip->fsm_out[18] = cnt_comb == 8;
        chip->fsm_out[19] = (cnt_comb & 15) == 14;
        chip->fsm_out[20] = (cnt_comb & 15) == 4;
        chip->fsm_out[21] = (cnt_comb & 15) == 9;
        chip->fsm_out[22] = cnt_comb == 14;
        chip->fsm_out[23] = (cnt_comb & 24) == 16;
        chip->fsm_out[24] = (cnt_comb & 28) == 24;
        chip->fsm_out[25] = (cnt_comb & 30) == 28;
    }
    else
    {
        chip->fsm_clock_eg = cnt_comb == 0;
        chip->fsm_op4_sel = (cnt_comb == 0 || cnt_comb == 1 || cnt_comb == 2 || cnt_comb == 4 || cnt_comb == 5 || cnt_comb == 6);
    }
}

void FM_HandleIO1(fm_t *chip)
{
    int write_data_en = !chip->write_data_sr[1] && chip->write_data_dlatch;
    int write_addr_en = !chip->write_addr_sr[1] && chip->write_addr_dlatch;
    int busy_cnt = chip->busy_cnt[1] + chip->busy_latch[1];
    int busy_of = (busy_cnt >> 5) & 1;
    chip->write_addr_trig_sync = chip->write_addr_trig;
    chip->write_data_trig_sync = chip->write_data_trig;
    chip->write_addr_sr[0] = chip->write_addr_dlatch;
    chip->write_data_sr[0] = chip->write_data_dlatch;

    chip->busy_latch[0] = write_data_en || (chip->busy_latch[1] && !(chip->ic || busy_of));
    if (chip->ic)
        busy_cnt = 0;
    chip->busy_cnt[0] = busy_cnt & 31;
}

void FM_HandleIO2(fm_t *chip)
{
    chip->write_addr_dlatch = chip->write_addr_trig_sync;
    if (chip->write_addr_dlatch)
        chip->write_addr_trig = 0;
    chip->write_data_dlatch = chip->write_data_trig_sync;
    if (chip->write_data_dlatch)
        chip->write_data_trig = 0;
    chip->write_addr_sr[1] = chip->write_addr_sr[0] & 1;
    chip->write_data_sr[1] = chip->write_data_sr[0] & 1;
    chip->busy_cnt[1] = chip->busy_cnt[0] & 31;
    chip->busy_latch[1] = chip->busy_latch[0] & 1;
}

void FM_Clock1(fm_t *chip)
{
    FM_HandleIO1(chip);
    FM_FSM1(chip);
}

void FM_Clock2(fm_t *chip)
{
    FM_HandleIO2(chip);
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

    fm.chip_type = chip_type_ym3438;

    FM_SetCS(&fm, 1);
    FM_SetRead(&fm, 0);
    FM_SetWrite(&fm, 0);
    FM_SetAddress(&fm, 0);
    FM_SetData(&fm, 0);

    for (i = 0; i < 200; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.busy_latch[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }

    FM_SetIC(&fm, 1);
    for (;i < 400; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.busy_latch[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }
    FM_SetIC(&fm, 0);
    for (;i < 600; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.busy_latch[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }

    FM_SetAddress(&fm, 1);
    FM_SetData(&fm, 0);
    FM_SetWrite(&fm, 1);
    FM_SetWrite(&fm, 0);
    for (; i < 1000; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.busy_latch[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }
}
