#pragma once

#include "common.h"

typedef struct {
    sdffr_t dff1;
    sdffs_t dff2;
    int w3;
    int w10;
    int w15; // sega register address
    int l1;
    int l2;
    int w20;
    int w23; // bank register address
    sdffr_t dff3; // bank register
    int w28;
    int w31;
    int w38;
    int w39;
    int w40;
    int w41;
    int w50;
    int w51;
    int w52;
    int w53;
    int w54;
    int w55;
    int w56;
    int w57;
    int w58;
    int w59;
    int w62;

    int ext_data_out;
    int ext_data_in;
    int ext_test;
    int ext_jap;
    int ext_as_in;
    int ext_lds_in;
    int ext_uds_in;
    int ext_rw_in;
    int ext_dtack_out;
    int ext_address_in;
    int ext_cpu_reset;
    int ext_intak_vdp;
    int ext_sres;
    int ext_ce0_arb;
    int ext_ce0_tmss;
    int ext_m3;
    int ext_cart;
    int ext_test_0;
    int ext_test_1;
    int ext_test_2;
    int ext_test_3;
    int ext_test_4;
    int ext_data_out_en;
} tmss_t;