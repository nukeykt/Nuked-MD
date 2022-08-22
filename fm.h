#pragma once
#include <stdint.h>

typedef struct {
    // input
    int ic;
    int rd;
    int wr;
    int cs;
    int address;
    int data;

    // io
    int write_addr_trig;
    int write_addr_trig_sync;
    int write_addr_dlatch;
    int write_addr_sr[2];
    int write_data_trig;
    int write_data_trig_sync;
    int write_data_dlatch;
    int write_data_sr[2];

    int data_latch;
    int bank_latch;

    int busy_cnt[2];
    int busy_latch[2];

    int io_ic_latch[2];

    int write_fm_address[2];
    int fm_address[2];
    int write_fm_data[2];
    int fm_data[2];

    // mode registers
    int write_mode_21[2];
    int write_mode_22[2];
    int write_mode_24[2];
    int write_mode_25[2];
    int write_mode_26[2];
    int write_mode_27[2];
    int write_mode_28[2];
    int write_mode_2a[2];
    int write_mode_2b[2];
    int write_mode_2c[2];

    int mode_test_21[2];
    int mode_lfo_en[2];
    int mode_lfo_freq[2];
    int mode_timer_a_reg[2];
    int mode_timer_b_reg[2];
    int mode_ch3[2];
    int mode_timer_a_load[2];
    int mode_timer_a_enable[2];
    int mode_timer_a_reset[2];
    int mode_timer_b_load[2];
    int mode_timer_b_enable[2];
    int mode_timer_b_reset[2];
    int mode_kon_operator[2];
    int mode_kon_channel[2];
    int mode_dac_data[2];
    int mode_dac_en[2];
    int mode_test_2c[2];

    // operator registers
    int slot_multi[2][4][2];
    int slot_dt[2][3][2];
    int slot_tl[2][7][2];
    int slot_ar[2][5][2];
    int slot_ks[2][2][2];
    int slot_dr[2][5][2];
    int slot_am[2][1][2];
    int slot_sr[2][5][2];
    int slot_rr[2][4][2];
    int slot_sl[2][4][2];
    int slot_ssg_eg[2][4][2];
    // channel registers
    int chan_fnum[11][2];
    int chan_fnum_ch3[11][2];
    int chan_block[3][2];
    int chan_block_ch3[3][2];
    int chan_a4[2];
    int chan_ac[2];
    int chan_connect[3][2];
    int chan_fb[3][2];
    int chan_pms[3][2];
    int chan_ams[2][2];
    int chan_pan[2][2];

    int reg_cnt1[2];
    int reg_cnt2[2];

    // fsm
    int fsm_cnt1[2];
    int fsm_cnt2[2];
    // fsm table output
    int fsm_clock_eg;
    int fsm_op4_sel;
    int fsm_sel23;

    // clock
    int ic_latch[2]; // 12
    int ic_check_latch[2]; // 4
    int prescaler_latch[2]; // 6
    int phi1_latch[2];
    int phi2_latch[2];
} fm_t;



