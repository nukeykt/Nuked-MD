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
 *  VRAM high-level emulation
 *
 */


#include <string.h>

#include "fc1004.h"
#include "vram.h"

extern fc1004_t ym;

static vram_bank_t bank0, bank1;
static int vram_flat[128 * 1024];

void update_vram_bank(vram_bank_t *bank, int id)
{
    int cas, wr, rd, owr, ord;
    int oaddr;
    int odata;
    int ocas;
    // o_vram_ras
    // o_vram_cas
    // o_vram_we0
    // o_vram_oe1
    // o_vram_sc
    // o_vram_se0
    if (id == 0)
    {
        bank->vram_input.ras = ym.vdp.o_vram_ras;
        bank->vram_input.cas = ym.vdp.o_vram_cas;
        bank->vram_input.we0 = ym.vdp.o_vram_we0;
        bank->vram_input.oe1 = ym.vdp.o_vram_oe1;
        bank->vram_input.sc = ym.vdp.o_vram_sc;
        bank->vram_input.se0 = ym.vdp.o_vram_se0;
        bank->vram_input.ad = ym.vdp.o_vram_ad;
        bank->vram_input.rd= ym.vdp.o_vram_ad;
    }
    else
    {
        bank->vram_input.ras = ym.vdp.o_vram_ras;
        bank->vram_input.cas = ym.vdp.o_vram_cas;
        bank->vram_input.we0 = ym.vdp.o_vram_we1;
        bank->vram_input.oe1 = ym.vdp.o_vram_oe1;
        bank->vram_input.sc = ym.vdp.o_vram_sc;
        bank->vram_input.se0 = ym.vdp.o_vram_se1;
        bank->vram_input.ad = ym.vdp.o_vram_ad;
        bank->vram_input.rd = ym.vdp.o_vram_rd;
    }
    if (!memcmp(&bank->vram_input, &bank->vram_input_o, sizeof(vram_input_t)))
        return;
    cas = !bank->vram_input.ras && !bank->vram_input.cas;
    wr = !bank->vram_input.ras && !bank->vram_input.cas && !bank->vram_input.we0;
    rd = !bank->vram_input.ras && !bank->vram_input.cas && !bank->vram_input.oe1 && !bank->vram_dt;

    oaddr = bank->vram_input.ad;
    odata = bank->vram_input.rd;
    if (bank->vram_dt)
    {
        if (!bank->vram_input_o.oe1 && bank->vram_input.oe1)
        {
            bank->vram_addr_ser = bank->vram_addr;
            memcpy(bank->vram_page, &bank->vram[bank->vram_addr & 0xff00], sizeof(bank->vram_page));
        }
    }

    if (bank->vram_input_o.ras && !bank->vram_input.ras)
    {
        bank->vram_dt = !bank->vram_input.oe1;
        bank->vram_addr &= ~0xff00;
        bank->vram_addr |= (oaddr & 255) << 8;
    }
    ocas = !bank->vram_input_o.ras && !bank->vram_input_o.cas;
    if (!ocas && cas)
    {
        bank->vram_addr &= ~0xff;
        bank->vram_addr |= oaddr & 255;
    }
    owr = !bank->vram_input_o.ras && !bank->vram_input_o.cas && !bank->vram_input_o.we0;
    if (!owr && wr)
    {
        int unscramble = 0;
        bank->vram[bank->vram_addr] = odata;
        if (ym.vdp.reg_81_b7)
        {
            unscramble |= bank->vram_addr & 1;
            unscramble |= (bank->vram_addr >> 7) & 0x1fe;
            unscramble |= (bank->vram_addr & 0xfe) << 8;
            vram_flat[unscramble * 2 + id] = odata;
        }
        else
        {
            unscramble |= bank->vram_addr & 3;
            unscramble |= (bank->vram_addr >> 6) & 0x3fc;
            unscramble |= (bank->vram_addr & 0xfc) << 8;
            vram_flat[unscramble] = odata;
        }
    }
    ord = !bank->vram_input_o.ras && !bank->vram_input_o.cas && !bank->vram_input_o.oe1 && !bank->vram_dt;
    if (!ord && rd)
    {
        if (id == 0)
            ym.vdp.input.i_vram_ad = bank->vram[bank->vram_addr & 0xffff];
        else
            ym.vdp.input.i_vram_rd = bank->vram[bank->vram_addr & 0xffff];
    }
    if (!bank->vram_input_o.sc && bank->vram_input.sc/* && !bank->vram_input.se0*/)
    {
        int low, high;
        int unscramble = 0;
        unscramble |= bank->vram_addr_ser & 3;
        unscramble |= (bank->vram_addr_ser >> 6) & 0x3fc;
        unscramble |= (bank->vram_addr_ser & 0xfc) << 8;
        bank->vram_ser = bank->vram_page[bank->vram_addr_ser & 0xff];
        low = bank->vram_addr_ser & 255;
        high = bank->vram_addr_ser & 0xff00;
        low++;
        low &= 255;
        bank->vram_addr_ser = high | low;
    }
    if (!bank->vram_input.se0)
    {
        ym.vdp.input.i_vram_sd = bank->vram_ser;
    }

    bank->vram_input_o = bank->vram_input;
}


void update_vram()
{
    update_vram_bank(&bank0, 0);
    update_vram_bank(&bank1, 1);
}
