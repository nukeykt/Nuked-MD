#pragma once
#include <stdint.h>

enum {
    chip_type_ym2612 = 0,
    chip_type_ym3438,
};

typedef struct {
    // int chip_type;

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

    // fsm
    int fsm_cnt1[2];
    int fsm_cnt2[2];
    // fsm table output(ym2612)
    int fsm_out[26];
    // 0 - 11 operator select
    // 12 - envelope generator step
    // 13 - timer step
    // 14 - load debug PG and EG value
    // 15 - lfo, test pin, sync
    // 16

    // fsm table output(ym3438)
    int fsm_clock_eg;
    int fsm_op4_sel;
    int fsm_sel1; // 0, 4, 8, 12, 20
    int fsm_sel2; // 0, 4, 8, 12, 20

    // clock
    int ic_latch[2]; // 12
    int ic_check_latch[2]; // 4
    int prescaler_latch[2]; // 6
    int phi1_latch[2];
    int phi2_latch[2];
} fm_t;



