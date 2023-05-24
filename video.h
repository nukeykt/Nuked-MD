#pragma once

#define VERSION "1.0"

#define VID_WIDTH 400
#define VID_HEIGHT 300

void Video_Init(char* videoout_filename);
void Video_Shutdown(void);
void Video_Blit(void);
void Video_PlotVDP(void);
void Video_UpdateTitle(uint64_t ms);
