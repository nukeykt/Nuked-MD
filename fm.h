/*
 * Copyright (C) 2022-2023 nukeykt
 *
 * This file is part of Nuked-MD.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  YM3438 emulator.
 *  Thanks:
 *      John McMaster (siliconpr0n.org):
 *          Yamaha YM3438 & YM2610 decap and die shot.
 *      org, andkorzh, HardWareMan (emu-russia):
 *          help & support, YM2612 decap.
 *
 */

/**
 * @file fm.h
 * @brief Transistor-level, cycle-accurate YM2612/YM3438 FM sound core interface.
 */

#pragma once
#include <stdint.h>

#pragma pack(push, 1)

/** Chip variant flags. */
enum {
    fm_flags_ym2612 = 1, /**< YM2612 mode (as opposed to YM3438). */
};

/**
 * @brief Inputs to the master clock prescaler.
 */
typedef struct {
    int phi; /**< Clock phase input. */
    int ic;  /**< IC reset input. */
} fm_prescaler_input_t;

/**
 * @brief Master clock prescaler state (clock divider and IC detection).
 */
typedef struct {
    fm_prescaler_input_t input, input_old; /**< Registered inputs and their previous state. */

    // clock
    int ic_latch[2]; /**< 12-bit IC detection shift register. */
    int ic_check_latch[2]; /**< 4-bit IC check shift register. */
    int prescaler_latch[2]; /**< 6-bit prescaler counter. */
    int phi1_latch[2]; /**< Phi1 phase latch. */
    int phi2_latch[2]; /**< Phi2 phase latch. */
} fm_prescaler_t;

/**
 * @brief CPU interface inputs to the FM core.
 */
typedef struct {
    int phi_phase; /**< Current clock phase (1 = phi1, 2 = phi2). */
    int ic; /**< IC reset input. */
    int rd; /**< Read strobe input. */
    int wr; /**< Write strobe input. */
    int cs; /**< Chip select input. */
    int address; /**< Address bus input (A0-A1). */
    int data; /**< Data bus input (8-bit). */
    int test; /**< Test pin input. */
    int i_fsm_reset; /**< FSM reset flag; true when (chip->ic_check_latch[1] & 16) != 0. */
} fm_input_t;

/**
 * @brief FM core state: flip-flops, latches and wires of the YM2612/YM3438
 * transistor-level model.
 *
 * Fields carrying a `[2]` index are two-stage pipeline latches: stage 0 holds
 * the combinational (phi1) result and stage 1 the registered (phi2) value.
 */
typedef struct {
    int flags; /**< Chip variant flags (see @c fm_flags_ym2612). */
    // input
    fm_input_t input_old, input; /**< Registered inputs and their previous state. */
    int i_phi1; /**< Internal phi1 clock phase. */
    int i_phi2; /**< Internal phi2 clock phase. */

    fm_prescaler_t prescaler; /**< Master clock prescaler. */

    // output
    int dac_val; /**< DAC output value. */
    int out_l; /**< Left channel audio output. */
    int out_r; /**< Right channel audio output. */

    // io
    int write_addr_trig; /**< Write-address strobe trigger. */
    int write_addr_trig_sync; /**< Synchronized write-address trigger. */
    int write_addr_dlatch; /**< Write-address D-latch. */
    int write_addr_sr[2]; /**< Write-address shift register. */
    int write_data_trig; /**< Write-data strobe trigger. */
    int write_data_trig_sync; /**< Synchronized write-data trigger. */
    int write_data_dlatch; /**< Write-data D-latch. */
    int write_data_sr[2]; /**< Write-data shift register. */

    int data_latch; /**< Data bus latch. */
    int bank_latch; /**< Register bank (A1) latch. */

    int busy_cnt[2]; /**< Busy flag counter. */
    int busy_latch[2]; /**< Busy flag latch. */

    int io_ic_latch[2]; /**< IO IC reset latch. */

    int write_fm_address[2]; /**< FM address write flag. */
    int fm_address[2]; /**< Current FM register address. */
    int write_fm_data[2]; /**< FM data write flag. */
    int fm_data[2]; /**< Current FM register data. */
    int status_timer_a_dlatch; /**< Timer A status D-latch. */
    int status_timer_b_dlatch; /**< Timer B status D-latch. */

    // mode registers
    int write_mode_21[2]; /**< Write strobe for register 0x21 (test). */
    int write_mode_22[2]; /**< Write strobe for register 0x22 (LFO). */
    int write_mode_24[2]; /**< Write strobe for register 0x24 (timer A high). */
    int write_mode_25[2]; /**< Write strobe for register 0x25 (timer A low). */
    int write_mode_26[2]; /**< Write strobe for register 0x26 (timer B). */
    int write_mode_27[2]; /**< Write strobe for register 0x27 (timer control/CSM). */
    int write_mode_28[2]; /**< Write strobe for register 0x28 (key on/off). */
    int write_mode_2a[2]; /**< Write strobe for register 0x2a (DAC data). */
    int write_mode_2b[2]; /**< Write strobe for register 0x2b (DAC enable). */
    int write_mode_2c[2]; /**< Write strobe for register 0x2c (test 2). */

    int mode_test_21[2]; /**< Test register 0x21 value. */
    int mode_lfo_en[2]; /**< LFO enable (0x22 bit 3). */
    int mode_lfo_freq[2]; /**< LFO frequency (0x22 bits 0-2). */
    int mode_timer_a_reg[2]; /**< Timer A reload value (0x24/0x25). */
    int mode_timer_b_reg[2]; /**< Timer B reload value (0x26). */
    int mode_ch3[2]; /**< Channel 3 mode (0x27 bits 6-7). */
    int mode_timer_a_load[2]; /**< Timer A load flag. */
    int mode_timer_a_enable[2]; /**< Timer A enable flag. */
    int mode_timer_a_reset[2]; /**< Timer A reset flag. */
    int mode_timer_b_load[2]; /**< Timer B load flag. */
    int mode_timer_b_enable[2]; /**< Timer B enable flag. */
    int mode_timer_b_reset[2]; /**< Timer B reset flag. */
    int mode_kon_operator[2]; /**< Key-on operator mask (0x28 bits 4-7). */
    int mode_kon_channel[2]; /**< Key-on channel (0x28 bits 0-3). */
    int mode_dac_data[2]; /**< DAC data (0x2a, offset-binary). */
    int mode_dac_en[2]; /**< DAC enable (0x2b bit 7). */
    int mode_test_2c[2]; /**< Test register 0x2c value. */

    int mode_kon[4][2]; /**< Key-on event shift registers per operator. */

    // operator registers
    int slot_multi[2][4][2]; /**< Multiplier (0x30) per bank/operator. */
    int slot_dt[2][3][2]; /**< Detune (0x30 bits 3-5). */
    int slot_tl[2][7][2]; /**< Total level (0x40). */
    int slot_ar[2][5][2]; /**< Attack rate (0x50). */
    int slot_ks[2][2][2]; /**< Key scaling (0x50 bits 6-7). */
    int slot_dr[2][5][2]; /**< Decay rate (0x60). */
    int slot_am[2][1][2]; /**< Amplitude modulation enable (0x60 bit 7). */
    int slot_sr[2][5][2]; /**< Sustain rate (0x70). */
    int slot_rr[2][4][2]; /**< Release rate (0x80). */
    int slot_sl[2][4][2]; /**< Sustain level (0x80 bits 4-7). */
    int slot_ssg_eg[2][4][2]; /**< SSG-EG mode (0x90). */
    // channel registers
    int chan_fnum[11][2]; /**< Frequency number (0xa0) per channel. */
    int chan_fnum_ch3[11][2]; /**< Channel 3 frequency number (0xa8). */
    int chan_block[3][2]; /**< Block/octave (0xa4). */
    int chan_block_ch3[3][2]; /**< Channel 3 block/octave (0xac). */
    int chan_a4[2]; /**< Register 0xa4 data latch. */
    int chan_ac[2]; /**< Register 0xac data latch. */
    int chan_connect[3][2]; /**< Algorithm (0xb0 bits 0-2). */
    int chan_fb[3][2]; /**< Feedback (0xb0 bits 3-5). */
    int chan_pms[3][2]; /**< Phase modulation sensitivity (0xb4 bits 0-2). */
    int chan_ams[2][2]; /**< Amplitude modulation sensitivity (0xb4 bits 4-5). */
    int chan_pan[2][2]; /**< Panning (0xb4 bits 6-7, inverted). */

    int reg_cnt1[2]; /**< Register scan counter, low bits. */
    int reg_cnt2[2]; /**< Register scan counter, high bits. */

    // lfo

    int lfo_cnt1[2]; /**< LFO rate counter. */
    int lfo_cnt2[2]; /**< LFO phase counter. */

    int lfo_dlatch; /**< LFO output D-latch. */
    int lfo_dlatch_load; /**< LFO output load flag. */
    int lfo_inc_latch[2]; /**< LFO increment latch. */

    // pg
    int pg_fnum[2][2]; /**< Frequency number pipeline latches. */
    int pg_kcode[2][2]; /**< Key code pipeline latches. */
    int pg_fnum_lfo1; /**< LFO-adjusted frequency (shift table 1). */
    int pg_fnum_lfo2; /**< LFO-adjusted frequency (shift table 2). */
    int pg_lfo_shift; /**< LFO shift amount. */
    int pg_lfo_sign; /**< LFO sign. */
    int pg_lfo; /**< Combined LFO value. */
    int pg_freq1; /**< Frequency, stage 1. */
    int pg_freq2; /**< Frequency, stage 2. */
    int pg_freq3; /**< Frequency with detune. */
    int pg_freq4; /**< Frequency with multiplier. */
    int pg_freq5[2]; /**< Frequency pipeline. */
    int pg_freq6; /**< Frequency pipeline. */
    int pg_freq_m1; /**< Frequency pipeline. */
    int pg_block; /**< Block (octave) latch. */
    int pg_dt[2]; /**< Detune latch. */
    int pg_detune[2]; /**< Computed detune value. */
    int pg_multi[2][2]; /**< Multiplier latch. */
    int pg_multi2; /**< Multiplier (delayed). */
    int pg_inc[2]; /**< Phase increment. */
    int pg_inc_mask[2]; /**< Masked phase increment. */
    int pg_phase[20][2]; /**< Phase accumulator shift registers. */
    int pg_reset_latch[2]; /**< Phase reset latch. */
    int pg_debug[2]; /**< Phase debug output. */
    int pg_reset[2]; /**< Phase reset flag. */

    // eg
    int eg_prescaler[2]; /**< EG clock prescaler. */
    int eg_prescaler_clock_l[2]; /**< EG prescaler clock latch. */
    int eg_prescaler_l; /**< EG prescaler step flag. */
    int eg_clock_delay[2]; /**< EG clock delay shift register. */
    int eg_step[2]; /**< EG step clock. */
    int eg_timer_load; /**< EG timer load flag. */
    int eg_timer[2]; /**< EG timer shift register. */
    int eg_timer_carry[2]; /**< EG timer carry. */
    int eg_timer_mask[2]; /**< EG timer mask. */
    int eg_timer_masked[2]; /**< Masked EG timer. */
    int eg_timer_low_lock; /**< Locked low timer bits. */
    int eg_shift_lock; /**< Locked shift amount. */
    int eg_level[10][2]; /**< Envelope level shift register. */
    int eg_level_latch[2]; /**< Envelope level latch. */
    int eg_level_latch_inv; /**< Inverted envelope level latch. */
    int eg_state[2][2]; /**< EG state shift registers. */
    int eg_ssg_dir[2]; /**< SSG-EG direction. */
    int eg_ssg_inv[2]; /**< SSG-EG inversion. */
    int eg_ssg_holdup[2]; /**< SSG-EG hold-up. */
    int eg_ssg_enable[2]; /**< SSG-EG enable. */
    int eg_ssg_pgreset[2]; /**< SSG-EG phase reset. */
    int eg_ssg_pgrepeat[2]; /**< SSG-EG phase repeat. */
    int eg_key[2]; /**< Key state shift register. */
    int eg_rate_nonzero[2]; /**< Rate nonzero flag. */
    int eg_rate; /**< Envelope rate. */
    int eg_ksv; /**< Key scale value. */
    int eg_rate2; /**< Rate plus key scale. */
    int eg_inc1; /**< Envelope increment 1. */
    int eg_inc2; /**< Envelope increment 2. */
    int eg_rate12; /**< Rate band flag ((rate & 60) == 48). */
    int eg_rate13; /**< Rate band flag ((rate & 60) == 52). */
    int eg_rate14; /**< Rate band flag ((rate & 60) == 56). */
    int eg_rate15; /**< Rate band flag ((rate & 60) == 60). */
    int eg_maxrate[2]; /**< Max rate flag. */
    int eg_incsh0; /**< Increment shift amount 0. */
    int eg_incsh1; /**< Increment shift amount 1. */
    int eg_incsh2; /**< Increment shift amount 2. */
    int eg_incsh3; /**< Increment shift amount 3. */
    int eg_incsh_nonzero[2]; /**< Any increment shift nonzero. */
    int eg_inc_total; /**< Total envelope increment. */
    int eg_level_ssg[2]; /**< SSG-adjusted envelope level. */
    int eg_sl[2][2]; /**< Sustain level latch. */
    int eg_nextlevel[2]; /**< Next envelope level. */
    int eg_kon_csm[2]; /**< Key-on CSM latch. */
    int eg_kon_latch[2]; /**< Key-on latch. */
    int eg_tl[2][2]; /**< Total level latch. */
    int eg_ams; /**< Amplitude modulation sensitivity. */
    int eg_lfo[2]; /**< LFO value for the EG. */
    int eg_ch3_latch[2]; /**< Channel 3 select latch. */
    int eg_out; /**< Envelope output. */
    int eg_out_tl; /**< Total level output. */
    int eg_out_total; /**< Combined envelope output. */
    int eg_debug[2]; /**< EG debug output. */

    // op
    int op_mod[10][2]; /**< Modulation input shift register. */
    int op_phase[2]; /**< Operator phase. */
    int op_logsin_base[2]; /**< Log-sine table base value. */
    int op_logsin_delta[2]; /**< Log-sine interpolation delta. */
    int op_logsin_add_delta[2]; /**< Log-sine add-delta flag. */
    int op_atten[2]; /**< Total attenuation. */
    int op_env[2]; /**< Envelope input. */
    int op_pow_base[2]; /**< Power table base value. */
    int op_pow_delta[2]; /**< Power interpolation delta. */
    int op_pow_add_delta[2]; /**< Power add-delta flag. */
    int op_shift[2]; /**< Output shift. */
    int op_sign[2]; /**< Output sign. */
    int op_output[2]; /**< Operator output. */
    int op_op1[2][14][2]; /**< Operator 1 output shift registers. */
    int op_op2[14][2]; /**< Operator 2 output shift register. */
    int op_mod_sum[2]; /**< Summed modulation. */
    int op_dofeedback[2]; /**< Feedback active flag. */

    // accumulator

    int ch_accm[9][2]; /**< Channel accumulator shift register. */
    int ch_out[9][2]; /**< Channel output shift register. */
    int ch_out_dlatch; /**< Channel output D-latch. */
    int ch_out_pan_dlatch; /**< Panning D-latch. */
    int ch_dac_load; /**< DAC load flag. */
    int ch_out_debug[2]; /**< Channel output debug. */

    // timers
    int timer_dlatch; /**< Timer clock D-latch. */
    int timer_a_cnt[2]; /**< Timer A counter. */
    int timer_a_load_latch[2]; /**< Timer A load latch. */
    int timer_a_load_old[2]; /**< Timer A load previous state. */
    int timer_a_load_dlatch; /**< Timer A load D-latch. */
    int timer_a_of[2]; /**< Timer A overflow. */
    int timer_a_status[2]; /**< Timer A status flag. */
    int timer_b_subcnt[2]; /**< Timer B sub-counter. */
    int timer_b_subcnt_of[2]; /**< Timer B sub-counter overflow. */
    int timer_b_cnt[2]; /**< Timer B counter. */
    int timer_b_load_latch[2]; /**< Timer B load latch. */
    int timer_b_load_old[2]; /**< Timer B load previous state. */
    int timer_b_load_dlatch; /**< Timer B load D-latch. */
    int timer_b_of[2]; /**< Timer B overflow. */
    int timer_b_status[2]; /**< Timer B status flag. */
    int timer_csm_key_dlatch; /**< CSM key-on D-latch. */

    // fm algorithm
    int alg_mod_op1_0; /**< Algorithm modulator select, op1 first half. */
    int alg_mod_op1_1; /**< Algorithm modulator select, op1 second half. */
    int alg_mod_op2; /**< Algorithm modulator select, op2. */
    int alg_mod_prev_0; /**< Algorithm previous-output select 0. */
    int alg_mod_prev_1; /**< Algorithm previous-output select 1. */
    int alg_output; /**< Algorithm output select. */
    int alg_mod_op1_0_l; /**< Latched modulator select, op1 first half (YM2612). */
    int alg_mod_op1_1_l; /**< Latched modulator select, op1 second half (YM2612). */
    int alg_mod_op2_l; /**< Latched modulator select, op2 (YM2612). */
    int alg_mod_prev_0_l; /**< Latched previous-output select 0 (YM2612). */
    int alg_mod_prev_1_l; /**< Latched previous-output select 1 (YM2612). */
    int alg_output_l; /**< Latched output select (YM2612). */

    // fsm
    int fsm_cnt1[2]; /**< FSM counter 1. */
    int fsm_cnt2[2]; /**< FSM counter 2. */
    // fsm table output
    int fsm_clock_eg; /**< EG clock pulse. */
    int fsm_clock_timers1; /**< Timer clock pulse 1. */
    int fsm_clock_timers; /**< Timer clock pulse. */
    int fsm_op4_sel; /**< Operator 4 select. */
    int fsm_op1_sel; /**< Operator 1 select. */
    int fsm_op2_sel; /**< Operator 2 select. */
    int fsm_op3_sel; /**< Operator 3 select. */
    int fsm_sel2; /**< Special select 2. */
    int fsm_sel23; /**< Select 23 (register scan reset). */
    int fsm_ch3_sel; /**< Channel 3 select. */
    int fsm_dac_load; /**< DAC load pulse. */
    int fsm_dac_out_sel; /**< DAC output select. */
    int fsm_dac_ch6; /**< Channel 6 DAC select. */
    // ym2612 FSM
    int fsm_out[26]; /**< YM2612 FSM output table. */
    int fsm_op4_sel_l; /**< Latched operator 4 select (YM2612). */
    int fsm_op1_sel_l; /**< Latched operator 1 select (YM2612). */
    int fsm_op2_sel_l; /**< Latched operator 2 select (YM2612). */
    int fsm_op3_sel_l; /**< Latched operator 3 select (YM2612). */
    int fsm_clock_eg_l; /**< Latched EG clock pulse (YM2612). */
    int fsm_clock_timers1_l; /**< Latched timer clock pulse 1 (YM2612). */
    int fsm_clock_timers_l; /**< Latched timer clock pulse (YM2612). */
    int fsm_sel23_l; /**< Latched select 23 (YM2612). */
    int fsm_ch3_sel_l; /**< Latched channel 3 select (YM2612). */
    int fsm_dac_ch6_l; /**< Latched channel 6 DAC select (YM2612). */
    int fsm_dac_load_l; /**< Latched DAC load pulse (YM2612). */
    int fsm_dac_out_sel_l; /**< Latched DAC output select (YM2612). */

    int status_time; /**< Status hold time counter. */
    int last_status; /**< Last status value. */
} fm_t;

#pragma pack(pop)

int FM_ReadStatus(fm_t *chip);

void FM_Prescaler2(fm_prescaler_t *chip, int clk);
void FM_Clock2(fm_t *chip, int phi1, int phi2);
