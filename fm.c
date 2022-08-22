// YM2612/YM3438 core

#include <stdio.h>

#include "fm.h"

void FM_Clock1(fm_t *chip);

void FM_Prescaler(fm_t *chip)
{
    if (!chip->phi)
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
}

void FM_HandleIO(fm_t *chip)
{
    int write_data = chip->cs && chip->wr && (chip->address & 1) == 1 && !chip->ic;
    int write_addr = (chip->cs && chip->wr && (chip->address & 1) == 0) || chip->ic;
    int read_enable = chip->cs && chip->rd && chip->address == 0 && !chip->ic;
    int io_dir = chip->cs && chip->rd && !chip->ic;
    int data_enable = !io_dir && !chip->ic;

    if (chip->cs && chip->wr)
    {
        chip->data_latch = chip->data;
        chip->bank_latch = (chip->address >> 1) & 1;
    }

    if (write_addr)
        chip->write_addr_trig = 1;
    if (write_data)
        chip->write_data_trig = 1;

    if (chip->phi1_latch[1])
    {
        // chip->write_addr_trig_sync = chip->write_addr_trig;
        // chip->write_data_trig_sync = chip->write_data_trig;
        FM_Clock1(chip);
    }
}

int FM_GetBus(fm_t *chip)
{
    int data = 0;
    int io_dir = chip->cs && chip->rd && !chip->ic;
    int data_enable = !io_dir && !chip->ic;
    if (data_enable)
        data = chip->data_latch;
    if (chip->io_ic_latch[1])
        data = 0;
    return data;
}

void FM_SetIC(fm_t *chip, int ic)
{
    chip->ic = ic & 1;
    FM_Prescaler(chip);
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

    chip->fsm_clock_eg = cnt_comb == 0;
    chip->fsm_op4_sel = (cnt_comb == 0 || cnt_comb == 1 || cnt_comb == 2 || cnt_comb == 4 || cnt_comb == 5 || cnt_comb == 6);
    chip->fsm_sel23 = cnt_comb == 30;
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
    chip->io_ic_latch[0] = chip->ic;
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
    chip->io_ic_latch[1] = chip->io_ic_latch[0] & 1;
}

void FM_DoShiftRegisters(fm_t *chip, int sel)
{
    int i, j;
    int to = sel;
    int from = sel ^ 1;
    int rot = sel == 0 ? 1 : 0;
#define SLOT_ROTATE(x) rot ? ((x << 1) | ((x >> 11) & 1)) : x
#define CH_ROTATE(x) rot ? ((x << 1) | ((x >> 5) & 1)) : x
    // slot registers
    for (i = 0; i < 2; i++)
    {
        // multi
        for (j = 0; j < 4; j++)
            chip->slot_multi[i][j][to] = SLOT_ROTATE(chip->slot_multi[i][j][from]);
        // dt
        for (j = 0; j < 3; j++)
            chip->slot_dt[i][j][to] = SLOT_ROTATE(chip->slot_dt[i][j][from]);
        // tl
        for (j = 0; j < 7; j++)
            chip->slot_tl[i][j][to] = SLOT_ROTATE(chip->slot_tl[i][j][from]);
        // ar
        for (j = 0; j < 5; j++)
            chip->slot_ar[i][j][to] = SLOT_ROTATE(chip->slot_ar[i][j][from]);
        // ks
        for (j = 0; j < 2; j++)
            chip->slot_ks[i][j][to] = SLOT_ROTATE(chip->slot_ks[i][j][from]);
        // dr
        for (j = 0; j < 5; j++)
            chip->slot_dr[i][j][to] = SLOT_ROTATE(chip->slot_dr[i][j][from]);
        // am
        for (j = 0; j < 1; j++)
            chip->slot_am[i][j][to] = SLOT_ROTATE(chip->slot_am[i][j][from]);
        // sr
        for (j = 0; j < 5; j++)
            chip->slot_sr[i][j][to] = SLOT_ROTATE(chip->slot_sr[i][j][from]);
        // rr
        for (j = 0; j < 4; j++)
            chip->slot_rr[i][j][to] = SLOT_ROTATE(chip->slot_rr[i][j][from]);
        // sl
        for (j = 0; j < 4; j++)
            chip->slot_sl[i][j][to] = SLOT_ROTATE(chip->slot_sl[i][j][from]);
        // ssg eg
        for (j = 0; j < 4; j++)
            chip->slot_ssg_eg[i][j][to] = SLOT_ROTATE(chip->slot_ssg_eg[i][j][from]);
    }
    // channel registers

    // fnum
    for (j = 0; j < 11; j++)
        chip->chan_fnum[j][to] = CH_ROTATE(chip->chan_fnum[j][from]);
    // fnum ch3
    for (j = 0; j < 11; j++)
        chip->chan_fnum_ch3[j][to] = CH_ROTATE(chip->chan_fnum_ch3[j][from]);
    // block
    for (j = 0; j < 3; j++)
        chip->chan_block[j][to] = CH_ROTATE(chip->chan_block[j][from]);
    // block ch3
    for (j = 0; j < 3; j++)
        chip->chan_block_ch3[j][to] = CH_ROTATE(chip->chan_block_ch3[j][from]);
    // connect
    for (j = 0; j < 3; j++)
        chip->chan_connect[j][to] = CH_ROTATE(chip->chan_connect[j][from]);
    // fb
    for (j = 0; j < 3; j++)
        chip->chan_fb[j][to] = CH_ROTATE(chip->chan_fb[j][from]);
    // pms
    for (j = 0; j < 3; j++)
        chip->chan_pms[j][to] = CH_ROTATE(chip->chan_pms[j][from]);
    // ams
    for (j = 0; j < 2; j++)
        chip->chan_ams[j][to] = CH_ROTATE(chip->chan_ams[j][from]);
    // pan
    for (j = 0; j < 2; j++)
        chip->chan_pan[j][to] = CH_ROTATE(chip->chan_pan[j][from]);
#undef SLOT_ROTATE
#undef CH_ROTATE
}

void FM_FMRegisters1(fm_t *chip)
{
    int i, j;
    int write_data_en = !chip->write_data_sr[1] && chip->write_data_dlatch;
    int write_addr_en = !chip->write_addr_sr[1] && chip->write_addr_dlatch;
    int bus = FM_GetBus(chip);
    int address = bus | (chip->bank_latch << 8);
    int fm_write = (bus & 0xf0) != 0;


    if (write_addr_en)
        chip->write_fm_address[0] = fm_write;
    else
        chip->write_fm_address[0] = chip->write_fm_address[1];

    if (chip->ic)
        chip->fm_address[0] = 0;
    else if (fm_write && write_addr_en)
        chip->fm_address[0] = address;
    else
        chip->fm_address[0] = chip->fm_address[1];

    chip->write_fm_data[0] = (chip->write_fm_address[1] && write_data_en) || (chip->write_fm_data[1] && !write_addr_en);

    if (chip->ic)
        chip->fm_data[0] = 0;
    else if (chip->write_fm_address[1] && write_data_en)
        chip->fm_data[0] = bus;
    else
        chip->fm_data[0] = chip->fm_data[1];

    if (write_addr_en)
    {
        chip->write_mode_21[0] = address == 0x21;
        chip->write_mode_22[0] = address == 0x22;
        chip->write_mode_24[0] = address == 0x24;
        chip->write_mode_25[0] = address == 0x25;
        chip->write_mode_26[0] = address == 0x26;
        chip->write_mode_27[0] = address == 0x27;
        chip->write_mode_28[0] = address == 0x28;
        chip->write_mode_2a[0] = address == 0x2a;
        chip->write_mode_2b[0] = address == 0x2b;
        chip->write_mode_2c[0] = address == 0x2c;
    }
    else
    {
        chip->write_mode_21[0] = chip->write_mode_21[1];
        chip->write_mode_22[0] = chip->write_mode_22[1];
        chip->write_mode_24[0] = chip->write_mode_24[1];
        chip->write_mode_25[0] = chip->write_mode_25[1];
        chip->write_mode_26[0] = chip->write_mode_26[1];
        chip->write_mode_27[0] = chip->write_mode_27[1];
        chip->write_mode_28[0] = chip->write_mode_28[1];
        chip->write_mode_2a[0] = chip->write_mode_2a[1];
        chip->write_mode_2b[0] = chip->write_mode_2b[1];
        chip->write_mode_2c[0] = chip->write_mode_2c[1];
    }

    if (chip->ic)
    {
        chip->mode_test_21[0] = 0;
        chip->mode_lfo_en[0] = 0;
        chip->mode_lfo_freq[0] = 0;
        chip->mode_timer_a_reg[0] = 0;
        chip->mode_timer_b_reg[0] = 0;
        chip->mode_ch3[0] = 0;
        chip->mode_timer_a_load[0] = 0;
        chip->mode_timer_a_enable[0] = 0;
        chip->mode_timer_a_reset[0] = 0;
        chip->mode_timer_b_load[0] = 0;
        chip->mode_timer_b_enable[0] = 0;
        chip->mode_timer_b_reset[0] = 0;
        chip->mode_kon_operator[0] = 0;
        chip->mode_kon_channel[0] = 0;
        chip->mode_dac_data[0] = 0;
        chip->mode_dac_en[0] = 0;
        chip->mode_test_2c[0] = 0;
        // slot registers
        for (i = 0; i < 2; i++)
        {
            // multi
            for (j = 0; j < 4; j++)
                chip->slot_multi[i][j][0] &= ~1;
            // dt
            for (j = 0; j < 3; j++)
                chip->slot_dt[i][j][0] &= ~1;
            // tl
            for (j = 0; j < 7; j++)
                chip->slot_tl[i][j][0] &= ~1;
            // ar
            for (j = 0; j < 5; j++)
                chip->slot_ar[i][j][0] &= ~1;
            // ks
            for (j = 0; j < 2; j++)
                chip->slot_ks[i][j][0] &= ~1;
            // dr
            for (j = 0; j < 5; j++)
                chip->slot_dr[i][j][0] &= ~1;
            // am
            for (j = 0; j < 1; j++)
                chip->slot_am[i][j][0] &= ~1;
            // sr
            for (j = 0; j < 5; j++)
                chip->slot_sr[i][j][0] &= ~1;
            // rr
            for (j = 0; j < 4; j++)
                chip->slot_rr[i][j][0] &= ~1;
            // sl
            for (j = 0; j < 4; j++)
                chip->slot_sl[i][j][0] &= ~1;
            // ssg eg
            for (j = 0; j < 4; j++)
                chip->slot_ssg_eg[i][j][0] &= ~1;
        }
        // channel registers

        // fn low
        for (j = 0; j < 11; j++)
            chip->chan_fnum[j][0] &= ~1;
        // fn low ch3
        for (j = 0; j < 11; j++)
            chip->chan_fnum_ch3[j][0] &= ~1;
        // block fn high
        for (j = 0; j < 3; j++)
            chip->chan_block[j][0] &= ~1;
        // block fn high ch3
        for (j = 0; j < 3; j++)
            chip->chan_block_ch3[j][0] &= ~1;
        // connect
        for (j = 0; j < 3; j++)
            chip->chan_connect[j][0] &= ~1;
        // fb
        for (j = 0; j < 3; j++)
            chip->chan_fb[j][0] &= ~1;
        // pms
        for (j = 0; j < 3; j++)
            chip->chan_pms[j][0] &= ~1;
        // ams
        for (j = 0; j < 2; j++)
            chip->chan_ams[j][0] &= ~1;
        // pan
        for (j = 0; j < 2; j++)
            chip->chan_pan[j][0] &= ~1;

        chip->chan_a4[0] = 0;
        chip->chan_ac[0] = 0;
    }
    else
    {
        if (write_data_en && chip->write_mode_21[1] && !chip->bank_latch)
            chip->mode_test_21[0] = bus & 255;
        else
            chip->mode_test_21[0] = chip->mode_test_21[1];
        if (write_data_en && chip->write_mode_22[1] && !chip->bank_latch)
        {
            chip->mode_lfo_en[0] = (bus >> 3) & 1;
            chip->mode_lfo_freq[0] = bus & 7;
        }
        else
        {
            chip->mode_lfo_en[0] = chip->mode_lfo_en[1];
            chip->mode_lfo_freq[0] = chip->mode_lfo_freq[1];
        }
        chip->mode_timer_a_reg[0] = 0;
        if (write_data_en && chip->write_mode_24[1] && !chip->bank_latch)
            chip->mode_timer_a_reg[0] |= (bus & 255) << 2;
        else
            chip->mode_timer_a_reg[0] |= chip->mode_timer_a_reg[1] & 0x3fe;
        if (write_data_en && chip->write_mode_25[1] && !chip->bank_latch)
            chip->mode_timer_a_reg[0] |= bus & 3;
        else
            chip->mode_timer_a_reg[0] |= chip->mode_timer_a_reg[1] & 0x3;
        if (write_data_en && chip->write_mode_26[1] && !chip->bank_latch)
            chip->mode_timer_b_reg[0] = bus & 255;
        else
            chip->mode_timer_b_reg[0] = chip->mode_timer_b_reg[1];
        if (write_data_en && chip->write_mode_27[1] && !chip->bank_latch)
        {
            chip->mode_ch3[0] = (bus >> 6) & 3;
            chip->mode_timer_a_load[0] = bus & 1;
            chip->mode_timer_a_enable[0] = (bus >> 2) & 1;
            chip->mode_timer_a_reset[0] = (bus >> 4) & 1;
            chip->mode_timer_b_load[0] = (bus >> 1) & 1;
            chip->mode_timer_b_enable[0] = (bus >> 3) & 1;
            chip->mode_timer_b_reset[0] = (bus >> 5) & 1;
        }
        else
        {
            chip->mode_ch3[0] = chip->mode_ch3[1];
            chip->mode_timer_a_load[0] = chip->mode_timer_a_load[1];
            chip->mode_timer_a_enable[0] = chip->mode_timer_a_enable[1];
            chip->mode_timer_a_reset[0] = chip->mode_timer_a_reset[1];
            chip->mode_timer_b_load[0] = chip->mode_timer_b_load[1];
            chip->mode_timer_b_enable[0] = chip->mode_timer_b_enable[1];
            chip->mode_timer_b_reset[0] = chip->mode_timer_b_reset[1];
        }
        if (write_data_en && chip->write_mode_28[1] && !chip->bank_latch)
        {
            chip->mode_kon_operator[0] = (bus >> 4) & 15;
            chip->mode_kon_channel[0] = bus & 15;
        }
        else
        {
            chip->mode_kon_operator[0] = chip->mode_kon_operator[1];
            chip->mode_kon_channel[0] = chip->mode_kon_channel[1];
        }
        if (write_data_en && chip->write_mode_2a[1] && !chip->bank_latch)
            chip->mode_dac_data[0] = (bus & 255) ^ 128;
        else
            chip->mode_dac_data[0] = chip->mode_dac_data[1];
        if (write_data_en && chip->write_mode_2b[1] && !chip->bank_latch)
            chip->mode_dac_en[0] = (bus >> 7) & 1;
        else
            chip->mode_dac_en[0] = chip->mode_dac_en[1];
        if (write_data_en && chip->write_mode_2c[1] && !chip->bank_latch)
            chip->mode_test_2c[0] = bus & 0xf8;
        else
            chip->mode_test_2c[0] = chip->mode_test_2c[1];
    }
    if (chip->write_fm_data[1] && (chip->fm_address[1]&3) == chip->reg_cnt1[1]
        && ((chip->fm_address[1]>>2)&1) == ((chip->reg_cnt2[1]>>1)&1) && ((chip->fm_address[1]>>8)&1) == (chip->reg_cnt2[1]&1))
    {
        int bank = (chip->fm_address[1]>>3)&1;
        switch (chip->fm_address[1] & 0xf0)
        {
            case 0x30:
                // multi
                for (j = 0; j < 4; j++)
                {
                    chip->slot_multi[bank][j][0] &= ~1;
                    chip->slot_multi[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                // dt
                for (j = 0; j < 3; j++)
                {
                    chip->slot_dt[bank][j][0] &= ~1;
                    chip->slot_dt[bank][j][0] |= (chip->fm_data[1] >> (j + 3)) & 1;
                }
                break;
            case 0x40:
                // tl
                for (j = 0; j < 7; j++)
                {
                    chip->slot_tl[bank][j][0] &= ~1;
                    chip->slot_tl[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                break;
            case 0x50:
                // ar
                for (j = 0; j < 5; j++)
                {
                    chip->slot_ar[bank][j][0] &= ~1;
                    chip->slot_ar[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                // ks
                for (j = 0; j < 2; j++)
                {
                    chip->slot_ks[bank][j][0] &= ~1;
                    chip->slot_ks[bank][j][0] |= (chip->fm_data[1] >> (j + 6)) & 1;
                }
                break;
            case 0x60:
                // dr
                for (j = 0; j < 5; j++)
                {
                    chip->slot_dr[bank][j][0] &= ~1;
                    chip->slot_dr[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                // am
                for (j = 0; j < 1; j++)
                {
                    chip->slot_am[bank][j][0] &= ~1;
                    chip->slot_am[bank][j][0] |= (chip->fm_data[1] >> (j + 7)) & 1;
                }
                break;
            case 0x70:
                // sr
                for (j = 0; j < 5; j++)
                {
                    chip->slot_sr[bank][j][0] &= ~1;
                    chip->slot_sr[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                break;
            case 0x80:
                // rr
                for (j = 0; j < 4; j++)
                {
                    chip->slot_rr[bank][j][0] &= ~1;
                    chip->slot_rr[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                // sl
                for (j = 0; j < 4; j++)
                {
                    chip->slot_sl[bank][j][0] &= ~1;
                    chip->slot_sl[bank][j][0] |= (chip->fm_data[1] >> (j + 4)) & 1;
                }
                break;
            case 0x90:
                // ssg eg
                for (j = 0; j < 4; j++)
                {
                    chip->slot_ssg_eg[bank][j][0] &= ~1;
                    chip->slot_ssg_eg[bank][j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                break;
        }
    }
    if (chip->write_fm_data[1] && (chip->fm_address[1] & 3) == chip->reg_cnt1[1] && ((chip->fm_address[1] >> 8) & 1) == (chip->reg_cnt2[1] & 1))
    {
        switch (chip->fm_address[1] & 0xfc)
        {
            case 0xa0:
                // fnum
                for (j = 0; j < 8; j++)
                {
                    chip->chan_fnum[j][0] &= ~1;
                    chip->chan_fnum[j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                for (j = 0; j < 3; j++)
                {
                    chip->chan_fnum[8+j][0] &= ~1;
                    chip->chan_fnum[8+j][0] |= (chip->chan_a4[1] >> (j + 0)) & 1;
                }
                // block
                for (j = 0; j < 3; j++)
                {
                    chip->chan_block[j][0] &= ~1;
                    chip->chan_block[j][0] |= (chip->chan_a4[1] >> (j + 3)) & 1;
                }
                break;
            case 0xa4:
                chip->chan_a4[0] = chip->fm_data[1] & 0x3f;
                break;
            case 0xa8:
                // fnum
                for (j = 0; j < 8; j++)
                {
                    chip->chan_fnum_ch3[j][0] &= ~1;
                    chip->chan_fnum_ch3[j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                for (j = 0; j < 3; j++)
                {
                    chip->chan_fnum_ch3[8+j][0] &= ~1;
                    chip->chan_fnum_ch3[8+j][0] |= (chip->chan_ac[1] >> (j + 0)) & 1;
                }
                // block
                for (j = 0; j < 3; j++)
                {
                    chip->chan_block_ch3[j][0] &= ~1;
                    chip->chan_block_ch3[j][0] |= (chip->chan_ac[1] >> (j + 3)) & 1;
                }
                break;
            case 0xac:
                chip->chan_ac[0] = chip->fm_data[1] & 0x3f;
                break;
            case 0xb0:
                // connect
                for (j = 0; j < 3; j++)
                {
                    chip->chan_connect[j][0] &= ~1;
                    chip->chan_connect[j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                // fb
                for (j = 0; j < 3; j++)
                {
                    chip->chan_fb[j][0] &= ~1;
                    chip->chan_fb[j][0] |= (chip->fm_data[1] >> (j + 3)) & 1;
                }
                break;
            case 0xb4:
                // pms
                for (j = 0; j < 3; j++)
                {
                    chip->chan_pms[j][0] &= ~1;
                    chip->chan_pms[j][0] |= (chip->fm_data[1] >> (j + 0)) & 1;
                }
                // ams
                for (j = 0; j < 2; j++)
                {
                    chip->chan_ams[j][0] &= ~1;
                    chip->chan_ams[j][0] |= (chip->fm_data[1] >> (j + 3)) & 1;
                }
                // pan
                for (j = 0; j < 2; j++)
                {
                    chip->chan_pan[j][0] &= ~1;
                    chip->chan_pan[j][0] |= (chip->fm_data[1] >> (j + 6)) & 1;
                }
                break;
        }
    }
    // keyon
    chip->mode_kon[0][0] = chip->mode_kon[0][1] << 1;
    chip->mode_kon[1][0] = chip->mode_kon[1][1] << 1;
    chip->mode_kon[2][0] = chip->mode_kon[2][1] << 1;
    chip->mode_kon[3][0] = chip->mode_kon[3][1] << 1;
    if (chip->reg_cnt2[1] == ((chip->mode_kon_channel[1] >> 2) & 1) && chip->reg_cnt1[1] == (chip->mode_kon_channel[1] & 3))
    {
        chip->mode_kon[0][0] |= (chip->mode_kon_operator[1] >> 0) & 1;
        chip->mode_kon[1][0] |= (chip->mode_kon_operator[1] >> 3) & 1;
        chip->mode_kon[2][0] |= (chip->mode_kon_operator[1] >> 1) & 1;
        chip->mode_kon[3][0] |= (chip->mode_kon_operator[1] >> 2) & 1;
    }
    else
    {
        if (!chip->ic)
            chip->mode_kon[0][0] |= (chip->mode_kon[3][1] >> 5) & 1;
        chip->mode_kon[1][0] |= (chip->mode_kon[0][1] >> 5) & 1;
        chip->mode_kon[2][0] |= (chip->mode_kon[1][1] >> 5) & 1;
        chip->mode_kon[3][0] |= (chip->mode_kon[2][1] >> 5) & 1;
    }
}

void FM_FMRegisters2(fm_t *chip)
{
    chip->write_fm_address[1] = chip->write_fm_address[0];
    chip->write_fm_data[1] = chip->write_fm_data[0];
    chip->fm_address[1] = chip->fm_address[0];
    chip->fm_data[1] = chip->fm_data[0];
    chip->write_mode_21[1] = chip->write_mode_21[0];
    chip->write_mode_22[1] = chip->write_mode_22[0];
    chip->write_mode_24[1] = chip->write_mode_24[0];
    chip->write_mode_25[1] = chip->write_mode_25[0];
    chip->write_mode_26[1] = chip->write_mode_26[0];
    chip->write_mode_27[1] = chip->write_mode_27[0];
    chip->write_mode_28[1] = chip->write_mode_28[0];
    chip->write_mode_2a[1] = chip->write_mode_2a[0];
    chip->write_mode_2b[1] = chip->write_mode_2b[0];
    chip->write_mode_2c[1] = chip->write_mode_2c[0];
    chip->mode_test_21[1] = chip->mode_test_21[0];
    chip->mode_lfo_en[1] = chip->mode_lfo_en[0];
    chip->mode_lfo_freq[1] = chip->mode_lfo_freq[0];
    chip->mode_timer_a_reg[1] = chip->mode_timer_a_reg[0];
    chip->mode_timer_b_reg[1] = chip->mode_timer_b_reg[0];
    chip->mode_ch3[1] = chip->mode_ch3[0];
    chip->mode_timer_a_load[1] = chip->mode_timer_a_load[0];
    chip->mode_timer_a_enable[1] = chip->mode_timer_a_enable[0];
    chip->mode_timer_a_reset[1] = chip->mode_timer_a_reset[0];
    chip->mode_timer_b_load[1] = chip->mode_timer_b_load[0];
    chip->mode_timer_b_enable[1] = chip->mode_timer_b_enable[0];
    chip->mode_timer_b_reset[1] = chip->mode_timer_b_reset[0];
    chip->mode_kon_operator[1] = chip->mode_kon_operator[0];
    chip->mode_kon_channel[1] = chip->mode_kon_channel[0];
    chip->mode_dac_data[1] = chip->mode_dac_data[0];
    chip->mode_dac_en[1] = chip->mode_dac_en[0];
    chip->mode_test_2c[1] = chip->mode_test_2c[0];
    chip->chan_a4[1] = chip->chan_a4[0];
    chip->chan_ac[1] = chip->chan_ac[0];
    chip->mode_kon[0][1] = chip->mode_kon[0][0];
    chip->mode_kon[1][1] = chip->mode_kon[1][0];
    chip->mode_kon[2][1] = chip->mode_kon[2][0];
    chip->mode_kon[3][1] = chip->mode_kon[3][0];
}

void FM_Misc1(fm_t *chip)
{
    chip->reg_cnt1[0] = chip->reg_cnt1[1] + 1;
    chip->reg_cnt2[0] = chip->reg_cnt2[1];
    if (chip->reg_cnt1[1] & 2)
    {
        chip->reg_cnt1[0] = 0;
        chip->reg_cnt2[0]++;
    }
    if (chip->fsm_sel23 || chip->ic)
    {
        chip->reg_cnt1[0] = 0;
        chip->reg_cnt2[0] = 0;
    }
}

void FM_Misc2(fm_t *chip)
{
    chip->reg_cnt1[1] = chip->reg_cnt1[0] & 3;
    chip->reg_cnt2[1] = chip->reg_cnt2[0] & 7;
}

void FM_LFO1(fm_t *chip)
{
    static const int lfo_cycles[8] = {
        108, 77, 71, 67, 62, 44, 8, 5
    };
    int inc = (chip->mode_test_21[1] & 2) != 0 || chip->fsm_sel23;
    int freq = chip->mode_lfo_freq[1];
    int of = (chip->lfo_cnt1[1] & lfo_cycles[freq]) == lfo_cycles[freq];

    chip->lfo_cnt1[0] = chip->lfo_cnt1[1] + inc;

    if (chip->ic || of)
        chip->lfo_cnt1[0] = 0;

    chip->lfo_cnt2[0] = chip->lfo_cnt2[1] + of;

    if (!chip->mode_lfo_en[1])
        chip->lfo_cnt2[0] = 0;

    chip->lfo_inc_latch[0] = chip->fsm_sel23;

    chip->lfo_dlatch_load = chip->lfo_inc_latch[1];
}

void FM_LFO2(fm_t *chip)
{
    chip->lfo_cnt1[1] = chip->lfo_cnt1[0] & 127;
    chip->lfo_cnt2[1] = chip->lfo_cnt2[0] & 127;
    chip->lfo_inc_latch[1] = chip->lfo_inc_latch[0];
    if (chip->lfo_inc_latch[1] && !chip->lfo_dlatch_load)
        chip->lfo_dlatch = chip->lfo_cnt2[1];
}

void FM_Clock1(fm_t *chip)
{
    FM_DoShiftRegisters(chip, 0);
    FM_HandleIO1(chip);
    FM_FMRegisters1(chip);
    FM_FSM1(chip);
    FM_Misc1(chip);
    FM_LFO1(chip);
}

void FM_Clock2(fm_t *chip)
{
    FM_DoShiftRegisters(chip, 1);
    FM_HandleIO2(chip);
    FM_FMRegisters2(chip);
    FM_FSM2(chip);
    FM_Misc2(chip);
    FM_LFO2(chip);
}

void FM_Clock(fm_t *chip, int phi)
{
    chip->phi = phi;
    FM_Prescaler(chip);
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

    FM_SetCS(&fm, 1);
    FM_SetRead(&fm, 0);
    FM_SetWrite(&fm, 0);
    FM_SetAddress(&fm, 0);
    FM_SetData(&fm, 0);

    for (i = 0; i < 200; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.lfo_cnt2[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        if ((i % 144) == 0)
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }

    FM_SetIC(&fm, 1);
    for (;i < 400; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.lfo_cnt2[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        if ((i % 144) == 0)
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }
    FM_SetIC(&fm, 0);
    for (;i < 600; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.lfo_cnt2[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        if ((i % 144) == 0)
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }

    FM_SetAddress(&fm, 0);
    FM_SetData(&fm, 0x22);
    FM_SetWrite(&fm, 1);
    FM_SetWrite(&fm, 0);
    for (; i < 1000; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.lfo_cnt2[1];
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        if ((i % 144) == 0)
        printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }

    FM_SetAddress(&fm, 1);
    FM_SetData(&fm, 0xf);
    FM_SetWrite(&fm, 1);
    FM_SetWrite(&fm, 0);
    for (; i < 30000; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.lfo_dlatch;
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        if ((i % 144) == 0)
            printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }
}
