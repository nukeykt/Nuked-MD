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

#pragma once

#include <stdint.h>
#include <stdlib.h>

enum {
    state_0 = 0,
    state_1,
    state_z,
    state_test
};

typedef struct {
    int l1;
    int l2;
    int cout;
} staticcnt_t;

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

typedef struct {
    int l1;
    int l2;
} sdff_t;


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

typedef struct {
    int l1;
    int l2;
    int nq;
    int q;
} sdffs_t;


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

typedef struct {
    int l1;
    int l2;
    int nq;
    int q;
} sdffr_t;


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

typedef struct {
    int l1;
    int l2;
    int nq;
    int q;
} sdffsr_t;


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


typedef struct {
    uint64_t lastcycle;
    int items;
    int pos;
    int lastval;
    int *fifo;
} delaychain_t;

static inline void DELAY_Init(delaychain_t *delay, int delaycycles)
{
    delay->fifo = (int*)malloc((delaycycles + 1) * sizeof(int));
    if (!delay->fifo)
        return;
    delay->lastcycle = 0;
    delay->items = delaycycles + 1;
    delay->pos = 0;
}

static inline void DELAY_Free(delaychain_t *delay)
{
    free(delay->fifo);
}

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
