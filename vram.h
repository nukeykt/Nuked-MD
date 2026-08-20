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

/** @file vram.h @brief VRAM high-level emulation: bank input/output structures and update/save/load API. */

#pragma once

#pragma pack(push, 1)

typedef struct {
    int ras;        /**< Row address strobe input. */
    int cas;        /**< Column address strobe input. */
    int we0;        /**< Write enable input. */
    int oe1;        /**< Output enable input. */
    int sc;         /**< Serial clock input. */
    int se0;        /**< Serial output enable input. */
    int ad;         /**< Address input (latched on RAS/CAS edges). */
    int rd;         /**< Read data output (bank 1) / address echo (bank 0). */
} vram_input_t;

typedef struct {
    vram_input_t vram_input, vram_input_o;  /**< Current input signals; vram_input_o holds the previous set for edge detection. */
    int vram[64 * 1024];        /**< Bank memory array (64K entries, one int per address). */
    int vram_page[256];         /**< Cached 256-entry page of vram used for serial access. */
    int vram_addr;              /**< Current latched row/column address within the bank. */
    int vram_dt;                /**< Data transfer flag (latched from OE on the RAS falling edge). */
    int vram_addr_ser;          /**< Serial address counter for the shift-register read. */
    int vram_ser;               /**< Serial output value (shift-register data). */
    int vram_addr_o;            /**< Previous address latch (part of the serialized state). */
} vram_bank_t;

#pragma pack(pop)

void update_vram();

int vram_save(FILE* f);
int vram_load(FILE* f);
