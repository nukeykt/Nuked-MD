// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMD_BOARD__SYMS_H_
#define VERILATED_VMD_BOARD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmd_board.h"

// INCLUDE MODULE CLASSES
#include "Vmd_board___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmd_board__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmd_board* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MULTI-THREADING
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle__ico = false;
    bool __Vm_even_cycle__act = false;
    bool __Vm_even_cycle__nba = false;

    // MODULE INSTANCE STATE
    Vmd_board___024root            TOP;

    // CONSTRUCTORS
    Vmd_board__Syms(VerilatedContext* contextp, const char* namep, Vmd_board* modelp);
    ~Vmd_board__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
