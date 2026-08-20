/**
 * @file fj3002_fm.c
 * @brief FJ3002 FM sub-chip clocking logic (WIP).
 */

#include "fj3002_fm.h"


/**
 * @brief Clock the FJ3002 FM sub-chip one step (WIP).
 *
 * Advances the internal state cells (latches and FSM counters) on the
 * master clock input. Work in progress: no audio output is produced yet.
 *
 * @param chip Pointer to the FJ3002 FM sub-chip state to advance.
 * @return None (function returns void).
 */
void FJ3002_FM_Clock(fj3002_fm_t* chip) {
	int clk_posedge = chip->i_clk && !chip->clk_delay;
	chip->clk_delay = chip->i_clk;

	int ic = !chip->i_n_ic;

	if (!clk_posedge) {
		int ic_check;
		chip->ic_latch[0] = chip->ic_latch[1] << 1;
		chip->ic_latch[0] |= ic;

		ic_check = (chip->ic_latch[1] & 0x800) == 0 && ic;

		chip->prescaler_latch[0] = chip->prescaler_latch[1] << 1;
		chip->prescaler_latch[0] |= !ic_check && (chip->prescaler_latch[1] & 0x1f) == 0;

		chip->ic_check_latch[0] = chip->ic_check_latch[1] << 1;
		chip->ic_check_latch[0] |= ic_check;

		chip->phi2_latch[0] = (chip->prescaler_latch[1] & 0xc) != 0;
	} else {
		chip->ic_latch[1] = chip->ic_latch[0];
		chip->ic_check_latch[1] = chip->ic_check_latch[0];
		chip->prescaler_latch[1] = chip->prescaler_latch[0];
		chip->phi2_latch[1] = chip->phi2_latch[0];
	}

	int fsm_reset = (chip->ic_check_latch[1] & (8 + 32)) != 0;

	int fmclk = chip->phi2_latch[1];

	if (!fmclk) {
		int reset = fsm_reset;
		chip->fsm_cnt1[0] = chip->fsm_cnt1[1] + 1;
		if (reset || (chip->fsm_cnt1[1] & 2) != 0) {
			chip->fsm_cnt1[0] = 0;
		}
		chip->fsm_cnt2[0] = chip->fsm_cnt2[1];
		if ((chip->fsm_cnt1[1] & 2) != 0) {
			chip->fsm_cnt2[0]++;
		}
		if (reset) {
			chip->fsm_cnt2[0] = 0;
		}
	} else {
		chip->fsm_cnt1[1] = chip->fsm_cnt1[0];
		chip->fsm_cnt2[1] = chip->fsm_cnt2[0];
	}
}

