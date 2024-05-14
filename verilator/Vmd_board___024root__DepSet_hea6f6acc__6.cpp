// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__7(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__7\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__z80__DOT__w406;
    md_board__DOT__z80__DOT__w406 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206 = 0;
    // Body
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_241 
        = (IData)((0U != (0x2408000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_79 
        = (IData)((0U != (0x1400U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_229 
        = (IData)((0U != (0x2f0U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_223 
        = (IData)((0U != (0x14000U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT__w106 = (1U & (
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                    & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                       >> 0xdU)) 
                                                   | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                       & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                          >> 0xeU)) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                         & ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                             >> 0x1dU) 
                                                            | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                               >> 7U))))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_137 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                 & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                    >> 6U)));
    vlSelf->md_board__DOT__z80__DOT__w249 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                                                    & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                       >> 2U))));
    md_board__DOT__z80__DOT__w406 = (1U & ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                               >> 5U)) 
                                           | (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                              >> 0x12U)));
    vlSelf->md_board__DOT__z80__DOT__w218 = (1U & (
                                                   (~ 
                                                    (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                     >> 0x18U)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_205 
        = (1U & ((0U != (0xc0000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                 | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                    >> 8U)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_233 
        = (IData)((0U != (0x30800U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->__VdfgRegularize_hd87f99a1_0_86 = (IData)(
                                                      (0U 
                                                       != 
                                                       (0x46U 
                                                        & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT__w271 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x18000000U 
                                                      & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_217 
        = (IData)((0U != (6U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_209 
        = (IData)((0U != (0x28U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_216 
        = (IData)((0U != (0x90000U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202 
        = (IData)((0U != (0x60000000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT__w196 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00000U 
                                                      & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98 
        = (1U & ((~ (IData)((0U != (0x12U & vlSelf->md_board__DOT__z80__DOT__pla[1U])))) 
                 & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                    | (~ (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                          >> 5U)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_103 
        = (IData)((0U != (0x22000000U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_99 
        = (IData)((0U != (0x1800000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123 
        = (IData)((0U != (0x18U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95 
        = (IData)((0U != (0x180U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT__w234 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x60000000U 
                                                      & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206 
        = (IData)((0U != (0xc0000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_101 
        = (IData)((0U != (0x6000U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    vlSelf->md_board__DOT__z80__DOT__w86 = (1U & ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w80)) 
                                                        | (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_19)))) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)))) 
                                                  | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243) 
                                                     & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                        >> 0xaU))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236 
        = (IData)((0U != (0x37980U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs22__set 
        = (1U & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l5))) 
                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w106) 
                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w407 = (1U & (~ 
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                      >> 4U)) 
                                                    | (IData)(md_board__DOT__z80__DOT__w406))));
    vlSelf->md_board__DOT__z80__DOT__w405 = (1U & (~ 
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                      >> 4U)) 
                                                    | (~ (IData)(md_board__DOT__z80__DOT__w406)))));
    vlSelf->md_board__DOT__z80__DOT__w408 = (1U & (~ 
                                                   (((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                     >> 4U) 
                                                    | (IData)(md_board__DOT__z80__DOT__w406))));
    vlSelf->md_board__DOT__z80__DOT__w409 = (1U & (~ 
                                                   ((~ (IData)(md_board__DOT__z80__DOT__w406)) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                       >> 4U))));
    vlSelf->md_board__DOT__z80__DOT__w247 = (1U & (~ 
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_233) 
                                                      | (IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x8200000U 
                                                                   & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                                                                 | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_86))))) 
                                                    | (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                       >> 0x16U))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_218 
        = (1U & (IData)(((0U != (0x31U & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                         | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_217))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_210 
        = (1U & (((0U != (0x93000000U & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                  | vlSelf->md_board__DOT__z80__DOT__pla[1U]) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_209)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_238 
        = (1U & ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                  >> 0x1aU) | (IData)(((((0U != (0x10014180U 
                                                 & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                                         | (0U != (0xe080U 
                                                   & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
                                        | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202)) 
                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_216)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203 
        = (1U & ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                  >> 0x1cU) | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202)));
    vlSelf->md_board__DOT__z80__DOT__w315 = (1U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                      >> 2U)) 
                                                    & (~ (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                        >> 5U)) 
                                                      & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98))));
    vlSelf->md_board__DOT__z80__DOT__w317 = (1U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                      >> 1U)) 
                                                    & (~ (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                        >> 4U)) 
                                                      & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98))));
    vlSelf->md_board__DOT__z80__DOT__w318 = (1U & (
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                    & (~ (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                        >> 3U)) 
                                                      & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98))));
    vlSelf->md_board__DOT__z80__DOT__w235 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123)) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                       >> 3U))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230 
        = ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
             | (0U != (0x10800000U & vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
            | (0U != (0x8006020U & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_152 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_118) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w234));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_138 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w234));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_141 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w234));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_125 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w234));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_237 
        = (1U & (((0U != (0x2000000cU & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                  | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                     >> 8U)) | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_200 
        = (1U & (IData)(((0U != (0x300U & vlSelf->md_board__DOT__z80__DOT__pla[2U])) 
                         | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_101))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_201 
        = (1U & (IData)(((0U != (0x180U & vlSelf->md_board__DOT__z80__DOT__pla[2U])) 
                         | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_101))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_225 
        = ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
             | (0U != (0x11023000U & vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
            | (0U != (0x1080418U & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_101));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_101) 
           | (0U != (0x18000U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_232 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w86));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT__w86) 
            | (0U != (0x81300000U & vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
           | (0U != (0x1000c00U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213 
        = ((((IData)(vlSelf->md_board__DOT__z80__DOT__w86) 
             | (0U != (0x1010080U & vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
            | (0U != (0x12c0443U & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_103));
    vlSelf->md_board__DOT__z80__DOT__w225 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_183 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w247) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_210) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12));
    vlSelf->md_board__DOT__z80__DOT__w299 = (1U & (
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w524)) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w196))) 
                                                   | ((~ 
                                                       ((~ 
                                                         (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                           & (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                              >> 8U)) 
                                                          | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xa0U 
                                                                         & vlSelf->md_board__DOT__z80__DOT__pla[0U])))))) 
                                                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w445))) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->md_board__DOT__z80__DOT__w420) 
                                                           ^ (IData)(vlSelf->md_board__DOT__z80__DOT__w318))) 
                                                         & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_99)) 
                                                            | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                                & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                                   >> 0x15U)) 
                                                               | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                                  & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                                     >> 0x12U))))))));
    vlSelf->md_board__DOT__z80__DOT__w261 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w235) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w234));
    vlSelf->md_board__DOT__z80__DOT__w209 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                >> 3U));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_189 
        = (1U & (((~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204)) 
                      | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                         >> 0xdU))) & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29)) 
                 | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                     & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                         & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                            >> 0x13U)) | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_125))) 
                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_122) 
                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w234)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_112 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_227 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_232) 
            | (0U != (0x81bc0000U & vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
           | (0U != (0x10000520U & vlSelf->md_board__DOT__z80__DOT__pla[2U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_139 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w225) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w271));
    vlSelf->md_board__DOT__z80__DOT__w255 = (1U & (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95) 
                                                    | (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                       | ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                           >> 4U) 
                                                          | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206)))) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w225))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_140) 
            & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_139)) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5));
    vlSelf->md_board__DOT__z80__DOT__w126 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w225) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    vlSelf->md_board__DOT__z80__DOT__w140 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_225) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230)) 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w255))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__28(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__28\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w1110;
    md_board__DOT__ym__DOT__vdp__DOT__w1110 = 0;
    CData/*3:0*/ md_board__DOT__ym__DOT__vdp__DOT__w1143;
    md_board__DOT__ym__DOT__vdp__DOT__w1143 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_72;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_72 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420 = 0;
    // Body
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t32 = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t32;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t31 = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t31;
    vlSelf->md_board__DOT__m68k__DOT__w169 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w169;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w407 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v2));
    vlSelf->__VdfgRegularize_hd87f99a1_0_101 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_102 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_104 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))));
    vlSelf->vdp_m5 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w59 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w420 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v2) 
           ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w741 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem) 
             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
            == (0xffU & ((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                          >> 9U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)))) 
           & ((~ (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                  >> 2U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)));
    vlSelf->V_VS = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b6__DOT__mem)
                           ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2))
                           : (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                  ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2) 
                                     >> 7U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1142 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
              & (6U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w263 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2) 
           & ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1010 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
              >> 1U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1111 
        = ((3U == (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem)))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1137 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
              & (4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_1__inp = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_2__inp = 0U;
        md_board__DOT__ym__DOT__vdp__DOT__w1143 = 0xfU;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_1__inp 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_2__inp 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem));
        md_board__DOT__ym__DOT__vdp__DOT__w1143 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_2__inp;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = (1U & 
                                              (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem)) 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w992)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2) 
                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                                     >> 5U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w665 
        = ((~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2))) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w673))) 
           & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2)) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w674))) 
              & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2) 
                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w673) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w674))))) 
                 & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)) 
                     | (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem) 
                           >> 3U))) & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                        | (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem) 
                                              >> 2U))) 
                                       & (IData)(((
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem))) 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v2)) 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)) 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem) 
                                                         >> 5U))))))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_hclk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem_assign 
        = (7U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_326))
                  ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)
                      ? 0U : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem) 
                              >> 4U)) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem)));
    vlSelf->md_board__DOT__m68k__DOT__w475 = (1U & 
                                              (~ (IData)(
                                                         (0x10U 
                                                          != 
                                                          (0x12U 
                                                           & vlSelf->md_board__DOT__m68k__DOT__w522)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_178 
        = (IData)(((0x34U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w752)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_183 
        = (IData)(((0x20U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (0U == (0x3fU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w147)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_380 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)) 
           & (0xcU == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_391 
        = (IData)((((IData)(vlSelf->md_board__DOT__m68k__DOT__w944) 
                    >> 4U) & (0x30U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_383 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753)) 
           & (0x14U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_190 
        = (IData)(((4U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (0U == (0x3fU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w147)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_390 
        = (IData)((((0x2cU == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                    & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))) 
                   & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w752))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data_pull 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w328)
             ? 0xffffU : 0U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w327)
                                  ? 0xffffU : 0U) | 
                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w329)
                                   ? 0xffffU : 0U) 
                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w326)
                                      ? 0xffffU : 0U) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2)
                                         ? 0x7ffU : 0U) 
                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2)
                                            ? 0x7ffU
                                            : 0U) | 
                                          (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2)
                                             ? 0xffffU
                                             : 0U) 
                                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2)
                                               ? 0xeeeU
                                               : 0U))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl221__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl221__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl226__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl226__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address_pull 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w195)
             ? 0x1ffffU : 0U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w191)
                                   ? 0x1ffffU : 0U) 
                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w275)
                                      ? 0x1ffffU : 0U) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w257)
                                         ? 0x1ffffU
                                         : 0U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w258)
                                                    ? 0x1ffffU
                                                    : 0U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w259)
                                                       ? 0x1ffffU
                                                       : 0U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w260)
                                                          ? 0x1ffffU
                                                          : 0U) 
                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w531)
                                                             ? 0x1c000U
                                                             : 0U) 
                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w558)
                                                                ? 0x3fffU
                                                                : 0U) 
                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w643)
                                                                   ? 0x1ffffU
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v2)
                                                                      ? 0x1ffffU
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2)
                                                                         ? 0x1fU
                                                                         : 0U) 
                                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2)
                                                                            ? 0x3fe0U
                                                                            : 0U) 
                                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w566)
                                                                               ? 0x1c000U
                                                                               : 0U) 
                                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2)
                                                                                 ? 0x1ffe0U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w684)
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w742)
                                                                                 ? 0x3fffU
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w754)
                                                                                 ? 0x3f00U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w756)
                                                                                 ? 0x1ffffU
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w755)
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v2)
                                                                                 ? 0x1ffffU
                                                                                 : 0U)))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_247 
        = (IData)((0U != (0x4800U & vlSelf->md_board__DOT__m68k__DOT__w529[0U])));
    vlSelf->md_board__DOT__m68k__DOT__w546 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w545) 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x19U))));
    vlSelf->md_board__DOT__m68k__DOT__w333 = (1U & 
                                              ((vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                >> 0x1fU) 
                                               | vlSelf->md_board__DOT__m68k__DOT__w529[2U]));
    vlSelf->md_board__DOT__m68k__DOT__w568 = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x4800U 
                                                       & vlSelf->md_board__DOT__m68k__DOT__w529[0U])));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_225 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (2U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_224 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (8U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_221 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65a96508U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_220 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65a96502U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_218 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x20U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_217 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65a96520U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_216 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x9500a000U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_215 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65029000U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_214 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x80U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_213 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65a96580U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_211 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x200U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_209 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x800U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_208 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65a96500U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_204 
        = ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x65a96a69U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_198 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x2000U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_197 
        = ((7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (0U == (0x8000U & vlSelf->md_board__DOT__m68k__DOT__irdbus)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w133 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_432) 
           & (8U == (0xcU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w113) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w143 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl19__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl19__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl19__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w143 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl19__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w128 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_17));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w94 = (IData)(
                                                            ((0x600U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)));
    vlSelf->md_board__DOT__m68k__DOT__w80 = ((~ ((~ 
                                                  vlSelf->md_board__DOT__m68k__DOT__w529[2U]) 
                                                 | (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x1fU))) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w82 = ((~ ((~ 
                                                  (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                   >> 0x1fU)) 
                                                 | vlSelf->md_board__DOT__m68k__DOT__w529[2U])) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w84 = ((~ ((~ 
                                                  (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                   >> 0x1fU)) 
                                                 | (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__w529[2U]))) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v1;
    }
    vlSelf->md_board__DOT__z80__DOT__w382 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w381)) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__l52)));
    vlSelf->md_board__DOT__z80__DOT__w336 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w298))));
    vlSelf->md_board__DOT__z80__DOT__w337 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w307));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl592__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl592__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v2_assign;
    if (vlSelf->md_board__DOT__z80__DOT__w324) {
        vlSelf->md_board__DOT__z80__DOT__l48_i = vlSelf->md_board__DOT__z80__DOT__w332_i;
        vlSelf->md_board__DOT__z80__DOT__l48 = vlSelf->md_board__DOT__z80__DOT__w332_n;
        vlSelf->md_board__DOT__z80__DOT__l47_i = vlSelf->md_board__DOT__z80__DOT__w330_i;
        vlSelf->md_board__DOT__z80__DOT__l47 = vlSelf->md_board__DOT__z80__DOT__w330_n;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem_assign;
    vlSelf->md_board__DOT__z80__DOT__w440 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w392))));
    vlSelf->md_board__DOT__z80__DOT__w331 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w331_r));
    vlSelf->md_board__DOT__z80__DOT__w329 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w329_r));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_376 
        = (1U & ((~ (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                     >> 0x19U)) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w577)));
    vlSelf->md_board__DOT__m68k__DOT__w875 = ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w833) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w834))) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__z80__DOT__w16 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__l4));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr513__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr513__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr514__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr514__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr496__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr496__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr513__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr513__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr514__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr514__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr496__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr496__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v2;
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_179 
        = (IData)(((0x38U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w169))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl328__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl328__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl500__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl500__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl580__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl580__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl570__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl570__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl328__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                << 0xaU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                             << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                        << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl500__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl580__DOT__mem_assign 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)) 
                         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w265)) 
                            & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w263)))) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w265) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl570__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v2));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl429__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl429__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl569__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl569__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr412__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr412__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr411__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr411__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl429__DOT__mem_assign 
            = (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl569__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl570__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr412__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr412__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr411__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr411__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v1;
    }
    vlSelf->md_board__DOT__z80__DOT__w335 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w292))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem_assign 
        = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1142)
                  ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)
                      ? 0U : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem))
                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem)));
    md_board__DOT__ym__DOT__vdp__DOT__w1110 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v2)) 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1111));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_1__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_326)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1137))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_1__inp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_1__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_1__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_326)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1138))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_1__inp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_1__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_1__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_326)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1140))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_1__inp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_1__DOT__mem));
    vlSelf->md_board__DOT__RD = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2)
                                  ? ((0x20U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))
                                      ? (0x7fU & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                                                  >> 9U))
                                      : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl597__DOT__mem))
                                  : (IData)(vlSelf->md_board__DOT__RD_mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_2__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1137) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1144))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_2__inp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_2__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_2__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1138) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1144))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_2__inp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_2__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_2__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1140) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1144))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl659_2__inp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_2__DOT__mem));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_379 
        = (IData)((((IData)(vlSelf->md_board__DOT__m68k__DOT__w984) 
                    >> 0xbU) & (0U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522))));
    vlSelf->md_board__DOT__m68k__DOT__w403 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w406) 
                                              & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w158)));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_72 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_429) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w387));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_423 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w388)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w387));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w387)) 
                 & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w388))));
    vlSelf->md_board__DOT__m68k__DOT__w330 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w333) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w111 
        = ((IData)((((0x40U == (0xc0U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_iorq)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_wr))) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w133) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_lds)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem_assign 
        = ((IData)(vlSelf->ext_reset) ? 0U : (0xfffU 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w128)
                                                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                                                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w94) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w739 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752 
            = (0x7fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                        >> 4U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w739 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752 
            = (0x7fU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                    << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                               << 4U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732 
        = (((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                >> 0xeU)) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w665) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w743)) 
                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2))) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w94) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w95)));
    vlSelf->md_board__DOT__z80__DOT__rpull2[0U] = (0xffffU 
                                                   & ((((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w336))) 
                                                        & vlSelf->md_board__DOT__z80__DOT__regs2
                                                        [0U]
                                                        [1U]) 
                                                       | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w337))) 
                                                          & vlSelf->md_board__DOT__z80__DOT__regs2
                                                          [1U]
                                                          [1U])) 
                                                      | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w335))) 
                                                         & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w528)))));
    vlSelf->md_board__DOT__z80__DOT__rpull2[1U] = (
                                                   (((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w336))) 
                                                     & vlSelf->md_board__DOT__z80__DOT__regs2
                                                     [0U]
                                                     [0U]) 
                                                    | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w337))) 
                                                       & vlSelf->md_board__DOT__z80__DOT__regs2
                                                       [1U]
                                                       [0U])) 
                                                   | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w335))) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w528)));
    vlSelf->md_board__DOT__z80__DOT__rpullup2[0U] = 
        ((((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w336))) 
           & vlSelf->md_board__DOT__z80__DOT__regs2
           [0U][0U]) | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w337))) 
                        & vlSelf->md_board__DOT__z80__DOT__regs2
                        [1U][0U])) | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w335))) 
                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w528)));
    vlSelf->md_board__DOT__z80__DOT__rpullup2[1U] = 
        (0xffffU & ((((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w336))) 
                      & vlSelf->md_board__DOT__z80__DOT__regs2
                      [0U][1U]) | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w337))) 
                                   & vlSelf->md_board__DOT__z80__DOT__regs2
                                   [1U][1U])) | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w335))) 
                                                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w528)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1107) 
             & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1110))
             ? (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_109) 
                 << 1U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                             ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2)) 
                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem) 
                               >> 2U)) | (0U == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_109))))
             : 0U) | (((~ (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1110)) 
                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1107))
                       ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                           << 0xfU) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_109))
                       : 0U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl655__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
               & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))))
            ? (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1143)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl655__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl656__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
               & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))))
            ? (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1143)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl656__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl657__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
               & (5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))))
            ? (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1143)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl657__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl658__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
               & (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))))
            ? (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1143)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl658__DOT__mem));
    vlSelf->md_board__DOT__m68k__DOT__w426 = (1U & 
                                              (~ ((~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w435
                                                    [2U] 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_63))) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w403))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_73 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_72) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w388));
    vlSelf->md_board__DOT__m68k__DOT__w395 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w388)) 
                                              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_72));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_424 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_426) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_423));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_422 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_71) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_423));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_428 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_71) 
           & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_421 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_70) 
           & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_427 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w386)) 
           & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w383) 
              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420)));
    vlSelf->md_board__DOT__m68k__DOT__w392 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_429) 
                                              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_425 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_426) 
           & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_420));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem_assign 
        = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w111)
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl437__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2)
            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v2)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl436__DOT__mem)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl435__DOT__mem))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl437__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl594__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1003)
            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v2)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl595__DOT__mem))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl594__DOT__mem));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_437 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w395)) 
           & (7U == vlSelf->md_board__DOT__m68k__DOT__w270
              [1U]));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_68 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_424) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_422));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_419 
        = (1U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_425) 
                     | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_68))) 
                 | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w426) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__8(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__8\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((0U == (0x55015000U & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                  << 0x1fU) | (((0U == (0x6565a000U 
                                        & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                << 0x1eU) | (((0U == 
                                               (0x65a96a6aU 
                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                              << 0x1dU) 
                                             | (((0U 
                                                  == 
                                                  (0x6600a580U 
                                                   & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                 << 0x1cU) 
                                                | (((0U 
                                                     == 
                                                     (0x540U 
                                                      & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                    << 0x1bU) 
                                                   | (((0U 
                                                        == 
                                                        (0xa9004000U 
                                                         & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                       << 0x1aU) 
                                                      | (((0U 
                                                           == 
                                                           (0xa9001000U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                          << 0x19U) 
                                                         | (((0U 
                                                              == 
                                                              (0x55010000U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                             << 0x18U) 
                                                            | (((0U 
                                                                 == 
                                                                 (0x66000000U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                << 0x17U) 
                                                               | (((((0U 
                                                                      == 
                                                                      (0xa84U 
                                                                       & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                     & (~ 
                                                                        (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                                         >> 0x14U))) 
                                                                    & (~ 
                                                                       (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                        >> 0x18U))) 
                                                                   << 0x16U) 
                                                                  | (((((0U 
                                                                         == 
                                                                         (0xa98U 
                                                                          & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                        & (~ 
                                                                           (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                                            >> 0x14U))) 
                                                                       & (~ 
                                                                          (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                           >> 0x18U))) 
                                                                      << 0x15U) 
                                                                     | (((0U 
                                                                          == 
                                                                          (0xa9000a80U 
                                                                           & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                         << 0x14U) 
                                                                        | (((0U 
                                                                             == 
                                                                             (0x56000000U 
                                                                              & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                            << 0x13U) 
                                                                           | (((0U 
                                                                                == 
                                                                                (0x20005000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                               << 0x12U) 
                                                                              | (((0U 
                                                                                == 
                                                                                (0x80005000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x11U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x940500U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x55015000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                                                >> 0x10U))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x6600a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                                                >> 0xdU))) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x6600a580U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x55024580U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0xcU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x55950000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                                                >> 1U))) 
                                                                                << 0xbU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x6519a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x55020000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                                                >> 1U))) 
                                                                                << 9U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x69000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x6a010000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x66001000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w597 
                                                                                >> 0xfU))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x66004000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w597 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xa9000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w597 
                                                                                >> 0xfU))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x6599a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w597)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x8500a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w597)))) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x68008000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w597)))))))))))))))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__ird_pla2 = __Vtemp_1;
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__9(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->md_board__DOT__z80__DOT__w193 = (((~ ((~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
                                                    | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_252) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w16)) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)) 
                                                          | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__halt_i)))))) 
                                                  | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_252)) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w16)))) 
                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w144)) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w205));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__29(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__29\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w98;
    md_board__DOT__ym__DOT__vdp__DOT__w98 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w205;
    md_board__DOT__ym__DOT__vdp__DOT__w205 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w290;
    md_board__DOT__ym__DOT__vdp__DOT__w290 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_246;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_246 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_11;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_11 = 0;
    // Body
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vram_data;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_lg_2__val 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 4U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_lg_1__val 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 4U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_139 = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem)) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem)) 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode_o 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->vdp_hclk1 = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w150 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t21) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem)) 
              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449 
        = (1U & ((~ (IData)(vlSelf->vdp_intfield)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v2)));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w269__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w269[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w269__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w269__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w269[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w269__v1;
        vlSelf->md_board__DOT__m68k__DOT__w269[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w269__v2;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w268__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w268[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w268__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w268__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w268[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w268__v1;
        vlSelf->md_board__DOT__m68k__DOT__w268[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w268__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_o1 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->__VdfgRegularize_hd87f99a1_0_74 = (0x7fU 
                                               & ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))) 
                                                  + 
                                                  ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   | (IData)(vlSelf->fm_sel23))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_sl__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 3U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_dt__data));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w542 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                    >> 7U)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ks__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2_out 
        = ((0x10U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                     >> 7U)) | ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                       >> 8U)) | ((4U 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                      >> 9U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                         >> 0xaU)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                           >> 0xbU))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1_out 
        = ((0x10U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                     >> 7U)) | ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                       >> 8U)) | ((4U 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                      >> 9U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                         >> 0xaU)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                           >> 0xbU))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w250 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl41__DOT__mem) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w537 
        = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                     ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355) 
                        >> 1U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_245 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val[0U] 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
             >> 9U) & (0U != (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                    >> 0xaU)))) ? 0xfb0aU
            : ([&]() {
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value 
                    = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1149;
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                        ? ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                            ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                                ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                                    ? 0U : 0xaU) : 
                               ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                                 ? 0x16U : 0x28U)) : 
                           ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                                 ? 0x3dU : 0x56U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                              ? 0x73U : 0x9eU))) : 
                       ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                         ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                                 ? 0xd0U : 0x112U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                              ? 0x15cU : 0x1caU)) : 
                        ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                          ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                              ? 0x246U : 0x2eaU) : 
                         ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__value))
                           ? 0x39eU : 0x4b0U))));
            }(), (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__0__Vfuncout)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val[1U] 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
             >> 9U) & (1U != (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                    >> 0xaU)))) ? 0xfb0aU
            : ([&]() {
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value 
                    = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1150;
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                        ? ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                            ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                                ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                                    ? 0U : 0xaU) : 
                               ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                                 ? 0x16U : 0x28U)) : 
                           ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                                 ? 0x3dU : 0x56U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                              ? 0x73U : 0x9eU))) : 
                       ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                         ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                                 ? 0xd0U : 0x112U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                              ? 0x15cU : 0x1caU)) : 
                        ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                          ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                              ? 0x246U : 0x2eaU) : 
                         ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__value))
                           ? 0x39eU : 0x4b0U))));
            }(), (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__1__Vfuncout)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val[2U] 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
             >> 9U) & (2U != (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                    >> 0xaU)))) ? 0xfb0aU
            : ([&]() {
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value 
                    = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1151;
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                        ? ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                            ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                                ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                                    ? 0U : 0xaU) : 
                               ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                                 ? 0x16U : 0x28U)) : 
                           ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                                 ? 0x3dU : 0x56U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                              ? 0x73U : 0x9eU))) : 
                       ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                         ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                                 ? 0xd0U : 0x112U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                              ? 0x15cU : 0x1caU)) : 
                        ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                          ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                              ? 0x246U : 0x2eaU) : 
                         ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__value))
                           ? 0x39eU : 0x4b0U))));
            }(), (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__2__Vfuncout)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val[3U] 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
             >> 9U) & (3U != (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                    >> 0xaU)))) ? 0xfb0aU
            : ([&]() {
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value 
                    = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1152;
                vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                        ? ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                            ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                                ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                                    ? 0U : 0xaU) : 
                               ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                                 ? 0x16U : 0x28U)) : 
                           ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                                 ? 0x3dU : 0x56U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                              ? 0x73U : 0x9eU))) : 
                       ((4U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                         ? ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                             ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                                 ? 0xd0U : 0x112U) : 
                            ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                              ? 0x15cU : 0x1caU)) : 
                        ((2U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                          ? ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                              ? 0x246U : 0x2eaU) : 
                         ((1U & (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__value))
                           ? 0x39eU : 0x4b0U))));
            }(), (IData)(vlSelf->__Vfunc_md_board__DOT__ym__DOT__vdp__DOT__psg_vol__3__Vfuncout)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t3 = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t3;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2_out)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1_out));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_tl__data));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_346 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_344 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0xaU)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_331 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0x34U)));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_346 = 0xfU;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_344 = 0xfU;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_331 = 0xfU;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_7 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2)) 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w26) 
                                                 & (IData)(vlSelf->md_board__DOT___M3)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_364 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x34U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_368 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x2dU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_372 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x26U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_376 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x1fU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_380 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x18U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_384 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x11U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_388 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0xaU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_392 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 3U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_365 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x35U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_369 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x2eU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_373 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x27U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_377 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x20U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_381 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x19U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_385 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x12U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_389 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0xbU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_393 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 4U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_366 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x36U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_370 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x2fU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_374 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x28U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_378 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x21U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_382 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x1aU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_386 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x13U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_390 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0xcU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_394 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 5U))));
    vlSelf->md_board__DOT__ZRES_o = ((IData)(vlSelf->md_board__DOT___M3)
                                      ? (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff31__DOT__l2)
                                      : (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_edclk_o)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l));
    vlSelf->md_board__DOT__m68k__DOT___w279_3 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w278)) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT___w279_2));
    vlSelf->md_board__DOT__m68k__DOT__w744 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w714)
                                                ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w716)
                                                    ? 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w715)
                                                     ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w744_mem)
                                                     : (IData)(vlSelf->md_board__DOT__m68k__DOT__w970))
                                                    : 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                                                    >> 7U))
                                                : ((IData)(vlSelf->md_board__DOT__m68k__DOT__r8) 
                                                   >> 0xfU)));
    vlSelf->md_board__DOT__m68k__DOT__w800 = (1U & 
                                              ((~ (
                                                   (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w768)) 
                                                   | (IData)(vlSelf->md_board__DOT__m68k__DOT__w754))) 
                                               | (~ 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w770)
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w962)))
                                                    : (IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->md_board__DOT__m68k__DOT__w962)))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w59 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT___M3)) 
               | (IData)(vlSelf->md_board__DOT__AS)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45 = 
        (((IData)(vlSelf->md_board__DOT__BGACK) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45_mem)) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w46 = 
        (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak)) 
          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as)) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w47));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w86 = (IData)(
                                                            ((0x200U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w88 = (IData)(
                                                            ((0x300U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)));
    md_board__DOT__ym__DOT__vdp__DOT__w98 = (IData)(
                                                    ((0x800U 
                                                      == 
                                                      (0xf00U 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_325 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w25) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w30 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l2));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_418 
        = (1U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w278) 
                     | ((~ (vlSelf->md_board__DOT__m68k__DOT__w439
                            [1U] | vlSelf->md_board__DOT__m68k__DOT__w343
                            [2U])) & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_63)) 
                                      & (vlSelf->md_board__DOT__m68k__DOT__w436
                                         [1U] & vlSelf->md_board__DOT__m68k__DOT__w435
                                         [2U]))))) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l1)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d6__DOT__dl 
        = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d6__DOT__dl) 
                     << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w238));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t30 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w401) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t30)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t37 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w453) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t37)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b7__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b7__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b6__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b6__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl537__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl537__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl536__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl536__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl535__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl535__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl534__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl534__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl533__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl533__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl532__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl532__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl531__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl531__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem_assign;
    vlSelf->md_board__DOT__m68k__DOT__w423_mem = vlSelf->md_board__DOT__m68k__DOT__w423;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl465__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl465__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl462__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl462__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w66 = 
        ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t9)) 
         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t41)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl545__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl545__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl541__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl541__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl540__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl540__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl539__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl539__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl538__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl538__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2_assign;
    vlSelf->md_board__DOT__z80__DOT__w432 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__l57));
    vlSelf->md_board__DOT__m68k__DOT__w987 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w819)) 
                                               & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o))));
    vlSelf->md_board__DOT__m68k__DOT__w986 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w818)) 
                                               & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o))));
    vlSelf->md_board__DOT__m68k__DOT__w339 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w278) 
                                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w338));
    vlSelf->md_board__DOT__m68k__DOT__w336 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w278) 
                                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w335));
    vlSelf->md_board__DOT__m68k__DOT___w281_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w278)) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT___w281_0));
    vlSelf->md_board__DOT__m68k__DOT___w279_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w278)) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT___w279_0));
    vlSelf->md_board__DOT__m68k__DOT___w281_3 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w278)) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT___w281_2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_lock__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_lock__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2_assign;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_11 
        = ((1U == (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                    << 2U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out))) 
           & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode_o)));
    md_board__DOT__ym__DOT__vdp__DOT__w205 = ((IData)(vlSelf->vdp_hclk1) 
                                              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl31__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w266 
        = ((IData)(vlSelf->vdp_hclk1) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1002 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)) 
           & (IData)(vlSelf->vdp_hclk1));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w805 
        = ((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w804));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w444 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w452 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_435 
        = ((~ vlSelf->md_board__DOT__m68k__DOT__w268
            [2U]) & vlSelf->md_board__DOT__m68k__DOT__w269
           [2U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_436 
        = ((~ vlSelf->md_board__DOT__m68k__DOT__w269
            [2U]) & vlSelf->md_board__DOT__m68k__DOT__w268
           [2U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_58 
        = ((2U == vlSelf->md_board__DOT__m68k__DOT__w270
            [1U]) & vlSelf->md_board__DOT__m68k__DOT__w268
           [2U]);
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w542) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl187__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rigt__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl188__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_whp__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl193__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_88__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl187__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl187__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl188__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl188__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl193__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl193__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w234 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w250) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
              >> 1U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w235 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
               >> 1U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w250));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_241 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 4U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_245));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum 
        = (0x7fU & ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t3))) 
                    + (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff29__DOT__l2) 
                        << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff28__DOT__l2) 
                                   << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff27__DOT__l2) 
                                              << 4U) 
                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l2) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff23__DOT__l2)))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2_assign;
    vlSelf->md_board__DOT__ZRES = ((~ (IData)(vlSelf->ext_zres)) 
                                   & (IData)(vlSelf->md_board__DOT__ZRES_o));
    md_board__DOT__ym__DOT__vdp__DOT__w290 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w149) 
                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w249) 
                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1)));
    vlSelf->md_board__DOT__m68k__DOT__w280 = ((IData)(vlSelf->md_board__DOT__m68k__DOT___w279_2) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT___w279_3) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w280_mem)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_389 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w800)) 
           & (0x28U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w211 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w59) 
           | (vlSelf->md_board__DOT__VA >> 0x16U));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w44 = 
        (1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff19__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w71))) 
               | ((vlSelf->md_board__DOT__VA >> 0x16U) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w59))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45)) 
                 | ((~ (IData)(vlSelf->md_board__DOT___M3)) 
                    | (IData)(vlSelf->md_board__DOT__BGACK))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_397 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
               >> 6U)) & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w98));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_396 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
            >> 6U) & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w98));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_434 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2) 
                 | ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2)) 
                      & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem))) 
                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w13))) 
                    | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l2)) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w30) 
                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s3) 
                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem) 
                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w16) 
                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2) 
                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s3))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w282 = ((IData)(vlSelf->md_board__DOT__m68k__DOT___w281_2) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT___w281_3) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w282_mem)));
    vlSelf->md_board__DOT__m68k__DOT__w282_n = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT___w281_3)) 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT___w281_2)) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w282_n_mem))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_3 
        = ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_12)) 
           & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_11));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_2 
        = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_12)) 
           & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_11));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_1 
        = ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_12)) 
           & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_11));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w205) 
           & (IData)(((0x1000U == (0x1800U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w205) 
           & (0x800U == (0x1800U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w205) 
           & (0U == (0x1800U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w541 
        = (((((0x1fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w537) 
                        >> 3U)) < (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl190__DOT__mem)) 
             ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl189__DOT__mem)) 
            | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl187__DOT__mem)) 
                ^ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl188__DOT__mem) 
                   <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_241))) 
               & (3U != (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                          << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2))))) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)));
    vlSelf->res_z80 = (1U & (~ (IData)(vlSelf->md_board__DOT__ZRES)));
    vlSelf->md_board__DOT__ym__DOT__fm_data_d = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__ZRES) 
                                                     & ((~ (IData)(vlSelf->md_board__DOT__ZRD)) 
                                                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_sound))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w294 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w290) 
           & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l51)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w293 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w290) 
           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l51)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w292 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w290) 
           & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l51)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w291 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w290) 
           & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l51)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w43 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w44) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff16__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w27 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff11__DOT__l2) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w44));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w254 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) 
           | (vlSelf->md_board__DOT__VA >> 0x16U));
    vlSelf->md_board__DOT__ym__DOT__vdp_cas0 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem)
                                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_434)
                                                     : 
                                                    ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_325)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v1;
    }
    vlSelf->vdp_hsync2 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v2;
    if ((0x40U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1069 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b6__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1070 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b7__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1069 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1070 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w998 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w818 
        = (1U & (~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                        >> 0xdU)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl465__DOT__mem)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl462__DOT__mem)) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                       >> 0xdU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w721 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_3_1 
        = (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg) 
                    >> 3U) & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                              >> 0x14U)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_normal 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_1)) 
                 & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_2) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_3)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_246 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w541)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->__VdfgRegularize_hd87f99a1_0_15 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm_data_d) 
                                               & (IData)(vlSelf->md_board__DOT__ZRES));
    vlSelf->cart_oe = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w901 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w894 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl531__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w895 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl532__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w896 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl533__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w897 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl534__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w898 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl535__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w899 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl536__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w900 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w815) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl537__DOT__mem)) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_3_1));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w554 
        = (0x3ffU & (~ (((1U & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b6__DOT__mem)) 
                                    | (IData)((0U != 
                                               (0xf0U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355)))))) 
                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)))
                          ? 0U : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl193__DOT__mem)) 
                        | ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                             & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_246))
                             ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl194__DOT__mem) 
                                 << 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl191__DOT__mem))
                             : 0U) | (((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_246) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2))
                                       ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl195__DOT__mem) 
                                           << 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl192__DOT__mem))
                                       : 0U)))));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_15) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_2b_dac_en__data 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data 
            = vlSelf->__VdfgRegularize_hd87f99a1_0_112;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem) 
                << 7U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_113));
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_2b_dac_en__data = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w555 
        = (0x7fU & ((IData)(1U) + (((0x7eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w554) 
                                              >> 3U)) 
                                    | (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w554) 
                                              >> 3U) 
                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)))) 
                                   + ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w561)
                                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem)
                                         : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w568) 
                                             << 1U) 
                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2))) 
                                       << 5U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w561)
                                                    ? 0xfU
                                                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_245)) 
                                                  << 1U) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w561) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__30(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__30\n"); );
    // Init
    VlWide<3>/*67:0*/ md_board__DOT__m68k__DOT__ucode_out_m1;
    VL_ZERO_W(68, md_board__DOT__m68k__DOT__ucode_out_m1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_27;
    // Body
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_405 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w455)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w451));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_404 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w451)) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w455)) 
              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w454)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_122 = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w454)) 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w455)) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w460)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_364 
        = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w610) 
            << 1U) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w611));
    __Vtemp_2[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                >> 0x10U)))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                >> 0x14U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                   >> 0x18U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                      >> 0x1cU)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U]))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                            >> 4U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                               >> 8U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xcU)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x10U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x14U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x18U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1cU)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U]))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 8U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U]))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 8U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U]))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 8U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xaU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U]) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x11U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 7U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 2U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 3U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 8U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xcU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                   >> 0x10U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                 >> 0x14U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                    >> 0x18U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                       >> 0x1cU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U]))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                             >> 4U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 8U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xcU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x10U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x14U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x18U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1cU)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U]))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 8U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U]))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 8U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U]))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 8U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xaU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U]) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x11U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 7U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 2U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 3U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 8U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xcU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_8[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                >> 0x11U)))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                >> 0x15U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                   >> 0x19U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                      >> 0x1dU)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                         >> 1U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                            >> 5U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                               >> 9U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xdU)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x11U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x15U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x19U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1dU)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 1U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 5U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 9U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 9U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 9U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 9U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 4U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 6U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 4U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 9U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xdU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_8[1U] = (IData)(((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                   >> 0x11U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                 >> 0x15U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                    >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                       >> 0x1dU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                          >> 1U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                             >> 5U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 9U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xdU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x11U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x15U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1dU)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 1U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 5U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 9U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 9U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 9U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 9U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 4U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 6U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 4U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 9U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xdU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_14[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                   >> 0x12U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                 >> 0x16U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                    >> 0x1aU)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                       >> 0x1eU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                          >> 2U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                             >> 6U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xaU)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xeU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x12U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x16U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1aU)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1eU)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 2U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 6U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 6U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 6U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xdU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 8U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 3U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x14U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xfU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 5U)) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U]) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 5U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xcU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xeU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_14[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                    >> 0x12U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                  >> 0x16U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                     >> 0x1aU)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                        >> 0x1eU)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                           >> 2U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                              >> 6U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xaU)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xeU)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x12U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x16U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1aU)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1eU)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 2U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 6U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 6U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 6U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xdU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 8U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 3U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x14U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xfU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 5U)) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U]) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 5U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xcU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xeU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_20[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                 >> 0x17U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                    >> 0x1bU)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                    >> 0x1fU))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                          >> 3U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                             >> 7U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xbU)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xfU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x13U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x17U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1bU)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1fU))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 3U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 7U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 7U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 7U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xcU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 7U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 2U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x13U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 4U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 6U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xbU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_20[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                  >> 0x17U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                     >> 0x1bU)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                     >> 0x1fU))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                           >> 3U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                              >> 7U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xbU)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0xfU)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x13U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x17U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1bU)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
                                                                                >> 0x1fU))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 3U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 7U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 7U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 7U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 0xcU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 7U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                << 2U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0x13U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                << 4U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 6U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 0xbU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_27[2U] = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)
                        ? 0U : ((8U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                       << 2U)) | ((4U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                      >> 3U)) 
                                                  | ((2U 
                                                      & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                         >> 8U)) 
                                                     | (1U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                           >> 0xdU)))))) 
                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10)
                           ? 0U : ((8U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                          << 1U)) | 
                                   ((4U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                           >> 4U)) 
                                    | ((2U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                              >> 9U)) 
                                       | (1U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                >> 0xeU)))))) 
                         | ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506)) 
                                   | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505))))
                             ? 0U : ((8U & vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U]) 
                                     | ((4U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                               >> 5U)) 
                                        | ((2U & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                  >> 0xaU)) 
                                           | (1U & 
                                              (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                               >> 0xfU))))))));
    md_board__DOT__m68k__DOT__ucode_out_m1[0U] = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11)
                                                    ? 0U
                                                    : 
                                                   __Vtemp_2[0U]) 
                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)
                                                       ? 0U
                                                       : 
                                                      __Vtemp_8[0U]) 
                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10)
                                                          ? 0U
                                                          : 
                                                         __Vtemp_14[0U]) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506)) 
                                                               | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505))))
                                                            ? 0U
                                                            : 
                                                           __Vtemp_20[0U]))));
    md_board__DOT__m68k__DOT__ucode_out_m1[1U] = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11)
                                                    ? 0U
                                                    : 
                                                   __Vtemp_2[1U]) 
                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)
                                                       ? 0U
                                                       : 
                                                      __Vtemp_8[1U]) 
                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10)
                                                          ? 0U
                                                          : 
                                                         __Vtemp_14[1U]) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506)) 
                                                               | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505))))
                                                            ? 0U
                                                            : 
                                                           __Vtemp_20[1U]))));
    md_board__DOT__m68k__DOT__ucode_out_m1[2U] = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                           >> 2U)) 
                                                       | ((2U 
                                                           & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                              >> 7U)) 
                                                          | (1U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
                                                                >> 0xcU)))))) 
                                                  | __Vtemp_27[2U]);
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] = 
        ((0xffffffU & vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U]) 
         | (0xff000000U & (((0xe0faU == (0xf8faU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                            << 0x1fU) | (((0xe0fcU 
                                           == (0xf8fcU 
                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                          << 0x1eU) 
                                         | (((0xe0c0U 
                                              == (0xf8f0U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                             << 0x1dU) 
                                            | (((0x4e60U 
                                                 == 
                                                 (0xfff0U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 0x1cU) 
                                               | (((0x8180U 
                                                    == 
                                                    (0xb1f8U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0x1bU) 
                                                  | (((0x81c8U 
                                                       == 
                                                       (0xb1f8U 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                      << 0x1aU) 
                                                     | (((0x8008U 
                                                          == 
                                                          (0xb138U 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                         << 0x19U) 
                                                        | ((0xe8c0U 
                                                            == 
                                                            (0xf8c0U 
                                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                           << 0x18U))))))))));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] = 
        ((0xffffffe0U & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U]) 
         | (0xffffffU & ((0xfffff0U & ((0x4e78U == 
                                        (0xfff8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 4U)) | ((0xfffff8U 
                                                   & ((0x46c0U 
                                                       == 
                                                       (0xffc0U 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                      << 3U)) 
                                                  | ((0xfffffcU 
                                                      & ((0x4e70U 
                                                          == 
                                                          (0xfffdU 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                         << 2U)) 
                                                     | ((0xfffffeU 
                                                         & ((0x4e72U 
                                                             == 
                                                             (0xfffeU 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                            << 1U)) 
                                                        | ((0xffffffU 
                                                            & (0x7cU 
                                                               == 
                                                               (0xf5ffU 
                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                           | ((0xffffffU 
                                                               & ((0xe0faU 
                                                                   == 
                                                                   (0xf8faU 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                  >> 1U)) 
                                                              | ((0xffffffU 
                                                                  & ((0xe0fcU 
                                                                      == 
                                                                      (0xf8fcU 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                     >> 2U)) 
                                                                 | ((0xffffffU 
                                                                     & ((0xe0c0U 
                                                                         == 
                                                                         (0xf8f0U 
                                                                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                        >> 3U)) 
                                                                    | ((0xffffffU 
                                                                        & ((0x4e60U 
                                                                            == 
                                                                            (0xfff0U 
                                                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                           >> 4U)) 
                                                                       | ((0xffffffU 
                                                                           & ((0x8180U 
                                                                               == 
                                                                               (0xb1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                              >> 5U)) 
                                                                          | ((0xffffffU 
                                                                              & ((0x81c8U 
                                                                                == 
                                                                                (0xb1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                >> 6U)) 
                                                                             | ((0xffffffU 
                                                                                & ((0x8008U 
                                                                                == 
                                                                                (0xb138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                >> 7U)) 
                                                                                | ((0xe8c0U 
                                                                                == 
                                                                                (0xf8c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                >> 8U)))))))))))))));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w315__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w315[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w315__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w315__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w315[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w315__v1;
    }
    vlSelf->md_board__DOT__m68k__DOT__w561 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                  | (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                     >> 6U))));
    vlSelf->md_board__DOT__m68k__DOT__w540 = (1U & 
                                              (~ ((~ 
                                                   vlSelf->md_board__DOT__m68k__DOT__w529[0U]) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))));
    vlSelf->md_board__DOT__m68k__DOT__w477 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w359_3) 
                                                 | vlSelf->md_board__DOT__m68k__DOT__w296
                                                 [2U]));
    vlSelf->md_board__DOT__m68k__DOT__c4 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__c4_l));
    vlSelf->md_board__DOT__m68k__DOT__w450 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w446) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w447)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w328 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w326)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_417 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w451)) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w452)) 
              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_122)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_416 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_80) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w453)) 
              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_122)));
    vlSelf->md_board__DOT__m68k__DOT__ucode_out_m2 
        = ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w495) 
             | (IData)(vlSelf->md_board__DOT__m68k__DOT__w500))
             ? 0U : ((0x10000U & (md_board__DOT__m68k__DOT__ucode_out_m1[2U] 
                                  << 0xdU)) | ((0x8000U 
                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                   >> 0x10U)) 
                                               | ((0x4000U 
                                                   & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                      >> 0xdU)) 
                                                  | ((0x2000U 
                                                      & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                         >> 0xaU)) 
                                                     | ((0x1000U 
                                                         & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                            >> 7U)) 
                                                        | ((0x800U 
                                                            & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                               >> 4U)) 
                                                           | ((0x400U 
                                                               & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                                  >> 1U)) 
                                                              | ((0x200U 
                                                                  & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                                     << 2U)) 
                                                                 | ((0x100U 
                                                                     & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                                        << 5U)) 
                                                                    | ((0x80U 
                                                                        & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                           >> 0x18U)) 
                                                                       | ((0x40U 
                                                                           & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                              >> 0x15U)) 
                                                                          | ((0x20U 
                                                                              & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0x12U)) 
                                                                             | ((0x10U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 3U))))))))))))))))))) 
           | (((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w500)) 
                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w495)))
                ? 0U : ((0x10000U & (md_board__DOT__m68k__DOT__ucode_out_m1[2U] 
                                     << 0xeU)) | ((0x8000U 
                                                   & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                      >> 0xfU)) 
                                                  | ((0x4000U 
                                                      & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                         >> 0xcU)) 
                                                     | ((0x2000U 
                                                         & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                            >> 9U)) 
                                                        | ((0x1000U 
                                                            & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                               >> 6U)) 
                                                           | ((0x800U 
                                                               & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                                  >> 3U)) 
                                                              | ((0x400U 
                                                                  & md_board__DOT__m68k__DOT__ucode_out_m1[1U]) 
                                                                 | ((0x200U 
                                                                     & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                                        << 3U)) 
                                                                    | ((0x100U 
                                                                        & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                                           << 6U)) 
                                                                       | ((0x80U 
                                                                           & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                              >> 0x17U)) 
                                                                          | ((0x40U 
                                                                              & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0x14U)) 
                                                                             | ((0x20U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                                >> 2U))))))))))))))))))) 
              | (((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w495)) 
                         | (IData)(vlSelf->md_board__DOT__m68k__DOT__w500)))
                   ? 0U : ((0x10000U & (md_board__DOT__m68k__DOT__ucode_out_m1[2U] 
                                        << 0xfU)) | 
                           ((0x8000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                        >> 0xeU)) | 
                            ((0x4000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                         >> 0xbU)) 
                             | ((0x2000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                            >> 8U)) 
                                | ((0x1000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                               >> 5U)) 
                                   | ((0x800U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                 >> 2U)) 
                                      | ((0x400U & 
                                          (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                           << 1U)) 
                                         | ((0x200U 
                                             & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                << 4U)) 
                                            | ((0x100U 
                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                   << 7U)) 
                                               | ((0x80U 
                                                   & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                      >> 0x16U)) 
                                                  | ((0x40U 
                                                      & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                         >> 0x13U)) 
                                                     | ((0x20U 
                                                         & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                            >> 0x10U)) 
                                                        | ((0x10U 
                                                            & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                               >> 0xdU)) 
                                                           | ((8U 
                                                               & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                  >> 0xaU)) 
                                                              | ((4U 
                                                                  & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                     >> 7U)) 
                                                                 | ((2U 
                                                                     & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                        >> 4U)) 
                                                                    | (1U 
                                                                       & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                          >> 1U))))))))))))))))))) 
                 | ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w495)) 
                           | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w500))))
                     ? 0U : ((0x10000U & (md_board__DOT__m68k__DOT__ucode_out_m1[2U] 
                                          << 0x10U)) 
                             | ((0x8000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                            >> 0xdU)) 
                                | ((0x4000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                               >> 0xaU)) 
                                   | ((0x2000U & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                  >> 7U)) 
                                      | ((0x1000U & 
                                          (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                           >> 4U)) 
                                         | ((0x800U 
                                             & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                >> 1U)) 
                                            | ((0x400U 
                                                & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                   << 2U)) 
                                               | ((0x200U 
                                                   & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                      << 5U)) 
                                                  | ((0x100U 
                                                      & (md_board__DOT__m68k__DOT__ucode_out_m1[1U] 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                            >> 0x15U)) 
                                                        | ((0x40U 
                                                            & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                               >> 0x12U)) 
                                                           | ((0x20U 
                                                               & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                  >> 0xfU)) 
                                                              | ((0x10U 
                                                                  & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                     >> 0xcU)) 
                                                                 | ((8U 
                                                                     & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                        >> 9U)) 
                                                                    | ((4U 
                                                                        & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                           >> 6U)) 
                                                                       | ((2U 
                                                                           & (md_board__DOT__m68k__DOT__ucode_out_m1[0U] 
                                                                              >> 3U)) 
                                                                          | (1U 
                                                                             & md_board__DOT__m68k__DOT__ucode_out_m1[0U])))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_363 
        = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w301) 
            << 1U) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w299));
    vlSelf->md_board__DOT__m68k__DOT__w562 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w561) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))));
    vlSelf->md_board__DOT__m68k__DOT__w539 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w540) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w486 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w477)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_401) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w481)));
    vlSelf->md_board__DOT__m68k__DOT__w471 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w455) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_417) 
                                                 | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_413) 
                                                    | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_410) 
                                                       | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_407) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_405))))));
    vlSelf->md_board__DOT__m68k__DOT__w469 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_417) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_416) 
                                                 | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_412) 
                                                    | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_410) 
                                                       | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_409) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_402))))));
    vlSelf->md_board__DOT__m68k__DOT__w470 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w455) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_416) 
                                                 | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_413) 
                                                    | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_409) 
                                                       | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_407) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_404))))));
    vlSelf->md_board__DOT__m68k__DOT__w306 = (0U == 
                                              (((IData)(vlSelf->md_board__DOT__m68k__DOT__w303) 
                                                << 2U) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_363)));
    vlSelf->md_board__DOT__m68k__DOT__w305 = (1U & 
                                              (~ ((
                                                   (0U 
                                                    == 
                                                    (((IData)(vlSelf->md_board__DOT__m68k__DOT__w303) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->md_board__DOT__m68k__DOT__w299))) 
                                                   & (0U 
                                                      == (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_364))) 
                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w306) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w611))) 
                                                     | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w303)) 
                                                         & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w609))) 
                                                        | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w301)) 
                                                            & (0U 
                                                               == 
                                                               (((IData)(vlSelf->md_board__DOT__m68k__DOT__w609) 
                                                                 << 2U) 
                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w610) 
                                                                   << 1U)))) 
                                                           | (((0U 
                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_363)) 
                                                               & (0U 
                                                                  == 
                                                                  (((IData)(vlSelf->md_board__DOT__m68k__DOT__w609) 
                                                                    << 2U) 
                                                                   | (IData)(vlSelf->md_board__DOT__m68k__DOT__w611)))) 
                                                              | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w299)) 
                                                                  & (0U 
                                                                     == 
                                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w609) 
                                                                       << 2U) 
                                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_364)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w303) 
                                                                       << 2U) 
                                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w301) 
                                                                         << 1U))) 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w610)))))))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__11(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__11\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    __Vtemp_1 = (((QData)((IData)((0x9008U == (0x91f8U 
                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                  << 0x34U) | (((QData)((IData)((0xe000U 
                                                 == 
                                                 (0xf000U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                << 0x33U) | (((QData)((IData)(
                                                              (0x8140U 
                                                               == 
                                                               (0xf1f8U 
                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 ((0x813cU 
                                                                   == 
                                                                   (0x817cU 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                  & (~ 
                                                                     (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                                      >> 0x13U))))) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(
                                                                    ((0x813cU 
                                                                      == 
                                                                      (0x81bcU 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                     & (~ 
                                                                        (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                                         >> 0x13U))))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       ((0x813aU 
                                                                         == 
                                                                         (0x817eU 
                                                                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                        & (~ 
                                                                           (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                                            >> 0x13U))))) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(
                                                                          ((0x813aU 
                                                                            == 
                                                                            (0x81beU 
                                                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                           & (~ 
                                                                              (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                                               >> 0x13U))))) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(
                                                                             (0x100U 
                                                                              == 
                                                                              (0x1c0U 
                                                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                             << 0x2dU) 
                                                            | (((QData)((IData)(
                                                                                ((0x8008U 
                                                                                == 
                                                                                (0xf038U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                                                >> 0xdU))))) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(
                                                                                (0x7100U 
                                                                                == 
                                                                                (0xf100U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(
                                                                                (0x503cU 
                                                                                == 
                                                                                (0xf03cU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                (0x503aU 
                                                                                == 
                                                                                (0xf03aU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                         << 0x29U) 
                                                                        | (((QData)((IData)(
                                                                                (0x5008U 
                                                                                == 
                                                                                (0xf0f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                            << 0x28U) 
                                                                           | (((QData)((IData)(
                                                                                (0x41c0U 
                                                                                == 
                                                                                (0xf1d8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                               << 0x27U) 
                                                                              | (((QData)((IData)(
                                                                                (0x4c80U 
                                                                                == 
                                                                                (0xfd98U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4860U 
                                                                                == 
                                                                                (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4e98U 
                                                                                == 
                                                                                (0xffb8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x41d8U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4898U 
                                                                                == 
                                                                                (0xffb8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4858U 
                                                                                == 
                                                                                (0xff78U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4e74U 
                                                                                == 
                                                                                (0xfff7U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x4100U 
                                                                                == 
                                                                                (0xf180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1fU) 
                                                                                | (((0x180U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                ((0x403cU 
                                                                                == 
                                                                                (0xf03fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U])))) 
                                                                                << 0x1dU) 
                                                                                | (((0x4c0U 
                                                                                == 
                                                                                (0xdc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1cU) 
                                                                                | (((0x40baU 
                                                                                == 
                                                                                (0xf9feU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1bU) 
                                                                                | (((0x40baU 
                                                                                == 
                                                                                (0xf5beU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1aU) 
                                                                                | (((0x840U 
                                                                                == 
                                                                                (0xf40U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x19U) 
                                                                                | (((0xe40U 
                                                                                == 
                                                                                (0xfc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x18U) 
                                                                                | ((((0x403aU 
                                                                                == 
                                                                                (0xf0beU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                                                >> 0x19U))) 
                                                                                << 0x17U) 
                                                                                | ((((0x4008U 
                                                                                == 
                                                                                (0xf038U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                                                >> 0x18U))) 
                                                                                << 0x16U) 
                                                                                | (((0x4c00U 
                                                                                == 
                                                                                (0xff80U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x15U) 
                                                                                | (((0x4c00U 
                                                                                == 
                                                                                (0xfdc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x14U) 
                                                                                | (((0x42c0U 
                                                                                == 
                                                                                (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x13U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x12U) 
                                                                                | ((((0x5c0U 
                                                                                == 
                                                                                (0xc5c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                                                >> 0x12U))) 
                                                                                << 0x11U) 
                                                                                | ((((0x9c0U 
                                                                                == 
                                                                                (0xc9c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                                                >> 0x12U))) 
                                                                                << 0x10U) 
                                                                                | (((0x1040U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xfU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xd80U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xeU) 
                                                                                | (((0x100U 
                                                                                == 
                                                                                (0x1100U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xdU) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0xe038U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                                                >> 0xdU))) 
                                                                                << 0xcU) 
                                                                                | (((0x200U 
                                                                                == 
                                                                                (0x780U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                ((0x3cU 
                                                                                == 
                                                                                (0xf03fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x4a00U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U])))) 
                                                                                << 0xaU) 
                                                                                | (((0x100U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 9U) 
                                                                                | (((0x800U 
                                                                                == 
                                                                                (0xfc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                ((0x3aU 
                                                                                == 
                                                                                (0xf03eU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U])))) 
                                                                                << 7U) 
                                                                                | (((0xe00U 
                                                                                == 
                                                                                (0xff00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 6U) 
                                                                                | (((0x800U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 5U) 
                                                                                | ((((0xc0U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] 
                                                                                >> 5U))) 
                                                                                << 4U) 
                                                                                | (((0x6000U 
                                                                                == 
                                                                                (0xe000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 3U) 
                                                                                | (((0xe000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                ((0x3eU 
                                                                                == 
                                                                                (0x3eU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U])))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                ((0x3dU 
                                                                                == 
                                                                                (0x3dU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U] = (IData)(__Vtemp_1);
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] = 
        ((0xffe00000U & vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U]) 
         | (IData)((__Vtemp_1 >> 0x20U)));
    __Vtemp_3[0U] = (IData)((((QData)((IData)((0x8180U 
                                               == (0x81c0U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (0x4a00U 
                                                             == 
                                                             (0xff80U 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0x4800U 
                                                                == 
                                                                (0xffc0U 
                                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0x44c0U 
                                                                   == 
                                                                   (0xfdc0U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0x40c0U 
                                                                      == 
                                                                      (0xffc0U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0x13c0U 
                                                                         == 
                                                                         (0xdfc0U 
                                                                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0x4000U 
                                                                            == 
                                                                            (0xf980U 
                                                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0x23c0U 
                                                                               == 
                                                                               (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0x21c0U 
                                                                                == 
                                                                                (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0x2180U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0x2140U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0x2100U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0x20c0U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0xd1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0xf180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3040U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x11c0U 
                                                                                == 
                                                                                (0xdfc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x1180U 
                                                                                == 
                                                                                (0xd1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x1140U 
                                                                                == 
                                                                                (0xd1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                ((0xb000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x8000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0xd000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0xf800U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x4a00U 
                                                                                == 
                                                                                (0xfe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U]))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x180U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (((0xc00U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (((0x800U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0xe0c0U 
                                                                                == 
                                                                                (0xf8c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x8100U 
                                                                                == 
                                                                                (0x8180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x2cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U]))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((0xc00U 
                                                                                == 
                                                                                (0xf80U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1fU) 
                                                                                | ((((0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1eU) 
                                                                                | ((((0x840U 
                                                                                == 
                                                                                (0xf40U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1dU) 
                                                                                | ((((0x800U 
                                                                                == 
                                                                                (0xfc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1cU) 
                                                                                | ((((0x100U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1bU) 
                                                                                | (((((0xc00U 
                                                                                == 
                                                                                (0xe38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                << 0x1aU) 
                                                                                | (((((((0U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])) 
                                                                                << 0x19U) 
                                                                                | (((((0x800U 
                                                                                == 
                                                                                (0xe38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                << 0x18U) 
                                                                                | ((((0x3cU 
                                                                                == 
                                                                                (0x1bfU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1b8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0xe000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])))) 
                                                                                << 0x16U) 
                                                                                | ((((0x840U 
                                                                                == 
                                                                                (0xf78U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x15U) 
                                                                                | ((((0x800U 
                                                                                == 
                                                                                (0xff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x14U) 
                                                                                | ((((0xc00U 
                                                                                == 
                                                                                (0xfb8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x13U) 
                                                                                | (((((0x39U 
                                                                                == 
                                                                                (0x13fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x17U))) 
                                                                                << 0x12U) 
                                                                                | ((((((0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 0x11U) 
                                                                                | (((((0x38U 
                                                                                == 
                                                                                (0x13fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x15U))) 
                                                                                << 0x10U) 
                                                                                | ((((((0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 0xfU) 
                                                                                | (((((0x30U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x12U))) 
                                                                                << 0xeU) 
                                                                                | ((((0x83bU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0xdU) 
                                                                                | ((((((0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 0xcU) 
                                                                                | (((((0x28U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | ((((0x83aU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0xaU) 
                                                                                | ((((((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 9U) 
                                                                                | (((((0x20U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0xdU))) 
                                                                                << 8U) 
                                                                                | ((((((0x20U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 7U) 
                                                                                | (((((0x18U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0xbU))) 
                                                                                << 6U) 
                                                                                | ((((((0x18U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 5U) 
                                                                                | (((((0x10U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 8U))) 
                                                                                << 4U) 
                                                                                | (((((0x800U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                << 3U) 
                                                                                | ((((((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 1U) 
                                                                                | (0x80U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_3[1U] = (IData)(((((QData)((IData)((0x8180U 
                                                == 
                                                (0x81c0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x4a00U 
                                                              == 
                                                              (0xff80U 
                                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0x4800U 
                                                                 == 
                                                                 (0xffc0U 
                                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0x44c0U 
                                                                    == 
                                                                    (0xfdc0U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0x40c0U 
                                                                       == 
                                                                       (0xffc0U 
                                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0x13c0U 
                                                                          == 
                                                                          (0xdfc0U 
                                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0x4000U 
                                                                             == 
                                                                             (0xf980U 
                                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0x23c0U 
                                                                                == 
                                                                                (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0x21c0U 
                                                                                == 
                                                                                (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0x2180U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0x2140U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0x2100U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0x20c0U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0xd1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0xf180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3040U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0x11c0U 
                                                                                == 
                                                                                (0xdfc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0x1180U 
                                                                                == 
                                                                                (0xd1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x1140U 
                                                                                == 
                                                                                (0xd1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                ((0xb000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x8000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0xd000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x4000U 
                                                                                == 
                                                                                (0xf800U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x4a00U 
                                                                                == 
                                                                                (0xfe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U]))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x180U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (((0xc00U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (((0x800U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0xe0c0U 
                                                                                == 
                                                                                (0xf8c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x8100U 
                                                                                == 
                                                                                (0x8180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x2cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U]))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((0xc00U 
                                                                                == 
                                                                                (0xf80U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1fU) 
                                                                                | ((((0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1eU) 
                                                                                | ((((0x840U 
                                                                                == 
                                                                                (0xf40U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1dU) 
                                                                                | ((((0x800U 
                                                                                == 
                                                                                (0xfc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1cU) 
                                                                                | ((((0x100U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x1bU) 
                                                                                | (((((0xc00U 
                                                                                == 
                                                                                (0xe38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                << 0x1aU) 
                                                                                | (((((((0U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])) 
                                                                                << 0x19U) 
                                                                                | (((((0x800U 
                                                                                == 
                                                                                (0xe38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                << 0x18U) 
                                                                                | ((((0x3cU 
                                                                                == 
                                                                                (0x1bfU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1b8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0xe000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])))) 
                                                                                << 0x16U) 
                                                                                | ((((0x840U 
                                                                                == 
                                                                                (0xf78U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x15U) 
                                                                                | ((((0x800U 
                                                                                == 
                                                                                (0xff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x14U) 
                                                                                | ((((0xc00U 
                                                                                == 
                                                                                (0xfb8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0x13U) 
                                                                                | (((((0x39U 
                                                                                == 
                                                                                (0x13fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x17U))) 
                                                                                << 0x12U) 
                                                                                | ((((((0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 0x11U) 
                                                                                | (((((0x38U 
                                                                                == 
                                                                                (0x13fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x15U))) 
                                                                                << 0x10U) 
                                                                                | ((((((0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 0xfU) 
                                                                                | (((((0x30U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x12U))) 
                                                                                << 0xeU) 
                                                                                | ((((0x83bU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0xdU) 
                                                                                | ((((((0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 0xcU) 
                                                                                | (((((0x28U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0xfU))) 
                                                                                << 0xbU) 
                                                                                | ((((0x83aU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                << 0xaU) 
                                                                                | ((((((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 9U) 
                                                                                | (((((0x20U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0xdU))) 
                                                                                << 8U) 
                                                                                | ((((((0x20U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 7U) 
                                                                                | (((((0x18U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0xbU))) 
                                                                                << 6U) 
                                                                                | ((((((0x18U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 5U) 
                                                                                | (((((0x10U 
                                                                                == 
                                                                                (0x138U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 8U))) 
                                                                                << 4U) 
                                                                                | (((((0x800U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                << 3U) 
                                                                                | ((((((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3))) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 1U) 
                                                                                | (0x80U 
                                                                                == 
                                                                                (0x1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_11[2U] = (((0x91c0U == (0xb1c0U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                       << 8U) | (((0x10c0U == (0xd1c0U 
                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                  << 7U) | (((0x90c0U 
                                              == (0xb1c0U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                             << 6U) 
                                            | (((0x8000U 
                                                 == 
                                                 (0xa180U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 5U) 
                                               | (((0x50c0U 
                                                    == 
                                                    (0xf0c0U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 4U) 
                                                  | (((0x5080U 
                                                       == 
                                                       (0xf0c0U 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                      << 3U) 
                                                     | (((0x5000U 
                                                          == 
                                                          (0xf080U 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                         << 2U) 
                                                        | (((0x4180U 
                                                             == 
                                                             (0xf1c0U 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                            << 1U) 
                                                           | (0x4ac0U 
                                                              == 
                                                              (0xffc0U 
                                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))))))));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] = 
        ((0x3fU & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U]) 
         | (__Vtemp_3[0U] << 6U));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U] = 
        ((__Vtemp_3[0U] >> 0x1aU) | (__Vtemp_3[1U] 
                                     << 6U));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U] = 
        (0x3fffffU & ((__Vtemp_3[1U] >> 0x1aU) | ((
                                                   (0xc0c0U 
                                                    == 
                                                    (0xf0c0U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0x15U) 
                                                  | (((0xb0c0U 
                                                       == 
                                                       (0xf1c0U 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                      << 0x14U) 
                                                     | (((0xb000U 
                                                          == 
                                                          (0xf180U 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                         << 0x13U) 
                                                        | (((0xb1c0U 
                                                             == 
                                                             (0xf1c0U 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                            << 0x12U) 
                                                           | (((0x1100U 
                                                                == 
                                                                (0xd1c0U 
                                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                               << 0x11U) 
                                                              | (((0x81c0U 
                                                                   == 
                                                                   (0xf1c0U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                  << 0x10U) 
                                                                 | (((0x80c0U 
                                                                      == 
                                                                      (0xf1c0U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                     << 0xfU) 
                                                                    | (__Vtemp_11[2U] 
                                                                       << 6U))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w989 = (1U & 
                                              (~ (1U 
                                                  & (((0U 
                                                       != 
                                                       (0xacfb94d3U 
                                                        & vlSelf->md_board__DOT__m68k__DOT__a2_pla[0U])) 
                                                      | (0U 
                                                         != 
                                                         (0xef17dfffU 
                                                          & vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U]))) 
                                                     | (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                        >> 4U)))));
    vlSelf->md_board__DOT__m68k__DOT__codebus = ((1U 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_397)) 
                                                     | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_403)))
                                                  ? 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_397)) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_403))))
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_398)
                                                    ? 
                                                   (((0x100U 
                                                      & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                      ? 0xbU
                                                      : 0x3ffU) 
                                                    & (((0x400U 
                                                         & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                         ? 6U
                                                         : 0x3ffU) 
                                                       & (((0x800U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                            ? 0xfU
                                                            : 0x3ffU) 
                                                          & (((0x1000U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                               ? 0x21cU
                                                               : 0x3ffU) 
                                                             & (((0x2000U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                  ? 0x179U
                                                                  : 0x3ffU) 
                                                                & (((0x4000U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                     ? 0x103U
                                                                     : 0x3ffU) 
                                                                   & (((0x8000U 
                                                                        & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                        ? 0x1c6U
                                                                        : 0x3ffU) 
                                                                      & (((0x10000U 
                                                                           & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                           ? 0x1c2U
                                                                           : 0x3ffU) 
                                                                         & (((0x20000U 
                                                                              & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                              ? 0x1c2U
                                                                              : 0x3ffU) 
                                                                            & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x1e7U
                                                                                 : 0x3ffU) 
                                                                               & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x1e3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x1e3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0xeU
                                                                                 : 0x3ffU) 
                                                                                & (((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0xaU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x1e6U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x1e2U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x108U
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x3e7U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x3efU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x100U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x1ccU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U])
                                                                                 ? 0x3ebU
                                                                                 : 0x3ffU) 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                                                >> 0x1fU)
                                                                                 ? 0x10cU
                                                                                 : 0x3ffU) 
                                                                                & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x104U
                                                                                 : 0x3ffU) 
                                                                                & (((2U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0xabU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2f9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2faU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1c5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1d5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2daU
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1ebU
                                                                                 : 0x3ffU) 
                                                                                & (((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2d9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x279U
                                                                                 : 0x3ffU) 
                                                                                & (((0x800000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x129U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x121U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2fdU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2fcU
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2deU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1efU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2ddU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1eeU
                                                                                 : 0x3ffU) 
                                                                                & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1eaU
                                                                                 : 0x3ffU) 
                                                                                & (((4U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x301U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x152U
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1c1U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1c9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x2feU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1c5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0xa6U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0xaeU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x2f8U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1d5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1d1U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1d9U
                                                                                 : 0x3ffU) 
                                                                                & ((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x15bU
                                                                                 : 0x3ffU)))))))))))))))))))))))))))))))))))))))))))))))))))))))
                                                    : 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_400)
                                                     ? 
                                                    (((2U 
                                                       & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                       ? 0x215U
                                                       : 0x3ffU) 
                                                     & (((4U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                          ? 0x215U
                                                          : 0x3ffU) 
                                                        & (((8U 
                                                             & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                             ? 0x81U
                                                             : 0x3ffU) 
                                                           & (((0x10U 
                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                ? 0x81U
                                                                : 0x3ffU) 
                                                              & (((0x20U 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                   ? 0x87U
                                                                   : 0x3ffU) 
                                                                 & (((0x40U 
                                                                      & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                      ? 0x299U
                                                                      : 0x3ffU) 
                                                                    & (((0x80U 
                                                                         & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                         ? 0x299U
                                                                         : 0x3ffU) 
                                                                       & (((0x100U 
                                                                            & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                            ? 0x3c7U
                                                                            : 0x3ffU) 
                                                                          & (((0x200U 
                                                                               & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                               ? 0x69U
                                                                               : 0x3ffU) 
                                                                             & (((0x400U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x8fU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x69U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x29dU
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x3cbU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x3a9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x2bcU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x3abU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1cbU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x1d7U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x38aU
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x298U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x388U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x158U
                                                                                 : 0x3ffU) 
                                                                                & (((0x800000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x29fU
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x29bU
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x3adU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x38fU
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x38eU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x29cU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x38cU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U])
                                                                                 ? 0x30fU
                                                                                 : 0x3ffU) 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a2_pla[3U] 
                                                                                >> 0x1fU)
                                                                                 ? 0x2b8U
                                                                                 : 0x3ffU) 
                                                                                & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x32bU
                                                                                 : 0x3ffU) 
                                                                                & (((2U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x3a1U
                                                                                 : 0x3ffU) 
                                                                                & (((4U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x159U
                                                                                 : 0x3ffU) 
                                                                                & (((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x15cU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x3c3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x29dU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x343U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x151U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x2f3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x2f7U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x380U
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1c3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1c7U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x3afU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1cbU
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0xa4U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0xacU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x38bU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1d7U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1d3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x1cfU
                                                                                 : 0x3ffU) 
                                                                                & ((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a2_pla[4U])
                                                                                 ? 0x15aU
                                                                                 : 0x3ffU)))))))))))))))))))))))))))))))))))))))))))))))))))))
                                                     : (IData)(vlSelf->md_board__DOT__m68k__DOT__codebus_mem)))
                                                   : 
                                                  (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_413)
                                                     ? 0x1c0U
                                                     : 0x3ffU) 
                                                   & (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_412)
                                                        ? 0x1c0U
                                                        : 0x3ffU) 
                                                      & (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_410)
                                                           ? 0x1c0U
                                                           : 0x3ffU) 
                                                         & (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_409)
                                                              ? 0x1c0U
                                                              : 0x3ffU) 
                                                            & (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_407)
                                                                 ? 0x1c4U
                                                                 : 0x3ffU) 
                                                               & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_82)
                                                                   ? 0x1c0U
                                                                   : 0x3ffU)))))))
                                                  : (IData)(vlSelf->md_board__DOT__m68k__DOT__w445));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_83 
        = (3U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w476)
                  ? (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus) 
                        >> 6U)) : ((IData)(vlSelf->md_board__DOT__m68k__DOT__w481)
                                    ? (~ (((IData)(vlSelf->md_board__DOT__m68k__DOT__w473) 
                                           << 1U) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w472)))
                                    : ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_401)
                                        ? (~ (vlSelf->md_board__DOT__m68k__DOT__w522 
                                              >> 5U))
                                        : ((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2_mem) 
                                           >> 6U)))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__13(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__13\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((0U == (0xa9009000U 
                                          & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                  << 0x31U) | (((QData)((IData)((0U 
                                                 == 
                                                 (0xa9002000U 
                                                  & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (0U 
                                                               == 
                                                               (0xa9005000U 
                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0x64000580U 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                 << 0x2eU) 
                                                | (((QData)((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x58016000U 
                                                                      & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x8600a000U 
                                                                         & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                       << 0x2cU) 
                                                      | (((QData)((IData)(
                                                                          (0U 
                                                                           == 
                                                                           (0x6599a000U 
                                                                            & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                          << 0x2bU) 
                                                         | (((QData)((IData)(
                                                                             (0U 
                                                                              == 
                                                                              (0xa6000000U 
                                                                               & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                             << 0x2aU) 
                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x86024500U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x86021500U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x86000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x30000000000ULL 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ird_pla1))))) 
                                                                      << 0x27U) 
                                                                     | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x96000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                         << 0x26U) 
                                                                        | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xa5000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                            << 0x25U) 
                                                                           | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x8500a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                               << 0x24U) 
                                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x85025500U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x85000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ird_pla1))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x95000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x48000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x4600a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x1fU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x46020000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1fU)))) 
                                                                                << 0x1eU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x46010000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1fU)))) 
                                                                                << 0x1dU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x55000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x1cU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x55028000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x1bU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x55024000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x1aU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x55a50000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x19U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45958000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x18U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45990000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x17U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45550000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x16U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45690000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x15U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45650000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x14U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45954000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x13U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x45590000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x12U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x65029000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x11U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x65000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0x10U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa900a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xa9000180U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xfU)))) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa918a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0xdU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xa9000280U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xfU)))) 
                                                                                << 0xcU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa928a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xa9000140U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xfU)))) 
                                                                                << 0xaU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa914a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xa9000240U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xfU)))) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa924a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa9020000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa9010000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x9a000580U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x9a02a000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x9a010000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x9a000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x1cULL 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ird_pla1)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x55000580U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__ird_pla1 = __Vtemp_1;
    vlSelf->md_board__DOT__m68k__DOT__w569 = (((1U 
                                                & (IData)(
                                                          (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                           >> 1U)))
                                                ? 0x1000U
                                                : 0x7fffU) 
                                              & (((1U 
                                                   & (IData)(
                                                             (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                              >> 2U)))
                                                   ? 0x20U
                                                   : 0x7fffU) 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                 >> 3U)))
                                                      ? 0x20U
                                                      : 0x7fffU) 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                    >> 4U)))
                                                         ? 0x20U
                                                         : 0x7fffU) 
                                                       & (((1U 
                                                            & (IData)(
                                                                      (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                       >> 5U)))
                                                            ? 0x292U
                                                            : 0x7fffU) 
                                                          & (((1U 
                                                               & (IData)(
                                                                         (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                          >> 6U)))
                                                               ? 0x50cU
                                                               : 0x7fffU) 
                                                             & (((1U 
                                                                  & (IData)(
                                                                            (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                             >> 7U)))
                                                                  ? 0x7ce1U
                                                                  : 0x7fffU) 
                                                                & (((1U 
                                                                     & (IData)(
                                                                               (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 8U)))
                                                                     ? 0x7ce1U
                                                                     : 0x7fffU) 
                                                                   & (((1U 
                                                                        & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 9U)))
                                                                        ? 0x7867U
                                                                        : 0x7fffU) 
                                                                      & (((1U 
                                                                           & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xaU)))
                                                                           ? 0x7867U
                                                                           : 0x7fffU) 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xbU)))
                                                                              ? 0x7b61U
                                                                              : 0x7fffU) 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xcU)))
                                                                                 ? 0x7b61U
                                                                                 : 0x7fffU) 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xdU)))
                                                                                 ? 0x7879U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0xeU)))
                                                                                 ? 0x7879U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x10U)))
                                                                                 ? 0x47b8U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x11U)))
                                                                                 ? 0x3867U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x12U)))
                                                                                 ? 0x84dU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x13U)))
                                                                                 ? 0x1945U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x14U)))
                                                                                 ? 0x855U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x15U)))
                                                                                 ? 0xc47U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x16U)))
                                                                                 ? 0x2a45U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x17U)))
                                                                                 ? 0x5845U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x18U)))
                                                                                 ? 0x28c5U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x19U)))
                                                                                 ? 0x4fe5U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1aU)))
                                                                                 ? 0x5fc5U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1bU)))
                                                                                 ? 0x6fc5U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1cU)))
                                                                                 ? 0x303aU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1dU)))
                                                                                 ? 2U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1eU)))
                                                                                 ? 0x10U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x1fU)))
                                                                                 ? 0x4000U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x20U)))
                                                                                 ? 2U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x21U)))
                                                                                 ? 0x2101U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x22U)))
                                                                                 ? 0x7ebaU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x23U)))
                                                                                 ? 0x5fb6U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x24U)))
                                                                                 ? 0x5ef3U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x25U)))
                                                                                 ? 0x4cU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x26U)))
                                                                                 ? 0x210U
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x27U)))
                                                                                 ? 0x75ffU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x28U)))
                                                                                 ? 0x7fedU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x29U)))
                                                                                 ? 0x7fedU
                                                                                 : 0x7fffU) 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                                >> 0x2aU)))
                                                                                 ? 0x802U
                                                                                 : 0x7fffU) 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267)
                                                                                 ? 0U
                                                                                 : 0x7fffU))))))))))))))))))))))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w690 = (1U & 
                                              (~ ((IData)(
                                                          ((8U 
                                                            == 
                                                            (0x1cU 
                                                             & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                           & (0U 
                                                              != 
                                                              (0xa00U 
                                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                  | (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 5U))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__31(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__31\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w361;
    md_board__DOT__ym__DOT__vdp__DOT__w361 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_329;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_329 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_405;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_405 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_407;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_407 = 0;
    // Body
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t44 = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t44;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_265 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl429__DOT__mem)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w389 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl433__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl433__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl433__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    }
    vlSelf->vdp_psg_clk1 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w972 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                           << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                      << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))
            : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                           << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                      << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
               >> 0xcU)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_9 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_55) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                    >> 3U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1127 
        = (((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2))
              ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_1__DOT__mem) 
                  << 4U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_2__DOT__mem))
              : 0U) | ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2))
                         ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_1__DOT__mem) 
                             << 4U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_2__DOT__mem))
                         : 0U) | ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2))
                                    ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_1__DOT__mem) 
                                        << 4U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_2__DOT__mem))
                                    : 0U) | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v2))
                                              ? (((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem))) 
                                                  << 6U) 
                                                 | (((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem))) 
                                                     << 5U) 
                                                    | ((0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem))) 
                                                       << 4U)))
                                              : 0U)))) 
           <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l644));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_154 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                             << 5U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                << 4U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
            << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                       << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                  << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w465 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w460) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_data_in 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
             << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                        << 7U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                  << 6U))) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                                 ? 
                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)))
                                                 : 
                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)))) 
                                               << 3U) 
                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                                  ? 
                                                 (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)))
                                                  : (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_87))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_151 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1e8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_153 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1e0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_329 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1029));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1025 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2)) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_405 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_180 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_91));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_406 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_410) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
              & (0x118U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_178 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_91))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_138 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                 << 4U) 
                                                | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_91));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_407 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_408));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_131 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_129 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl191__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl191__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl194__DOT__mem_assign 
        = (3U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl194__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl195__DOT__mem_assign 
        = (3U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v2) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl195__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl219__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl219__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl246__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl246__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl278__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl278__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl297__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl297__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl386__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl386__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl435__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl435__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl436__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl436__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl479__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl479__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl480__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl480__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl481__DOT__mem_assign 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl481__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_348) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_356) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_350) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_358) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_352) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_360) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_354) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_362)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w834 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w835 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w488 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1e6U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_175 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1f8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_234 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & ((0x1fcU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
              | (0x1f4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_177 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1f0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_174 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1f6U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_403 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
            & (0x1e4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
               & (0x1ccU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
                  & (0x1caU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_410) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                        & (0x158U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136)))) 
                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_137) 
                        & (0x16cU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_137) 
                           & (0x168U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139))) 
                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_137) 
                              & (0x160U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136))) 
                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
                                & (0x150U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136))))))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff60__clk 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->md_board__DOT__FC0)) 
                         & (IData)(vlSelf->md_board__DOT__FC1))) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d8__DOT__dl))) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff63__clk 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelf->md_board__DOT__FC1)) 
                            & (IData)(vlSelf->md_board__DOT__FC0))) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d8__DOT__dl))) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_14 
        = (1U & ((~ ((~ ((~ (IData)(vlSelf->md_board__DOT__FC1)) 
                         & (~ (IData)(vlSelf->md_board__DOT__FC0)))) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d8__DOT__dl))) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w287)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w121 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w458 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2))));
    md_board__DOT__ym__DOT__vdp__DOT__w361 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w88) 
                                                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2)) 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem) 
                                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2)))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl488__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl488__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl487__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl487__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl486__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl486__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl478__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl478__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l2) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l2) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l2))));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in 
        = ((IData)(vlSelf->vdp_cramdot_dis) ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out_dp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_hclk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr495__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr495__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr498__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr498__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr495__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr495__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr498__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr498__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl572__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl572__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl572__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr555__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_in 
        = (((QData)((IData)((0x3fU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759)
                                        ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                           >> 8U) : 0U) 
                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760)
                                          ? ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                                                ? (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w730) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w728) 
                                                         >> 3U)))
                                                : (
                                                   (4U 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem) 
                                                       >> 3U)) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w730))) 
                                              << 3U) 
                                             | (7U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w728)))
                                          : 0U))))) 
            << 0x1cU) | (QData)((IData)(((0xc000000U 
                                          & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759)
                                                ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                                   >> 6U)
                                                : 0U) 
                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760)
                                                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem)
                                                  : 0U)) 
                                             << 0x1aU)) 
                                         | ((0x3000000U 
                                             & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759)
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                                   >> 4U)
                                                   : 0U) 
                                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760)
                                                     ? 
                                                    ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem) 
                                                     >> 2U)
                                                     : 0U)) 
                                                << 0x18U)) 
                                            | ((0xff800000U 
                                                & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                                       << 0x14U)) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760) 
                                                       << 0x17U) 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem) 
                                                         << 0x10U)))) 
                                               | ((0x600000U 
                                                   & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759)
                                                         ? 
                                                        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760)
                                                           ? 
                                                          ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem) 
                                                           >> 5U)
                                                           : 0U)) 
                                                      << 0x15U)) 
                                                  | (((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759) 
                                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)) 
                                                       << 0x14U) 
                                                      | (0xfff00000U 
                                                         & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760) 
                                                             << 0x14U) 
                                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem) 
                                                               << 0x11U)))) 
                                                     | ((0xff800U 
                                                         & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759)
                                                               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760)
                                                                 ? 
                                                                ((0x100U 
                                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl386__DOT__mem) 
                                                                     << 8U)) 
                                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl436__DOT__mem))
                                                                 : 0U)) 
                                                            << 0xbU)) 
                                                        | (0x7ffU 
                                                           & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759)
                                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w760)
                                                                  ? 
                                                                 ((0x700U 
                                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem) 
                                                                      << 8U)) 
                                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl435__DOT__mem))
                                                                  : 0U))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum 
        = (0x1ffU & (((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_9)) 
                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v2)))
                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem)
                       : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                           << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                      << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))))) 
                     + (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                 >> 3U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117 
        = (0x3ffU & ((IData)(1U) + ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1127))))
                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l644)
                                     : 0U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_155 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1d0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_154)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1030 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1029) 
           & ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l556)) 
              & ((0xeU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)) 
                 | (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1032 
        = ((0U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                    << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                               << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                          << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
              | (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_170 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0x1f0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_154)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w489 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & ((0x110U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)) 
              | ((0x1e8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)) 
                 | ((0x1dcU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)) 
                    | (0x11cU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_164 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0x1e0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_165 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0x1d4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_166 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0x114U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_167 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0x108U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_169 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0xaU == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                        << 8U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_93))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1027 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_329) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973)) 
              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_149 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_405) 
           & (0x110U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_168 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
           & (0x12U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 8U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_138))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_124 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                             << 5U) 
                                            | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_138)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_146 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_407) 
           & (0x124U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_145 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_407) 
           & (0x122U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l2) 
                 + (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2)));
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2 = 0U;
    } else if (vlSelf->md_board__DOT__MCLK_e) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w478 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_175) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
               & (0x108U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_129))) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
                 & (8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_131)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w479 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_234) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
               & (0x104U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_178))) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
                 & (4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_180)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w477 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_177) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
               & (8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_131))) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
                  & (0x100U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_129))) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
                    & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_131))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w480 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
            & (0x1feU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_174) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
                  & (0x106U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_178))) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
                    & (6U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_180))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w410 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w361) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w416));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum 
        = (0x3ffU & ((0x1ffU & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w361)
                                 ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w88)
                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                                     : (0x1c0U | ((0x10U 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w365)) 
                                                      << 4U)) 
                                                  | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w365) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)))) 
                                                      << 3U) 
                                                     | ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                                                          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem)) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem)) 
                                                                & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem))) 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w365)))))))
                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                     + (1U & ((~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w361) 
                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                                     >> 3U))) | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak) 
                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                                                    >> 3U))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1031 
        = ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1030));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1042 
        = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1032) 
             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1024)) 
            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1025) 
                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1033)) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1032) 
                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1033) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1026))) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1022) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1023))))) 
           & ((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1062)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w481 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
            & (0x10aU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_129))) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
               & (0xaU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_131))) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_164) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_165) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_166) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_167))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1064 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1027)) 
                 & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_329) 
                       & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2)) 
                          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_150 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (0x1f2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_124)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l2) 
                 + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__sum), 1U)));
    vlSelf->md_board__DOT__MCLK_e = vlSelf->__Vdly__md_board__DOT__MCLK_e;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w403 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w410));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w834) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl488__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl481__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl487__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl480__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl486__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl479__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl478__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl488__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl488__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl487__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl487__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl486__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl486__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl478__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl478__DOT__mem;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w835) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl494__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl488__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl493__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl487__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl492__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl486__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl491__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl478__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl494__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl494__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl493__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl493__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl492__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl492__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl491__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl491__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l617 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
            << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                       << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                  << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                             << 2U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_367) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_371) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_375) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_379) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_383) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_387) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_391) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_395)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_349) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_357) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_351) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_359) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_353) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_361) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_355) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_363)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2_assign;
    vlSelf->V_CS = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_307 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1031) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1033));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_308 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1032) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1031));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1045 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1042) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1030));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1044 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1030)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1042)) 
           | (1U == (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                           >> 7U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w482 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_403) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
               & (0x148U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136))) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
                  & (0x144U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139))) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_145) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_146) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_406) 
                          | (((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_405) 
                              & (0x108U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136))) 
                             | (((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_405) 
                                 & (0x104U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139))) 
                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_149) 
                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_150) 
                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_151) 
                                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_153) 
                                            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_155) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
                                                  & ((0x1e4U 
                                                      == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)) 
                                                     | ((0x1d8U 
                                                         == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)) 
                                                        | ((0x118U 
                                                            == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)) 
                                                           | (0x10cU 
                                                              == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139)))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l2) 
                 + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__sum), 1U)));
    if (vlSelf->md_board__DOT__MCLK_e) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2;
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w1 = 
        (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l2)) 
                  & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l2)) 
                     & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff2__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff6__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff9__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff10__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1)) 
           & ((IData)(vlSelf->md_board__DOT__MCLK_e)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2)));
}
