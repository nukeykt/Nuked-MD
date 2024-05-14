// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__22(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__22\n"); );
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
    vlSelf->md_board__DOT__m68k__DOT__b3[2U] = (0xffffU 
                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336)));
    vlSelf->md_board__DOT__m68k__DOT__w733 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w726)
                                                ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w714)
                                                    ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w733_mem)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336) 
                                                     >> 0xfU)))
                                                : (IData)(vlSelf->md_board__DOT__m68k__DOT__w732)));
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
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_312 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_275) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_313 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_277) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322)
            : ((IData)(vlSelf->md_board__DOT__m68k__DOT__w127)
                ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314)
                : (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279)));
    vlSelf->md_board__DOT__m68k__DOT__b1[2U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_328)));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322)
            : ((IData)(vlSelf->md_board__DOT__m68k__DOT__w127)
                ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314)
                : ((IData)(vlSelf->md_board__DOT__m68k__DOT__w848)
                    ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_318)
                    : (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297))));
    vlSelf->md_board__DOT__m68k__DOT__b2[2U] = (0xffffU 
                                                & (~ (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_332)));
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
    if (vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327) {
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
            = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_323;
    } else {
        md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_337 
            = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w848)
                ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_319)
                : vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
               [3U]);
        if (vlSelf->md_board__DOT__m68k__DOT__w127) {
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
                = md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_315;
        } else {
            vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281;
            md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_333 
                = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w848)
                    ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_319)
                    : (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298));
        }
    }
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
}

void Vmd_board___024root___eval_triggers__act(Vmd_board___024root* vlSelf);
void Vmd_board___024root___eval_act(Vmd_board___024root* vlSelf);

bool Vmd_board___024root___eval_phase__act(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmd_board___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmd_board___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vmd_board___024root___eval_nba(Vmd_board___024root* vlSelf);

bool Vmd_board___024root___eval_phase__nba(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmd_board___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmd_board___024root___dump_triggers__ico(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG
bool Vmd_board___024root___eval_phase__ico(Vmd_board___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmd_board___024root___dump_triggers__nba(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmd_board___024root___dump_triggers__act(Vmd_board___024root* vlSelf);
#endif  // VL_DEBUG

void Vmd_board___024root___eval(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmd_board___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("md_board.v", 28, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmd_board___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmd_board___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("md_board.v", 28, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmd_board___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("md_board.v", 28, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmd_board___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmd_board___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmd_board___024root___eval_debug_assertions(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->MCLK2 & 0xfeU))) {
        Verilated::overWidthError("MCLK2");}
    if (VL_UNLIKELY((vlSelf->ext_reset & 0xfeU))) {
        Verilated::overWidthError("ext_reset");}
    if (VL_UNLIKELY((vlSelf->reset_button & 0xfeU))) {
        Verilated::overWidthError("reset_button");}
    if (VL_UNLIKELY((vlSelf->ext_vres & 0xfeU))) {
        Verilated::overWidthError("ext_vres");}
    if (VL_UNLIKELY((vlSelf->ext_zres & 0xfeU))) {
        Verilated::overWidthError("ext_zres");}
    if (VL_UNLIKELY((vlSelf->M3 & 0xfeU))) {
        Verilated::overWidthError("M3");}
    if (VL_UNLIKELY((vlSelf->cart_data_en & 0xfeU))) {
        Verilated::overWidthError("cart_data_en");}
    if (VL_UNLIKELY((vlSelf->cart_m3_pause & 0xfeU))) {
        Verilated::overWidthError("cart_m3_pause");}
    if (VL_UNLIKELY((vlSelf->ext_dtack & 0xfeU))) {
        Verilated::overWidthError("ext_dtack");}
    if (VL_UNLIKELY((vlSelf->pal & 0xfeU))) {
        Verilated::overWidthError("pal");}
    if (VL_UNLIKELY((vlSelf->jap & 0xfeU))) {
        Verilated::overWidthError("jap");}
    if (VL_UNLIKELY((vlSelf->tmss_enable & 0xfeU))) {
        Verilated::overWidthError("tmss_enable");}
    if (VL_UNLIKELY((vlSelf->PA_i & 0x80U))) {
        Verilated::overWidthError("PA_i");}
    if (VL_UNLIKELY((vlSelf->PB_i & 0x80U))) {
        Verilated::overWidthError("PB_i");}
    if (VL_UNLIKELY((vlSelf->PC_i & 0x80U))) {
        Verilated::overWidthError("PC_i");}
    if (VL_UNLIKELY((vlSelf->vdp_cramdot_dis & 0xfeU))) {
        Verilated::overWidthError("vdp_cramdot_dis");}
    if (VL_UNLIKELY((vlSelf->ym2612_status_enable & 0xfeU))) {
        Verilated::overWidthError("ym2612_status_enable");}
    if (VL_UNLIKELY((vlSelf->dma_68k_req & 0xfeU))) {
        Verilated::overWidthError("dma_68k_req");}
    if (VL_UNLIKELY((vlSelf->dma_z80_req & 0xfeU))) {
        Verilated::overWidthError("dma_z80_req");}
}
#endif  // VL_DEBUG
