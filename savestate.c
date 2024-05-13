// Save state support.
#include <stdio.h>
#include <string.h>
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
	if (save_blob(&tmss_rom, sizeof(tmss_rom), f))
		return -1;

	// Cart

	if (cart_save(f))
		return -1;

	printf("Saved state: %s\n", filename);
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

	if (!(hdr.type[0] == 'M' && hdr.type[1] == 'D')) {
		printf("Invalid save type\n");
		return -2;
	}
	if (strcmp(hdr.version, VERSION) != 0) {
		printf("Invalid save version");
		return -3;
	}

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
	if (load_blob(&tmss_rom, sizeof(tmss_rom), f))
		return -1;

	// Cart

	if (cart_load(f))
		return -1;

	printf("Loaded state: %s\n", filename);
	fclose(f);
	return 0;
}
