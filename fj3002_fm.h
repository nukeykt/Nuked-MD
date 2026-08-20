/**
 * @file fj3002_fm.h
 * @brief FJ3002 FM sub-chip internal state (WIP).
 */

#pragma once
#include <stdint.h>


/**
 * @brief FJ3002 FM sub-chip internal state (WIP).
 *
 * Holds the chip inputs and the internal state cells (latches and
 * FSM counters) advanced by FJ3002_FM_Clock().
 */
typedef struct {

	int i_clk;       /**< Input: master clock. */
	int i_n_ic;      /**< Input: active-low IC reset. */
	int i_n_rd;      /**< Input: active-low read strobe. */
	int i_n_wr;      /**< Input: active-low write strobe. */

	int clk_delay;          /**< State cell: delayed copy of i_clk (clock edge detection). */
	int ic_latch[2];        /**< State cell: IC reset latch (two-phase pipeline). */
	int ic_check_latch[2];  /**< State cell: IC check latch (two-phase pipeline). */
	int prescaler_latch[2]; /**< State cell: prescaler latch (two-phase pipeline). */
	int phi2_latch[2];      /**< State cell: PHI2 phase latch (two-phase pipeline). */

	int fsm_cnt1[2]; /**< State cell: FSM counter 1 (two-phase pipeline). */
	int fsm_cnt2[2]; /**< State cell: FSM counter 2 (two-phase pipeline). */

} fj3002_fm_t;