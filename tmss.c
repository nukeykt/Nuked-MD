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
 *  TMSS(FC1004) emulator
 *  Thanks:
 *      org (ogamespec):
 *          FC1004 decap and die shot.
 *      andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *
 */

// FC1004 TMSS
#include <string.h>
#include <stdio.h>
#include "tmss.h"
#include "cartridge.h"

unsigned short tmss_rom[1024];
#define MAGIC_SE   0x00005345 /* SE */
#define MAGIC_GA   0x00004741 /* GA */

void TMSS_Clock(tmss_t *chip)
{
    SDFFR_Update(&chip->dff1, chip->w40, chip->w3, chip->input.ext_sres);
    SDFFS_Update(&chip->dff2, chip->w10, chip->dff1.q, chip->input.ext_sres);

    chip->w3 = chip->l1 == MAGIC_SE && chip->l2 == MAGIC_GA;

    chip->ext_cpu_reset = !(chip->input.ext_jap && chip->dff2.nq) || chip->ext_test_4;

    chip->w10 = !(!chip->input.ext_as_in && (chip->input.ext_address_in & 0x700000) == 0x600000); // VDP range

    chip->w15 = !chip->input.ext_as_in && !chip->input.ext_lds_in && (chip->input.ext_address_in & 0x7ffffe) == 0x50a000 && !chip->input.ext_uds_in;
    chip->w23 = !chip->input.ext_as_in && !chip->input.ext_lds_in && (chip->input.ext_address_in & 0x7fffff) == 0x50a080;

    chip->ext_dtack_out = !((chip->w15 || chip->w23) && chip->input.ext_intak_vdp) || chip->ext_test_4;

    chip->w40 = !(!chip->input.ext_rw_in && chip->w15);
    chip->w41 = !(chip->input.ext_rw_in && chip->w15);


#if TMSS_ENABLE
    SDFFR_Update(&chip->dff3, !chip->w23 || chip->input.ext_rw_in, (chip->input.ext_data_in & 1) != 0, chip->input.ext_sres);
#else
    SDFFS_Update(&chip->dff3, !chip->w23 || chip->input.ext_rw_in, (chip->input.ext_data_in & 1) != 0, chip->input.ext_sres);
#endif

    chip->w31 = chip->input.ext_cart || !chip->input.ext_m3;
    chip->w28 = chip->dff3.l2 || chip->w31 || chip->input.ext_ce0_arb;
    chip->ext_ce0_tmss = !(chip->dff3.l2 || chip->w31) || chip->input.ext_ce0_arb;

    chip->w38 = (chip->input.ext_address_in & 1) == 0 && !chip->input.ext_rw_in && chip->w15;
    if (chip->w38)
        chip->l1 = chip->input.ext_data_in;
    chip->w39 = (chip->input.ext_address_in & 1) != 0 && !chip->input.ext_rw_in && chip->w15;
    if (chip->w39)
        chip->l2 = chip->input.ext_data_in;


    chip->ext_data_out_en = (chip->w41 && chip->w28) || chip->ext_test_4;

    chip->w50 = (chip->input.ext_test & 7) != 0;
    chip->w51 = (chip->input.ext_test & 7) != 1;
    chip->w53 = (chip->input.ext_test & 7) != 2;
    chip->w54 = (chip->input.ext_test & 7) != 3;
    chip->w55 = (chip->input.ext_test & 7) != 4;
    chip->w56 = (chip->input.ext_test & 7) != 7;

    chip->w52 = chip->w50 ^ chip->w56;
    chip->w57 = chip->w51 ^ chip->w56;
    chip->w58 = chip->w53 ^ chip->w56;
    chip->w59 = chip->w54 ^ chip->w56;
    chip->w62 = chip->w56 ^ chip->w55;

    chip->ext_test_0 = !chip->w52;
    chip->ext_test_1 = !chip->w57;
    chip->ext_test_2 = !chip->w58;
    chip->ext_test_3 = !chip->w59;
    chip->ext_test_4 = !chip->w62;
}

void TMSS_Clock2(tmss_t *chip)
{
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    TMSS_Clock(chip);
    TMSS_Clock(chip);
    TMSS_Clock(chip);
    chip->input_old = chip->input;
}

void TMSS_UpdateOutputBus(tmss_t *chip)
{
    if (!chip->ext_data_out_en)
    {
        chip->w20 = (chip->input.ext_address_in & 1) != 0 ? chip->l2 : chip->l1;
        *chip->ext_data_out = chip->w28 ? chip->w20 : tmss_rom[chip->input.ext_address_in & 1023];
    }
}

void load_dummy_tmss()
{
    static const short data[] = {
        0x00ff,0x000c,
        0x0000,0x0008,
        0x41f9,0x00a1,0x4101,
        0x2f3c,0x2058,0x4ed0,
        0x2f3c,0x91c8,0x2e58,
        0x2f3c,0x08d0,0x0000,
        0x4ed7
    };
    printf("loading dummy TMSS ROM\n");
    memcpy(tmss_rom, data, sizeof(data));
}

int load_tmss_rom(char *filename)
{
    size_t i, ret;
    FILE* tmss;

    tmss = fopen(filename, "rb");
    if (!tmss)
        return 1;

    fseek(tmss, 0, SEEK_END);
    size_t siz = ftell(tmss);
    rewind(tmss);
    if (siz < TMSS_SIZE * 2)
    {
        fclose(tmss);
        return 1;
    }

    ret = fread(tmss_rom, 1, TMSS_SIZE * 2, tmss);
    if (ret < TMSS_SIZE * 2)
    {
        fclose(tmss);
        return 1;
    }

    for (i = 0; i < TMSS_SIZE; i++)
        tmss_rom[i] = short_swap(tmss_rom[i]);
    fclose(tmss);
    return 0;
}
