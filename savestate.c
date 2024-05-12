// Save state support.
#include <stdio.h>
#include "common.h"
#include "savestate.h"

static int save_blob(void* ptr, size_t size, FILE* f)
{
	size_t written = fwrite (ptr, 1, size, f);
	if (written != size)
		return -1;
	return 0;
}

static int load_blob(void* ptr, size_t size, FILE* f)
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

static int load_delay(delaychain_t** delay_ptr, FILE* f)
{

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

	// 68K

	// Z80

	// Chipset

	// Cart

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

	// 68K

	// Z80

	// Chipset

	// Cart

	fclose(f);
	return 0;
}
