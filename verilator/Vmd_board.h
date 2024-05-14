// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMD_BOARD_H_
#define VERILATED_VMD_BOARD_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmd_board__Syms;
class Vmd_board___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vmd_board VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmd_board__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&PA_i,6,0);
    VL_IN8(&PB_i,6,0);
    VL_IN8(&PC_i,6,0);
    VL_IN8(&jap,0,0);
    VL_IN8(&ext_reset,0,0);
    VL_IN8(&tmss_enable,0,0);
    VL_OUT8(&vdp_psg_clk1,0,0);
    VL_IN8(&pal,0,0);
    VL_OUT8(&vdp_intfield,0,0);
    VL_OUT8(&vdp_m2,0,0);
    VL_OUT8(&cart_cas2,0,0);
    VL_OUT8(&vdp_dma_oe_early,0,0);
    VL_OUT8(&vdp_dma,0,0);
    VL_IN8(&ram_z80_o,7,0);
    VL_OUT8(&ram_z80_wren,0,0);
    VL_OUT16(&ram_68k_address,14,0);
    VL_OUT16(&MOL_2612,9,0);
    VL_OUT16(&MOR_2612,9,0);
    VL_OUT(&A_L_2612,17,0);
    VL_OUT(&A_R_2612,17,0);
    VL_OUT8(&V_VS,0,0);
    VL_OUT8(&vdp_m5,0,0);
    VL_IN8(&cart_data_en,0,0);
    VL_OUT8(&DAC_ch_index,2,0);
    VL_OUT16(&PSG,15,0);
    VL_OUT8(&V_HS,0,0);
    VL_OUT8(&vdp_rs1,0,0);
    VL_OUT8(&vdp_lcb,0,0);
    VL_OUT8(&cart_time,0,0);
    VL_OUT8(&vdp_de_h,0,0);
    VL_OUT8(&vdp_de_v,0,0);
    VL_IN8(&dma_z80_req,0,0);
    VL_OUT16(&tmss_address,9,0);
    VL_OUT(&cart_address,22,0);
    VL_OUT8(&PA_d,6,0);
    VL_OUT8(&PB_d,6,0);
    VL_OUT8(&cart_cs,0,0);
    VL_OUT16(&ram_68k_data,15,0);
    VL_OUT16(&cart_data_wr,15,0);
    VL_OUT8(&cart_oe,0,0);
    VL_OUT8(&PA_o,6,0);
    VL_OUT8(&PB_o,6,0);
    VL_IN8(&ext_zres,0,0);
    VL_OUT8(&vdp_hsync2,0,0);
    VL_OUT8(&dma_z80_ack,0,0);
    VL_IN8(&cart_m3_pause,0,0);
    VL_IN16(&ram_68k_o,15,0);
    VL_IN16(&cart_data,15,0);
    VL_IN16(&tmss_data,15,0);
    VL_OUT8(&V_CS,0,0);
    VL_IN8(&vdp_cramdot_dis,0,0);
    VL_IN8(&ext_dtack,0,0);
    VL_IN8(&dma_68k_req,0,0);
    VL_OUT8(&res_z80,0,0);
    VL_OUT8(&ram_68k_byteena,1,0);
    VL_OUT8(&ram_68k_wren,0,0);
    VL_OUT8(&cart_lwr,0,0);
    VL_OUT8(&cart_uwr,0,0);
    VL_OUT8(&fm_clk1,0,0);
    VL_IN8(&ym2612_status_enable,0,0);
    VL_OUT16(&A_L,15,0);
    VL_OUT16(&A_R,15,0);
    VL_OUT16(&MOL,8,0);
    VL_OUT16(&MOR,8,0);
    VL_OUT8(&V_R,7,0);
    VL_OUT8(&V_G,7,0);
    VL_OUT8(&V_B,7,0);
    VL_OUT8(&cart_dma,0,0);
    VL_IN8(&ext_vres,0,0);
    VL_IN8(&M3,0,0);
    VL_OUT8(&ram_z80_data,7,0);
    VL_OUT8(&PC_o,6,0);
    VL_OUT8(&PC_d,6,0);
    VL_OUT16(&ram_z80_address,12,0);
    VL_OUT8(&fm_sel23,0,0);
    VL_IN8(&reset_button,0,0);
    VL_OUT8(&vdp_hclk1,0,0);
    VL_IN8(&MCLK2,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmd_board___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmd_board(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmd_board(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmd_board();
  private:
    VL_UNCOPYABLE(Vmd_board);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
