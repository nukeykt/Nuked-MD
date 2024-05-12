// Save state support.
#include <stdio.h>
#include "common.h"
#include "savestate.h"
#include "md.h"
#include "vram.h"
#include "cartridge.h"

int save_blob(void* ptr, size_t size, FILE* f)
{
	size_t written = fwrite (ptr, 1, size, f);
	if (written != size)
		return -1;
	return 0;
}

int load_blob(void* ptr, size_t size, FILE* f)
{
	size_t readed = fread(ptr, 1, size, f);
	if (readed != size)
		return -1;
	return 0;
}

static int save_delay(delaychain_t* delay_ptr, FILE* f)
{
	size_t n;

	if (save_blob(&delay_ptr->lastcycle, sizeof(delay_ptr->lastcycle), f))
		return -1;
	if (save_blob(&delay_ptr->items, sizeof(delay_ptr->items), f))
		return -1;
	if (save_blob(&delay_ptr->pos, sizeof(delay_ptr->pos), f))
		return -1;
	if (save_blob(&delay_ptr->lastval, sizeof(delay_ptr->lastval), f))
		return -1;

	for (n = 0; n < delay_ptr->items; n++) {
		if (save_blob(&delay_ptr->fifo[n], sizeof(delay_ptr->fifo[n]), f))
			return -1;
	}
	return 0;
}

static int load_delay(delaychain_t* delay_ptr, FILE* f)
{
	size_t n;

	if (load_blob(&delay_ptr->lastcycle, sizeof(delay_ptr->lastcycle), f))
		return -1;
	if (load_blob(&delay_ptr->items, sizeof(delay_ptr->items), f))
		return -1;
	if (load_blob(&delay_ptr->pos, sizeof(delay_ptr->pos), f))
		return -1;
	if (load_blob(&delay_ptr->lastval, sizeof(delay_ptr->lastval), f))
		return -1;

	if (delay_ptr->fifo) {
		free(delay_ptr->fifo);
		delay_ptr->fifo = 0;
	}

	delay_ptr->fifo = (int*)malloc(delay_ptr->items * sizeof(int));
	if (!delay_ptr->fifo)
		return -1;

	for (n = 0; n < delay_ptr->items; n++) {
		if (load_blob(&delay_ptr->fifo[n], sizeof(delay_ptr->fifo[n]), f))
			return -1;
	}
	return 0;
}

int save_state(const char* filename)
{
	FILE* f;

	f = fopen(filename, "wb");
	if (!f)
		return -1;

	// Header

	NukedSaveHeader hdr = { 0 };

	hdr.type[0] = 'M';
	hdr.type[1] = 'D';
	strcpy(hdr.version, VERSION);

	if (save_blob(&hdr, sizeof(hdr), f))
		return -1;

	// Board

	if (save_blob(&md, sizeof(md), f))
		return -1;
	if (save_blob(&mcycles, sizeof(mcycles), f))
		return -1;
	if (save_blob(&ram, sizeof(ram), f))
		return -1;
	if (save_blob(&zram, sizeof(zram), f))
		return -1;
	if (vram_save(f))
		return -1;

	// 68K

	if (save_blob(&m68k, sizeof(m68k), f))
		return -1;

	// Z80

	if (save_blob(&z80, sizeof(z80), f))
		return -1;

	// Chipset

	if (save_blob(&ym, sizeof(ym), f))
		return -1;
	// TBD: Delays

	// Cart

	if (cart_save(f))
		return -1;

	fclose(f);
	return 0;
}

int load_state(const char* filename)
{
	FILE* f;

	f = fopen(filename, "rb");
	if (!f)
		return -1;

	// Check version (Header)

	NukedSaveHeader hdr = { 0 };

	if (load_blob(&hdr, sizeof(hdr), f))
		return -1;

	if (!(hdr.type[0] == 'M' && hdr.type[1] == 'D'))
		return -2;		// Invalid save type
	if (strcmp(hdr.version, VERSION) != 0)
		return -3;		// Invalid save version

	// Board

	if (load_blob(&md, sizeof(md), f))
		return -1;
	if (load_blob(&mcycles, sizeof(mcycles), f))
		return -1;
	if (load_blob(&ram, sizeof(ram), f))
		return -1;
	if (load_blob(&zram, sizeof(zram), f))
		return -1;
	if (vram_load(f))
		return -1;

	// 68K

	if (load_blob(&m68k, sizeof(m68k), f))
		return -1;

	// Z80

	if (load_blob(&z80, sizeof(z80), f))
		return -1;

	// Chipset

	if (load_blob(&ym, sizeof(ym), f))
		return -1;
	// TBD: Delays

	// Cart

	if (cart_load(f))
		return -1;

	fclose(f);
	return 0;
}
