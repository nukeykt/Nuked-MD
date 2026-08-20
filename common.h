/*
 * Copyright (C) 2023 nukeykt
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
 *  FC1004 cells emulation
 *  Thanks:
 *      org (ogamespec):
 *          FC1004 decap and die shot.
 *      andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *
 */

/** @file common.h @brief Shared transistor-cell primitives (counters, flip-flops, delay lines) used by all chips. */

#pragma once

#include <stdint.h>
#include <stdlib.h>

/** Emulator version string, used in the window title and the save file header. */
#define VERSION "1.3"       // The emulator version in the main branch is ahead of the latest release 

/** Tri-state logic values used by the cell models. */
enum {
    state_0 = 0,    /**< Logic low. */
    state_1,        /**< Logic high. */
    state_z,        /**< High impedance. */
    state_test      /**< Test state. */
};

#pragma pack(push, 1)
typedef struct {
    int l1;     /**< Input latch (captured while clk is low). */
    int l2;     /**< Output latch (follows l1 on the clock edge). */
    int cout;   /**< Carry-out: l2 AND cin. */
} staticcnt_t;
#pragma pack(pop)

/**
 * @brief Updates a static counter cell.
 *
 * Computes the carry-out as cin && l2. While reset is low the cell is cleared
 * (l1 = l2 = 0). Otherwise, on a low clock the input latch takes val (or
 * l2 ^ cin when load is set) and on a high clock l2 follows l1.
 *
 * @param scnt Counter cell to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param load When nonzero, the captured bit is l2 ^ cin instead of val.
 * @param val Input value captured when clk is low.
 * @param cin Carry-in used for the carry-out and the load computation.
 * @param reset When zero, clears the cell; must be high for normal operation.
 */
static inline void SCNT_Update(staticcnt_t* scnt, int clk, int load, int val, int cin, int reset)
{
    scnt->cout = cin && scnt->l2;
    if (!reset)
    {
        scnt->l1 = 0;
        scnt->l2 = 0;
        return;
    }
    if (!clk)
    {
        int bit;
        if (!load)
            bit = val;
        else
            bit = scnt->l2 ^ cin;
        scnt->l1 = bit;
    }
    else
    {
        scnt->l2 = scnt->l1;
    }
}

/**
 * @brief Updates a wide static counter cell.
 *
 * Like SCNT_Update but operates on multi-bit values: the sum l2 + cin is
 * computed, the carry-out is bit @p bits of the sum, and a loaded value is
 * masked with @p mask.
 *
 * @param scnt Counter cell to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param load When nonzero, the captured bit is (l2 + cin) & mask instead of val.
 * @param val Input value captured when clk is low.
 * @param cin Carry-in.
 * @param reset When zero, clears the cell; must be high for normal operation.
 * @param mask Bit mask applied to the loaded sum.
 * @param bits Bit position of the carry-out within the sum.
 */
static inline void SCNT_UpdateWide(staticcnt_t* scnt, int clk, int load, int val, int cin, int reset, int mask, int bits)
{
    int sum = scnt->l2 + cin;
    scnt->cout = (sum >> bits) & 1;
    if (!reset)
    {
        scnt->l1 = 0;
        scnt->l2 = 0;
        return;
    }
    if (!clk)
    {
        int bit;
        if (!load)
            bit = val;
        else
            bit = sum & mask;
        scnt->l1 = bit;
    }
    else
    {
        scnt->l2 = scnt->l1;
    }
}

#pragma pack(push, 1)
typedef struct {
    int l1;     /**< Input latch (captured while clk is low). */
    int l2;     /**< Output latch (follows l1 on the clock edge). */
} sdff_t;
#pragma pack(pop)


/**
 * @brief Updates a D flip-flop.
 *
 * Edge-triggered behavior: on a low clock the input value is captured in l1,
 * on a high clock l2 follows l1.
 *
 * @param dff Flip-flop to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param val Data input captured while clk is low.
 */
static inline void SDFF_Update(sdff_t *dff, int clk, int val)
{
    if (!clk)
    {
        dff->l1 = val;
    }
    else
    {
        dff->l2 = dff->l1;
    }
}

#pragma pack(push, 1)
typedef struct {
    int l1;     /**< Input latch (captured while clk is low). */
    int l2;     /**< Output latch (follows l1 on the clock edge). */
    int nq;     /**< Inverted output (!l2). */
    int q;      /**< Normal output (l2). */
} sdffs_t;
#pragma pack(pop)


/**
 * @brief Updates a D flip-flop with an active-low set input.
 *
 * While set is low the output latch is forced high (q = 1, nq = 0); otherwise
 * the flip-flop behaves like SDFF_Update.
 *
 * @param dff Flip-flop to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param val Data input captured while clk is low.
 * @param set Active-low set: when zero, forces the output high.
 */
static inline void SDFFS_Update(sdffs_t *dff, int clk, int val, int set)
{
    if (!clk)
    {
        dff->l1 = val;
    }
    else if (!set)
    {
        dff->l1 = 1;
    }
    if (!set)
    {
        dff->l2 = 1;
    }
    else if (clk)
    {
        dff->l2 = dff->l1;
    }
    dff->nq = !dff->l2;
    dff->q = dff->l2;
}

/**
 * @brief Updates a wide D flip-flop with an active-low set input.
 *
 * Like SDFFS_Update, but the set state and the inverted output are masked:
 * set forces l1/l2 to @p mask and nq is computed as l2 ^ mask.
 *
 * @param dff Flip-flop to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param val Data input captured while clk is low.
 * @param set Active-low set: when zero, forces the outputs to @p mask.
 * @param mask Bit mask applied on set and to the inverted output.
 */
static inline void SDFFS_UpdateWide(sdffs_t* dff, int clk, int val, int set, int mask)
{
    if (!clk)
    {
        dff->l1 = val;
    }
    else if (!set)
    {
        dff->l1 = mask;
    }
    if (!set)
    {
        dff->l2 = mask;
    }
    else if (clk)
    {
        dff->l2 = dff->l1;
    }
    dff->nq = dff->l2 ^ mask;
    dff->q = dff->l2;
}

#pragma pack(push, 1)
typedef struct {
    int l1;     /**< Input latch (captured while clk is low). */
    int l2;     /**< Output latch (follows l1 on the clock edge). */
    int nq;     /**< Inverted output (!l2). */
    int q;      /**< Normal output (l2). */
} sdffr_t;
#pragma pack(pop)


/**
 * @brief Updates a D flip-flop with an active-low reset input.
 *
 * While reset is low both latches are cleared (q = 0, nq = 1); otherwise the
 * flip-flop behaves like SDFF_Update.
 *
 * @param dff Flip-flop to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param val Data input captured while clk is low.
 * @param reset Active-low reset: when zero, clears the flip-flop.
 */
static inline void SDFFR_Update(sdffr_t* dff, int clk, int val, int reset)
{
    if (!reset)
    {
        dff->l1 = 0;
    }
    else if (!clk)
    {
        dff->l1 = val;
    }
    if (!reset)
    {
        dff->l2 = 0;
    }
    else if (clk)
    {
        dff->l2 = dff->l1;
    }
    dff->nq = !dff->l2;
    dff->q = dff->l2;
}


/**
 * @brief Updates a wide D flip-flop with an active-low reset input.
 *
 * Like SDFFR_Update, but the inverted output is masked: nq is computed as
 * l2 ^ mask. Reset clears both latches to zero.
 *
 * @param dff Flip-flop to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param val Data input captured while clk is low.
 * @param reset Active-low reset: when zero, clears the flip-flop.
 * @param mask Bit mask applied to the inverted output.
 */
static inline void SDFFR_UpdateWide(sdffr_t* dff, int clk, int val, int reset, int mask)
{
    if (!reset)
    {
        dff->l1 = 0;
    }
    else if (!clk)
    {
        dff->l1 = val;
    }
    if (!reset)
    {
        dff->l2 = 0;
    }
    else if (clk)
    {
        dff->l2 = dff->l1;
    }
    dff->nq = dff->l2 ^ mask;
    dff->q = dff->l2;
}

#pragma pack(push, 1)
typedef struct {
    int l1;     /**< Input latch (captured while clk is low). */
    int l2;     /**< Output latch (follows l1 on the clock edge). */
    int nq;     /**< Inverted output (!l2). */
    int q;      /**< Normal output (l2). */
} sdffsr_t;
#pragma pack(pop)


/**
 * @brief Updates a D flip-flop with active-low set and reset inputs.
 *
 * Reset has priority over set on the input latch: while reset is low l1 is
 * cleared, otherwise while set is low l1 is forced high, otherwise the input
 * value is captured on a low clock. On the output side set forces l2 high,
 * reset forces l2 low, otherwise l2 follows l1 on a high clock. When set and
 * reset are both low both outputs are forced to zero.
 *
 * @param dff Flip-flop to update.
 * @param clk Clock: low captures input, high transfers to the output latch.
 * @param val Data input captured while clk is low.
 * @param set Active-low set: when zero, forces the output high.
 * @param reset Active-low reset: when zero, forces the output low.
 */
static inline void SDFFSR_Update(sdffsr_t *dff, int clk, int val, int set, int reset)
{
    if (!reset)
    {
        dff->l1 = 0;
    }
    else if (!set)
    {
        dff->l1 = 1;
    }
    else if (!clk)
    {
        dff->l1 = val;
    }

    if (!set)
    {
        dff->l2 = 1;
    }
    else if (!reset)
    {
        dff->l2 = 0;
    }
    else if (clk)
    {
        dff->l2 = dff->l1;
    }

    if (!set && !reset)
    {
        dff->q = 0;
        dff->nq = 0;
    }
    else
    {
        dff->q = dff->l2;
        dff->nq = !dff->l2;
    }
}

#pragma pack(push, 1)
/** Maximum number of delay slots storable in a delaychain_t fifo. */
#define MAX_DELAYCHAIN_DEPTH 10
typedef struct {
    uint64_t lastcycle;                 /**< Cycle count at the last DELAY_Update call. */
    int items;                          /**< Number of delay slots (delay cycles + 1). */
    int pos;                            /**< Current write position in the fifo. */
    int lastval;                        /**< Value pushed at the last update. */
    int fifo[MAX_DELAYCHAIN_DEPTH];     /**< Circular delay buffer. */
} delaychain_t;
#pragma pack(pop)

/**
 * @brief Initializes a delay line for the given number of delay cycles.
 *
 * @param delay Delay line to initialize.
 * @param delaycycles Number of cycles the signal is delayed by.
 */
static inline void DELAY_Init(delaychain_t *delay, int delaycycles)
{
    delay->lastcycle = 0;
    delay->items = delaycycles + 1;
    delay->pos = 0;
}

/**
 * @brief Frees a delay line.
 *
 * The delay line uses a fixed-size embedded fifo, so this is a no-op kept for
 * API symmetry.
 *
 * @param delay Delay line to free (unused).
 */
static inline void DELAY_Free(delaychain_t *delay)
{
}

/**
 * @brief Advances a delay line to @p cycles and pushes a new value.
 *
 * Advances the fifo position once per cycle from the last recorded cycle,
 * storing the previously pushed value at each step, then pushes @p pushval
 * and returns the value delayed by the configured number of cycles.
 *
 * @param delay Delay line to update.
 * @param cycles Current emulated cycle count.
 * @param pushval Signal value to push into the delay line.
 * @return The delayed signal value.
 */
static inline int DELAY_Update(delaychain_t *delay, uint64_t cycles, int pushval)
{
    if (!delay->fifo || delay->items < 1)
        return pushval;
    while (delay->lastcycle != cycles)
    {
        delay->lastcycle++;
        delay->pos = (delay->pos + 1) % delay->items;
        delay->fifo[delay->pos] = delay->lastval;
    }
    delay->fifo[delay->pos] = pushval;
    delay->lastval = pushval;
    return delay->fifo[(delay->pos + 1) % delay->items];
}
