#pragma once
#include "common.h"
#include "fm.h"
#include "vdp.h"
#include "arbiter.h"
#include "iochip.h"
#include "tmss.h"


typedef struct
{
    fm_t fm;
    vdp_t vdp;
    arbiter_t arb;
    iochip_t ioc;
    tmss_t tmss;
} fc1004_t;

