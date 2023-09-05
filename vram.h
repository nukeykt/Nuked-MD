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

#pragma once

typedef struct {
    int ras;
    int cas;
    int we0;
    int oe1;
    int sc;
    int se0;
    int ad;
    int rd;
} vram_input_t;

typedef struct {
    vram_input_t vram_input, vram_input_o;
    int vram[64 * 1024];
    int vram_page[256];
    int vram_addr;
    int vram_dt;
    int vram_addr_ser;
    int vram_ser;
    int vram_addr_o;
} vram_bank_t;

void update_vram();
