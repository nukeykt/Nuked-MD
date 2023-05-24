
#pragma once

typedef struct {
    int ras;
    int cas;
    int we0;
    int oe1;
    int sc;
    int se0;
    int ad;
} vram_input_t;

void update_vram();
