// Save state support.

#pragma once

#pragma pack(push, 1)
typedef struct _NukedSaveHeader
{
	char type[4];		// "MD\0\0"
	char version[12];
} NukedSaveHeader;
#pragma pack(pop)

int save_state(const char* filename);
int load_state(const char* filename);

int save_blob(void* ptr, size_t size, FILE* f);
int load_blob(void* ptr, size_t size, FILE* f);
