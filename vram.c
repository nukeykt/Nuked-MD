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

/** @file vram.c @brief VRAM high-level emulation: cycle-accurate bank model, flat CPU view and save/load support. */

#include <stdio.h>
#include <string.h>

#include "fc1004.h"
#include "vram.h"
#include "savestate.h"

extern fc1004_t ym;

/** VRAM bank 0 (first 64K) and bank 1 (second 64K) high-level models. */
static vram_bank_t bank0, bank1;
/** Flat, unscrambled 128K view of the combined VRAM as seen by the CPU. */
static int vram_flat[128 * 1024];

/**
 * @brief Updates one VRAM bank from the VDP's current output signals.
 *
 * Latches the VDP RAS/CAS/WE/OE/SC/SE/AD signals into @p bank and emulates the
 * DRAM timing: row/column address latching, page caching, reads driving
 * i_vram_ad/i_vram_rd, writes updating the bank memory and the flat
 * (unscrambled) view, and serial/shift-register access driving i_vram_sd.
 *
 * @param bank The VRAM bank to update.
 * @param id Bank id: 0 uses the VDP o_vram_we0/o_vram_ad signals, 1 uses
 *            o_vram_we1/o_vram_se1/o_vram_rd.
 */
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


/**
 * @brief Updates both VRAM banks (0 and 1) from the VDP output signals.
 */
void update_vram()
{
    update_vram_bank(&bank0, 0);
    update_vram_bank(&bank1, 1);
}

/**
 * @brief Serializes both VRAM banks and the flat view to a file.
 *
 * @param f Open file to write to.
 * @return 0 on success, -1 on write failure.
 */
int vram_save(FILE* f)
{
    if (save_blob(&bank0, sizeof(bank0), f))
        return -1;
    if (save_blob(&bank1, sizeof(bank1), f))
        return -1;
    if (save_blob(&vram_flat, sizeof(vram_flat), f))
        return -1;
    return 0;
}

/**
 * @brief Restores both VRAM banks and the flat view from a file.
 *
 * @param f Open file to read from.
 * @return 0 on success, -1 on read failure.
 */
int vram_load(FILE* f)
{
    if (load_blob(&bank0, sizeof(bank0), f))
        return -1;
    if (load_blob(&bank1, sizeof(bank1), f))
        return -1;
    if (load_blob(&vram_flat, sizeof(vram_flat), f))
        return -1;
    return 0;
}
