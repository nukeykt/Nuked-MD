#pragma once
#include <stdint.h>

enum {
    chip_type_ym2612 = 0,
    chip_type_ym3438,
};

typedef struct {
    int chip_type;

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



