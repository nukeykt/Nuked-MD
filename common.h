#pragma once

#include <stdlib.h>

enum {
    state_0 = 0,
    state_1,
    state_z
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
    int o1;
    int o2;
} sdffr2_t;


static inline void SDFFR2_Update(sdffr2_t *dff, int clk, int val, int reset)
{
    int bit;
    if (!clk)
    {
        dff->l1 = val;
    }
    else if (!reset)
    {
        dff->l1 = 1;
    }
    if (clk)
    {
        dff->l2 = !dff->l1;
        bit = dff->l2;
        if (!reset)
            bit = 0;
    }
    else
    {
        if (!reset)
            dff->l2 = 0;
        bit = dff->l2;
    }
    dff->o1 = bit;
    dff->o2 = !dff->l2;
}

typedef struct {
    int l1;
    int l2;
} sdffr_t;


static inline void SDFFR_Update(sdffr_t* dff, int clk, int val, int reset)
{
    if (!clk)
    {
        dff->l1 = val;
    }
    else if (!reset)
    {
        dff->l1 = 1;
    }
    if (clk)
    {
        dff->l2 = dff->l1;
    }
    else if (!reset)
    {
        dff->l2 = 1;
    }
}


typedef struct {
    int lastcycle;
    int items;
    int pos;
    int *fifo;
} delaychain_t;

static inline void DELAY_Init(delaychain_t *delay, int delaycycles)
{
    delay->fifo = malloc(delaycycles * sizeof(int));
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

static inline int DELAY_Update(delaychain_t *delay, int cycles, int pushval)
{
    if (!delay->fifo || delay->items < 1)
        return 0;
    if (delay->lastcycle != cycles)
    {
        delay->lastcycle = cycles;
        delay->pos = (delay->pos + 1) % delay->items;
    }
    delay->fifo[(delay->pos + delay->items - 1) % delay->items] = pushval;
    return delay->fifo[delay->pos];
}
