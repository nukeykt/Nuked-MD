// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmd_board__pch.h"

//============================================================
// Constructors

Vmd_board::Vmd_board(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmd_board__Syms(contextp(), _vcname__, this)}
    , PA_i{vlSymsp->TOP.PA_i}
    , PB_i{vlSymsp->TOP.PB_i}
    , PC_i{vlSymsp->TOP.PC_i}
    , jap{vlSymsp->TOP.jap}
    , ext_reset{vlSymsp->TOP.ext_reset}
    , tmss_enable{vlSymsp->TOP.tmss_enable}
    , vdp_psg_clk1{vlSymsp->TOP.vdp_psg_clk1}
    , pal{vlSymsp->TOP.pal}
    , vdp_intfield{vlSymsp->TOP.vdp_intfield}
    , vdp_m2{vlSymsp->TOP.vdp_m2}
    , cart_cas2{vlSymsp->TOP.cart_cas2}
    , vdp_dma_oe_early{vlSymsp->TOP.vdp_dma_oe_early}
    , vdp_dma{vlSymsp->TOP.vdp_dma}
    , ram_z80_o{vlSymsp->TOP.ram_z80_o}
    , ram_z80_wren{vlSymsp->TOP.ram_z80_wren}
    , ram_68k_address{vlSymsp->TOP.ram_68k_address}
    , MOL_2612{vlSymsp->TOP.MOL_2612}
    , MOR_2612{vlSymsp->TOP.MOR_2612}
    , A_L_2612{vlSymsp->TOP.A_L_2612}
    , A_R_2612{vlSymsp->TOP.A_R_2612}
    , V_VS{vlSymsp->TOP.V_VS}
    , vdp_m5{vlSymsp->TOP.vdp_m5}
    , cart_data_en{vlSymsp->TOP.cart_data_en}
    , DAC_ch_index{vlSymsp->TOP.DAC_ch_index}
    , PSG{vlSymsp->TOP.PSG}
    , V_HS{vlSymsp->TOP.V_HS}
    , vdp_rs1{vlSymsp->TOP.vdp_rs1}
    , vdp_lcb{vlSymsp->TOP.vdp_lcb}
    , cart_time{vlSymsp->TOP.cart_time}
    , vdp_de_h{vlSymsp->TOP.vdp_de_h}
    , vdp_de_v{vlSymsp->TOP.vdp_de_v}
    , dma_z80_req{vlSymsp->TOP.dma_z80_req}
    , tmss_address{vlSymsp->TOP.tmss_address}
    , cart_address{vlSymsp->TOP.cart_address}
    , PA_d{vlSymsp->TOP.PA_d}
    , PB_d{vlSymsp->TOP.PB_d}
    , cart_cs{vlSymsp->TOP.cart_cs}
    , ram_68k_data{vlSymsp->TOP.ram_68k_data}
    , cart_data_wr{vlSymsp->TOP.cart_data_wr}
    , cart_oe{vlSymsp->TOP.cart_oe}
    , PA_o{vlSymsp->TOP.PA_o}
    , PB_o{vlSymsp->TOP.PB_o}
    , ext_zres{vlSymsp->TOP.ext_zres}
    , vdp_hsync2{vlSymsp->TOP.vdp_hsync2}
    , dma_z80_ack{vlSymsp->TOP.dma_z80_ack}
    , cart_m3_pause{vlSymsp->TOP.cart_m3_pause}
    , ram_68k_o{vlSymsp->TOP.ram_68k_o}
    , cart_data{vlSymsp->TOP.cart_data}
    , tmss_data{vlSymsp->TOP.tmss_data}
    , V_CS{vlSymsp->TOP.V_CS}
    , vdp_cramdot_dis{vlSymsp->TOP.vdp_cramdot_dis}
    , ext_dtack{vlSymsp->TOP.ext_dtack}
    , dma_68k_req{vlSymsp->TOP.dma_68k_req}
    , res_z80{vlSymsp->TOP.res_z80}
    , ram_68k_byteena{vlSymsp->TOP.ram_68k_byteena}
    , ram_68k_wren{vlSymsp->TOP.ram_68k_wren}
    , cart_lwr{vlSymsp->TOP.cart_lwr}
    , cart_uwr{vlSymsp->TOP.cart_uwr}
    , fm_clk1{vlSymsp->TOP.fm_clk1}
    , ym2612_status_enable{vlSymsp->TOP.ym2612_status_enable}
    , A_L{vlSymsp->TOP.A_L}
    , A_R{vlSymsp->TOP.A_R}
    , MOL{vlSymsp->TOP.MOL}
    , MOR{vlSymsp->TOP.MOR}
    , V_R{vlSymsp->TOP.V_R}
    , V_G{vlSymsp->TOP.V_G}
    , V_B{vlSymsp->TOP.V_B}
    , cart_dma{vlSymsp->TOP.cart_dma}
    , ext_vres{vlSymsp->TOP.ext_vres}
    , M3{vlSymsp->TOP.M3}
    , ram_z80_data{vlSymsp->TOP.ram_z80_data}
    , PC_o{vlSymsp->TOP.PC_o}
    , PC_d{vlSymsp->TOP.PC_d}
    , ram_z80_address{vlSymsp->TOP.ram_z80_address}
    , fm_sel23{vlSymsp->TOP.fm_sel23}
    , reset_button{vlSymsp->TOP.reset_button}
    , vdp_hclk1{vlSymsp->TOP.vdp_hclk1}
    , MCLK2{vlSymsp->TOP.MCLK2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmd_board::Vmd_board(const char* _vcname__)
    : Vmd_board(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmd_board::~Vmd_board() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmd_board___024root___eval_debug_assertions(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG
void Vmd_board___024root___eval_static(Vmd_board___024root* vlSelf);
void Vmd_board___024root___eval_initial(Vmd_board___024root* vlSelf);
void Vmd_board___024root___eval_settle(Vmd_board___024root* vlSelf);
void Vmd_board___024root___eval(Vmd_board___024root* vlSelf);

void Vmd_board::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmd_board::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmd_board___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmd_board___024root___eval_static(&(vlSymsp->TOP));
        Vmd_board___024root___eval_initial(&(vlSymsp->TOP));
        Vmd_board___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmd_board___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmd_board::eventsPending() { return false; }

uint64_t Vmd_board::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmd_board::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmd_board___024root___eval_final(Vmd_board___024root* vlSelf);

VL_ATTR_COLD void Vmd_board::final() {
    Vmd_board___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmd_board::hierName() const { return vlSymsp->name(); }
const char* Vmd_board::modelName() const { return "Vmd_board"; }
unsigned Vmd_board::threads() const { return 4; }
void Vmd_board::prepareClone() const { contextp()->prepareClone(); }
void Vmd_board::atClone() const {
    vlSymsp->__Vm_threadPoolp = static_cast<VlThreadPool*>(contextp()->threadPoolpOnClone());
}
