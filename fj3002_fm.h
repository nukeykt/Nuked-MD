#pragma once
#include <stdint.h>


typedef struct {

	int i_clk;
	int i_n_ic;
	int i_n_rd;
	int i_n_wr;

	int clk_delay;
	int ic_latch[2];
	int ic_check_latch[2];
	int prescaler_latch[2];
	int phi2_latch[2];

	int fsm_cnt1[2];
	int fsm_cnt2[2];

} fj3002_fm_t;