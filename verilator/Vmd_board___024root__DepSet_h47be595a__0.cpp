// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board__Syms.h"
#include "Vmd_board___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmd_board___024root___dump_triggers__ico(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG

void Vmd_board___024root___eval_triggers__ico(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmd_board___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmd_board___024root___dump_triggers__act(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG

void Vmd_board___024root___eval_triggers__act(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->MCLK2) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MCLK2__0))));
    vlSelf->__VactTriggered.set(1U, (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla4__1));
    vlSelf->__VactTriggered.set(2U, ((vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                      != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla2__1) 
                                     | (vlSelf->md_board__DOT__m68k__DOT__w597 
                                        != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w597__1)));
    vlSelf->__VactTriggered.set(3U, (vlSelf->md_board__DOT__m68k__DOT__w597 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w597__1));
    vlSelf->__VactTriggered.set(4U, (0U != (((((vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[0U]) 
                                               | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[1U])) 
                                              | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[2U])) 
                                             | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[3U])) 
                                            | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[4U]))));
    vlSelf->__VactTriggered.set(5U, (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla1__1));
    vlSelf->__VactTriggered.set(6U, (vlSelf->md_board__DOT__m68k__DOT__w954 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w954__1));
    vlSelf->__VactTriggered.set(7U, (0U != ((((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[0U]) 
                                              | (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[1U])) 
                                             | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[2U])) 
                                            | (vlSelf->md_board__DOT__z80__DOT__pla[3U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[3U]))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->md_board__DOT__z80__DOT__c_in) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__c_in__1)));
    vlSelf->__VactTriggered.set(9U, (0U != ((((((vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[0U]) 
                                                | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[1U])) 
                                               | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[2U])) 
                                              | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[3U])) 
                                             | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[4U])) 
                                            | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[5U]))));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__cla__1)));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__ym__DOT__fm__DOT__reg_sl__1)));
    vlSelf->__Vtrigprevexpr___TOP__MCLK2__0 = vlSelf->MCLK2;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla4__1 
        = vlSelf->md_board__DOT__m68k__DOT__ird_pla4;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla2__1 
        = vlSelf->md_board__DOT__m68k__DOT__ird_pla2;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w597__1 
        = vlSelf->md_board__DOT__m68k__DOT__w597;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[0U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[1U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[2U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[3U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__1[4U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla1__1 
        = vlSelf->md_board__DOT__m68k__DOT__ird_pla1;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w954__1 
        = vlSelf->md_board__DOT__m68k__DOT__w954;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[0U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[0U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[1U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[1U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[2U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[2U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__1[3U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[3U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__c_in__1 
        = vlSelf->md_board__DOT__z80__DOT__c_in;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[0U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[1U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[2U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[3U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[4U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__1[5U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__cla__1 
        = vlSelf->md_board__DOT__z80__DOT__cla;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__ym__DOT__fm__DOT__reg_sl__1 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmd_board___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vmd_board___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void Vmd_board___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void Vmd_board___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void Vmd_board___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);

void Vmd_board___024root___eval_nba(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vmd_board___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vmd_board___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vmd_board___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vmd_board___024root____Vthread__nba__3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vmd_board___024root___nba_sequent__TOP__0(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask0(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask0\n"); );
    // Body
    Verilated::mtaskId(0);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__1(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask1(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask1\n"); );
    // Body
    Verilated::mtaskId(1);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__2(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask2(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask2\n"); );
    // Body
    Verilated::mtaskId(2);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__3(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask3(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask3\n"); );
    // Body
    Verilated::mtaskId(3);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__4(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask4(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask4\n"); );
    // Body
    Verilated::mtaskId(4);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__5(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask5(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask5\n"); );
    // Body
    Verilated::mtaskId(5);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__6(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask6(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask6\n"); );
    // Body
    Verilated::mtaskId(6);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__7(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask7(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask7\n"); );
    // Body
    Verilated::mtaskId(7);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__8(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__0(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask8(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask8\n"); );
    // Body
    Verilated::mtaskId(8);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x201ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__9(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask9(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask9\n"); );
    // Body
    Verilated::mtaskId(9);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__10(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask10(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask10\n"); );
    // Body
    Verilated::mtaskId(10);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__10(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__11(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask11(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask11\n"); );
    // Body
    Verilated::mtaskId(11);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__11(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__12(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask12(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask12\n"); );
    // Body
    Verilated::mtaskId(12);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__12(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__13(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask13(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask13\n"); );
    // Body
    Verilated::mtaskId(13);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__14(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask14(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask14\n"); );
    // Body
    Verilated::mtaskId(14);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__14(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__15(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask15(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask15\n"); );
    // Body
    Verilated::mtaskId(15);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__15(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__16(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask16(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask16\n"); );
    // Body
    Verilated::mtaskId(16);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__16(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__17(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__1(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__2(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask17(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask17\n"); );
    // Body
    Verilated::mtaskId(17);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__18(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask18(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask18\n"); );
    // Body
    Verilated::mtaskId(18);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__18(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__19(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__3(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask19(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask19\n"); );
    // Body
    Verilated::mtaskId(19);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__20(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask20(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask20\n"); );
    // Body
    Verilated::mtaskId(20);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__20(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__21(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask21(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask21\n"); );
    // Body
    Verilated::mtaskId(21);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__21(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__22(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask22(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask22\n"); );
    // Body
    Verilated::mtaskId(22);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__22(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__23(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask23(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask23\n"); );
    // Body
    Verilated::mtaskId(23);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__23(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__24(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__4(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask24(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask24\n"); );
    // Body
    Verilated::mtaskId(24);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__25(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__5(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask25(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask25\n"); );
    // Body
    Verilated::mtaskId(25);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__26(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__6(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask26(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask26\n"); );
    // Body
    Verilated::mtaskId(26);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__27(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__7(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask27(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask27\n"); );
    // Body
    Verilated::mtaskId(27);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__28(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__8(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__9(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__4(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask28(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask28\n"); );
    // Body
    Verilated::mtaskId(28);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x481ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__29(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask29(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask29\n"); );
    // Body
    Verilated::mtaskId(29);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__29(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__30(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__11(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__7(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__13(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask30(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask30\n"); );
    // Body
    Verilated::mtaskId(30);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__31(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask31(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask31\n"); );
    // Body
    Verilated::mtaskId(31);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__31(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__32(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask32(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask32\n"); );
    // Body
    Verilated::mtaskId(32);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__32(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__33(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__14(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__3(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask33(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask33\n"); );
    // Body
    Verilated::mtaskId(33);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0xdULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__34(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__16(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask34(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask34\n"); );
    // Body
    Verilated::mtaskId(34);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__16(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__35(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__17(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__18(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__19(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__5(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask35(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask35\n"); );
    // Body
    Verilated::mtaskId(35);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x49ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__36(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__6(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask36(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask36\n"); );
    // Body
    Verilated::mtaskId(36);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root___nba_sequent__TOP__37(Vmd_board___024root* vlSelf);
void Vmd_board___024root___nba_comb__TOP__22(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__1(Vmd_board___024root* vlSelf);

void Vmd_board___024root__nba_mtask37(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root__nba_mtask37\n"); );
    // Body
    Verilated::mtaskId(37);
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vmd_board___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root____Vthread__nba__0\n"); );
    // Body
    Vmd_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmd_board___024root*>(voidSelf);
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmd_board___024root__nba_mtask0(vlSelf);
    vlSelf->__Vm_mtaskstate_2.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_3.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask4(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_10.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask10(vlSelf);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask18(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask16(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask24(vlSelf);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_28.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask30(vlSelf);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask29(vlSelf);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask32(vlSelf);
    vlSelf->__Vm_mtaskstate_34.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask34(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vmd_board___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root____Vthread__nba__1\n"); );
    // Body
    Vmd_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmd_board___024root*>(voidSelf);
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmd_board___024root__nba_mtask9(vlSelf);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_8.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask8(vlSelf);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask14(vlSelf);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_3.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask3(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask23(vlSelf);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask21(vlSelf);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_28.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask28(vlSelf);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask37(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vmd_board___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root____Vthread__nba__2\n"); );
    // Body
    Vmd_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmd_board___024root*>(voidSelf);
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmd_board___024root__nba_mtask1(vlSelf);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask13(vlSelf);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask19(vlSelf);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask17(vlSelf);
    vlSelf->__Vm_mtaskstate_28.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask25(vlSelf);
    vlSelf->__Vm_mtaskstate_28.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask22(vlSelf);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask27(vlSelf);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask26(vlSelf);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask36(vlSelf);
    vlSelf->__Vm_mtaskstate_33.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask33(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vmd_board___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root____Vthread__nba__3\n"); );
    // Body
    Vmd_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmd_board___024root*>(voidSelf);
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmd_board___024root__nba_mtask7(vlSelf);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_2.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask2(vlSelf);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask15(vlSelf);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask12(vlSelf);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask11(vlSelf);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask20(vlSelf);
    vlSelf->__Vm_mtaskstate_31.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask31(vlSelf);
    vlSelf->__Vm_mtaskstate_35.waitUntilUpstreamDone(even_cycle);
    Vmd_board___024root__nba_mtask35(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
