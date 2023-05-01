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

    int cpu_reset;
    int hl_vdp;
    int intak_vdp;
    int oe0_arb;
    int mreq_vdp;
    int vz;

    // busses
    int zaddress_in;
    int vaddress_in;
    int vaddress_out;
    int zdata_in;
    int zdata_out;
    int vdata_in;
    int vdata_out;

    int i_hsync;
    int i_m3;
    int i_ntsc;
    int i_sound;
    int i_zres;
    int i_zbr;
    int i_disk;
    int i_test0;
    int i_jap;
    int i_fres;
    int i_zv;
    int i_vz;
    int i_io;

    int o_ys;
    int o_vsync;
    int o_hsync;
    int o_halt;
    int o_reset;
    int o_mreq;
    int o_sound;
    int o_zres;
    int o_zbr;
    int o_wait;
    int o_ce0;
    int o_disk;
    int o_test0;
    int o_jap;
    int o_fres;
    int o_zv;
    int o_vz;
    int o_io;
} fc1004_t;

