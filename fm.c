// YM2612/YM3438 core

#include <stdio.h>

#include "fm.h"

enum {
    eg_state_attack = 0,
    eg_state_decay,
    eg_state_sustain,
    eg_state_release
};

static const int fm_algorithm[4][6][8] = {
    {
        { 1, 1, 1, 1, 1, 1, 1, 1 }, /* OP1_0         */
        { 1, 1, 1, 1, 1, 1, 1, 1 }, /* OP1_1         */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* OP2           */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* Last operator */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* Last operator */
        { 0, 0, 0, 0, 0, 0, 0, 1 }  /* Out           */
    },
    {
        { 0, 1, 0, 0, 0, 1, 0, 0 }, /* OP1_0         */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* OP1_1         */
        { 1, 1, 1, 0, 0, 0, 0, 0 }, /* OP2           */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* Last operator */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* Last operator */
        { 0, 0, 0, 0, 0, 1, 1, 1 }  /* Out           */
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* OP1_0         */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* OP1_1         */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* OP2           */
        { 1, 0, 0, 1, 1, 1, 1, 0 }, /* Last operator */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* Last operator */
        { 0, 0, 0, 0, 1, 1, 1, 1 }  /* Out           */
    },
    {
        { 0, 0, 1, 0, 0, 1, 0, 0 }, /* OP1_0         */
        { 0, 0, 0, 0, 0, 0, 0, 0 }, /* OP1_1         */
        { 0, 0, 0, 1, 0, 0, 0, 0 }, /* OP2           */
        { 1, 1, 0, 1, 1, 0, 0, 0 }, /* Last operator */
        { 0, 0, 1, 0, 0, 0, 0, 0 }, /* Last operator */
        { 1, 1, 1, 1, 1, 1, 1, 1 }  /* Out           */
    }
};

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

void FM_SetTest(fm_t *chip, int test)
{
    chip->test = test;
    if (chip->phi1_latch[1])
        FM_Clock1(chip);
}

int FM_ReadTest(fm_t *chip)
{
    if (chip->mode_test_2c[1] & 128)
        return chip->fsm_sel23;
    return 0; // FIXME: high impedance
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
    chip->fsm_op4_sel = cnt_comb == 0 || cnt_comb == 1 || cnt_comb == 2 || cnt_comb == 4 || cnt_comb == 5 || cnt_comb == 6;
    chip->fsm_op1_sel = cnt_comb == 8 || cnt_comb == 9 || cnt_comb == 10 || cnt_comb == 12 || cnt_comb == 13 || cnt_comb == 14;
    chip->fsm_op3_sel = cnt_comb == 16 || cnt_comb == 17 || cnt_comb == 18 || cnt_comb == 20 || cnt_comb == 21 || cnt_comb == 22;
    chip->fsm_op2_sel = cnt_comb == 24 || cnt_comb == 25 || cnt_comb == 26 || cnt_comb == 28 || cnt_comb == 29 || cnt_comb == 30;
    chip->fsm_sel2 = cnt_comb == 2;
    chip->fsm_sel23 = cnt_comb == 30;
    chip->fsm_ch3_sel = cnt_comb == 2 || cnt_comb == 10 || cnt_comb == 18 || cnt_comb == 26;
    chip->fsm_dac_load = cnt_comb == 0 || cnt_comb == 5 || cnt_comb == 10 || cnt_comb == 16 || cnt_comb == 21 || cnt_comb == 26;
    chip->fsm_dac_out_sel = cnt_comb == 16 || cnt_comb == 17 || cnt_comb == 18 || cnt_comb == 20 || cnt_comb == 21 || cnt_comb == 22 ||
        cnt_comb == 24 || cnt_comb == 25 || cnt_comb == 26 || cnt_comb == 28 || cnt_comb == 29 || cnt_comb == 30;
    chip->fsm_dac_ch6 = cnt_comb == 5 || cnt_comb == 6 || cnt_comb == 8 || cnt_comb == 9;
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
                    chip->chan_pan[j][0] |= !((chip->fm_data[1] >> (j + 6)) & 1);
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

void FM_PhaseGenerator1(fm_t *chip)
{
    // Note table
    static const int fn_note[16] = {
        0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3
    };
    // LFO shift
    static const int pg_lfo_sh1[8][8] = {
        { 7, 7, 7, 7, 7, 7, 7, 7 },
        { 7, 7, 7, 7, 7, 7, 7, 7 },
        { 7, 7, 7, 7, 7, 7, 1, 1 },
        { 7, 7, 7, 7, 1, 1, 1, 1 },
        { 7, 7, 7, 1, 1, 1, 1, 0 },
        { 7, 7, 1, 1, 0, 0, 0, 0 },
        { 7, 7, 1, 1, 0, 0, 0, 0 },
        { 7, 7, 1, 1, 0, 0, 0, 0 }
    };

    static const int pg_lfo_sh2[8][8] = {
        { 7, 7, 7, 7, 7, 7, 7, 7 },
        { 7, 7, 7, 7, 2, 2, 2, 2 },
        { 7, 7, 7, 2, 2, 2, 7, 7 },
        { 7, 7, 2, 2, 7, 7, 2, 2 },
        { 7, 7, 2, 7, 7, 7, 2, 7 },
        { 7, 7, 7, 2, 7, 7, 2, 1 },
        { 7, 7, 7, 2, 7, 7, 2, 1 },
        { 7, 7, 7, 2, 7, 7, 2, 1 }
    };
#if 0
    // YM2610 decap
    static const int pg_lfo_sh2[8][8] = {
        { 7, 7, 7, 7, 7, 7, 7, 7 },
        { 7, 7, 7, 7, 2, 2, 2, 2 },
        { 7, 7, 7, 2, 2, 2, 7, 7 },
        { 7, 7, 2, 2, 7, 7, 2, 2 },
        { 7, 2, 2, 7, 7, 2, 2, 7 },
        { 7, 2, 7, 2, 7, 2, 2, 1 },
        { 7, 2, 7, 2, 7, 2, 2, 1 },
        { 7, 2, 7, 2, 7, 2, 2, 1 }
    };
#endif
    static const int pg_detune_add[4] = {
        0, 8, 10, 11
    };
    static const int pg_detune[8] = { 16, 17, 19, 20, 22, 24, 27, 29 };
    int i;
    int fnum = 0;
    int fnum_h;
    int block = 0;
    int pms = 0;
    int dt = 0;
    int dt_l = 0;
    int dt_sum;
    int dt_sum_l;
    int dt_sum_h;
    int kcode;
    int multi = 0;
    int lfo;
    int ch3_sel = chip->reg_cnt1[1] == 1 && (chip->reg_cnt2[1] & 1) == 0 && chip->mode_ch3[1] != 0;
    int op_sel = chip->reg_cnt2[1] >> 1;
    int bank = (chip->reg_cnt2[1] >> 2) & 1;
    int detune = 0;
    int carry = 0;
    int pg_inc;
    int reset;
    if (ch3_sel && op_sel == 0)
    {
        for (i = 0; i < 11; i++)
            fnum |= ((chip->chan_fnum_ch3[i][1] >> 5) & 1) << i;
        for (i = 0; i < 3; i++)
            block |= ((chip->chan_block_ch3[i][1] >> 5) & 1) << i;
    }
    else if (ch3_sel && op_sel == 1)
    {
        for (i = 0; i < 11; i++)
            fnum |= ((chip->chan_fnum_ch3[i][1] >> 0) & 1) << i;
        for (i = 0; i < 3; i++)
            block |= ((chip->chan_block_ch3[i][1] >> 0) & 1) << i;
    }
    else if (ch3_sel && op_sel == 2)
    {
        for (i = 0; i < 11; i++)
            fnum |= ((chip->chan_fnum_ch3[i][1] >> 4) & 1) << i;
        for (i = 0; i < 3; i++)
            block |= ((chip->chan_block_ch3[i][1] >> 4) & 1) << i;
    }
    else
    {
        for (i = 0; i < 11; i++)
            fnum |= ((chip->chan_fnum[i][1] >> 4) & 1) << i;
        for (i = 0; i < 3; i++)
            block |= ((chip->chan_block[i][1] >> 4) & 1) << i;
    }
    for (i = 0; i < 3; i++)
        pms |= ((chip->chan_pms[i][1] >> 5) & 1) << i;
    for (i = 0; i < 3; i++)
        dt |= ((chip->slot_dt[bank][i][1] >> 11) & 1) << i;
    for (i = 0; i < 4; i++)
        multi |= ((chip->slot_multi[bank][i][1] >> 11) & 1) << i;

    kcode = (block << 2) | fn_note[fnum >> 7];

    chip->pg_kcode[0][0] = kcode;
    chip->pg_kcode[1][0] = chip->pg_kcode[0][1];

    chip->pg_fnum[0][0] = fnum;
    chip->pg_fnum[1][0] = chip->pg_fnum[0][1];

    lfo = (chip->lfo_dlatch >> 2) & 7;

    if (chip->lfo_dlatch & 32)
        lfo ^= 7;

    fnum_h = chip->pg_fnum[0][1] >> 4;

    chip->pg_fnum_lfo1 = fnum_h >> pg_lfo_sh1[pms][lfo];
    chip->pg_fnum_lfo2 = fnum_h >> pg_lfo_sh2[pms][lfo];

    chip->pg_lfo_shift = 2;
    if (pms > 5)
        chip->pg_lfo_shift = 7 - pms;

    chip->pg_lfo_sign = (chip->lfo_dlatch >> 6) & 1;

    chip->pg_freq1 = ((chip->pg_fnum[1][1] << 1) + chip->pg_lfo) & 0xfff;
    block = chip->pg_kcode[1][1] >> 2;
    chip->pg_block = block;
    chip->pg_dt[0] = dt;
    
    dt_l = chip->pg_dt[1] & 3;
    dt_sum = chip->pg_kcode[1][1] + ((pg_detune_add[dt_l] + 1) << 2);
    dt_sum_l = dt_sum & 7;
    dt_sum_h = dt_sum >> 3;
    chip->pg_detune[0] = dt_l ? pg_detune[dt_sum_h] >> (9 - dt_sum_h) : 0;
    if (chip->pg_dt[1] & 0x04)
        chip->pg_detune[0] = -chip->pg_detune[0];

    chip->pg_freq3 = (chip->pg_freq2 + chip->pg_detune[1]) & 0x1ffff;

    chip->pg_multi[0][0] = multi;
    chip->pg_multi[1][0] = chip->pg_multi[0][1];
    chip->pg_multi2 = chip->pg_multi[1][1];
    chip->pg_inc[0] = chip->pg_freq4;

    chip->pg_inc_mask[0] = chip->pg_inc[1];
    if (chip->pg_reset[1] & 2)
        chip->pg_inc_mask[0] = 0;

    chip->pg_reset_latch[0] = (chip->pg_reset[1] & 2) != 0;

    pg_inc = chip->pg_inc_mask[1];

    reset = chip->pg_reset_latch[1] || (chip->mode_test_21[1] & 8) != 0;

    for (i = 0; i < 20; i++)
    {
        if (!reset)
            carry += (chip->pg_phase[i][1] >> 23) & 1;
        carry += pg_inc & 1;
        chip->pg_phase[i][0] = (chip->pg_phase[i][1] << 1) | (carry & 1);
        pg_inc >>= 1;
        carry >>= 1;
    }

    chip->pg_debug[0] = chip->pg_debug[1] >> 1;
    if (chip->fsm_sel2)
    {
        for (i = 0; i < 10; i++)
        {
            chip->pg_debug[0] |= ((chip->pg_phase[i][1] >> 23) & 1) << i;
        }
    }
}

void FM_PhaseGenerator2(fm_t *chip)
{
    int i;
    int block = chip->pg_kcode[1][0];
    chip->pg_fnum[0][1] = chip->pg_fnum[0][0];
    chip->pg_fnum[1][1] = chip->pg_fnum[1][0];
    chip->pg_kcode[0][1] = chip->pg_kcode[0][0];
    chip->pg_kcode[1][1] = chip->pg_kcode[1][0];
    chip->pg_lfo = (chip->pg_fnum_lfo1 + chip->pg_fnum_lfo2) >> chip->pg_lfo_shift;
    if (chip->pg_lfo_sign)
        chip->pg_lfo = -chip->pg_lfo;
    chip->pg_freq2 = (chip->pg_freq1 << chip->pg_block) >> 2;
    chip->pg_dt[1] = chip->pg_dt[0];
    chip->pg_detune[1] = chip->pg_detune[0];
    chip->pg_multi[0][1] = chip->pg_multi[0][0];
    chip->pg_multi[1][1] = chip->pg_multi[1][0];
    if (!chip->pg_multi2)
        chip->pg_freq4 = chip->pg_freq3 >> 1;
    else
        chip->pg_freq4 = chip->pg_freq3 * chip->pg_multi2;
    chip->pg_inc[1] = chip->pg_inc[0];
    chip->pg_inc_mask[1] = chip->pg_inc_mask[0];
    chip->pg_reset_latch[1] = chip->pg_reset_latch[0];
    for (i = 0; i < 20; i++)
    {
        chip->pg_phase[i][1] = chip->pg_phase[i][0];
    }

    chip->pg_debug[1] = chip->pg_debug[0];
}

void FM_EnvelopeGenerator1(fm_t *chip)
{
    int i;
    int sum;
    int add;
    int timer_bit;
    int timer_bit_masked;
    int bank = (chip->reg_cnt2[1] >> 2) & 1;
    int rate_sel;
    int rate = 0;
    int ks = 0;
    int b0, b1;
    int inc1;
    int exp = 0;
    int linear = 0;
    int inc_total = 0;
    int level = 0;
    int level2 = 0;
    int kon;
    int kon2;
    int okon;
    int state;
    int pg_reset;
    int kon_event;
    int ssg_eg = 0;
    int ssg_dir = 0;
    int ssg_inv = 0;
    int ssg_holdup = 0;
    int ssg_enable;
    int ssg_pgreset = 0;
    int ssg_pgrepeat = 0;
    int eg_off;
    int eg_slreach;
    int sl = 0;
    int nextlevel = 0;
    int nextstate = eg_state_attack;
    int tl = 0;
    int istantattack = 0;
    int eg_output;
    int ams = 0;
    static const int eg_stephi[4][4] = {
        { 0, 0, 0, 0 },
        { 1, 0, 0, 0 },
        { 1, 0, 1, 0 },
        { 1, 1, 1, 0 }
    };
    chip->eg_prescaler_clock_l[0] = chip->fsm_clock_eg;
    chip->eg_prescaler[0] = chip->eg_prescaler[1] + chip->fsm_clock_eg;
    if (((chip->eg_prescaler[1] & 2) != 0 && chip->fsm_clock_eg) || chip->ic)
        chip->eg_prescaler[0] = 0;
    chip->eg_step[0] = chip->eg_prescaler[1] >> 1;

    chip->eg_clock_delay[0] = (chip->eg_clock_delay[1] << 1) | chip->fsm_clock_eg;

    chip->eg_timer_load = chip->eg_step[1] && chip->eg_prescaler_clock_l[1];

    sum = (chip->eg_timer[1] >> 11) & 1;
    add = chip->eg_timer_carry[1];
    if ((chip->eg_prescaler[1] & 2) != 0 && chip->eg_prescaler_clock_l[1])
        add = 1;
    sum += add;
    chip->eg_timer_carry[0] = sum >> 1;
    sum &= 1;
    if (chip->ic || (chip->mode_test_21[1] & 32) != 0)
        sum = 0;

    chip->eg_timer[0] = (chip->eg_timer[1] << 1) | sum;

    timer_bit = sum;
    if (chip->mode_test_2c[1] & 64)
    {
        if (chip->mode_test_2c[1] & 128) // Assuming TEST pin is NC
            timer_bit |= FM_ReadTest(chip);
        else
            timer_bit |= chip->test & 1;
    }

    chip->eg_timer_mask[0] = timer_bit | chip->eg_timer_mask[1];
    if (chip->fsm_clock_eg || ((chip->eg_clock_delay[1]>>11) & 1) != 0 || chip->ic)
        chip->eg_timer_mask[0] = 0;

    timer_bit_masked = timer_bit;
    if (chip->eg_timer_mask[1])
        timer_bit_masked = 0;

    chip->eg_timer_masked[0] = (chip->eg_timer_masked[1] << 1) | timer_bit_masked;

    for (i = 0; i < 10; i++)
    {
        level2 |= ((chip->eg_level[i][1] >> 20) & 1) << i;
    }

    chip->eg_level_latch[0] = level2;

    kon2 = (chip->mode_kon[3][1] >> 5) & 1;
    if (chip->fsm_ch3_sel)
        kon2 |= 0; // TOOD: CSM kon

    chip->eg_kon_latch[0] = (chip->eg_kon_latch[1] << 1) | kon2;

    kon = (chip->eg_kon_latch[1] >> 1) & 1;
    okon = (chip->eg_key[1] >> 23) & 1;
    pg_reset = (kon && !okon) || (chip->eg_ssg_pgreset[1] & 2) != 0;
    kon_event = (kon && !okon) || (okon && (chip->eg_ssg_pgrepeat[1] & 2) != 0);
    chip->pg_reset[0] = (chip->pg_reset[1] << 1) | pg_reset;
    if (chip->eg_ssg_pgreset[1] & 2)
        chip->pg_reset[0] |= 1;
    chip->eg_key[0] = (chip->eg_key[1] << 1) | kon;

    for (i = 0; i < 4; i++)
        ssg_eg |= ((chip->slot_ssg_eg[bank][i][1] >> 11) & 1) << i;
    ssg_enable = (ssg_eg & 8) != 0;
    if (ssg_enable)
    {
        if (okon)
        {
            ssg_dir = (chip->eg_ssg_dir[1] >> 23) & 1;
            ssg_inv = ssg_dir ^ ((ssg_eg >> 2) & 1);
            if (level2 & 512)
            {
                if ((ssg_eg & 3) == 2)
                    ssg_dir ^= 1;
                if ((ssg_eg & 3) == 3)
                    ssg_dir ^= 1;
            }
        }
        if (kon2)
            ssg_holdup = (ssg_eg & 7) == 3 || (ssg_eg & 7) == 5;
        if (level2 & 512)
        {
            if ((ssg_eg & 3) == 0)
                ssg_pgreset = 1;
            if ((ssg_eg & 1) == 0)
                ssg_pgrepeat = 1;
        }
    }
    chip->eg_ssg_dir[0] = (chip->eg_ssg_dir[1] << 1) | ssg_dir;
    chip->eg_ssg_inv[0] = ssg_inv;
    chip->eg_ssg_holdup[0] = (chip->eg_ssg_holdup[1] << 1) | ssg_holdup;
    chip->eg_ssg_enable[0] = (chip->eg_ssg_enable[1] << 1) | ssg_enable;
    chip->eg_ssg_pgreset[0] = (chip->eg_ssg_pgreset[1] << 1) | ssg_pgreset;
    chip->eg_ssg_pgrepeat[0] = (chip->eg_ssg_pgrepeat[1] << 1) | ssg_pgrepeat;

    chip->eg_level_ssg[0] = eg_output = chip->eg_ssg_inv[1] ? chip->eg_level_latch_inv : chip->eg_level_latch[1];
    if (chip->mode_test_21[1] & 32)
        eg_output = 0;

    for (i = 0; i < 4; i++)
        sl |= ((chip->slot_sl[bank][i][1] >> 11) & 1) << i;

    if (sl == 15)
        sl |= 16;

    chip->eg_sl[0][0] = sl;
    chip->eg_sl[1][0] = chip->eg_sl[0][1];

    for (i = 0; i < 7; i++)
        tl |= ((chip->slot_tl[bank][i][1] >> 11) & 1) << i;

    chip->eg_tl[0][0] = tl;
    chip->eg_tl[1][0] = chip->eg_tl[0][1];

    b0 = (chip->eg_state[0][1] >> 21) & 1;
    b1 = (chip->eg_state[1][1] >> 21) & 1;

    rate_sel = b1 * 2 + b0;

    if ((chip->eg_key[1] >> 21) & 1)
    {
        if (ssg_pgrepeat)
            rate_sel = eg_state_attack;
    }
    else
    {
        if (kon2)
            rate_sel = eg_state_attack;
    }

    switch (rate_sel)
    {
        case eg_state_attack:
            for (i = 0; i < 5; i++)
                rate |= ((chip->slot_ar[bank][i][1] >> 11) & 1) << i;
            break;
        case eg_state_decay:
            for (i = 0; i < 5; i++)
                rate |= ((chip->slot_dr[bank][i][1] >> 11) & 1) << i;
            break;
        case eg_state_sustain:
            for (i = 0; i < 5; i++)
                rate |= ((chip->slot_sr[bank][i][1] >> 11) & 1) << i;
            break;
        case eg_state_release:
            rate = 1;
            for (i = 0; i < 4; i++)
                rate |= ((chip->slot_rr[bank][i][1] >> 11) & 1) << (i + 1);
            break;
    }

    chip->eg_rate_nonzero[0] = rate != 0;
    chip->eg_rate = rate;

    for (i = 0; i < 2; i++)
        ks |= ((chip->slot_ks[bank][i][1] >> 11) & 1) << i;

    chip->eg_ksv = chip->pg_kcode[0][1] >> (ks ^ 3);

    rate = chip->eg_rate2;
    if (rate & 64)
        rate = 63;

    sum = (rate >> 2) + chip->eg_shift_lock;

    inc1 = 0;
    if (rate < 48 && chip->eg_rate_nonzero[1])
    {
        switch (sum & 15)
        {
            case 12:
                inc1 = rate != 0;
                break;
            case 13:
                inc1 = (rate >> 1) & 1;
                break;
            case 14:
                inc1 = rate & 1;
                break;
        }
    }
    chip->eg_inc1 = inc1;
    chip->eg_inc2 = eg_stephi[rate & 3][chip->eg_timer_low_lock];
    chip->eg_rate12 = (rate & 60) == 48;
    chip->eg_rate13 = (rate & 60) == 52;
    chip->eg_rate14 = (rate & 60) == 56;
    chip->eg_rate15 = (rate & 60) == 60;
    chip->eg_maxrate[0] = (rate & 62) == 62;
    chip->eg_prescaler_l = (chip->eg_prescaler[1] & 2) != 0;

    chip->eg_incsh_nonzero[0] = chip->eg_incsh0 | chip->eg_incsh1 | chip->eg_incsh2 | chip->eg_incsh3;


    if (okon && !kon)
    {
        level = chip->eg_level_ssg[1];
    }
    else
    {
        for (i = 0; i < 10; i++)
        {
            level |= ((chip->eg_level[i][1] >> 22) & 1) << i;
        }
    }

    b0 = (chip->eg_state[0][1] >> 23) & 1;
    b1 = (chip->eg_state[1][1] >> 23) & 1;

    state = b1 * 2 + b0;

    exp = kon && (state == eg_state_attack) && !chip->eg_maxrate[1] && level != 0;

    eg_off = (chip->eg_ssg_enable[1] & 2) != 0 ? (level & 512) != 0 : (level & 0x3f0) == 0x3f0;
    eg_slreach = (level >> 4) == (chip->eg_sl[1][1] << 1);

    linear = !kon_event && !eg_off && (state == eg_state_sustain || state == eg_state_release);
    linear |= !kon_event && !eg_off && !eg_slreach && state == eg_state_decay;

    if (exp)
    {
        if (chip->eg_incsh0)
            inc_total |= ~level >> 4;
        if (chip->eg_incsh1)
            inc_total |= ~level >> 3;
        if (chip->eg_incsh2)
            inc_total |= ~level >> 2;
        if (chip->eg_incsh3)
            inc_total |= ~level >> 1;
    }
    if (linear)
    {
        if (chip->eg_ssg_enable[1] & 2)
        {
            if (chip->eg_incsh0)
                inc_total |= 4;
            if (chip->eg_incsh1)
                inc_total |= 8;
            if (chip->eg_incsh2)
                inc_total |= 16;
            if (chip->eg_incsh3)
                inc_total |= 32;
        }
        else
        {
            if (chip->eg_incsh0)
                inc_total |= 1;
            if (chip->eg_incsh1)
                inc_total |= 2;
            if (chip->eg_incsh2)
                inc_total |= 4;
            if (chip->eg_incsh3)
                inc_total |= 8;
        }
    }

    chip->eg_inc_total = inc_total;

    istantattack = chip->eg_maxrate[1] && (!chip->eg_maxrate[1] || kon_event);

    if (!istantattack)
        nextlevel |= level;

    if (chip->eg_kon_csm[1] & 2)
        nextlevel |= chip->eg_tl[1][1] << 3;

    if ((!kon_event && eg_off && (chip->eg_ssg_holdup[1] & 2) == 0 && state != eg_state_attack) || chip->ic)
    {
        nextlevel = 0x3ff;
        nextstate |= eg_state_release;
    }

    if (!kon_event && state == eg_state_sustain)
    {
        nextstate |= eg_state_sustain;
    }

    if (!kon_event && state == eg_state_decay && !eg_slreach)
    {
        nextstate |= eg_state_decay;
    }
    if (!kon_event && state == eg_state_decay && eg_slreach)
    {
        nextstate |= eg_state_sustain;
    }

    if (!kon && !kon_event)
    {
        nextstate |= eg_state_release;
    }
    if (!kon_event && state == eg_state_release)
    {
        nextstate |= eg_state_release;
    }

    if (!kon_event && state == eg_state_attack && level == 0)
    {
        nextstate |= eg_state_decay;
    }
    if (chip->ic)
    {
        nextstate |= eg_state_release;
    }


    chip->eg_nextlevel[0] = nextlevel;
    b0 = nextstate & 1;
    b1 = (nextstate >> 1) & 1;
    chip->eg_state[0][0] = (chip->eg_state[0][1] << 1) | b0;
    chip->eg_state[1][0] = (chip->eg_state[1][1] << 1) | b1;

    nextlevel = chip->eg_nextlevel[1];

    for (i = 0; i < 10; i++)
    {
        chip->eg_level[i][0] = (chip->eg_level[i][1] << 1) | (nextlevel & 1);
        nextlevel >>= 1;
    }


    if (chip->slot_am[bank][0][1] & (1<<11))
        for (i = 0; i < 2; i++)
            ams |= ((chip->chan_ams[i][1] >> 5) & 1) << i;

    chip->eg_ams = ams;

    if (chip->lfo_dlatch & 64)
        chip->eg_lfo[0] = chip->lfo_dlatch & 63;
    else
        chip->eg_lfo[0] = chip->lfo_dlatch ^ 63;

    chip->eg_ch3_latch[0] = chip->fsm_ch3_sel;

    chip->eg_out_tl = chip->eg_tl[0][1];
    if (chip->eg_ch3_latch[1] && chip->mode_ch3[1] == 2) // CSM
        chip->eg_out_tl = 0;

    chip->eg_out = eg_output + chip->eg_lfo[1];

    chip->eg_debug[0] = chip->eg_debug[1] << 1;
    if (chip->fsm_sel2)
        chip->eg_debug[0] |= chip->eg_out_total;
}

void FM_EnvelopeGenerator2(fm_t *chip)
{
    int i;
    int b0, b1, b2, b3;
    static const int eg_am_shift[4] = {
        7, 3, 1, 0
    };
    chip->eg_prescaler_clock_l[1] = chip->eg_prescaler_clock_l[0];
    chip->eg_prescaler[1] = chip->eg_prescaler[0] & 3;
    chip->eg_step[1] = chip->eg_step[0];

    chip->eg_timer[1] = chip->eg_timer[0];
    chip->eg_clock_delay[1] = chip->eg_clock_delay[0];
    chip->eg_timer_carry[1] = chip->eg_timer_carry[0];
    chip->eg_timer_mask[1] = chip->eg_timer_mask[0];
    chip->eg_timer_masked[1] = chip->eg_timer_masked[0];

    if (!chip->eg_timer_load && chip->eg_step[1] && chip->eg_prescaler_clock_l[1])
    {
        b0 = (chip->eg_timer[1] >> 11) & 1;
        b1 = (chip->eg_timer[1] >> 10) & 1;
        chip->eg_timer_low_lock = b1 * 2 + b0;

        b0 = (chip->eg_timer_masked[1] & 0xaaa) != 0;
        b1 = (chip->eg_timer_masked[1] & 0x666) != 0;
        b2 = (chip->eg_timer_masked[1] & 0x1e1) != 0;
        b3 = (chip->eg_timer_masked[1] & 0x1f) != 0;
        chip->eg_shift_lock = b3 * 8 + b2 * 4 + b1 * 2 + b0;
    }

    chip->eg_rate_nonzero[1] = chip->eg_rate_nonzero[0];

    chip->eg_rate2 = (chip->eg_rate << 1) + chip->eg_ksv;

    chip->eg_maxrate[1] = chip->eg_maxrate[0];

    chip->eg_incsh0 = 0;
    chip->eg_incsh1 = 0;
    chip->eg_incsh2 = 0;
    chip->eg_incsh3 = 0;

    if (chip->eg_prescaler_l)
    {
        chip->eg_incsh0 = chip->eg_inc1;
        chip->eg_incsh3 = chip->eg_rate15;
        if (!chip->eg_inc2)
        {
            chip->eg_incsh0 |= chip->eg_rate12;
            chip->eg_incsh1 = chip->eg_rate13;
            chip->eg_incsh2 = chip->eg_rate14;
        }
        else
        {
            chip->eg_incsh1 = chip->eg_rate12;
            chip->eg_incsh2 = chip->eg_rate13;
            chip->eg_incsh3 |= chip->eg_rate14;
        }
    }

    chip->eg_incsh_nonzero[1] = chip->eg_incsh_nonzero[0];
    chip->eg_kon_latch[1] = chip->eg_kon_latch[0];

    chip->eg_level_ssg[1] = chip->eg_level_ssg[0];

    chip->pg_reset[1] = chip->pg_reset[0];

    chip->eg_ssg_dir[1] = chip->eg_ssg_dir[0];
    chip->eg_ssg_inv[1] = chip->eg_ssg_inv[0];
    chip->eg_ssg_holdup[1] = chip->eg_ssg_holdup[0];
    chip->eg_ssg_enable[1] = chip->eg_ssg_enable[0];
    chip->eg_ssg_pgreset[1] = chip->eg_ssg_pgreset[0];
    chip->eg_ssg_pgrepeat[1] = chip->eg_ssg_pgrepeat[0];

    chip->eg_level_latch[1] = chip->eg_level_latch[0];
    chip->eg_level_latch_inv = (512 - chip->eg_level_latch[0]) & 0x3ff;

    chip->eg_sl[0][1] = chip->eg_sl[0][0];
    chip->eg_sl[1][1] = chip->eg_sl[1][0];
    chip->eg_tl[0][1] = chip->eg_tl[0][0];
    chip->eg_tl[1][1] = chip->eg_tl[1][0];

    chip->eg_nextlevel[1] = chip->eg_nextlevel[0] + chip->eg_inc_total;

    chip->eg_kon_csm[1] = chip->eg_kon_csm[0];

    for (i = 0; i < 10; i++)
    {
        chip->eg_level[i][1] = chip->eg_level[i][0];
    }

    chip->eg_state[0][1] = chip->eg_state[0][0];
    chip->eg_state[1][1] = chip->eg_state[1][0];

    chip->eg_lfo[1] = (chip->eg_lfo[0] << 1) >> eg_am_shift[chip->eg_ams];

    chip->eg_ch3_latch[1] = chip->eg_ch3_latch[0];

    chip->eg_out_total = (chip->eg_out & 1023) + chip->eg_out_tl;
    if ((chip->eg_out & 1024) != 0 || (chip->eg_out_total & 1024) != 0)
        chip->eg_out_total = 1023;

    chip->eg_debug[1] = chip->eg_debug[0];
    chip->eg_key[1] = chip->eg_key[0];
}

void FM_Operator1(fm_t *chip)
{
    int i;
    int carry = 0;
    int phase = 0;
    int quarter;
    int index;
    int atten = 0;
    int output;
    int mod1 = 0, mod2 = 0;
    int mod;
    int connect = 0;
    int fb = 0;
    static const int logsin[128] = {
        0x6c3, 0x58b, 0x4e4, 0x471, 0x41a, 0x3d3, 0x398, 0x365, 0x339, 0x311, 0x2ed, 0x2cd, 0x2af, 0x293, 0x279, 0x261,
        0x24b, 0x236, 0x222, 0x20f, 0x1fd, 0x1ec, 0x1dc, 0x1cd, 0x1be, 0x1b0, 0x1a2, 0x195, 0x188, 0x17c, 0x171, 0x166,
        0x15b, 0x150, 0x146, 0x13c, 0x133, 0x129, 0x121, 0x118, 0x10f, 0x107, 0x0ff, 0x0f8, 0x0f0, 0x0e9, 0x0e2, 0x0db,
        0x0d4, 0x0cd, 0x0c7, 0x0c1, 0x0bb, 0x0b5, 0x0af, 0x0a9, 0x0a4, 0x09f, 0x099, 0x094, 0x08f, 0x08a, 0x086, 0x081,
        0x07d, 0x078, 0x074, 0x070, 0x06c, 0x068, 0x064, 0x060, 0x05c, 0x059, 0x055, 0x052, 0x04e, 0x04b, 0x048, 0x045,
        0x042, 0x03f, 0x03c, 0x039, 0x037, 0x034, 0x031, 0x02f, 0x02d, 0x02a, 0x028, 0x026, 0x024, 0x022, 0x020, 0x01e,
        0x01c, 0x01a, 0x018, 0x017, 0x015, 0x014, 0x012, 0x011, 0x00f, 0x00e, 0x00d, 0x00c, 0x00a, 0x009, 0x008, 0x007,
        0x007, 0x006, 0x005, 0x004, 0x004, 0x003, 0x002, 0x002, 0x001, 0x001, 0x001, 0x001, 0x000, 0x000, 0x000, 0x000
    };
    static const int logsin_d[128] = {
        0x196, 0x07c, 0x04a, 0x035, 0x029, 0x022, 0x01d, 0x019, 0x015, 0x013, 0x012, 0x00f, 0x00e, 0x00d, 0x00d, 0x00c,
        0x00b, 0x00a, 0x00a, 0x009, 0x009, 0x009, 0x008, 0x007, 0x007, 0x007, 0x007, 0x006, 0x007, 0x006, 0x006, 0x005,
        0x005, 0x005, 0x005, 0x005, 0x004, 0x005, 0x004, 0x004, 0x005, 0x004, 0x004, 0x003, 0x004, 0x003, 0x003, 0x003,
        0x003, 0x004, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x002, 0x003, 0x003, 0x003, 0x003, 0x002, 0x002,
        0x002, 0x002, 0x002, 0x002, 0x002, 0x002, 0x002, 0x002, 0x002, 0x002, 0x002, 0x001, 0x002, 0x002, 0x002, 0x001,
        0x001, 0x001, 0x002, 0x002, 0x001, 0x001, 0x002, 0x001, 0x001, 0x001, 0x001, 0x001, 0x001, 0x001, 0x001, 0x001,
        0x001, 0x001, 0x001, 0x000, 0x001, 0x000, 0x001, 0x000, 0x001, 0x001, 0x000, 0x000, 0x001, 0x001, 0x001, 0x001,
        0x000, 0x000, 0x000, 0x001, 0x000, 0x000, 0x001, 0x000, 0x001, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000
    };
    static const int pow[128] = {
        0x3f5, 0x3ea, 0x3df, 0x3d4, 0x3c9, 0x3bf, 0x3b4, 0x3a9, 0x39f, 0x394, 0x38a, 0x37f, 0x375, 0x36a, 0x360, 0x356,
        0x34c, 0x342, 0x338, 0x32e, 0x324, 0x31a, 0x310, 0x306, 0x2fd, 0x2f3, 0x2e9, 0x2e0, 0x2d6, 0x2cd, 0x2c4, 0x2ba,
        0x2b1, 0x2a8, 0x29e, 0x295, 0x28c, 0x283, 0x27a, 0x271, 0x268, 0x25f, 0x257, 0x24e, 0x245, 0x23c, 0x234, 0x22b,
        0x223, 0x21a, 0x212, 0x209, 0x201, 0x1f9, 0x1f0, 0x1e8, 0x1e0, 0x1d8, 0x1d0, 0x1c8, 0x1c0, 0x1b8, 0x1b0, 0x1a8,
        0x1a0, 0x199, 0x191, 0x189, 0x181, 0x17a, 0x172, 0x16b, 0x163, 0x15c, 0x154, 0x14d, 0x146, 0x13e, 0x137, 0x130,
        0x129, 0x122, 0x11b, 0x114, 0x10c, 0x106, 0x0ff, 0x0f8, 0x0f1, 0x0ea, 0x0e3, 0x0dc, 0x0d6, 0x0cf, 0x0c8, 0x0c2,
        0x0bb, 0x0b5, 0x0ae, 0x0a8, 0x0a1, 0x09b, 0x094, 0x08e, 0x088, 0x082, 0x07b, 0x075, 0x06f, 0x069, 0x063, 0x05d,
        0x057, 0x051, 0x04b, 0x045, 0x03f, 0x039, 0x033, 0x02d, 0x028, 0x022, 0x01c, 0x016, 0x011, 0x00b, 0x006, 0x000,
    };
    static const int pow_d[128] = {
        0x005, 0x005, 0x005, 0x006, 0x006, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x006, 0x005, 0x005,
        0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x004, 0x005,
        0x004, 0x004, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x005, 0x004, 0x004, 0x004, 0x005, 0x004, 0x005,
        0x004, 0x004, 0x004, 0x005, 0x004, 0x004, 0x005, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004,
        0x004, 0x003, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x004, 0x003, 0x004, 0x004, 0x004,
        0x003, 0x003, 0x003, 0x003, 0x004, 0x003, 0x003, 0x003, 0x003, 0x003, 0x004, 0x004, 0x003, 0x003, 0x004, 0x003,
        0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x004, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003,
        0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x003, 0x002, 0x003, 0x003, 0x003, 0x003, 0x003, 0x002, 0x003,
    };
    for (i = 0; i < 10; i++)
    {
        carry += (chip->op_mod[i][1] >> 6) & 1;
        carry += (chip->pg_phase[10 + i][1] >> 19) & 1;
        phase += (carry & 1) << i;
        carry >>= 1;
    }
    chip->op_phase[0] = phase;

    chip->op_sign[0] = (chip->op_sign[1] << 1) | ((chip->op_phase[1] >> 9) & 1);

    quarter = chip->op_phase[1] & 255;
    if (chip->op_phase[1] & 256)
        quarter ^= 255;

    chip->op_logsin_add_delta[0] = (quarter & 1) == 0;

    chip->op_logsin_base[0] = logsin[quarter >> 1];
    chip->op_logsin_delta[0] = logsin_d[quarter >> 1];

    chip->op_env[0] = chip->eg_out_total;

    atten = chip->op_logsin_base[1];
    if (chip->op_logsin_add_delta[1])
        atten += chip->op_logsin_delta[1];

    atten += chip->op_env[1] << 2;

    chip->op_atten[0] = atten;

    atten = chip->op_atten[1];
    if (atten & 4096)
        atten = 4095;

    index = atten & 255;
    chip->op_shift[0] = atten >> 8;

    chip->op_pow_add_delta[0] = (index & 1) == 0;

    chip->op_pow_base[0] = pow[index >> 1];
    chip->op_pow_delta[0] = pow_d[index >> 1];

    output = chip->op_pow_base[1];
    if (chip->op_pow_add_delta[1])
        output += chip->op_pow_delta[1];

    output |= 0x400;

    output = (output << 2) >> chip->op_shift[1];

    if (chip->mode_test_21[1] & 16)
        output ^= 1 << 13;

    if (chip->op_sign[1] & 4)
    {
        output ^= 0x3fff;
        output++;
    }

    chip->op_output[0] = output;

    for (i = 0; i < 14; i++)
    {
        chip->op_op1[0][i][0] = chip->op_op1[0][i][1] << 1;
        chip->op_op1[1][i][0] = chip->op_op1[1][i][1] << 1;
        chip->op_op2[i][0] = chip->op_op2[i][1] << 1;
        if (chip->fsm_op1_sel)
        {
            chip->op_op1[0][i][0] |= (chip->op_output[1] >> i) & 1;
            chip->op_op1[1][i][0] |= (chip->op_op1[0][i][1] >> 5) & 1;
        }
        else
        {
            chip->op_op1[0][i][0] |= (chip->op_op1[0][i][1] >> 5) & 1;
            chip->op_op1[1][i][0] |= (chip->op_op1[1][i][1] >> 5) & 1;
        }
        if (chip->fsm_op2_sel)
            chip->op_op2[i][0] |= (chip->op_output[1] >> i) & 1;
        else
            chip->op_op2[i][0] |= (chip->op_op2[i][1] >> 5) & 1;
    }
    for (i = 0; i < 3; i++)
        connect |= ((chip->chan_connect[i][1] >> 5) & 1) << i;

    index = 0;
    if (chip->fsm_op2_sel)
        index = 0;
    if (chip->fsm_op4_sel)
        index = 1;
    if (chip->fsm_op1_sel)
        index = 2;
    if (chip->fsm_op3_sel)
        index = 3;
    if (fm_algorithm[index][0][connect])
    {
        for (i = 0; i < 14; i++)
            mod2 |= ((chip->op_op1[0][i][1] >> 5) & 1) << i;
    }
    if (fm_algorithm[index][1][connect])
    {
        for (i = 0; i < 14; i++)
            mod1 |= ((chip->op_op1[1][i][1] >> 5) & 1) << i;
    }
    if (fm_algorithm[index][2][connect])
    {
        for (i = 0; i < 14; i++)
            mod1 |= ((chip->op_op2[i][1] >> 5) & 1) << i;
    }
    if (fm_algorithm[index][3][connect])
    {
        mod2 |= chip->op_output[1];
    }
    if (fm_algorithm[index][4][connect])
    {
        mod1 |= chip->op_output[1];
    }
    if (mod1 & (1 << 13))
        mod1 |= 1 << 14;
    if (mod2 & (1 << 13))
        mod2 |= 1 << 14;
    mod = (mod1 + mod2) >> 1;
    mod &= 0x3fff;

    chip->op_mod_sum[0] = mod;
    chip->op_dofeedback[0] = chip->fsm_op2_sel;

    if (chip->op_dofeedback[1])
    {
        for (i = 0; i < 3; i++)
            fb |= (chip->chan_fb[i][1] & 1) << i;
        if (!fb)
            mod = 0;
        else
        {
            mod = chip->op_mod_sum[1];
            if (mod & (1 << 13))
                mod |= ~0x3fff;

            mod = mod >> (9 - fb);
        }
    }
    else
        mod = chip->op_mod_sum[1];

    for (i = 0; i < 10; i++)
    {
        chip->op_mod[i][0] = (chip->op_mod[i][1] << 1) | (mod & 1);
        mod >>= 1;
    }
}

void FM_Operator2(fm_t *chip)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        chip->op_mod[i][1] = chip->op_mod[i][0];
    }
    for (i = 0; i < 14; i++)
    {
        chip->op_op1[0][i][1] = chip->op_op1[0][i][0];
        chip->op_op1[1][i][1] = chip->op_op1[1][i][0];
        chip->op_op2[i][1] = chip->op_op2[i][0];
    }
    chip->op_phase[1] = chip->op_phase[0];
    chip->op_sign[1] = chip->op_sign[0];
    chip->op_logsin_add_delta[1] = chip->op_logsin_add_delta[0];
    chip->op_logsin_base[1] = chip->op_logsin_base[0];
    chip->op_logsin_delta[1] = chip->op_logsin_delta[0];
    chip->op_env[1] = chip->op_env[0];
    chip->op_atten[1] = chip->op_atten[0];
    chip->op_pow_add_delta[1] = chip->op_pow_add_delta[0];
    chip->op_pow_base[1] = chip->op_pow_base[0];
    chip->op_pow_delta[1] = chip->op_pow_delta[0];
    chip->op_shift[1] = chip->op_shift[0];
    chip->op_output[1] = chip->op_output[0];
    chip->op_mod_sum[1] = chip->op_mod_sum[0];
    chip->op_dofeedback[1] = chip->op_dofeedback[0];
}

void FM_Accumulator1(fm_t *chip)
{
    int i;
    int sum;
    int inp = 0;
    int acc = 0;
    int test_dac = (chip->mode_test_2c[1] & 32) != 0;
    int connect = 0;
    int index = 0;
    int load = test_dac || chip->fsm_op1_sel;
    int acc_clear = load && !test_dac;
    if (chip->fsm_op1_sel)
        index = 0;
    if (chip->fsm_op3_sel)
        index = 1;
    if (chip->fsm_op2_sel)
        index = 2;
    if (chip->fsm_op4_sel)
        index = 3;
    for (i = 0; i < 3; i++)
        connect |= ((chip->chan_connect[i][1] >> 5) & 1) << i;
    sum = test_dac;
    if (fm_algorithm[index][5][connect] && !test_dac)
        inp = chip->op_output[1] >> 5;
    if (!acc_clear)
        for (i = 0; i < 9; i++)
            acc += ((chip->ch_accm[i][1] >> 5) & 1) << i;

    sum = test_dac + inp + acc;

    sum &= 511;

    if ((inp & 256) != 0 && (acc & 256) != 0 && (sum & 256) == 0)
        sum = 512;
    if ((inp & 256) == 0 && (acc & 256) == 0 && (sum & 256) != 0)
        sum = 255;

    for (i = 0; i < 9; i++)
        chip->ch_accm[i][0] = (chip->ch_accm[i][1] << 1) | ((sum >> i) & 1);

    for (i = 0; i < 9; i++)
    {
        chip->ch_out[i][0] = chip->ch_out[i][1] << 1;
        if (load)
            chip->ch_out[i][0] |= (chip->ch_accm[i][1] >> 5) & 1;
        else
            chip->ch_out[i][0] |= (chip->ch_out[i][1] >> 5) & 1;
    }

    chip->ch_dac_load = chip->fsm_dac_load;
}

void FM_Accumulator2(fm_t* chip)
{
    int i;
    int test_dac = (chip->mode_test_2c[1] & 32) != 0;
    int pan_l = 0;
    int pan_r = 0;
    int do_out = 0;
    for (i = 0; i < 9; i++)
    {
        chip->ch_accm[i][1] = chip->ch_accm[i][0];
        chip->ch_out[i][1] = chip->ch_out[i][0];
    }
    if ((chip->fsm_dac_load && !chip->ch_dac_load) || test_dac)
    {
        chip->ch_out_dlatch = 0;
        if (chip->fsm_dac_out_sel || test_dac)
        {
            for (i = 0; i < 9; i++)
                chip->ch_out_dlatch |= ((chip->ch_out[i][1] >> 5) & 1) << i;
        }
        else
        {
            for (i = 0; i < 9; i++)
                chip->ch_out_dlatch |= ((chip->ch_out[i][1] >> 4) & 1) << i;
        }
    }
    if ((chip->fsm_dac_ch6 && chip->mode_dac_en[1]) || test_dac)
    {
        chip->dac_val = chip->mode_dac_data[1] << 1;
        chip->dac_val |= (chip->mode_test_2c[1] & 8) != 0;
    }
    else
        chip->dac_val = chip->ch_out_dlatch;

    if (chip->fsm_dac_load && !chip->ch_dac_load)
    {
        chip->ch_out_pan_dlatch = 0;
        if (chip->fsm_dac_out_sel)
        {
            for (i = 0; i < 2; i++)
                chip->ch_out_pan_dlatch |= (((chip->chan_pan[i][1] >> 5) & 1) ^ 1) << i;
        }
        else
        {
            for (i = 0; i < 2; i++)
                chip->ch_out_pan_dlatch |= (((chip->chan_pan[i][1] >> 4) & 1) ^ 1) << i;
        }
    }
    do_out = test_dac || !chip->fsm_dac_load;
    if (do_out && (chip->ch_out_pan_dlatch & 2) != 0)
        chip->out_l = chip->dac_val;
    else
        chip->out_l = 0;
    if (do_out && (chip->ch_out_pan_dlatch & 1) != 0)
        chip->out_r = chip->dac_val;
    else
        chip->out_r = 0;
}

void FM_Clock1(fm_t *chip)
{
    FM_DoShiftRegisters(chip, 0);
    FM_HandleIO1(chip);
    FM_FMRegisters1(chip);
    FM_FSM1(chip);
    FM_Misc1(chip);
    FM_LFO1(chip);
    FM_PhaseGenerator1(chip);
    FM_EnvelopeGenerator1(chip);
    FM_Operator1(chip);
    FM_Accumulator1(chip);
}

void FM_Clock2(fm_t *chip)
{
    FM_DoShiftRegisters(chip, 1);
    FM_HandleIO2(chip);
    FM_FMRegisters2(chip);
    FM_FSM2(chip);
    FM_Misc2(chip);
    FM_LFO2(chip);
    FM_PhaseGenerator2(chip);
    FM_EnvelopeGenerator2(chip);
    FM_Operator2(chip);
    FM_Accumulator2(chip);
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
    for (; i < 144 * 53267; i++)
    {
        FM_Clock(&fm, 0);
        FM_Clock(&fm, 1);
        int v1 = fm.lfo_dlatch;
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        //if ((i % 144) == 0)
        //    printf("%i %i %i %i %i\n", i, v1, v2, v3, v4);
    }
}
