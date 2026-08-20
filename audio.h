/** @file audio.h @brief SDL audio output: initialization, shutdown and per-cycle update entry points. */

#pragma once

void Audio_Init(char* audioout_filename, int ntsc);
void Audio_Shutdown(void);
void Audio_Update(void);
