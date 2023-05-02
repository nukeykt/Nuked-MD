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
    int za0_dir;
    int za1_dir;
    int za7_dir;
    int ce0_tmss;
    int fm_clk;
    int vdp_data_dir;
    int vdp_address_dir;
    int br;
    int bgack;
    int dtack;
    int colorbus;
    int fm_read;

    int old_dclk[3];

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
    int i_zaddress;
    int i_vaddress;
    int i_sres;
    int i_sel1;
    int i_vclk;
    int i_zclk;
    int i_edclk;
    int i_vdata;
    int i_bgack;
    int i_bg;
    int i_iorq;
    int i_zrd;
    int i_zwr;
    int i_m1;
    int i_as;
    int i_uds;
    int i_lds;
    int i_dtack;
    int i_lwr;
    int i_cas0;
    int i_zdata;
    int i_rw;
    int i_cart;

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
    int o_zaddress;
    int o_zaddress_dir;
    int o_vclk;
    int o_zclk;
    int o_edclk;
    int o_vdata;
    int o_vdata_dir;
    int o_vaddress;
    int o_vaddress_dir;
    int o_br;
    int o_bgack;
    int o_zrd;
    int o_zwr;
    int o_as;
    int o_uds;
    int o_lds;
    int o_dtack;
    int o_lwr;
    int o_cas0;
    int o_zdata;
    int o_zdata_dir;
    int o_rw;
} fc1004_t;


void FC1004_Init(fc1004_t *chip);
void FC1004_Destroy(fc1004_t* chip);
void FC1004_Clock(fc1004_t *chip, int mclk, uint64_t cycles);
