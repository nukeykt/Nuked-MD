// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___act_comb__TOP__1(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*3:0*/ md_board__DOT__z80__DOT__t;
    md_board__DOT__z80__DOT__t = 0;
    // Body
    md_board__DOT__z80__DOT__t = (0xfU & (~ ((((IData)(vlSelf->md_board__DOT__z80__DOT__c_in) 
                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT__o1) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__o2))) 
                                              | ((IData)(vlSelf->md_board__DOT__z80__DOT__o1) 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__o2))) 
                                             | (- (IData)(
                                                          ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l64)) 
                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)))))));
    vlSelf->md_board__DOT__z80__DOT__c_out = (0xfU 
                                              & ((~ (IData)(md_board__DOT__z80__DOT__t)) 
                                                 & (~ 
                                                    (- (IData)(
                                                               ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l65)) 
                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)))))));
    vlSelf->md_board__DOT__z80__DOT__w477 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w467) 
                                                    ^ 
                                                    ((IData)(vlSelf->md_board__DOT__z80__DOT__c_out) 
                                                     >> 3U))));
    vlSelf->md_board__DOT__z80__DOT__c_in = ((0xcU 
                                              & ((IData)(vlSelf->md_board__DOT__z80__DOT__c_out) 
                                                 << 1U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__c_out) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->md_board__DOT__z80__DOT__w467) 
                                                       ^ (IData)(vlSelf->md_board__DOT__z80__DOT__w476))))));
    vlSelf->md_board__DOT__z80__DOT__w504 = ((((IData)(vlSelf->md_board__DOT__z80__DOT__o1) 
                                               | ((IData)(vlSelf->md_board__DOT__z80__DOT__o2) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__c_in))) 
                                              & ((IData)(md_board__DOT__z80__DOT__t) 
                                                 | (- (IData)(
                                                              ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l63)) 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)))))) 
                                             | ((IData)(vlSelf->md_board__DOT__z80__DOT__o1) 
                                                & ((IData)(vlSelf->md_board__DOT__z80__DOT__o2) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__c_in))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw449__inp 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w441) 
                    ^ VL_REDXOR_4((7U & (IData)(vlSelf->md_board__DOT__z80__DOT__w504))))));
}

VL_INLINE_OPT void Vmd_board___024root___act_comb__TOP__2(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_comb__TOP__2\n"); );
    // Init
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_320;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_320 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_321;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_321 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_325;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_325 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_334;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_334 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_335;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_335 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337 = 0;
    // Body
    if (vlSelf->md_board__DOT__m68k__DOT__c6) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b2_mem
               [1U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296 
            = vlSelf->md_board__DOT__m68k__DOT__b2_mem
            [0U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b2_mem
               [2U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b2_mem
               [3U]);
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w93)
                            ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w147))
                            : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w156)
                                       ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r4))
                                       : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w178)
                                                  ? 
                                                 (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r5))
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w235)
                                                     ? 
                                                    (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__r6
                                                     [0U])
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w241)
                                                        ? 
                                                       (~ 
                                                        vlSelf->md_board__DOT__m68k__DOT__r6
                                                        [1U])
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w242)
                                                           ? 
                                                          (~ 
                                                           vlSelf->md_board__DOT__m68k__DOT__r6
                                                           [2U])
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w245)
                                                              ? 
                                                             (~ 
                                                              vlSelf->md_board__DOT__m68k__DOT__r6
                                                              [3U])
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w246)
                                                                 ? 
                                                                (~ 
                                                                 vlSelf->md_board__DOT__m68k__DOT__r6
                                                                 [4U])
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w249)
                                                                    ? 
                                                                   (~ 
                                                                    vlSelf->md_board__DOT__m68k__DOT__r6
                                                                    [5U])
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w250)
                                                                       ? 
                                                                      (~ 
                                                                       vlSelf->md_board__DOT__m68k__DOT__r6
                                                                       [6U])
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w253)
                                                                          ? 
                                                                         (~ 
                                                                          vlSelf->md_board__DOT__m68k__DOT__r6
                                                                          [7U])
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w254)
                                                                             ? 
                                                                            (~ 
                                                                             vlSelf->md_board__DOT__m68k__DOT__r6
                                                                             [8U])
                                                                             : 0U) 
                                                                           | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w257)
                                                                               ? 
                                                                              (~ 
                                                                               vlSelf->md_board__DOT__m68k__DOT__r6
                                                                               [9U])
                                                                               : 0U))))))))))))));
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296 
            = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w93)
                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w147)
                 : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w156)
                            ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r4)
                            : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w178)
                                       ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r5)
                                       : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w235)
                                                  ? 
                                                 vlSelf->md_board__DOT__m68k__DOT__r6
                                                 [0U]
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w241)
                                                     ? 
                                                    vlSelf->md_board__DOT__m68k__DOT__r6
                                                    [1U]
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w242)
                                                        ? 
                                                       vlSelf->md_board__DOT__m68k__DOT__r6
                                                       [2U]
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w245)
                                                           ? 
                                                          vlSelf->md_board__DOT__m68k__DOT__r6
                                                          [3U]
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w246)
                                                              ? 
                                                             vlSelf->md_board__DOT__m68k__DOT__r6
                                                             [4U]
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w249)
                                                                 ? 
                                                                vlSelf->md_board__DOT__m68k__DOT__r6
                                                                [5U]
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w250)
                                                                    ? 
                                                                   vlSelf->md_board__DOT__m68k__DOT__r6
                                                                   [6U]
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w253)
                                                                       ? 
                                                                      vlSelf->md_board__DOT__m68k__DOT__r6
                                                                      [7U]
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w254)
                                                                          ? 
                                                                         vlSelf->md_board__DOT__m68k__DOT__r6
                                                                         [8U]
                                                                          : 0U) 
                                                                        | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w257)
                                                                            ? 
                                                                           vlSelf->md_board__DOT__m68k__DOT__r6
                                                                           [9U]
                                                                            : 0U)))))))))))));
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w94)
                            ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w147)
                            : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w79)
                                       ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w158))
                                       : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w155)
                                                  ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r4)
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w179)
                                                     ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r5)
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w239)
                                                        ? 
                                                       vlSelf->md_board__DOT__m68k__DOT__r6
                                                       [0U]
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w240)
                                                           ? 
                                                          vlSelf->md_board__DOT__m68k__DOT__r6
                                                          [1U]
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w243)
                                                              ? 
                                                             vlSelf->md_board__DOT__m68k__DOT__r6
                                                             [2U]
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w244)
                                                                 ? 
                                                                vlSelf->md_board__DOT__m68k__DOT__r6
                                                                [3U]
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w247)
                                                                    ? 
                                                                   vlSelf->md_board__DOT__m68k__DOT__r6
                                                                   [4U]
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w248)
                                                                       ? 
                                                                      vlSelf->md_board__DOT__m68k__DOT__r6
                                                                      [5U]
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w251)
                                                                          ? 
                                                                         vlSelf->md_board__DOT__m68k__DOT__r6
                                                                         [6U]
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w252)
                                                                             ? 
                                                                            vlSelf->md_board__DOT__m68k__DOT__r6
                                                                            [7U]
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w255)
                                                                                ? 
                                                                               vlSelf->md_board__DOT__m68k__DOT__r6
                                                                               [8U]
                                                                                : 0U) 
                                                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w256)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r6
                                                                                [9U]
                                                                                 : 0U)))))))))))))));
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w94)
                            ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w147))
                            : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w79)
                                       ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w158)
                                       : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w155)
                                                  ? 
                                                 (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r4))
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w179)
                                                     ? 
                                                    (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r5))
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w239)
                                                        ? 
                                                       (~ 
                                                        vlSelf->md_board__DOT__m68k__DOT__r6
                                                        [0U])
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w240)
                                                           ? 
                                                          (~ 
                                                           vlSelf->md_board__DOT__m68k__DOT__r6
                                                           [1U])
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w243)
                                                              ? 
                                                             (~ 
                                                              vlSelf->md_board__DOT__m68k__DOT__r6
                                                              [2U])
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w244)
                                                                 ? 
                                                                (~ 
                                                                 vlSelf->md_board__DOT__m68k__DOT__r6
                                                                 [3U])
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w247)
                                                                    ? 
                                                                   (~ 
                                                                    vlSelf->md_board__DOT__m68k__DOT__r6
                                                                    [4U])
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w248)
                                                                       ? 
                                                                      (~ 
                                                                       vlSelf->md_board__DOT__m68k__DOT__r6
                                                                       [5U])
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w251)
                                                                          ? 
                                                                         (~ 
                                                                          vlSelf->md_board__DOT__m68k__DOT__r6
                                                                          [6U])
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w252)
                                                                             ? 
                                                                            (~ 
                                                                             vlSelf->md_board__DOT__m68k__DOT__r6
                                                                             [7U])
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w255)
                                                                                ? 
                                                                               (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r6
                                                                                [8U])
                                                                                : 0U) 
                                                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w256)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r6
                                                                                [9U])
                                                                                 : 0U)))))))))))))));
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_316 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_275) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_317 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_277) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_319 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [3U]);
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_318 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [2U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_320 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_321 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [3U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [2U]);
    if (vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_324) {
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_325 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_320;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_334 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_320;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_320;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_326 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_321;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_335 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_321;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_321;
    } else {
        if (vlSelf->md_board__DOT__m68k__DOT__w128) {
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_325 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312;
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_326 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313;
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313;
        } else {
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_325 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_275;
            if (vlSelf->md_board__DOT__m68k__DOT__w850) {
                md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_316;
                vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_317;
            } else {
                md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295;
                vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296;
            }
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_326 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_277;
        }
        if (vlSelf->md_board__DOT__m68k__DOT__w850) {
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_334 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_316;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_335 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_317;
        } else {
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_334 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_335 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311;
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327) {
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322;
    } else {
        if (vlSelf->md_board__DOT__m68k__DOT__w848) {
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_319;
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_318;
        } else {
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337 
                = vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
                [3U];
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336 
                = vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
                [2U];
        }
        if (vlSelf->md_board__DOT__m68k__DOT__w127) {
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314;
        } else {
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281;
            if (vlSelf->md_board__DOT__m68k__DOT__w848) {
                md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_319;
                md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_318;
            } else {
                md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298;
                md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297;
            }
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279;
        }
    }
    vlSelf->md_board__DOT__m68k__DOT__b1[0U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_325)));
    vlSelf->md_board__DOT__m68k__DOT__b3[0U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_334)));
    vlSelf->md_board__DOT__m68k__DOT__b2[0U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_330)));
    vlSelf->md_board__DOT__m68k__DOT__b1[1U] = (0xffffU 
                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_326)));
    vlSelf->md_board__DOT__m68k__DOT__b3[1U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_335)));
    vlSelf->md_board__DOT__m68k__DOT__b2[1U] = (0xffffU 
                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331)));
    vlSelf->md_board__DOT__m68k__DOT__b3[3U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337)));
    vlSelf->md_board__DOT__m68k__DOT__b1[3U] = (0xffffU 
                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329)));
    vlSelf->md_board__DOT__m68k__DOT__b2[3U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_27 
        = (0xffffU & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w643)
                          ? (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333))
                          : ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w639)
                                ? 0x3fffU : 0U) << 2U) 
                             | ((2U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w641)) 
                                       << 1U)) | (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w638) 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w639)))))))));
    vlSelf->md_board__DOT__m68k__DOT__b1[2U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328)));
    vlSelf->md_board__DOT__m68k__DOT__b2[2U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332)));
    vlSelf->md_board__DOT__m68k__DOT__b3[2U] = (0xffffU 
                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336)));
    vlSelf->md_board__DOT__m68k__DOT__w737 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w715)
                                                ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w714)
                                                    ? 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w716)
                                                     ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w737_mem)
                                                     : 
                                                    (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336) 
                                                      >> 7U)))
                                                    : (IData)(vlSelf->md_board__DOT__m68k__DOT__w740))
                                                : (~ 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336) 
                                                    >> 0xfU))));
    if (vlSelf->md_board__DOT__m68k__DOT__w726) {
        vlSelf->md_board__DOT__m68k__DOT__w733 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w714)
                                                      ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w733_mem)
                                                      : 
                                                     (~ 
                                                      ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336) 
                                                       >> 0xfU))));
        vlSelf->md_board__DOT__m68k__DOT__w738 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w727)
                                                      ? 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w728)
                                                       ? 
                                                      ((IData)(vlSelf->md_board__DOT__m68k__DOT__w729)
                                                        ? 
                                                       ((IData)(vlSelf->md_board__DOT__m68k__DOT__w730) 
                                                        & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w731)) 
                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w738_mem)))
                                                        : 
                                                       (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w736)))
                                                       : (IData)(vlSelf->md_board__DOT__m68k__DOT__w736))
                                                      : (IData)(vlSelf->md_board__DOT__m68k__DOT__w737)));
    } else {
        vlSelf->md_board__DOT__m68k__DOT__w733 = (1U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w732));
        vlSelf->md_board__DOT__m68k__DOT__w738 = (1U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w740));
    }
    vlSelf->md_board__DOT__m68k__DOT__w746 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w725)
                                                ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w737)
                                                : ((IData)(vlSelf->md_board__DOT__m68k__DOT__w724)
                                                    ? 
                                                   (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336))
                                                    : (IData)(vlSelf->md_board__DOT__m68k__DOT__w746_mem))));
    vlSelf->md_board__DOT__m68k__DOT__w739 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w721)
                                               ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w722)
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w723) 
                                                   & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w720)
                                                       ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w739_mem)
                                                       : 
                                                      (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336))))
                                                   : (IData)(vlSelf->md_board__DOT__m68k__DOT__w736))
                                               : (IData)(vlSelf->md_board__DOT__m68k__DOT__w737));
    vlSelf->md_board__DOT__m68k__DOT__w742 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w714)
                                               ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w715)
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w719)
                                                    ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w742_mem)
                                                    : 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w779)
                                                     ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w751)
                                                     : 
                                                    ((IData)(vlSelf->md_board__DOT__m68k__DOT__w752) 
                                                     ^ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))))
                                                   : (IData)(vlSelf->md_board__DOT__m68k__DOT__w739))
                                               : (IData)(vlSelf->md_board__DOT__m68k__DOT__w741));
}

VL_INLINE_OPT void Vmd_board___024root___act_comb__TOP__3(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w591 = (0xffffU 
                                              & (~ 
                                                 (((1U 
                                                    & ((~ 
                                                        ((vlSelf->md_board__DOT__m68k__DOT__w597 
                                                          >> 0xfU) 
                                                         | (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__ird_pla2))))) 
                                                       | (~ 
                                                          (vlSelf->md_board__DOT__m68k__DOT__w597 
                                                           >> 0xeU))))
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                        >> 7U)) 
                                                    | ((0x40U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                           >> 6U)) 
                                                       | ((0x20U 
                                                           & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                              >> 5U)) 
                                                          | ((0x10U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                 >> 4U)) 
                                                             | ((8U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                    >> 3U)) 
                                                                | ((4U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                       >> 2U)) 
                                                                   | ((2U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                          >> 1U)) 
                                                                      | (1U 
                                                                         & vlSelf->md_board__DOT__m68k__DOT__irdbus))))))))) 
                                                  | (((IData)(
                                                              (0xc000U 
                                                               != 
                                                               (0xc000U 
                                                                & vlSelf->md_board__DOT__m68k__DOT__w597)))
                                                       ? 0U
                                                       : 
                                                      ((0x8000U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                           >> 0xfU)) 
                                                       | ((0x4000U 
                                                           & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                              >> 0xeU)) 
                                                          | ((0x2000U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                 >> 0xdU)) 
                                                             | ((0x1000U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                    >> 0xcU)) 
                                                                | ((0x800U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                       >> 0xbU)) 
                                                                   | ((0x400U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                          >> 0xaU)) 
                                                                      | ((0x200U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                             >> 9U)) 
                                                                         | (0x100U 
                                                                            & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                               >> 8U)))))))))) 
                                                     | (((8U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)
                                                          ? 0x80U
                                                          : 0U) 
                                                        | (((1U 
                                                             & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)
                                                             ? 0xff00U
                                                             : 0U) 
                                                           | (((4U 
                                                                & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)
                                                                ? 0xfU
                                                                : 0U) 
                                                              | (((0x2000U 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w597)
                                                                   ? 0xfff0U
                                                                   : 0U) 
                                                                 | (((1U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x70U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)))) 
                                                                         | (~ 
                                                                            (vlSelf->md_board__DOT__m68k__DOT__w597 
                                                                             >> 0xeU))))
                                                                      ? 0U
                                                                      : 
                                                                     (0xfU 
                                                                      & (~ 
                                                                         (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x540000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus))) 
                                                                           << 3U) 
                                                                          | ((4U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x15U)) 
                                                                             | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x13U)))))))) 
                                                                    | (((0x20000U 
                                                                         & vlSelf->md_board__DOT__m68k__DOT__w597)
                                                                         ? 
                                                                        (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_225)
                                                                           ? 4U
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_224)
                                                                              ? 8U
                                                                              : 0U) 
                                                                            | (((1U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0xcU
                                                                                 : 0U) 
                                                                               | (((2U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 8U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_221)
                                                                                 ? 8U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_220)
                                                                                 ? 4U
                                                                                 : 0U) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x10U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_218)
                                                                                 ? 0x10U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_217)
                                                                                 ? 0x10U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_216)
                                                                                 ? 0x14U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_215)
                                                                                 ? 0x18U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_214)
                                                                                 ? 0x20U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_213)
                                                                                 ? 0x20U
                                                                                 : 0U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x60U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_211)
                                                                                 ? 0x40U
                                                                                 : 0U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x60U
                                                                                 : 0U) 
                                                                                | (((0xeU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x20U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_209)
                                                                                 ? 0x80U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_208)
                                                                                 ? 0x80U
                                                                                 : 0U) 
                                                                                | (((4U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x24U
                                                                                 : 0U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x28U
                                                                                 : 0U) 
                                                                                | (((0xcU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i))
                                                                                 ? 0x2cU
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_204)
                                                                                 ? 0x1cU
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_202)
                                                                                 ? 0x10U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_201)
                                                                                 ? 8U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_200)
                                                                                 ? 4U
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_198)
                                                                                 ? 0x100U
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_197)
                                                                                 ? 0x200U
                                                                                 : 0U))))))))))))))))))))))))))))
                                                                         : 0U) 
                                                                       | ((0x2000U 
                                                                           & vlSelf->md_board__DOT__m68k__DOT__w597)
                                                                           ? 
                                                                          (((IData)(vlSelf->md_board__DOT__m68k__DOT__w609) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w610) 
                                                                               << 2U) 
                                                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w611) 
                                                                                << 1U)))
                                                                           : 0U)))))))))));
}

VL_INLINE_OPT void Vmd_board___024root___act_comb__TOP__4(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_comb__TOP__4\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)(((0U == (0x7000U & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                           & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                              >> 0xcU))) << 0xfU) | 
                 (((IData)(((0U == (0x3000U & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                            & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                               >> 0xcU))) << 0xeU) 
                  | ((0x2000U & (((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w525) 
                                      >> 0xcU)) << 0xdU) 
                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                    << 1U))) | (((IData)(
                                                         ((0U 
                                                           == 
                                                           (0xf80U 
                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                             >> 7U))) 
                                                 << 0xcU) 
                                                | (((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                >> 9U))) 
                                                    << 0xbU) 
                                                   | ((0x400U 
                                                       & (((~ 
                                                            ((IData)(vlSelf->md_board__DOT__z80__DOT__w525) 
                                                             >> 9U)) 
                                                           << 0xaU) 
                                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                             << 1U))) 
                                                      | (((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x180U 
                                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                      >> 7U))) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & (((~ 
                                                                  ((IData)(vlSelf->md_board__DOT__z80__DOT__w525) 
                                                                   >> 7U)) 
                                                                 << 8U) 
                                                                & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                   << 1U))) 
                                                            | (((IData)(
                                                                        (((0U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w193))) 
                                                                         & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w321)))) 
                                                                << 7U) 
                                                               | (((IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x30U 
                                                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                                            & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                               >> 4U))) 
                                                                   << 6U) 
                                                                  | ((0x20U 
                                                                      & (((~ 
                                                                           ((IData)(vlSelf->md_board__DOT__z80__DOT__w525) 
                                                                            >> 4U)) 
                                                                          << 5U) 
                                                                         & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                            << 1U))) 
                                                                     | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                                                & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                                >> 2U))) 
                                                                         << 4U) 
                                                                        | ((8U 
                                                                            & (((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__z80__DOT__w525) 
                                                                                >> 2U)) 
                                                                                << 3U) 
                                                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                                                << 1U))) 
                                                                           | ((((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w193)) 
                                                                                & (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w525)))) 
                                                                               << 2U) 
                                                                              | ((2U 
                                                                                & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w193)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w525))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w193))))))))))))))))));
    vlSelf->md_board__DOT__z80__DOT__cla = __Vtemp_1;
}

VL_INLINE_OPT void Vmd_board___024root___act_comb__TOP__5(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_comb__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x40000U & ((~ ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                      >> 0xfU)) | (
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                    >> 0xfU) 
                                                   & (~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                       >> 0x11U))))) 
                              << 0x12U)) | ((0x20000U 
                                             & ((~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                    >> 0xeU)) 
                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                      >> 0xeU) 
                                                     & (~ 
                                                        (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                         >> 0x10U))))) 
                                                << 0x11U)) 
                                            | ((0x10000U 
                                                & ((~ 
                                                    ((~ 
                                                      ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                       >> 0xdU)) 
                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                         >> 0xdU) 
                                                        & (~ 
                                                           (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                            >> 0xfU))))) 
                                                   << 0x10U)) 
                                               | ((0x8000U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                          >> 0xcU)) 
                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                            >> 0xcU) 
                                                           & (~ 
                                                              (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                               >> 0xeU))))) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((~ 
                                                          (((IData)(vlSelf->md_board__DOT__m68k__DOT__w958) 
                                                            | (IData)(vlSelf->md_board__DOT__m68k__DOT__w959)) 
                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w960))) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((~ 
                                                             ((~ 
                                                               ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                >> 0xbU)) 
                                                              | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                  >> 0xbU) 
                                                                 & (~ 
                                                                    (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                     >> 0xcU))))) 
                                                            << 0xdU)) 
                                                        | ((0x1000U 
                                                            & ((~ 
                                                                ((~ 
                                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                   >> 0xaU)) 
                                                                 | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                     >> 0xaU) 
                                                                    & (~ 
                                                                       (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                        >> 0xbU))))) 
                                                               << 0xcU)) 
                                                           | ((0x800U 
                                                               & ((~ 
                                                                   ((~ 
                                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                      >> 9U)) 
                                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                        >> 9U) 
                                                                       & (~ 
                                                                          (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                           >> 0xaU))))) 
                                                                  << 0xbU)) 
                                                              | ((0x400U 
                                                                  & ((~ 
                                                                      ((~ 
                                                                        ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                         >> 8U)) 
                                                                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                           >> 8U) 
                                                                          & (~ 
                                                                             (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                              >> 9U))))) 
                                                                     << 0xaU)) 
                                                                 | ((0x200U 
                                                                     & ((~ 
                                                                         ((IData)(vlSelf->md_board__DOT__m68k__DOT__w956) 
                                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT__w957))) 
                                                                        << 9U)) 
                                                                    | ((0x100U 
                                                                        & ((~ 
                                                                            ((~ 
                                                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                               >> 7U)) 
                                                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 7U) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                                >> 7U))))) 
                                                                           << 8U)) 
                                                                       | ((0x80U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 6U) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                                >> 6U))))) 
                                                                              << 7U)) 
                                                                          | ((0x40U 
                                                                              & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 5U) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                                >> 5U))))) 
                                                                                << 6U)) 
                                                                             | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 4U) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                                >> 4U))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w955)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 3U) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                                >> 2U))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 2U) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                                >> 1U))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w953) 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                >> 1U) 
                                                                                & (~ vlSelf->md_board__DOT__m68k__DOT__w954)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w953)) 
                                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w738)))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w954 = __Vtemp_1;
    vlSelf->md_board__DOT__m68k__DOT__w961 = (0xffffU 
                                              & (~ 
                                                 ((IData)(vlSelf->md_board__DOT__m68k__DOT__w951) 
                                                  ^ 
                                                  ((0xf000U 
                                                    & (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                       >> 2U)) 
                                                   | ((0xf00U 
                                                       & (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                          >> 1U)) 
                                                      | ((0xf0U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__w954) 
                                                         | ((0xeU 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w738))))))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__0(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w414__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w414__v2 = 0U;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w145 = vlSelf->md_board__DOT__z80__DOT__w145;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w751 
        = vlSelf->md_board__DOT__m68k__DOT__w751;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w752 
        = vlSelf->md_board__DOT__m68k__DOT__w752;
    vlSelf->__Vdly__md_board__DOT__RW = vlSelf->md_board__DOT__RW;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w498 = vlSelf->md_board__DOT__z80__DOT__w498;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 = vlSelf->md_board__DOT__z80__DOT__w511;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ZA = vlSelf->md_board__DOT__ZA;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w145 = 
        (0xffU & ((IData)(vlSelf->md_board__DOT__z80__DOT__w2)
                   ? (~ (IData)(vlSelf->md_board__DOT__ZD))
                   : (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                       & ((~ (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                              >> 3U)) & (IData)(vlSelf->md_board__DOT__z80__DOT__l13)))
                       ? (IData)(vlSelf->md_board__DOT__z80__DOT__w146)
                       : (IData)(vlSelf->md_board__DOT__z80__DOT__w145))));
    if (vlSelf->md_board__DOT__m68k__DOT__w749) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w751 
            = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io));
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w752 
            = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                     >> 1U));
    } else if (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w759)) 
                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w757))) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w751 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w791)));
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w752 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w795)));
    } else {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w751 
            = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w751));
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w752 
            = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w752));
    }
    vlSelf->__Vdly__md_board__DOT__RW = (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                          & (IData)(vlSelf->md_board__DOT__m68k_RW_d)) 
                                         | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76)) 
                                             & (IData)(vlSelf->md_board__DOT__ZWR)) 
                                            | ((~ (IData)(vlSelf->md_board__DOT__m68k_RW_d)) 
                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__rw_l))));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w150)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1 
                = ((0x100U & ((IData)(vlSelf->md_board__DOT__ZD) 
                              << 8U)) | (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l2) 
                                                  >> 1U)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w150) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l2 = 0U;
    }
    vlSelf->__Vdly__md_board__DOT__ZA = (0xffffU & 
                                         ((((~ (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)))) 
                                            & ((((IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)
                                                  ? 0U
                                                  : 
                                                 (0x7fU 
                                                  & (vlSelf->md_board__DOT__VA 
                                                     >> 7U))) 
                                                << 8U) 
                                               | ((0xfeU 
                                                   & (vlSelf->md_board__DOT__VA 
                                                      << 1U)) 
                                                  | ((IData)(vlSelf->md_board__DOT__UDS) 
                                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff13__DOT__l2))))) 
                                           | ((~ (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs322__set) 
                                                                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w322))))))) 
                                              & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w526)))) 
                                          | (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs322__set) 
                                                                | (IData)(vlSelf->md_board__DOT__z80__DOT__w322))))))) 
                                             & (IData)(vlSelf->md_board__DOT__ZA))));
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w414__v0 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_427) 
                        | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_421))));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w414__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w414__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w414
            [1U];
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff13__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff13__DOT__l1;
    }
    vlSelf->md_board__DOT__m68k__DOT__i = 0x14U;
    while (VL_GTES_III(32, 0xa4U, vlSelf->md_board__DOT__m68k__DOT__i)) {
        vlSelf->md_board__DOT__m68k__DOT____Vlvbound_h7b472034__0 
            = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w450) 
               | ((0xaaU >= (0xffU & vlSelf->md_board__DOT__m68k__DOT__i)) 
                  && (1U & (vlSelf->md_board__DOT__m68k__DOT__a0_pla[
                            (7U & (vlSelf->md_board__DOT__m68k__DOT__i 
                                   >> 5U))] >> (0x1fU 
                                                & vlSelf->md_board__DOT__m68k__DOT__i)))));
        if (VL_LIKELY((0x90U >= (0xffU & (vlSelf->md_board__DOT__m68k__DOT__i 
                                          - (IData)(0x14U)))))) {
            vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[(7U 
                                                          & ((vlSelf->md_board__DOT__m68k__DOT__i 
                                                              - (IData)(0x14U)) 
                                                             >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->md_board__DOT__m68k__DOT__i 
                                                 - (IData)(0x14U))))) 
                    & vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[
                    (7U & ((vlSelf->md_board__DOT__m68k__DOT__i 
                            - (IData)(0x14U)) >> 5U))]) 
                   | ((IData)(vlSelf->md_board__DOT__m68k__DOT____Vlvbound_h7b472034__0) 
                      << (0x1fU & (vlSelf->md_board__DOT__m68k__DOT__i 
                                   - (IData)(0x14U)))));
        }
        vlSelf->md_board__DOT__m68k__DOT__i = ((IData)(1U) 
                                               + vlSelf->md_board__DOT__m68k__DOT__i);
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w444) {
        vlSelf->md_board__DOT__m68k__DOT__w445 = vlSelf->md_board__DOT__m68k__DOT__w531;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__w450) {
        vlSelf->md_board__DOT__m68k__DOT__w456 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                                     >> 9U));
        vlSelf->md_board__DOT__m68k__DOT__w457 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                                     >> 0xaU));
        vlSelf->md_board__DOT__m68k__DOT__w459 = (1U 
                                                  & (~ 
                                                     ((~ 
                                                       ((vlSelf->md_board__DOT__m68k__DOT__a2_pla[1U] 
                                                         >> 0x1cU) 
                                                        | (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U]))))) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                         & (IData)(vlSelf->md_board__DOT__m68k__DOT__w607)))));
    }
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff3__DOT__l1 = 0U;
    } else {
        if (vlSelf->md_board__DOT__ym__DOT__tmss___DOT____Vcellinp__dff3__clk) {
            vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff3__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____Vcellinp__dff3__clk)))) {
            vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff3__DOT__l1 
                = (1U & (IData)(vlSelf->md_board__DOT__VD));
        }
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w328) {
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w96) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff31__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff31__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w96)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff31__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__VD) 
                         >> 8U));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff31__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff31__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__w477) {
        if (vlSelf->md_board__DOT__m68k__DOT__w477) {
            vlSelf->md_board__DOT__m68k__DOT__w479 
                = vlSelf->md_board__DOT__m68k__DOT__w296
                [2U];
            vlSelf->md_board__DOT__m68k__DOT__w481 = 0U;
        }
    } else {
        vlSelf->md_board__DOT__m68k__DOT__w479 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                     >> 2U));
        vlSelf->md_board__DOT__m68k__DOT__w481 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                     >> 1U));
    }
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w772))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w676) 
               & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                   & (0x7fU == (0x7fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem)))) 
                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                     & (0xd0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w666)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr136__DOT__v1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem)) 
                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr135__DOT__v2) 
                               >> 6U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w421)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v2) 
               & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2) 
                         >> 9U))) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w394) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v1 
            = ((6U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                        ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2) 
                                           >> 7U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w389))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
               & ((0x1e3U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
                  | ((0x1d7U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
                     | ((0x117U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
                        | (0x10bU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem)) 
                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2) 
                               >> 7U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w420)))));
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d8__DOT__dl 
        = vlSelf->md_board__DOT___M3;
    if (vlSelf->md_board__DOT__m68k__DOT__w267) {
        vlSelf->md_board__DOT__m68k__DOT__w472 = vlSelf->md_board__DOT__m68k__DOT__w274;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w561) {
        vlSelf->md_board__DOT__m68k__DOT__w472 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_392) 
                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_179) 
                                                         | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_178) 
                                                            | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_390) 
                                                               | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_389) 
                                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_183) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_182) 
                                                                         & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__r8))))) 
                                                                        | ((IData)(
                                                                                (((0x1cU 
                                                                                == 
                                                                                (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__r8))) 
                                                                           | ((IData)(
                                                                                (((0x10U 
                                                                                == 
                                                                                (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)))) 
                                                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_380) 
                                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_191) 
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_379))))))))))))));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w562) {
        vlSelf->md_board__DOT__m68k__DOT__w472 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_192) 
                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_392) 
                                                         | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_391) 
                                                            | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_383) 
                                                               | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_191) 
                                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_190))))))));
    }
    vlSelf->md_board__DOT__ZRD = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz) 
                                         & (IData)(vlSelf->md_board__DOT__z80_ZRD_d)) 
                                        | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)) 
                                            & ((~ (IData)(vlSelf->md_board__DOT__RW)) 
                                               | (IData)(vlSelf->md_board__DOT__AS))) 
                                           | ((~ (IData)(vlSelf->md_board__DOT__z80_ZRD_d)) 
                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w31_i)))));
    vlSelf->md_board__DOT__LDS = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                         & (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l3)) 
                                        | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76)) 
                                            & ((~ (IData)(vlSelf->md_board__DOT__ZA)) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w53))) 
                                           | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l3)) 
                                              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l2))))));
    if (vlSelf->md_board__DOT__m68k__DOT__w539) {
        vlSelf->md_board__DOT__m68k__DOT__w538 = vlSelf->md_board__DOT__m68k__DOT__w530;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__w441 = vlSelf->md_board__DOT__z80__DOT__w441;
    } else if (vlSelf->md_board__DOT__z80__DOT__w382) {
        vlSelf->md_board__DOT__z80__DOT__w441 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                                     >> 2U)));
    } else if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l60))))) {
        vlSelf->md_board__DOT__z80__DOT__w441 = vlSelf->md_board__DOT__z80__DOT__w524;
    } else if (vlSelf->md_board__DOT__z80__DOT__w436) {
        vlSelf->md_board__DOT__z80__DOT__w441 = 1U;
    } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_220) 
                   & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_156)))) {
        vlSelf->md_board__DOT__z80__DOT__w441 = (1U 
                                                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w449)));
    } else if (vlSelf->md_board__DOT__z80__DOT__w440) {
        vlSelf->md_board__DOT__z80__DOT__w441 = (1U 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w452)
                                                     ? 
                                                    ((((IData)(vlSelf->md_board__DOT__z80__DOT__c_out) 
                                                       >> 2U) 
                                                      ^ 
                                                      ((IData)(vlSelf->md_board__DOT__z80__DOT__c_out) 
                                                       >> 3U)) 
                                                     & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w453)))
                                                     : 
                                                    ((((IData)(vlSelf->md_board__DOT__z80__DOT__w504) 
                                                       ^ (IData)(vlSelf->md_board__DOT__z80__DOT__w503)) 
                                                      >> 3U) 
                                                     ^ (IData)(vlSelf->md_board__DOT__z80__DOT__l62))));
    }
    if (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
         & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w210_i)))) {
        vlSelf->md_board__DOT__z80__DOT__w524 = (1U 
                                                 != (IData)(vlSelf->md_board__DOT__z80__DOT__w522));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w759 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w692) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w693))));
    }
    vlSelf->md_board__DOT__ZWR = (((IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz) 
                                   & (IData)(vlSelf->md_board__DOT__z80_ZWR_d)) 
                                  | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)) 
                                      & ((IData)(vlSelf->md_board__DOT__AS) 
                                         | (IData)(vlSelf->md_board__DOT__RW))) 
                                     | ((~ (IData)(vlSelf->md_board__DOT__z80_ZWR_d)) 
                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w33_i))));
    vlSelf->md_board__DOT__ZD = (0xffU & (((((~ (IData)(vlSelf->md_board__DOT__ym_ZD_d)) 
                                             & (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc_bc4)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_38)
                                                   ? 
                                                  (((~ (IData)(vlSelf->md_board__DOT__ZA)) 
                                                    & (IData)(vlSelf->md_board__DOT___M3))
                                                    ? 
                                                   ((IData)(vlSelf->md_board__DOT__VD) 
                                                    >> 8U)
                                                    : (IData)(vlSelf->md_board__DOT__VD))
                                                   : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_data))) 
                                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm_data_d)
                                                    ? 0U
                                                    : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_o_r)))) 
                                            | ((~ (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w44_i)))))) 
                                               & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w145)))) 
                                           | ((~ (IData)(vlSelf->md_board__DOT__ram_ZD_d)) 
                                              & (IData)(vlSelf->ram_z80_o))) 
                                          | (((IData)(vlSelf->md_board__DOT__ym_ZD_d) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w44_i)))))) 
                                             & (IData)(vlSelf->md_board__DOT__ram_ZD_d))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w498 
            = vlSelf->md_board__DOT__z80__DOT__w498;
    } else if (((IData)(vlSelf->md_board__DOT__z80__DOT__l56) 
                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_170)) 
                   & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0))))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w498 
            = (0xffU & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w496)));
    } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_170))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w498 = 0U;
    } else if (vlSelf->md_board__DOT__z80__DOT__w480) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w498 
            = ((0xf0U & (IData)(vlSelf->__Vdly__md_board__DOT__z80__DOT__w498)) 
               | (0xfU & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w499))));
    }
    if (vlSelf->md_board__DOT__z80__DOT__w432) {
        vlSelf->md_board__DOT__z80__DOT__w499 = (0xfU 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__z80__DOT__w496) 
                                                     >> 4U)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
            = vlSelf->md_board__DOT__z80__DOT__w511;
    } else if (vlSelf->md_board__DOT__z80__DOT__w480) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
            = (0xffU & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w510)));
    } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                & ((IData)(vlSelf->md_board__DOT__z80__DOT__w379_1) 
                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w379_2)))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
            = (0xffU & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w496)));
    } else {
        if (vlSelf->md_board__DOT__z80__DOT__w491) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
                = (0xf8U & (IData)(vlSelf->__Vdly__md_board__DOT__z80__DOT__w511));
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
                = (0xbfU & (IData)(vlSelf->__Vdly__md_board__DOT__z80__DOT__w511));
        }
        if (((IData)(vlSelf->md_board__DOT__z80__DOT__w491) 
             & (IData)(vlSelf->md_board__DOT__z80__DOT__w490))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
                = (0xc7U & (IData)(vlSelf->__Vdly__md_board__DOT__z80__DOT__w511));
        }
        if (((IData)(vlSelf->md_board__DOT__z80__DOT__w491) 
             | (IData)(vlSelf->md_board__DOT__z80__DOT__w490))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w511 
                = (0x7fU & (IData)(vlSelf->__Vdly__md_board__DOT__z80__DOT__w511));
        }
    }
    if (vlSelf->md_board__DOT__z80__DOT__w432) {
        vlSelf->md_board__DOT__z80__DOT__w510 = (0xffU 
                                                 & (~ 
                                                    ((0xf0U 
                                                      & ((IData)(vlSelf->md_board__DOT__z80__DOT__w496) 
                                                         << 4U)) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__o2))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w414__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w414
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w414__v2 = 1U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1 
            = (((IData)(vlSelf->md_board__DOT__AS) 
                | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l2)) 
               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_14)) 
                  | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2))));
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w164)))) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w164) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l2 = 1U;
    }
    if (((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w540) 
             | (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w477) 
                   | vlSelf->md_board__DOT__m68k__DOT__w522)))) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->md_board__DOT__m68k__DOT__w530 = (0xffffU 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w984)));
    }
    if (vlSelf->md_board__DOT__z80__DOT__w377) {
        vlSelf->md_board__DOT__z80__DOT__w496 = (((IData)(vlSelf->md_board__DOT__z80__DOT__w504) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w503));
    } else if (vlSelf->md_board__DOT__z80__DOT__w404) {
        if (vlSelf->md_board__DOT__z80__DOT__w471) {
            vlSelf->md_board__DOT__z80__DOT__w496 = 
                ((0xfeU & ((IData)(vlSelf->md_board__DOT__z80__DOT__w513) 
                           << 1U)) | (1U & (((IData)(vlSelf->md_board__DOT__z80__DOT__w409) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w471))
                                             ? ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                                >> 7U)
                                             : ((IData)(vlSelf->md_board__DOT__z80__DOT__w408) 
                                                | ((IData)(vlSelf->md_board__DOT__z80__DOT__w405) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__l73))))));
        } else if (vlSelf->md_board__DOT__z80__DOT__w472) {
            vlSelf->md_board__DOT__z80__DOT__w496 = 
                (((IData)(vlSelf->md_board__DOT__z80__DOT__w425) 
                  << 7U) | (0x7fU & ((IData)(vlSelf->md_board__DOT__z80__DOT__w513) 
                                     >> 1U)));
        } else if (vlSelf->md_board__DOT__z80__DOT__w372) {
            vlSelf->md_board__DOT__z80__DOT__w496 = 
                (0xffU & (~ ((IData)(1U) << (7U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w146) 
                                                    >> 3U))))));
        } else if (vlSelf->md_board__DOT__z80__DOT__w373) {
            vlSelf->md_board__DOT__z80__DOT__w496 = vlSelf->md_board__DOT__z80__DOT__w498;
        } else if (((IData)(vlSelf->md_board__DOT__z80__DOT__w378_1) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w378_2))) {
            vlSelf->md_board__DOT__z80__DOT__w496 = vlSelf->md_board__DOT__z80__DOT__w511;
        }
    } else {
        vlSelf->md_board__DOT__z80__DOT__w496 = vlSelf->md_board__DOT__z80__DOT__w513;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__w298 = (1U 
                                                 & (~ 
                                                    ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_143)) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw301__inp))));
        vlSelf->md_board__DOT__z80__DOT__l62 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw449__inp)));
        vlSelf->md_board__DOT__z80__DOT__w453 = (1U 
                                                 & (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                    >> 0xfU));
        vlSelf->md_board__DOT__z80__DOT__w452 = (1U 
                                                 & (((0U 
                                                      != 
                                                      (0x405c0800U 
                                                       & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                                                     | vlSelf->md_board__DOT__z80__DOT__pla[1U]) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_223)));
        vlSelf->md_board__DOT__z80__DOT__l60 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                       & (~ 
                                                          ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_229)) 
                                                           | (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                              >> 7U)))))));
        vlSelf->md_board__DOT__z80__DOT__w379_2 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_2__inp;
        vlSelf->md_board__DOT__z80__DOT__w425 = 1U;
    } else if (vlSelf->md_board__DOT__z80__DOT__w407) {
        vlSelf->md_board__DOT__z80__DOT__w425 = 1U;
    } else if (((IData)(vlSelf->md_board__DOT__z80__DOT__w424) 
                & (IData)(vlSelf->md_board__DOT__z80__DOT__w405))) {
        vlSelf->md_board__DOT__z80__DOT__w425 = vlSelf->md_board__DOT__z80__DOT__l73;
    } else if (((IData)(vlSelf->md_board__DOT__z80__DOT__w424) 
                & (IData)(vlSelf->md_board__DOT__z80__DOT__w408))) {
        vlSelf->md_board__DOT__z80__DOT__w425 = (1U 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                                    >> 7U));
    } else if (((IData)(vlSelf->md_board__DOT__z80__DOT__w424) 
                & (IData)(vlSelf->md_board__DOT__z80__DOT__w409))) {
        vlSelf->md_board__DOT__z80__DOT__w425 = (1U 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w484));
    }
    if (((IData)(vlSelf->md_board__DOT__m68k__DOT__uds_l1) 
         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__lds_l2 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__uds_l1)))) {
        vlSelf->md_board__DOT__m68k__DOT__lds_l2 = 
            (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w406) 
                      ^ (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w158)))));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w330) {
        vlSelf->md_board__DOT__m68k__DOT__w406 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w408)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w779 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                      >> 0x10U)));
        vlSelf->md_board__DOT__m68k__DOT__w326 = (1U 
                                                  & vlSelf->md_board__DOT__m68k__DOT__w522);
        vlSelf->md_board__DOT__m68k__DOT__w408 = (1U 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_376)) 
                                                     | ((vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                         >> 0x19U) 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla1))));
    }
    if (((IData)(vlSelf->md_board__DOT__z80__DOT__w369) 
         & (IData)(vlSelf->md_board__DOT__z80__DOT__w419))) {
        vlSelf->md_board__DOT__z80__DOT__w146 = vlSelf->md_board__DOT__z80__DOT__bus_comb_123;
        vlSelf->md_board__DOT__z80__DOT__w513 = vlSelf->md_board__DOT__z80__DOT__bus_comb_123;
    } else if (vlSelf->md_board__DOT__z80__DOT__w369) {
        vlSelf->md_board__DOT__z80__DOT__w146 = vlSelf->md_board__DOT__z80__DOT__bus_comb_12;
        vlSelf->md_board__DOT__z80__DOT__w513 = vlSelf->md_board__DOT__z80__DOT__bus_comb_3;
    } else {
        vlSelf->md_board__DOT__z80__DOT__w146 = vlSelf->md_board__DOT__z80__DOT__bus_comb_1;
        vlSelf->md_board__DOT__z80__DOT__w513 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w419)
                                                  ? (IData)(vlSelf->md_board__DOT__z80__DOT__bus_comb_23)
                                                  : (IData)(vlSelf->md_board__DOT__z80__DOT__bus_comb_3));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__rw_l = vlSelf->md_board__DOT__m68k__DOT__w382;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff13__DOT__l1 
            = vlSelf->md_board__DOT__UDS;
    }
    vlSelf->md_board__DOT__UDS = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                         & (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l3)) 
                                        | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76)) 
                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w53) 
                                               | (IData)(vlSelf->md_board__DOT__ZA))) 
                                           | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l3)) 
                                              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__uds_l2))))));
    if (((IData)(vlSelf->md_board__DOT__m68k__DOT__uds_l1) 
         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__uds_l2 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__uds_l1)))) {
        vlSelf->md_board__DOT__m68k__DOT__uds_l2 = 
            (1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w158)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__uds_l1 = vlSelf->md_board__DOT__m68k__DOT__w385;
    }
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__1(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__m68k__DOT__w203;
    md_board__DOT__m68k__DOT__w203 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w204;
    md_board__DOT__m68k__DOT__w204 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w205;
    md_board__DOT__m68k__DOT__w205 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w206;
    md_board__DOT__m68k__DOT__w206 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w674;
    md_board__DOT__m68k__DOT__w674 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_373;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_373 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w33;
    md_board__DOT__z80__DOT__w33 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w37;
    md_board__DOT__z80__DOT__w37 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs61__DOT__q;
    md_board__DOT__z80__DOT__rs61__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs63__DOT__q;
    md_board__DOT__z80__DOT__rs63__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs68__DOT__q;
    md_board__DOT__z80__DOT__rs68__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs109__DOT__q;
    md_board__DOT__z80__DOT__rs109__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs131__DOT__q;
    md_board__DOT__z80__DOT__rs131__DOT__q = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v0;
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v1;
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v2;
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v3;
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v3 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t44 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t44;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w80 = vlSelf->md_board__DOT__z80__DOT__w80;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v22 = 0U;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w522 = vlSelf->md_board__DOT__z80__DOT__w522;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w320 = vlSelf->md_board__DOT__z80__DOT__w320;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__r5 = vlSelf->md_board__DOT__m68k__DOT__r5;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w169 
        = vlSelf->md_board__DOT__m68k__DOT__w169;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__Vdly__md_board__DOT__vram1__DOT__addr_ser 
        = vlSelf->md_board__DOT__vram1__DOT__addr_ser;
    vlSelf->md_board__DOT__z80__DOT__w4 = (1U & (~ 
                                                 ((IData)(vlSelf->md_board__DOT__z80__DOT__w4_i) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym_INT_pull) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w4_i = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w4) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__ym_INT_pull)) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w39 = (1U & (~ 
                                                  (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_248)) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w39_i))));
    vlSelf->md_board__DOT__z80__DOT__w39_i = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_248)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w39))));
    md_board__DOT__z80__DOT__w37 = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w37_i) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_249) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w37_i = (1U & 
                                              (~ ((IData)(md_board__DOT__z80__DOT__w37) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_249)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w8 = (1U & (~ 
                                                 ((IData)(vlSelf->md_board__DOT__z80__DOT__w8_i) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__w6_i)))));
    vlSelf->md_board__DOT__z80__DOT__w8_i = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w8) 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT__w6)))));
    md_board__DOT__z80__DOT__rs61__DOT__q = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w61_i) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w60)) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w61_i = (1U & 
                                              (~ ((IData)(md_board__DOT__z80__DOT__rs61__DOT__q) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__w60)))));
    vlSelf->md_board__DOT__z80__DOT__w56 = (1U & (~ 
                                                  (((IData)(vlSelf->md_board__DOT__z80__DOT__w53) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w51)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__rs56__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs56__DOT__nq 
        = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                     | ((IData)(vlSelf->md_board__DOT__z80__DOT__w53) 
                        & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w51)) 
                           & (IData)(vlSelf->md_board__DOT__z80__DOT__w104)))) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w56))));
    md_board__DOT__z80__DOT__rs68__DOT__q = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w68_i) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_16)) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w68_i = (1U & 
                                              (~ ((IData)(md_board__DOT__z80__DOT__rs68__DOT__q) 
                                                  & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_16) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w322 = (1U & (~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w113)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__rs322__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs322__DOT__nq 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs322__set) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w322))));
    md_board__DOT__z80__DOT__rs109__DOT__q = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w109_i) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_240)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w109_i = (1U & 
                                               (~ ((IData)(md_board__DOT__z80__DOT__rs109__DOT__q) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_240) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w59 = (1U & (~ 
                                                  (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w58_i)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__rs59__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs59__DOT__nq 
        = (1U & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w58)) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w59))));
    vlSelf->md_board__DOT__z80__DOT__w34 = (1U & (~ 
                                                  ((IData)(vlSelf->md_board__DOT__z80__DOT__w34_i) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_8) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w34_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w34) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_8)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    md_board__DOT__z80__DOT__rs131__DOT__q = (1U & 
                                              (~ ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w130)) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w132)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))));
    vlSelf->md_board__DOT__z80__DOT__w131_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w132) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w130)) 
                                                   | (IData)(md_board__DOT__z80__DOT__rs131__DOT__q))));
    vlSelf->md_board__DOT__z80__DOT__w50 = (1U & (~ 
                                                  ((IData)(vlSelf->md_board__DOT__z80__DOT__w50_i) 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                      | (IData)(vlSelf->md_board__DOT__ZRES)))));
    vlSelf->md_board__DOT__z80__DOT__w50_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w50) 
                                                  & ((IData)(vlSelf->res_z80) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w2 = (1U & (~ 
                                                 ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_253) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w41)) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l1)))) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__rs2__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs2__DOT__nq = 
        (1U & (~ (((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w114_i) 
                       | ((IData)(vlSelf->md_board__DOT__z80__DOT__w202) 
                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w201)))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w2))));
    md_board__DOT__z80__DOT__rs63__DOT__q = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w63_t) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs63__nset))));
    vlSelf->md_board__DOT__z80__DOT__w63_t = (1U & 
                                              (~ ((IData)(md_board__DOT__z80__DOT__rs63__DOT__q) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__l23)))));
    md_board__DOT__z80__DOT__w33 = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                              & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l10))) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w33_i))));
    vlSelf->md_board__DOT__z80__DOT__w33_i = (1U & 
                                              (~ ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l11)) 
                                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                      & ((IData)(vlSelf->md_board__DOT__z80__DOT__w106) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_7)))) 
                                                  | (IData)(md_board__DOT__z80__DOT__w33))));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t44 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1142) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t44)));
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v0 
        = vlSelf->md_board__DOT__m68k__DOT__b2[0U];
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v1 
        = vlSelf->md_board__DOT__m68k__DOT__b2[1U];
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v2 
        = vlSelf->md_board__DOT__m68k__DOT__b2[2U];
    __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v3 
        = vlSelf->md_board__DOT__m68k__DOT__b2[3U];
    if (vlSelf->md_board__DOT__z80__DOT__w54) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w80 
                = vlSelf->md_board__DOT__z80__DOT__w80;
            vlSelf->md_board__DOT__z80__DOT__w78_i 
                = vlSelf->md_board__DOT__z80__DOT__w78_i;
        } else if (vlSelf->md_board__DOT__z80__DOT__w79) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w80 
                = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                         >> 4U));
            vlSelf->md_board__DOT__z80__DOT__w78_i 
                = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                         >> 3U));
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w80 = 0U;
        vlSelf->md_board__DOT__z80__DOT__w78_i = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w364)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v0 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [0U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v1 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [0U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w363)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v2 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [1U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v2 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v3 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [1U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w355)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v4 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [2U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v4 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v5 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [2U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w354)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v6 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [3U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v6 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v7 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [3U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w353)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v8 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [4U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v8 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v9 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [4U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w352)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v10 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [5U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v10 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v11 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [5U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w350)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v12 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [6U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v12 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v13 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [6U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w348)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v14 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [7U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v14 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v15 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [7U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w342)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v16 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [8U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v16 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v17 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [8U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w340)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v18 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [9U][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v18 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v19 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [9U][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w319)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v20 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [0xaU][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v20 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v21 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [0xaU][0U])));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w314)))) {
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v22 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [0U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [0xbU][1U])));
        vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v22 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v23 
            = (0xffffU & (~ (vlSelf->md_board__DOT__z80__DOT__rpull1_comb
                             [1U] | vlSelf->md_board__DOT__z80__DOT__regs
                             [0xbU][0U])));
    }
    if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
         & (IData)(vlSelf->md_board__DOT__z80__DOT__w304_r))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w320 
            = vlSelf->md_board__DOT__z80__DOT__l45;
    } else if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w320 
            = vlSelf->md_board__DOT__z80__DOT__w320;
    }
    if (((vlSelf->md_board__DOT__m68k__DOT__w597 >> 8U) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__r5 
            = vlSelf->md_board__DOT__m68k__DOT__alu_io;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w179) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__r5 
            = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r5) 
                & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                   [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
    } else if (vlSelf->md_board__DOT__m68k__DOT__w178) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__r5 
            = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r5) 
                & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                   [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
    }
    if (((vlSelf->md_board__DOT__m68k__DOT__w597 >> 4U) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w169 
            = vlSelf->md_board__DOT__m68k__DOT__b2[2U];
    } else if (vlSelf->md_board__DOT__m68k__DOT__w167) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w169 
            = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w169) 
               & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w173)));
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__7__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__6__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__5__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__0__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl481__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl481__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl296__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl296__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl295__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl295__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl294__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl294__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl245__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl245__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl344__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl344__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl342__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl342__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl340__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl340__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->vdp_psg_clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2)) 
               & (0U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2) 
                          << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2) 
                                     << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                        + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                        + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                        + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                        + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2)))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl658__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl658__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl657__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl657__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl656__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl656__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl655__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl655__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem)));
    }
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 2U));
    }
    vlSelf->md_board__DOT__z80__DOT__w302 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l42)) 
                                                    & (vlSelf->md_board__DOT__z80__DOT__pla[3U] 
                                                       >> 1U))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l1 = 0U;
    } else {
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l2) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2))));
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][0U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][1U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][2U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][3U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][4U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][5U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][6U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][7U];
        vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode
            [vlSelf->md_board__DOT__m68k__DOT__ncode_addr][8U];
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c2) {
        vlSelf->md_board__DOT__m68k__DOT__w171 = (0xffffU 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w169)));
        vlSelf->md_board__DOT__m68k__DOT__w438 = vlSelf->md_board__DOT__m68k__DOT__w546;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w732 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 3U));
        vlSelf->md_board__DOT__m68k__DOT__w638 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 0x13U));
        vlSelf->md_board__DOT__m68k__DOT__w894 = (1U 
                                                  & (~ (IData)(
                                                               (0x400U 
                                                                == 
                                                                (0x600U 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__w529[0U])))));
        if ((0x8000000U & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) {
            vlSelf->md_board__DOT__m68k__DOT__w659 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w626));
            vlSelf->md_board__DOT__m68k__DOT__w660 
                = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                         >> 1U));
            vlSelf->md_board__DOT__m68k__DOT__w656 
                = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                         >> 2U));
            vlSelf->md_board__DOT__m68k__DOT__w650 
                = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                         >> 3U));
            vlSelf->md_board__DOT__m68k__DOT__w649 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w573));
            vlSelf->md_board__DOT__m68k__DOT__w657 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w653));
            vlSelf->md_board__DOT__m68k__DOT__w658 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w654));
            vlSelf->md_board__DOT__m68k__DOT__w662 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w651));
            vlSelf->md_board__DOT__m68k__DOT__w661 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w655));
            vlSelf->md_board__DOT__m68k__DOT__w663 
                = (1U & (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                         >> 0x16U));
        } else {
            vlSelf->md_board__DOT__m68k__DOT__w659 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w653));
            vlSelf->md_board__DOT__m68k__DOT__w660 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w654));
            vlSelf->md_board__DOT__m68k__DOT__w656 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w655));
            vlSelf->md_board__DOT__m68k__DOT__w650 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w651));
            vlSelf->md_board__DOT__m68k__DOT__w649 
                = (1U & (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                         >> 0x16U));
            vlSelf->md_board__DOT__m68k__DOT__w657 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w626));
            vlSelf->md_board__DOT__m68k__DOT__w658 
                = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                         >> 1U));
            vlSelf->md_board__DOT__m68k__DOT__w662 
                = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                         >> 3U));
            vlSelf->md_board__DOT__m68k__DOT__w661 
                = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                         >> 2U));
            vlSelf->md_board__DOT__m68k__DOT__w663 
                = (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w573));
        }
        vlSelf->md_board__DOT__m68k__DOT__w648 = (1U 
                                                  & ((~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                       >> 0x1bU)) 
                                                     & (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                        >> 0x15U)));
        vlSelf->md_board__DOT__m68k__DOT__w665 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x1cU));
        vlSelf->md_board__DOT__m68k__DOT__w664 = (1U 
                                                  & ((vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->md_board__DOT__m68k__DOT__ird_pla2 
                                                        >> 0x15U)));
        vlSelf->md_board__DOT__m68k__DOT__w666 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x1aU));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__c4_l = vlSelf->md_board__DOT__m68k__DOT__w282;
        vlSelf->md_board__DOT__m68k__DOT__w362 = vlSelf->md_board__DOT__m68k__DOT__w382;
        vlSelf->md_board__DOT__m68k__DOT__c1_l = vlSelf->md_board__DOT__m68k__DOT__w282_n;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff16__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff16__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2) 
                        << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_reset_and));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff11__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff11__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff16__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w44;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff11__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w43;
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_7) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff29__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum) 
                         >> 6U));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff29__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w30;
        }
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l1 = 1U;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l2;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l1 = 0U;
    }
    if ((((IData)(vlSelf->md_board__DOT__vram1__DOT__dt) 
          & (~ (IData)(vlSelf->md_board__DOT__vram1__DOT__o_OE))) 
         & (IData)(vlSelf->md_board__DOT__OE1))) {
        vlSelf->__Vdly__md_board__DOT__vram1__DOT__addr_ser 
            = (0xffU & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr));
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelf->md_board__DOT__vram1__DOT__ser[__Vilp1] 
                = vlSelf->md_board__DOT__vram1__DOT__mem_o[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        vlSelf->__Vdly__md_board__DOT__vram1__DOT__addr_ser 
            = (0xffU & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr));
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelf->md_board__DOT__vram1__DOT__ser[__Vilp2] 
                = vlSelf->md_board__DOT__vram1__DOT__mem_o[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    } else if (((~ (IData)(vlSelf->md_board__DOT__vram1__DOT__o_SC)) 
                & (IData)(vlSelf->md_board__DOT__SC))) {
        vlSelf->__Vdly__md_board__DOT__vram1__DOT__addr_ser 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->md_board__DOT__vram1__DOT__addr_ser)));
        vlSelf->md_board__DOT__vram1__DOT__vram_ser 
            = vlSelf->md_board__DOT__vram1__DOT__slice_s
            [vlSelf->md_board__DOT__vram1__DOT__addr_ser];
    }
    if (vlSelf->md_board__DOT__vram1__DOT__rd) {
        vlSelf->md_board__DOT__vram1_AD_o = vlSelf->md_board__DOT__vram1__DOT__slice_p
            [(0xffU & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))];
    }
    vlSelf->md_board__DOT__m68k__DOT__b2_mem[0U] = __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v0;
    vlSelf->md_board__DOT__m68k__DOT__b2_mem[1U] = __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v1;
    vlSelf->md_board__DOT__m68k__DOT__b2_mem[2U] = __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v2;
    vlSelf->md_board__DOT__m68k__DOT__b2_mem[3U] = __VdlyVal__md_board__DOT__m68k__DOT__b2_mem__v3;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2_assign;
    vlSelf->md_board__DOT__z80__DOT__w304_r = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l42)) 
                                               & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                  >> 0x1fU));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w522 
            = vlSelf->md_board__DOT__z80__DOT__w522;
        vlSelf->md_board__DOT__z80__DOT__l33 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)));
        vlSelf->md_board__DOT__z80__DOT__l35 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)));
        vlSelf->md_board__DOT__z80__DOT__l25 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)));
        vlSelf->md_board__DOT__z80__DOT__l19 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14)));
        vlSelf->md_board__DOT__z80__DOT__l20 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14)));
        vlSelf->md_board__DOT__z80__DOT__l82 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)));
        vlSelf->md_board__DOT__z80__DOT__l37 = vlSelf->md_board__DOT__z80__DOT__w133;
        vlSelf->md_board__DOT__z80__DOT__l57 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                    | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)))));
        vlSelf->md_board__DOT__z80__DOT__l17 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12)));
        vlSelf->md_board__DOT__z80__DOT__l5 = (1U & 
                                               (~ (
                                                   (~ (IData)(md_board__DOT__z80__DOT__w37)) 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2;
        vlSelf->md_board__DOT__z80__DOT__l9 = (1U & 
                                               ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_245) 
                                                | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                   | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)))));
        vlSelf->md_board__DOT__z80__DOT__w38 = (1U 
                                                & (~ 
                                                   ((((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__w106)) 
                                                    & ((~ (IData)(md_board__DOT__z80__DOT__w37)) 
                                                       | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i))))));
        vlSelf->md_board__DOT__z80__DOT__w305 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw305__inp;
        vlSelf->md_board__DOT__z80__DOT__w301 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw301__inp;
        vlSelf->md_board__DOT__z80__DOT__l55 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw373__inp) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_2__inp) 
                                                       | ((IData)(vlSelf->md_board__DOT__z80__DOT__w375) 
                                                          | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_1__inp))))));
        vlSelf->md_board__DOT__z80__DOT__l4 = (1U & 
                                               (~ (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                   | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_241) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w118)) 
                                                         | (IData)(vlSelf->md_board__DOT__z80__DOT__w133))))));
        vlSelf->md_board__DOT__z80__DOT__l31 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)));
        vlSelf->md_board__DOT__z80__DOT__w527 = (0xffffU 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__z80__DOT__cla) 
                                                     ^ (IData)(vlSelf->md_board__DOT__z80__DOT__w522))));
        vlSelf->md_board__DOT__z80__DOT__l38 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w54) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s2;
        vlSelf->md_board__DOT__z80__DOT__w292 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_192) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__w216))));
        vlSelf->md_board__DOT__z80__DOT__l41 = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w57)) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_135))));
        vlSelf->md_board__DOT__z80__DOT__w418 = (1U 
                                                 & (((((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                       & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                           & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203) 
                                                              | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185))) 
                                                          | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w261)))) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_136)) 
                                                     | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                                                         & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                            | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_200)))) 
                                                        | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_129) 
                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_106)))) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp) 
                                                       | ((IData)(vlSelf->md_board__DOT__z80__DOT__w365) 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_173)))));
        vlSelf->md_board__DOT__z80__DOT__w341 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_124)) 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w343) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_176)));
        vlSelf->md_board__DOT__z80__DOT__w417 = (((
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185))) 
                                                   | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w261))) 
                                                  | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                      & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_106) 
                                                         | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w261)))) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29))) 
                                                 | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_173)) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w365)) 
                                                    | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w380_i)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp))));
        vlSelf->md_board__DOT__z80__DOT__l6 = (1U & 
                                               (~ (
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                    & (~ 
                                                       ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w106)))) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                      & ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                         | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)))))));
        vlSelf->md_board__DOT__z80__DOT__l72 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_121)))));
        vlSelf->md_board__DOT__z80__DOT__w347 = (1U 
                                                 & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_187)) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174)) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w315)) 
                                                          | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w317))))));
        vlSelf->md_board__DOT__z80__DOT__l24 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w133)) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_247));
        vlSelf->md_board__DOT__z80__DOT__w430 = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_140) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w234)) 
                                                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_109) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w255))));
        vlSelf->md_board__DOT__z80__DOT__w416 = (1U 
                                                 & (~ 
                                                    ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_128) 
                                                       & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203) 
                                                          | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_200))) 
                                                      | ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                         & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w253)) 
                                                            | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w252))))) 
                                                     | ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203) 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184)) 
                                                         | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_134) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w255)) 
                                                            | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_183))) 
                                                        | ((IData)(vlSelf->md_board__DOT__z80__DOT__w366) 
                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_173))))));
        vlSelf->md_board__DOT__z80__DOT__l79 = (1U 
                                                & (~ 
                                                   ((((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                      & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT__w252)) 
                                                         | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                            & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244)) 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w253))))) 
                                                     | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126) 
                                                        & ((IData)(vlSelf->md_board__DOT__z80__DOT__w254) 
                                                           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244)))) 
                                                    | (((IData)(vlSelf->md_board__DOT__z80__DOT__w366) 
                                                        & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_173))) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw381__inp)))));
        vlSelf->md_board__DOT__z80__DOT__w346 = (1U 
                                                 & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_127)) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w315)) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174)) 
                                                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w317)))));
        vlSelf->md_board__DOT__z80__DOT__w359 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_135) 
                                                 & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                    >> 0x1bU));
        vlSelf->md_board__DOT__z80__DOT__w400 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_136) 
                                                 | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_140) 
                                                    & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                       >> 6U)));
        vlSelf->md_board__DOT__z80__DOT__l28 = (1U 
                                                & (~ 
                                                   ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                     >> 2U) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27))))));
        vlSelf->md_board__DOT__z80__DOT__l26 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                       & (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                          >> 1U)))));
        vlSelf->md_board__DOT__z80__DOT__w431 = (1U 
                                                 & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                     & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                         & ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                             >> 5U) 
                                                            | (IData)(vlSelf->md_board__DOT__z80__DOT__w255))) 
                                                        | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_229))))) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_138)))));
        vlSelf->md_board__DOT__z80__DOT__l40 = (((((IData)(
                                                           (0U 
                                                            != 
                                                            (0x140000U 
                                                             & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_232)) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_32)) 
                                                 | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204) 
                                                     & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_129))) 
                                                    | ((~ 
                                                        ((~ 
                                                          ((IData)(vlSelf->md_board__DOT__z80__DOT__w196) 
                                                           | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w299)) 
                                                              & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208)))) 
                                                         | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                            >> 0x18U))) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193)))) 
                                                | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                   & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                       & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w209))) 
                                                      | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213))) 
                                                         | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w209))))));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff29__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff29__DOT__l1;
        vlSelf->md_board__DOT__z80__DOT__w104 = (1U 
                                                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_241)));
        vlSelf->md_board__DOT__z80__DOT__w130 = vlSelf->md_board__DOT__z80__DOT__w118;
        vlSelf->md_board__DOT__z80__DOT__l1 = (1U & 
                                               (~ (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_245))));
        vlSelf->md_board__DOT__z80__DOT__l23 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)));
        vlSelf->md_board__DOT__z80__DOT__l11 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_7)));
        vlSelf->md_board__DOT__z80__DOT__l10 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w41)) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w54));
        vlSelf->md_board__DOT__z80__DOT__w319 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__z80__DOT__w309) 
                                                     | ((IData)(vlSelf->md_board__DOT__z80__DOT__w316) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w310)))));
        vlSelf->md_board__DOT__z80__DOT__w293 = (1U 
                                                 & (~ 
                                                    ((((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                       & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                          | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_112))) 
                                                      | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                                                         | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                            & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                               | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208)))))) 
                                                     | ((IData)(vlSelf->md_board__DOT__z80__DOT__w216) 
                                                        | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_192) 
                                                           | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w133)) 
                                                              & ((((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w218)) 
                                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_120)) 
                                                                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w118))))))));
        vlSelf->md_board__DOT__z80__DOT__l45 = vlSelf->md_board__DOT__z80__DOT__w315;
        vlSelf->md_board__DOT__z80__DOT__l42 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14)));
    } else if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w293))))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w522 
            = vlSelf->md_board__DOT__z80__DOT__w520;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_1__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt648__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_0__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_249 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
           & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
              & (IData)(vlSelf->md_board__DOT__z80__DOT__l82)));
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff29__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__d4__DOT__dl;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w667 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w648) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w649) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w665)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_242 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w664) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w666));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_373 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w650) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w667));
    md_board__DOT__m68k__DOT__w674 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w663) 
                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_242));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1107 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2))));
    vlSelf->md_board__DOT__m68k__DOT__w201 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w656) 
                                                  | (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_373))));
    vlSelf->md_board__DOT__m68k__DOT__w202 = (1U & 
                                              (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w656)) 
                                                  | (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_373))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_371 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w661) 
           | (IData)(md_board__DOT__m68k__DOT__w674));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_370 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w661)) 
                 | (IData)(md_board__DOT__m68k__DOT__w674)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_37 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w201) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w660));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_32 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w201) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w660)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_39 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w202) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w660));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_38 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w202) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w660)));
    md_board__DOT__m68k__DOT__w206 = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w662)) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_371))));
    md_board__DOT__m68k__DOT__w204 = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w662) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_371))));
    md_board__DOT__m68k__DOT__w205 = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w662)) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_370))));
    md_board__DOT__m68k__DOT__w203 = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w662) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_370))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_47 
        = ((IData)(md_board__DOT__m68k__DOT__w206) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w658));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_46 
        = ((IData)(md_board__DOT__m68k__DOT__w206) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w658)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_40 
        = ((IData)(md_board__DOT__m68k__DOT__w204) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w658));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_35 
        = ((IData)(md_board__DOT__m68k__DOT__w204) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w658)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_48 
        = ((IData)(md_board__DOT__m68k__DOT__w205) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w658)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_51 
        = ((IData)(md_board__DOT__m68k__DOT__w205) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w658));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_42 
        = ((IData)(md_board__DOT__m68k__DOT__w203) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w658));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_41 
        = ((IData)(md_board__DOT__m68k__DOT__w203) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w658)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_52 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_51) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w657));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vmd_board__ConstPool__TABLE_h87515ef9_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmd_board__ConstPool__TABLE_h20cc3d75_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmd_board__ConstPool__TABLE_h025fd700_0;

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__2(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__z80__DOT__rs380__DOT__q;
    md_board__DOT__z80__DOT__rs380__DOT__q = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*10:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t35;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t35 = 0;
    // Body
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t35 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t35;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out_0 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out_0;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out_1 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out_1;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2 = 0U;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w526 = vlSelf->md_board__DOT__z80__DOT__w526;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v7 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v8 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v9 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v10 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v11 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v12 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v13 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v14 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v15 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v16 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v17 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v18 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v19 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v20 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v21 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v22 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v23 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v24 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v25 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v26 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v27 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v28 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v29 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v30 = 0U;
    vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v31 = 0U;
    vlSelf->md_board__DOT__z80__DOT__w9_n = (1U & (~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w8_i)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w9_i))));
    vlSelf->md_board__DOT__z80__DOT__w9_i = (1U & (~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w8)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w9_n))));
    vlSelf->md_board__DOT__z80__DOT__w51 = (1U & (~ 
                                                  (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w50_i)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w51_i))));
    vlSelf->md_board__DOT__z80__DOT__w51_i = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w50)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w51))));
    md_board__DOT__z80__DOT__rs380__DOT__q = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w380_i) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__l51)))));
    vlSelf->md_board__DOT__z80__DOT__w380_i = (1U & 
                                               (~ ((IData)(md_board__DOT__z80__DOT__rs380__DOT__q) 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__l50)))));
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t35 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w445) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w444)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t35)));
    if ((0x28U > (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))) {
        __Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out 
            = ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))
                ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram
               [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212]
                : 0U);
        if ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out_1 
                = ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))
                    ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram
                   [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212]
                    : 0U);
        } else {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out_0 
                = ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))
                    ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram
                   [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212]
                    : 0U);
        }
    } else {
        __Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out 
            = ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))
                ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out_1))
                : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out_0)));
    }
    if ((0x14U > (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index))) {
        if (vlSelf->vdp_hclk1) {
            if ((((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                      >> 5U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_400)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w713))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h09f3b72e__0 
                    = (0x7ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_in));
                if ((0x13U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h09f3b72e__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0 = 1U;
                }
            }
            if ((1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_400) 
                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                           >> 5U)) | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2)) 
                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w713))))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h3bc49c3c__0 
                    = (0x1ffU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_in 
                                         >> 0xbU)));
                if ((0x13U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h3bc49c3c__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1 = 1U;
                }
            }
            if ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w96) 
                  & (IData)((0x40U == (0x60U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))))) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w713))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_hd74d4b79__0 
                    = (0x3fffU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_in 
                                          >> 0x14U)));
                if ((0x13U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_hd74d4b79__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2 = 1U;
                }
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w202)) 
               & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                  | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5))))) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w526 
                = (0xffffU & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w522)));
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w526 
            = vlSelf->md_board__DOT__z80__DOT__w526;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__4__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__3__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__2__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & vlSelf->md_board__DOT__vram1__DOT__mem_be)) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v0 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 1U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v1 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v1 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 2U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v2 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v2 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 3U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v3 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v3 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 4U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v4 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v4 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 5U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v5 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v5 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 6U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v6 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v6 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 7U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v7 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v7 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 8U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v8 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v8 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 9U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v9 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v9 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xaU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v10 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v10 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xbU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v11 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v11 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xcU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v12 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v12 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xdU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v13 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v13 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xeU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v14 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v14 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0xfU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v15 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v15 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x10U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v16 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v16 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v16 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x11U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v17 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v17 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v17 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x12U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v18 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v18 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v18 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x13U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v19 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v19 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v19 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x14U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v20 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v20 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v20 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x15U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v21 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v21 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v21 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x16U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v22 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v22 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v22 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x17U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v23 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v23 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v23 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x18U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v24 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v24 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v24 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x19U))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v25 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v25 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v25 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1aU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v26 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v26 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v26 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1bU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v27 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v27 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v27 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1cU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v28 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v28 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v28 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1dU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v29 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v29 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v29 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1eU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v30 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v30 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v30 = 1U;
    }
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren) 
         & (vlSelf->md_board__DOT__vram1__DOT__mem_be 
            >> 0x1fU))) {
        vlSelf->__VdlyVal__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v31 
            = vlSelf->md_board__DOT__AD;
        vlSelf->__VdlyDim0__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v31 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__vram1__DOT__addr) 
                        >> 8U));
        vlSelf->__VdlySet__md_board__DOT__vram1__DOT__l2__BRA__1__KET____DOT__mem__DOT__mem__v31 = 1U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_ed__DOT__prev__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_ed__DOT__prev__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->PSG = (0xffffU & (((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val
                                [0U] + vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val
                                [1U]) + vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val
                               [2U]) + vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_val
                              [3U]));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_csm_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_csm_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w420;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w477;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t35;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w607) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w607) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w607) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w607));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v1 
            = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr127__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w420));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w743)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w743)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w665));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr412__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v2)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w476) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w477) 
                            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w478) 
                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w479))) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w480) 
                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w481) 
                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w403) 
                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_168) 
                                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_169) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_170))) 
                                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w489) 
                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w482) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w488))))))))))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__timer_ha) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ch3_sel_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_ch3_sel;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v1 
            = ((0x7feU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2) 
                          << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_i));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon_csm));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__alg_fb_sel_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fsm_sel0_sr__DOT__v1 
            = vlSelf->fm_sel23;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 0xdU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 0xcU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 0xbU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2) 
                          << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_ch_match)
                                           ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                                           : ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2) 
                                              >> 5U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2) 
                      << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_toggle) 
                                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2) 
                                             >> 1U)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v1 
            = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0) 
                   | ((IData)(vlSelf->res_z80) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2) 
                                                  >> 0xbU)))) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_i)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                                       >> 0x15U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x3ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                             << 1U)) | ((IData)(vlSelf->res_z80) 
                                        | (((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o)) 
                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_reach))) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                               & (2U 
                                                  == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o))) 
                                              | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_127)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                                       >> 0x15U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x3ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                             << 1U)) | ((IData)(vlSelf->res_z80) 
                                        | (((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o)) 
                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                               & (0U 
                                                  == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level2)))) 
                                           | (((1U 
                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o)) 
                                               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_reach)) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n))) 
                                              | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_127)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v1 
            = ((0x3ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2 
                             << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2) 
                                              >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2) 
                         << 1U)) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_ch_match)
                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)
                                     : ((IData)(vlSelf->md_board__DOT__ZRES) 
                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2) 
                                           >> 5U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2 
                                       >> 0x15U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__reset_low_cnt)) 
                     & (((IData)(1U) + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__reset_low_cnt)) 
                     & ((IData)(1U) + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__l32 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)));
        vlSelf->md_board__DOT__z80__DOT__l52 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp;
        vlSelf->md_board__DOT__z80__DOT__l22 = vlSelf->dma_z80_ack;
        vlSelf->md_board__DOT__z80__DOT__l54 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_172)));
        vlSelf->md_board__DOT__z80__DOT__w381 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw381__inp;
        vlSelf->md_board__DOT__z80__DOT__l18 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w41))));
        vlSelf->md_board__DOT__z80__DOT__l44 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_143) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_182) 
                                                         | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_187) 
                                                            | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_127) 
                                                               | ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp) 
                                                                  | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_188) 
                                                                     | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_189) 
                                                                        | ((IData)(vlSelf->md_board__DOT__z80__DOT__w309) 
                                                                           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_124))))))))) 
                                                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174))))));
        vlSelf->md_board__DOT__z80__DOT__l81 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_182) 
                                                       | ((IData)(vlSelf->md_board__DOT__z80__DOT__w316) 
                                                          & ((~ 
                                                              (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131)) 
                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181))) 
                                                               | (IData)(vlSelf->md_board__DOT__z80__DOT__w318))) 
                                                             | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_186)))))));
        vlSelf->md_board__DOT__z80__DOT__w345 = (1U 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w343) 
                                                    | (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_176))));
        vlSelf->md_board__DOT__z80__DOT__l39 = (1U 
                                                & (~ 
                                                   (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                                                     & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                        >> 0x1dU)) 
                                                    | ((vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                        >> 0x18U) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_179)))));
        vlSelf->md_board__DOT__z80__DOT__l3 = (1U & 
                                               ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w73)) 
                                                | (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                   >> 1U)));
        vlSelf->md_board__DOT__z80__DOT__w307 = (1U 
                                                 & ((~ 
                                                     ((~ 
                                                       (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_191)) 
                                                        | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                                                           & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                              >> 0x1eU)))) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw305__inp))) 
                                                    | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54))));
        vlSelf->md_board__DOT__z80__DOT__l51 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp)));
        vlSelf->md_board__DOT__z80__DOT__l50 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_135) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w247) 
                                                       | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_229) 
                                                          | (1U 
                                                             & ((((0U 
                                                                   != 
                                                                   (0x94000000U 
                                                                    & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                                                                  | vlSelf->md_board__DOT__z80__DOT__pla[1U]) 
                                                                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w234)) 
                                                                | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_217))))))));
    }
    __Vtableidx5 = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT__l1) 
                     << 4U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_4) 
                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_b)) 
                                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__tx_data_sl__en)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))));
    if ((1U & Vmd_board__ConstPool__TABLE_h87515ef9_0
         [__Vtableidx5])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT__l1 
            = Vmd_board__ConstPool__TABLE_h20cc3d75_0
            [__Vtableidx5];
    }
    if ((2U & Vmd_board__ConstPool__TABLE_h87515ef9_0
         [__Vtableidx5])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT__l2 
            = Vmd_board__ConstPool__TABLE_h025fd700_0
            [__Vtableidx5];
    }
    __Vtableidx3 = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT__l1) 
                     << 4U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_4) 
                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_a)) 
                                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__tx_data_sl__en)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))));
    if ((1U & Vmd_board__ConstPool__TABLE_h87515ef9_0
         [__Vtableidx3])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT__l1 
            = Vmd_board__ConstPool__TABLE_h20cc3d75_0
            [__Vtableidx3];
    }
    if ((2U & Vmd_board__ConstPool__TABLE_h87515ef9_0
         [__Vtableidx3])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT__l2 
            = Vmd_board__ConstPool__TABLE_h025fd700_0
            [__Vtableidx3];
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out 
        = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t35 = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t35;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l420 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->fm_sel23 = ((7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                        & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_19 
        = ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_31 
        = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)) 
              | (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_17 
        = ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_22 
        = ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel2 
        = ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_27 
        = ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_11 
        = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__3(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_7;
    md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_7 = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q;
    __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q = 0;
    // Body
    __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr2_q 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_nq))) 
           & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q)) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr2_q)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_ed__DOT__prev__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_ed__DOT__prev__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_15_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_15_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_7_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_7_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__step_low_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__step_low_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fsm_sel0_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fsm_sel0_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ch3_sel_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ch3_sel_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_add_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_add_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__load_ed__DOT__prev__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__load_ed__DOT__prev__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__alg_fb_sel_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__alg_fb_sel_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sum_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sum_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_index_0_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_index_0_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_2_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_2_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_1_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_1_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT____Vcellout__reg_ctrl__block) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT____Vcellout__reg_ctrl__block));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_of_sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74) 
                        >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74) 
                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74) 
                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74) 
                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18)) 
                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_74)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index_0_sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x2eU)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                           >> 0x2fU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x2bU)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x2cU)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                              >> 0x2dU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x27U)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x28U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x29U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x2aU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x23U)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x24U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x25U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x26U)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x1fU)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x20U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x21U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x22U)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x1bU)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x1cU)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x1dU)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x1eU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x17U)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x18U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x19U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x1aU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0x13U)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x14U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x15U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x16U)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0xfU)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0x10U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0x11U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0x12U)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 0xcU)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 0xdU)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                              >> 0xeU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 8U)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 9U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 0xaU)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 0xbU)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                         >> 4U)) & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 5U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 6U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 7U)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out) 
                & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
               | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                            >> 1U)) & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                  | (((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                               >> 2U)) & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))) 
                     | ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_lut_out 
                                 >> 3U)) & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_6_4))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sign_sr__DOT__v1 
            = ((6U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sign_sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x27U) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x1bU) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 0x1cU) & (0x40U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                               >> 0x1dU) & (0x80U == 
                                            (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                     | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                                 >> 0x1eU) & (0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0xbU) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 0xcU) & (0x40U == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                               >> 0xdU) & (0x80U == 
                                           (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                     | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                                 >> 0xeU) & (0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 4U) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 5U) & (0x40U == (0xc0U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                               >> 6U) & (0x80U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                     | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                                 >> 7U) & (0xc0U == 
                                           (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 1U) & (0x40U == (0xc0U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                               >> 2U) & (0x80U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                     | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                                 >> 3U) & (0xc0U == 
                                           (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_index_0_sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2)) 
                     & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_119))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en)) 
                         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_addr_sr__DOT__v2))) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_addr_write))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_ch_match)
                                           ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)
                                           : ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2) 
                                              >> 5U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_ch_match)
                                           ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)
                                           : ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2) 
                                              >> 5U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2)) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_7)) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_7) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_data_en) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2)) 
                           & (~ ((IData)(vlSelf->res_z80) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum) 
                                    >> 5U)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_o) 
                                       >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_o) 
                                       >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_o) 
                                       >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_o)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sl__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2b_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x2bU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2b_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x24U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_69) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_69));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ch__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_70) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ch__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_70) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ch__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_70));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_56) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_56) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_56));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_54) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_64) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_64) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_71) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_71) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_71) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_71));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_68) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_68) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en)) 
                         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2))) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_write))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dac_msb__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_wr)
                   ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_2b_dac_en__data))
                   : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dac_msb__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_28) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_28) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_28)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_27)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_26) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_26) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_26) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_26)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
                                        >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
                                        >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_30)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2b_dac_en__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2b_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                   ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_2b_dac_en__data)
                   : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2b_dac_en__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    }
    __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sl__DOT__mem)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_data) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_nq 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_data)) 
                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sl__DOT__mem) 
                    | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_1_5 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT____Vcellout__s_5__data_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT____VdfgRegularize_hbef13259_1_0 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->__VdfgRegularize_hd87f99a1_0_114 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq2 
        = (((- (IData)((0U == (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem))))) 
            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem) 
               << 1U)) | (((- (IData)((1U == (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem))))) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem) 
                              << 2U)) | (((- (IData)(
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem))))) 
                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem) 
                                             << 3U)) 
                                         | ((- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem))))) 
                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem) 
                                               << 4U)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val 
        = (7U & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem) 
                  >> 2U) ^ (- (IData)((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem) 
                                             >> 5U))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sign_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sign_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q 
        = __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_tr1_q;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_6 
        = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
           | (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_8 
        = ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
           | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)));
    md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_7 
        = ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
           | (5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_10 
        = ((IData)(md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_7) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_8));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_11 
        = ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
           | (IData)(md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_7));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  << 2U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    << 1U)) | ((2U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 1U)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2_out 
        = ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                  >> 9U)) | ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                    >> 0xaU)) | (1U 
                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                    >> 0xbU))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1_out 
        = ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                  >> 9U)) | ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                    >> 0xaU)) | (1U 
                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                    >> 0xbU))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2_out 
        = ((0x40U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                     >> 5U)) | ((0x20U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                          >> 6U)) | 
                                ((0x10U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                           >> 7U)) 
                                 | ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                           >> 8U)) 
                                    | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                              >> 9U)) 
                                       | ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                 >> 0xaU)) 
                                          | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                   >> 0xbU))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__multi_sel_5_l__inp 
        = ((0xcU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
           | (0xdU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____VdfgRegularize_had9f0d59_3_14 
        = ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
           | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____VdfgRegularize_had9f0d59_3_13 
        = ((0xaU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
           | (0xbU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__4(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__4\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v0;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v0 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v1;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v1 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v2;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v2 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v3;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v3 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v4;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v4 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v5;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v5 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v6;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v6 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v7;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v7 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v8;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v8 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v9;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v9 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v10;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v10 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v11;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v11 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v12;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v12 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v13;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v13 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v14;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v14 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v15;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v15 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v16;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v16 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v17;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v17 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v18;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v18 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v19;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v19 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v20;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v20 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v21;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v21 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v22;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v22 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v23;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v23 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v24;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v24 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v25;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v25 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v26;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v26 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v27;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v27 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v28;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v28 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v29;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v29 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v30;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v30 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v31;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v31 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v32;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v32 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v33;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v33 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v34;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v34 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r1__v35;
    __VdlyVal__md_board__DOT__m68k__DOT__r1__v35 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v0;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v0 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v1;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v1 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v2;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v2 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v3;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v3 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v4;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v4 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v5;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v5 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v6;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v6 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v7;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v7 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v8;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v8 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v9;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v9 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v10;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v10 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v11;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v11 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v12;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v12 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v13;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v13 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v14;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v14 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v15;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v15 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v16;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v16 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v17;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v17 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v18;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v18 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r6__v19;
    __VdlyVal__md_board__DOT__m68k__DOT__r6__v19 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v0;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v0 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v1;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v1 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v2;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v2 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v3;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v3 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v4;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v4 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v5;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v5 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v6;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v6 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v7;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v7 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v8;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v8 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v9;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v9 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v10;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v10 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v11;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v11 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v12;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v12 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v13;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v13 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v14;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v14 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v15;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v15 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v16;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v16 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__r7__v17;
    __VdlyVal__md_board__DOT__m68k__DOT__r7__v17 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v0;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v0 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v1;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v1 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v2;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v2 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v3;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v3 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v4;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v4 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v5;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v5 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v6;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v6 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v7;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v7 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v8;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v8 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v9;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v9 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v10;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v10 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v11;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v11 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v12;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v12 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v13;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v13 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v14;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v14 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v15;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v15 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v16;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v16 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v17;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v17 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v18;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v18 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v19;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v19 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v20;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v20 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v21;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v21 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v22;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v22 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v23;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v23 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v24;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v24 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v25;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v25 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v26;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v26 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v27;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v27 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v28;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v28 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v29;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v29 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v30;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v30 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v31;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v31 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v32;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v32 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v33;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v33 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v34;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v34 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r1__v35;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v35 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v0;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v0 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v1;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v1 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v2;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v2 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v3;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v3 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v4;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v4 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v5;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v5 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v6;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v6 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v7;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v7 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v8;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v8 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v9;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v9 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v10;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v10 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v11;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v11 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v12;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v12 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v13;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v13 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v14;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v14 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v15;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v15 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v16;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v16 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v17;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v17 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v18;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v18 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r6__v19;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v19 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v0;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v0 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v1;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v1 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v2;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v2 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v3;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v3 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v4;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v4 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v5;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v5 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v6;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v6 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v7;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v7 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v8;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v8 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v9;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v9 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v10;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v10 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v11;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v11 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v12;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v12 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v13;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v13 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v14;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v14 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v15;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v15 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v16;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v16 = 0;
    CData/*0:0*/ __VdlySet__md_board__DOT__m68k__DOT__r7__v17;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v17 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_0 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_0;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_1 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_2;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_3 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_3;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v3 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v0 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v1 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v2 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v3 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v4 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v5 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v6 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v7 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v8 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v9 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v10 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v11 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v12 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v13 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v14 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v15 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v16 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v17 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v18 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r6__v19 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v0 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v1 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v2 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v3 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v4 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v5 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v6 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v7 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v8 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v9 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v10 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v11 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v12 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v13 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v14 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v15 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v16 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v17 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v18 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v19 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v20 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v21 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v22 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v23 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v24 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v25 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v26 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v27 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v28 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v29 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v30 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v31 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v32 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v33 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v34 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r1__v35 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v0 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v1 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v2 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v3 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v4 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v5 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v6 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v7 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v8 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v9 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v10 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v11 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v12 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v13 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v14 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v15 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v16 = 0U;
    __VdlySet__md_board__DOT__m68k__DOT__r7__v17 = 0U;
    if ((0x50U > (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out 
            = ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
               [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index]
                : 0U);
        if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
            if ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
                vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_3 
                    = ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                        ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                       [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index]
                        : 0U);
            } else {
                vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_2 
                    = ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                        ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                       [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index]
                        : 0U);
            }
        } else if ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_1 
                = ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                    ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                   [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index]
                    : 0U);
        } else {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_0 
                = ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                    ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                   [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index]
                    : 0U);
        }
        if (vlSelf->vdp_hclk1) {
            if (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_he0632411__0 
                    = (0x7fU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_data_in);
                if ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_he0632411__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v0 = 1U;
                }
            }
            if (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h3c80b2a6__0 
                    = (0xfU & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_data_in 
                               >> 7U));
                if ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h3c80b2a6__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v1 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h58c6bdb2__0 
                    = (3U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_data_in 
                             >> 0x13U));
                if ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v2 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h58c6bdb2__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v2 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v2 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_he5f22204__0 
                    = (0xffU & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_data_in 
                                >> 0xbU));
                if ((0x4fU >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v3 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_he5f22204__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v3 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v3 = 1U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out 
            = ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                ? ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                    ? (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_3)
                    : (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_2))
                : ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index))
                    ? (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_1)
                    : (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_0)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w235) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v0 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [0U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v0 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w239) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v1 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [0U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v1 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w240) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v2 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [1U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v2 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w241) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v3 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [1U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v3 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w242) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v4 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [2U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v4 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w243) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v5 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [2U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v5 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w244) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v6 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [3U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v6 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w245) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v7 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [3U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v7 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w246) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v8 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [4U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v8 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w247) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v9 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [4U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v9 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w248) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v10 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [5U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v10 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w249) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v11 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [5U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v11 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w250) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v12 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [6U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v12 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w251) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v13 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [6U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v13 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w252) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v14 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [7U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v14 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w253) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v15 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [7U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v15 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w254) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v16 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [8U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v16 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w255) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v17 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [8U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v17 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w256) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v18 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [9U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v18 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w257) {
        __VdlyVal__md_board__DOT__m68k__DOT__r6__v19 
            = ((vlSelf->md_board__DOT__m68k__DOT__r6
                [9U] & (~ vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r6__v19 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w38) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v0 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v0 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w37) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v1 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v1 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w36) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v2 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [1U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v2 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w35) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v3 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [1U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v3 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w34) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v4 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [2U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v4 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w33) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v5 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [2U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v5 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w32) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v6 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [3U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v6 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w31) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v7 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [3U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v7 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w30) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v8 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [4U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v8 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w29) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v9 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [4U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v9 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w28) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v10 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [5U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v10 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w27) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v11 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [5U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v11 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w26) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v12 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [6U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v12 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w25) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v13 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [6U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v13 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w24) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v14 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [7U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v14 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w23) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v15 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [7U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v15 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w22) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v16 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [8U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v16 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w21) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v17 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [8U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v17 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w20) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v18 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [9U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v18 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w19) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v19 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [9U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v19 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w18) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v20 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xaU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v20 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w17) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v21 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xaU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v21 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w16) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v22 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xbU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v22 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w15) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v23 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xbU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v23 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w14) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v24 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xcU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v24 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w13) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v25 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xcU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v25 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w12) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v26 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xdU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v26 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w11) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v27 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xdU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v27 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w10) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v28 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xeU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v28 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w9) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v29 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xeU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v29 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w8) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v30 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xfU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v30 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w7) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v31 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0xfU] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                          [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v31 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w6) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v32 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0x10U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                           [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v32 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w5) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v33 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0x10U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                           [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v33 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w4) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v34 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0x11U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                           [0U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v34 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w3) {
        __VdlyVal__md_board__DOT__m68k__DOT__r1__v35 
            = ((vlSelf->md_board__DOT__m68k__DOT__r1
                [0x11U] & (~ vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                           [2U])) | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r1__v35 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w843) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v0 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [0U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v0 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w858) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v1 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [0U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v1 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w859) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v2 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [1U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v2 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w860) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v3 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [1U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v3 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w861) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v4 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [2U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v4 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w862) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v5 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [2U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v5 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w863) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v6 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [3U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v6 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w864) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v7 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [3U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v7 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w865) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v8 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [4U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v8 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w866) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v9 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [4U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v9 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w867) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v10 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [5U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v10 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w868) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v11 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [5U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v11 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w869) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v12 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [6U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v12 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w870) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v13 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [6U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v13 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w871) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v14 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [7U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v14 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w872) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v15 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [7U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v15 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w873) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v16 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [8U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v16 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w874) {
        __VdlyVal__md_board__DOT__m68k__DOT__r7__v17 
            = ((vlSelf->md_board__DOT__m68k__DOT__r7
                [8U] & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                        [2U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [3U]);
        __VdlySet__md_board__DOT__m68k__DOT__r7__v17 = 1U;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_1_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_1_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_lfo_mux_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_lfo_mux_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add2_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add2_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_3_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_3_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_9_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_9_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_5_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_5_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_2_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_2_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add1_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add1_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_ks_add_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_ks_add_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_add_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_add_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl328__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl328__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hs__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hs__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wd__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wd__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl35__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl35__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl47__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr82__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr88__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__sum) 
                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__sum) 
                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__sum) 
                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__sum) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v1 
            = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w346))) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr87__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr88__DOT__v1 
            = ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w346))) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr87__DOT__v2));
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_dt) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_dt) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_dt));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_rst)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v1 
            = (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_rate));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__dt_value_sr__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__dt_value_sr__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__dt_value_sr__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__dt_value_sr__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__dt_value_sr__data_in));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value2));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2) 
                         >> 3U)) & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__sum) 
                                    >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2) 
                         >> 3U)) & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__sum) 
                                    >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr2__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2)) 
                     & (~ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_119) 
                           >> 0xbU))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2)) 
                     & (~ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_119) 
                           >> 0xaU))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2)) 
                     & (~ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_119) 
                           >> 9U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__pow_shift_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2)) 
                     & (~ ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_119) 
                           >> 8U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reset_low_cnt)) 
                     & (((IData)(1U) + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out)) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reset_low_cnt)) 
                     & ((IData)(1U) + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl) 
                                       >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl) 
                                       >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl) 
                                       >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl) 
                                       >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_18) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_36) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_36)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_35) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_35)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_39)
                                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2)
                                         : ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                            >> 0xbU))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_37)
                                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2)
                                         : ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                            >> 0xbU))));
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v0) {
        vlSelf->md_board__DOT__m68k__DOT__r6[0U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v0;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v1) {
        vlSelf->md_board__DOT__m68k__DOT__r6[0U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v1;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v2) {
        vlSelf->md_board__DOT__m68k__DOT__r6[1U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v2;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v3) {
        vlSelf->md_board__DOT__m68k__DOT__r6[1U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v3;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v4) {
        vlSelf->md_board__DOT__m68k__DOT__r6[2U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v4;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v5) {
        vlSelf->md_board__DOT__m68k__DOT__r6[2U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v5;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v6) {
        vlSelf->md_board__DOT__m68k__DOT__r6[3U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v6;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v7) {
        vlSelf->md_board__DOT__m68k__DOT__r6[3U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v7;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v8) {
        vlSelf->md_board__DOT__m68k__DOT__r6[4U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v8;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v9) {
        vlSelf->md_board__DOT__m68k__DOT__r6[4U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v9;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v10) {
        vlSelf->md_board__DOT__m68k__DOT__r6[5U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v10;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v11) {
        vlSelf->md_board__DOT__m68k__DOT__r6[5U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v11;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v12) {
        vlSelf->md_board__DOT__m68k__DOT__r6[6U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v12;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v13) {
        vlSelf->md_board__DOT__m68k__DOT__r6[6U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v13;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v14) {
        vlSelf->md_board__DOT__m68k__DOT__r6[7U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v14;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v15) {
        vlSelf->md_board__DOT__m68k__DOT__r6[7U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v15;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v16) {
        vlSelf->md_board__DOT__m68k__DOT__r6[8U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v16;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v17) {
        vlSelf->md_board__DOT__m68k__DOT__r6[8U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v17;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v18) {
        vlSelf->md_board__DOT__m68k__DOT__r6[9U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v18;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r6__v19) {
        vlSelf->md_board__DOT__m68k__DOT__r6[9U] = __VdlyVal__md_board__DOT__m68k__DOT__r6__v19;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v0) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v0;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v1) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v1;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v2) {
        vlSelf->md_board__DOT__m68k__DOT__r1[1U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v2;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v3) {
        vlSelf->md_board__DOT__m68k__DOT__r1[1U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v3;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v4) {
        vlSelf->md_board__DOT__m68k__DOT__r1[2U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v4;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v5) {
        vlSelf->md_board__DOT__m68k__DOT__r1[2U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v5;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v6) {
        vlSelf->md_board__DOT__m68k__DOT__r1[3U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v6;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v7) {
        vlSelf->md_board__DOT__m68k__DOT__r1[3U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v7;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v8) {
        vlSelf->md_board__DOT__m68k__DOT__r1[4U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v8;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v9) {
        vlSelf->md_board__DOT__m68k__DOT__r1[4U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v9;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v10) {
        vlSelf->md_board__DOT__m68k__DOT__r1[5U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v10;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v11) {
        vlSelf->md_board__DOT__m68k__DOT__r1[5U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v11;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v12) {
        vlSelf->md_board__DOT__m68k__DOT__r1[6U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v12;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v13) {
        vlSelf->md_board__DOT__m68k__DOT__r1[6U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v13;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v14) {
        vlSelf->md_board__DOT__m68k__DOT__r1[7U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v14;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v15) {
        vlSelf->md_board__DOT__m68k__DOT__r1[7U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v15;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v16) {
        vlSelf->md_board__DOT__m68k__DOT__r1[8U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v16;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v17) {
        vlSelf->md_board__DOT__m68k__DOT__r1[8U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v17;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v18) {
        vlSelf->md_board__DOT__m68k__DOT__r1[9U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v18;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v19) {
        vlSelf->md_board__DOT__m68k__DOT__r1[9U] = __VdlyVal__md_board__DOT__m68k__DOT__r1__v19;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v20) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xaU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v20;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v21) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xaU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v21;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v22) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xbU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v22;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v23) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xbU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v23;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v24) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xcU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v24;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v25) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xcU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v25;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v26) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xdU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v26;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v27) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xdU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v27;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v28) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xeU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v28;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v29) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xeU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v29;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v30) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xfU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v30;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v31) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0xfU] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v31;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v32) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0x10U] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v32;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v33) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0x10U] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v33;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v34) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0x11U] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v34;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r1__v35) {
        vlSelf->md_board__DOT__m68k__DOT__r1[0x11U] 
            = __VdlyVal__md_board__DOT__m68k__DOT__r1__v35;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v0) {
        vlSelf->md_board__DOT__m68k__DOT__r7[0U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v0;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v1) {
        vlSelf->md_board__DOT__m68k__DOT__r7[0U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v1;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v2) {
        vlSelf->md_board__DOT__m68k__DOT__r7[1U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v2;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v3) {
        vlSelf->md_board__DOT__m68k__DOT__r7[1U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v3;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v4) {
        vlSelf->md_board__DOT__m68k__DOT__r7[2U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v4;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v5) {
        vlSelf->md_board__DOT__m68k__DOT__r7[2U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v5;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v6) {
        vlSelf->md_board__DOT__m68k__DOT__r7[3U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v6;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v7) {
        vlSelf->md_board__DOT__m68k__DOT__r7[3U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v7;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v8) {
        vlSelf->md_board__DOT__m68k__DOT__r7[4U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v8;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v9) {
        vlSelf->md_board__DOT__m68k__DOT__r7[4U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v9;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v10) {
        vlSelf->md_board__DOT__m68k__DOT__r7[5U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v10;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v11) {
        vlSelf->md_board__DOT__m68k__DOT__r7[5U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v11;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v12) {
        vlSelf->md_board__DOT__m68k__DOT__r7[6U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v12;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v13) {
        vlSelf->md_board__DOT__m68k__DOT__r7[6U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v13;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v14) {
        vlSelf->md_board__DOT__m68k__DOT__r7[7U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v14;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v15) {
        vlSelf->md_board__DOT__m68k__DOT__r7[7U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v15;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v16) {
        vlSelf->md_board__DOT__m68k__DOT__r7[8U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v16;
    }
    if (__VdlySet__md_board__DOT__m68k__DOT__r7__v17) {
        vlSelf->md_board__DOT__m68k__DOT__r7[8U] = __VdlyVal__md_board__DOT__m68k__DOT__r7__v17;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ams_o 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_tl 
        = (0x7ffU & ((IData)(8U) + ((0x3ffU & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem))) 
                                    + (0x3f8U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_add_l__DOT__mem)) 
                                                 << 3U)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_12 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
           ^ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr83__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl47__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl47__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr84__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_lfo_mux_l__DOT__mem_assign 
            = (0x7fU & (~ ((0xfU & ((- (IData)((1U 
                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem)))) 
                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem) 
                                       >> 2U))) | (
                                                   ((- (IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem)))) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem)) 
                                                   | ((- (IData)(
                                                                 (3U 
                                                                  == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem)))) 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem) 
                                                         << 1U))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_lfo_mux_l__DOT__mem_assign 
            = (0x7fU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_lfo_mux_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__sl_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2_out 
        = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                  >> 0xaU)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                     >> 0xbU)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1_out 
        = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                  >> 0xaU)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                     >> 0xbU)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2_out)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1_out));
}
