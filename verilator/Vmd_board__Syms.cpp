// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmd_board__pch.h"
#include "Vmd_board.h"
#include "Vmd_board___024root.h"

// FUNCTIONS
Vmd_board__Syms::~Vmd_board__Syms()
{
}

Vmd_board__Syms::Vmd_board__Syms(VerilatedContext* contextp, const char* namep, Vmd_board* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(3970);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
