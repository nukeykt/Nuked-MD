/** @file savestate.h @brief Save state support: default save name, file header structure and serialization API. */

// Save state support.

#pragma once

/** Default file name used for save states. */
#define DEFAULT_SAVE_NAME "nukedmd.sav"

#pragma pack(push, 1)
typedef struct _NukedSaveHeader
{
	char type[4];		/**< Save format identifier, always "MD\0\0". */
	char version[12];	/**< Emulator version string that produced the save. */
} NukedSaveHeader;
#pragma pack(pop)

int save_state(const char* filename);
int load_state(const char* filename);

int save_blob(void* ptr, size_t size, FILE* f);
int load_blob(void* ptr, size_t size, FILE* f);
