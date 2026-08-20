/**
 * @file fj3002.h
 * @brief FJ3002 (WIP) — top-level chip state; currently only the FM sub-chip is defined.
 */

#pragma once
#include "fj3002_fm.h"


/**
 * @brief FJ3002 top-level emulation state (WIP).
 *
 * Holds the FM sub-chip state; further sub-chips are expected to be
 * added as the emulation develops.
 */
typedef struct {

	fj3002_fm_t fm; /**< FM sub-chip state (see fj3002_fm_t). */

} fj3002_t;
