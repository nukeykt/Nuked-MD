// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board__Syms.h"
#include "Vmd_board___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmd_board___024root___dump_triggers__stl(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmd_board___024root___eval_triggers__stl(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla4__0));
    vlSelf->__VstlTriggered.set(2U, ((vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                      != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla2__0) 
                                     | (vlSelf->md_board__DOT__m68k__DOT__w597 
                                        != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w597__0)));
    vlSelf->__VstlTriggered.set(3U, (vlSelf->md_board__DOT__m68k__DOT__w597 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w597__0));
    vlSelf->__VstlTriggered.set(4U, (0U != (((((vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[0U]) 
                                               | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[1U])) 
                                              | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[2U])) 
                                             | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[3U])) 
                                            | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[4U]))));
    vlSelf->__VstlTriggered.set(5U, (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla1__0));
    vlSelf->__VstlTriggered.set(6U, (vlSelf->md_board__DOT__m68k__DOT__w954 
                                     != vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w954__0));
    vlSelf->__VstlTriggered.set(7U, (0U != ((((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[0U]) 
                                              | (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[1U])) 
                                             | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[2U])) 
                                            | (vlSelf->md_board__DOT__z80__DOT__pla[3U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[3U]))));
    vlSelf->__VstlTriggered.set(8U, ((IData)(vlSelf->md_board__DOT__z80__DOT__c_in) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__c_in__0)));
    vlSelf->__VstlTriggered.set(9U, (0U != ((((((vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[0U]) 
                                                | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[1U])) 
                                               | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[2U])) 
                                              | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[3U])) 
                                             | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[4U])) 
                                            | (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[5U]))));
    vlSelf->__VstlTriggered.set(0xaU, ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__cla__0)));
    vlSelf->__VstlTriggered.set(0xbU, ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__ym__DOT__fm__DOT__reg_sl__0)));
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla4__0 
        = vlSelf->md_board__DOT__m68k__DOT__ird_pla4;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla2__0 
        = vlSelf->md_board__DOT__m68k__DOT__ird_pla2;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w597__0 
        = vlSelf->md_board__DOT__m68k__DOT__w597;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[0U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[1U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[2U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[3U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a2_pla__0[4U] 
        = vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__ird_pla1__0 
        = vlSelf->md_board__DOT__m68k__DOT__ird_pla1;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__w954__0 
        = vlSelf->md_board__DOT__m68k__DOT__w954;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[0U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[0U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[1U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[1U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[2U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[2U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__pla__0[3U] 
        = vlSelf->md_board__DOT__z80__DOT__pla[3U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__c_in__0 
        = vlSelf->md_board__DOT__z80__DOT__c_in;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[0U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[1U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[2U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[3U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[4U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__m68k__DOT__a0_pla__0[5U] 
        = vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U];
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__z80__DOT__cla__0 
        = vlSelf->md_board__DOT__z80__DOT__cla;
    vlSelf->__Vtrigprevexpr___TOP__md_board__DOT__ym__DOT__fm__DOT__reg_sl__0 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
        vlSelf->__VstlTriggered.set(9U, 1U);
        vlSelf->__VstlTriggered.set(0xaU, 1U);
        vlSelf->__VstlTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmd_board___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
