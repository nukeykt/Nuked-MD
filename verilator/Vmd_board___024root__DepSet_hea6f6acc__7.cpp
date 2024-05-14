// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__32(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__32\n"); );
    // Init
    CData/*7:0*/ md_board__DOT__ym__DOT__vdp__DOT__l104;
    md_board__DOT__ym__DOT__vdp__DOT__l104 = 0;
    CData/*6:0*/ md_board__DOT__ym__DOT__vdp__DOT__w527;
    md_board__DOT__ym__DOT__vdp__DOT__w527 = 0;
    CData/*6:0*/ __VdfgRegularize_hd87f99a1_0_88;
    __VdfgRegularize_hd87f99a1_0_88 = 0;
    // Body
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0] 
            = ((0x1c0U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0]) 
               | (IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1] 
            = ((0x3fU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1]) 
               | ((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1) 
                  << 6U));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
            << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                       << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                  << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                             << 2U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l181 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
            << 0xaU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                    << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                               << 7U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_415 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_414 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_68));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_94 
        = (1U & ((~ (IData)(vlSelf->pal)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0_latch__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0_latch__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w441 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t34));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w450 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t36));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w443 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t35));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l311 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
            << 3U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w632_t));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_57 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_417) 
           & (IData)(vlSelf->vdp_m2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_59 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_417) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_62 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434) 
           & (IData)(vlSelf->vdp_m2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_65 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_69 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_68) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_96 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_412) 
           & (IData)(vlSelf->vdp_m2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_98 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_412) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_101 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_100) 
           & (IData)(vlSelf->vdp_m2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_103 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_100) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_411 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_100));
    __VdfgRegularize_hd87f99a1_0_88 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                        << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                         << 3U) 
                                                        | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_87)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_416 
        = ((IData)(vlSelf->vdp_intfield) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_index 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2))))
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v2) 
                << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                           << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                      << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l351));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl236__DOT__mem_assign 
        = (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v2)
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w554)
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl236__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_333) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_335) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_337) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_339) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_341) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_343) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_345) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_347)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w497 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
            & (0x78U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
              & (0x5fU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809 
        = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106) 
                                    + (0x1e4U | ((0x10U 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w476 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466)) 
            & (0x32U == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_94))) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128) 
               & (0x132U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
                 & (0x32U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                               << 8U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_94))))));
    md_board__DOT__ym__DOT__vdp__DOT__w527 = (((0U 
                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem))
                                                ? (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_237) 
                                                    << 5U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_323))
                                                : 0U) 
                                              | (((1U 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem))
                                                   ? 
                                                  ((0x40U 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_237) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_323) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w555) 
                                                            >> 5U))))
                                                   : 0U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem))
                                                     ? 
                                                    (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_323) 
                                                      << 2U) 
                                                     | (3U 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w555) 
                                                           >> 5U)))
                                                     : 0U)));
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem_assign = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem_assign = 0U;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem_assign 
            = (0x7fffU & ((IData)(((0U == (0xf00U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)))
                           ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                           : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem_assign 
            = (0x7ffU & ((IData)(((0x100U == (0xf00U 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)))
                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                          : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w96 = (IData)(
                                                            ((0x700U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w614 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w424) 
           | (IData)(((0x400U == (0xf00U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w38 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w31 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data_val 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cd_d)
             ? (IData)(vlSelf->md_board__DOT__VD) : 0xffffU) 
           & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w97)
                ? (0xc000U | ((0x3800U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem) 
                                          << 8U)) | 
                              (((2U == (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                              >> 5U)))
                                 ? ((0x700U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem) 
                                               << 8U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl417__DOT__mem) 
                                        << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem))))))
                                 : 0U) | (((1U == (3U 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                                      >> 5U)))
                                            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem)
                                            : 0U) | 
                                          ((0U == (3U 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                                      >> 5U)))
                                            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl424__DOT__mem)
                                            : 0U)))))
                : 0xffffU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w71)
                                ? (0xf8ffU | ((0x400U 
                                               & ((~ 
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355) 
                                                    >> 9U)) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355) 
                                                       >> 8U)) 
                                                     << 9U)) 
                                                 | (0x100U 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)) 
                                                       << 8U)))))
                                : 0xffffU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w114)
                                                ? (0xfc00U 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2) 
                                                       << 9U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t9) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t10) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t11) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelf->vdp_intfield) 
                                                                      << 4U) 
                                                                     | ((8U 
                                                                         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466)) 
                                                                            << 3U)) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w422) 
                                                                            << 2U) 
                                                                           | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_433)
                                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2)
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2)) 
                                                                               << 1U) 
                                                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_433)
                                                                                 ? (IData)(vlSelf->pal)
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252))))))))))))
                                                : 0xffffU) 
                                              & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w134)
                                                   ? 
                                                  (0xffU 
                                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl90__DOT__mem) 
                                                      << 8U))
                                                   : 0xffffU) 
                                                 & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w142)
                                                      ? 
                                                     (0xff00U 
                                                      | ((1U 
                                                          & ((IData)(vlSelf->md_board__DOT___M3) 
                                                             | vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address))
                                                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl91__DOT__mem)
                                                          : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl90__DOT__mem)))
                                                      : 0xffffU) 
                                                    & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160)
                                                         ? 
                                                        (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl93__DOT__mem) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl92__DOT__mem))
                                                         : 0xffffU) 
                                                       & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w47)
                                                            ? 
                                                           (0xff00U 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w12) 
                                                                << 2U) 
                                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w11) 
                                                                  << 1U)))
                                                            : 0xffffU) 
                                                          & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w87)
                                                               ? 
                                                              (0xff00U 
                                                               | (0xffU 
                                                                  & (~ 
                                                                     (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2) 
                                                                       << 7U) 
                                                                      | ((0x40U 
                                                                          & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2)) 
                                                                             << 6U)) 
                                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w379) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w393) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w402) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w417) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w415) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w424)))))))))))
                                                               : 0xffffU) 
                                                             & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w89)
                                                                  ? 
                                                                 (0xc000U 
                                                                  | (0x3fffU 
                                                                     & (~ 
                                                                        (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w418) 
                                                                             << 0xcU) 
                                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w419) 
                                                                                << 0xbU) 
                                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w394) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w385) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w372) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w356) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v2)))))))))))))))))
                                                                  : 0xffffU) 
                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w95)
                                                                     ? 
                                                                    (0xf000U 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                         << 0xbU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                               << 9U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2)))))))))))))
                                                                     : 0xffffU) 
                                                                   & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w99)
                                                                        ? 
                                                                       (0x8080U 
                                                                        | ((0x4000U 
                                                                            & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_391))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_383))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_375))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_367))))))) 
                                                                               << 0xeU)) 
                                                                           | ((0x2000U 
                                                                               & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_390))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_382))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_374))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_366))))))) 
                                                                                << 0xdU)) 
                                                                              | ((0x1000U 
                                                                                & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_389))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_381))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_373))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_365))))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_388))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_380))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_372))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_364))))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_345))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_341))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_337))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_333))))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_355))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_353))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_351))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_349))))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_354))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_352))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_350))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_348))))))) 
                                                                                << 8U)) 
                                                                                | (0x7fU 
                                                                                & (~ 
                                                                                ((((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_395))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_387))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_379))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_371)))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_394))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_386))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_378))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_370)))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_393))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_385))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_377))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_369)))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_392))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_384))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_376))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_368)))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_347))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_343))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_339))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_335)))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_363))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_361))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_359))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_357)))))) 
                                                                                << 1U) 
                                                                                | ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_362))) 
                                                                                | ((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_360))) 
                                                                                | ((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_358))) 
                                                                                | (IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_356))))))))))))))))))))))
                                                                        : 0xffffU) 
                                                                      & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w91)
                                                                           ? 
                                                                          (0xf800U 
                                                                           | (0x7ffU 
                                                                              & (~ 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2))))))))))))))
                                                                           : 0xffffU) 
                                                                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w93)
                                                                             ? 
                                                                            (~ 
                                                                             (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1149) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1150) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1151) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1152)))))
                                                                             : 0xffffU))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff27__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff27__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff27__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff28__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff28__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff28__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff29__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff29__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff29__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl317__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl317__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl266__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl266__DOT__mem));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl317__DOT__mem_assign 
            = (0xfU != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l311));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl266__DOT__mem_assign 
            = (1U & (~ ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                         & (7U == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_95))) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w614) 
                           & (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl236__DOT__mem))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl31__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl31__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl31__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl34__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_418 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w441) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w443) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w450)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__sum 
        = (0x1fU & ((IData)(1U) + (((IData)(((0x500U 
                                              == (0xf00U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129))) 
                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w415))
                                    ? ((8U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w554) 
                                                  >> 3U)) 
                                              << 3U)) 
                                       | (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w554)))
                                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l311))));
    md_board__DOT__ym__DOT__vdp__DOT__l104 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                               << 7U) 
                                              | (IData)(__VdfgRegularize_hd87f99a1_0_88));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address_val 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w195)
             ? ((0x10000U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem) 
                             << 0x10U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_sa_low))
             : 0x1ffffU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w191)
                              ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2
                              : 0x1ffffU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w275)
                                               ? ((0x1fffeU 
                                                   & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl35__DOT__mem) 
                                                  | (1U 
                                                     & (~ vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl35__DOT__mem)))
                                               : 0x1ffffU) 
                                             & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w257)
                                                  ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl36__DOT__mem
                                                  : 0x1ffffU) 
                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w258)
                                                     ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl37__DOT__mem
                                                     : 0x1ffffU) 
                                                   & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w259)
                                                        ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl38__DOT__mem
                                                        : 0x1ffffU) 
                                                      & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w260)
                                                           ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl39__DOT__mem
                                                           : 0x1ffffU) 
                                                         & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w531)
                                                              ? 
                                                             (0x3fffU 
                                                              | (0x1c000U 
                                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w532) 
                                                                    << 0xdU)))
                                                              : 0x1ffffU) 
                                                            & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w558)
                                                                 ? 
                                                                (0x1c000U 
                                                                 | ((0x2000U 
                                                                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w532) 
                                                                        << 0xdU)) 
                                                                    | ((0x1800U 
                                                                        & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                                                             ? 
                                                                            ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w527) 
                                                                             >> 5U)
                                                                             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_nt__DOT__mem)) 
                                                                           << 0xbU)) 
                                                                       | ((0x7c0U 
                                                                           & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w527) 
                                                                              << 6U)) 
                                                                          | (0x3eU 
                                                                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w555) 
                                                                                << 1U))))))
                                                                 : 0x1ffffU) 
                                                               & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w643)
                                                                    ? 
                                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hs__DOT__mem) 
                                                                     << 0xaU) 
                                                                    | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w537) 
                                                                             >> 3U))
                                                                          : 0U) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem)
                                                                            ? 
                                                                           (7U 
                                                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w537))
                                                                            : 0U) 
                                                                          << 2U)))
                                                                    : 0x1ffffU) 
                                                                  & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v2)
                                                                       ? 
                                                                      ((0x1f000U 
                                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wd__DOT__mem) 
                                                                           << 0xbU)) 
                                                                       | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)
                                                                             ? 
                                                                            ((0x3eU 
                                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w537) 
                                                                                >> 2U)) 
                                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2))
                                                                             : 
                                                                            ((0x20U 
                                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wd__DOT__mem) 
                                                                                << 5U)) 
                                                                             | (0x1fU 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w537) 
                                                                                >> 3U)))) 
                                                                           << 6U) 
                                                                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_245) 
                                                                             << 2U)))
                                                                       : 0x1ffffU) 
                                                                     & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v2)
                                                                          ? 
                                                                         (0x1ffe0U 
                                                                          | ((0x1cU 
                                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w577) 
                                                                                << 2U)) 
                                                                             | (2U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v2)) 
                                                                                << 1U))))
                                                                          : 0x1ffffU) 
                                                                        & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2)
                                                                             ? 
                                                                            (0x1c01fU 
                                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                                                                                 ? 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl219__DOT__mem) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w577) 
                                                                                >> 3U)))
                                                                                 : 
                                                                                ((0x100U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl219__DOT__mem))) 
                                                                                << 5U))
                                                                             : 0x1ffffU) 
                                                                           & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w566)
                                                                                ? 
                                                                               (0x3fffU 
                                                                                | (0x1c000U 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem)
                                                                                 : 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w581) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                                                                >> 1U)))) 
                                                                                << 0xeU)))
                                                                                : 0x1ffffU) 
                                                                              & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                                                                                 ? 
                                                                                ((0xe00U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl221__DOT__mem) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w577) 
                                                                                >> 3U))))
                                                                                 : 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w581) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl221__DOT__mem)))) 
                                                                                << 5U))
                                                                                 : 0x1ffffU) 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w684)
                                                                                 ? 
                                                                                (0x1ff00U 
                                                                                | (0x3fU 
                                                                                & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_96), 1U)))
                                                                                 : 0x1ffffU) 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w742)
                                                                                 ? 
                                                                                (0x1c000U 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b2__DOT__mem) 
                                                                                << 0xdU) 
                                                                                | ((0x1fc0U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w731) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b1__DOT__mem)
                                                                                 ? 
                                                                                ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2)
                                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2)
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2))
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w731)) 
                                                                                << 5U)) 
                                                                                | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2)
                                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2)
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2)
                                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2)
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2)
                                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2)
                                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2)) 
                                                                                << 2U) 
                                                                                | (2U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)) 
                                                                                << 1U)))))))))
                                                                                 : 0x1ffffU) 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w754)
                                                                                 ? 
                                                                                (0x1c0ffU 
                                                                                | (0x3f00U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem) 
                                                                                << 7U)))
                                                                                 : 0x1ffffU) 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w756)
                                                                                 ? 
                                                                                (4U 
                                                                                | ((0x1fc00U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)
                                                                                 ? 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2)))))))
                                                                                 : 
                                                                                ((0x40U 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2)))))))) 
                                                                                << 3U)))
                                                                                 : 0x1ffffU) 
                                                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w755)
                                                                                 ? 
                                                                                (0x1ff00U 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 1U))))))))
                                                                                 : 0x1ffffU) 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v2)
                                                                                 ? 
                                                                                ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                                                                                 ? 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w780) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem), 2U)))
                                                                                 : 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b5__DOT__mem) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w780) 
                                                                                << 5U) 
                                                                                | (0x1cU 
                                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem) 
                                                                                << 2U)))))
                                                                                 : 0x1ffffU)))))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_400 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
               >> 6U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w96));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__sum 
        = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w614)
                                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl236__DOT__mem)
                                    : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                        << 3U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_95)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w38)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w31)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w405 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_418)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t33));
    vlSelf->__VdfgRegularize_hd87f99a1_0_89 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr551__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_366) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_370) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_374) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_378) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_382) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_386) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_390) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_394)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr550__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_365) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_369) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_373) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_377) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_381) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_385) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_389) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_393)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                               << 6U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))), 1U) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)
                        ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_364) 
                                 << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_368) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_372) 
                                               << 5U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_376) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_380) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_384) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_388) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_392)))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_data_in 
        = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_89) 
            << 0x13U) | (((IData)(md_board__DOT__ym__DOT__vdp__DOT__l104) 
                          << 0xbU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                       << 0xaU) | (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_89) 
                                                       << 7U) 
                                                      | (IData)(__VdfgRegularize_hd87f99a1_0_88))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__33(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__33\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__NOE;
    md_board__DOT__NOE = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w21;
    md_board__DOT__ym__DOT__vdp__DOT__w21 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w221;
    md_board__DOT__ym__DOT__vdp__DOT__w221 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w856;
    md_board__DOT__ym__DOT__vdp__DOT__w856 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w857;
    md_board__DOT__ym__DOT__vdp__DOT__w857 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w286;
    md_board__DOT__m68k__DOT__w286 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_434;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_434 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    // Body
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t6 = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t6;
    vlSelf->MOL = ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_pan_l) 
                     >> 1U) & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_out_enable_l))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l)
                    : 0x100U);
    vlSelf->MOR = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_pan_l) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_out_enable_l))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l)
                    : 0x100U);
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->fm_clk1 = 1U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fsm_sel0_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_7;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                           << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem_assign 
            = (0x1ffffU & ((~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l__DOT__mem) 
                           + (((0x1ffe0U & ((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr2__DOT__v2))) 
                                            << 5U)) 
                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                   << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                              << 3U) 
                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dt_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))) 
                              + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr2__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_add_l__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ch3_sel_sr__DOT__v2) 
                & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode_o)))
                ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                    << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                               << 4U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l1__DOT__mem_assign 
            = ((0x200U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                          >> 0xbU)) | ((0x100U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
                                                  >> 0xcU)) 
                                       | ((0x80U & 
                                           (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
                                            >> 0xdU)) 
                                          | ((0x40U 
                                              & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
                                                 >> 0xeU)) 
                                             | ((0x20U 
                                                 & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
                                                    >> 0xfU)) 
                                                | ((0x10U 
                                                    & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
                                                       >> 0x10U)) 
                                                   | ((8U 
                                                       & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
                                                          >> 0x11U)) 
                                                      | ((4U 
                                                          & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
                                                             >> 0x12U)) 
                                                         | ((2U 
                                                             & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                                                                >> 0x13U)) 
                                                            | (1U 
                                                               & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                                                                  >> 0x14U)))))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_l__DOT__mem_assign 
            = (0xfffffU & ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2))
                            ? (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                   << 0x13U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))))))
                            : 0xfffffU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_1_l__DOT__mem_assign 
            = ((0xeU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
               | (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l__DOT__mem_assign 
            = ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
               | ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                  | ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                     | ((7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                        | ((9U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                           | ((0xbU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                              | (0xdU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__load_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_2_l__DOT__mem_assign 
            = (0x7fU & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_9) 
                            & (- (IData)(((7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
                                          & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_6_7))))) 
                           | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                               << 1U) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2))))) 
                              & (- (IData)(((((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
                                              | (6U 
                                                 == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val))) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_6_7)) 
                                            | ((((2U 
                                                  == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
                                                 | (6U 
                                                    == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val))) 
                                                & (4U 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms))) 
                                               | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_6) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_8)) 
                                                   & (3U 
                                                      == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms))) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_11) 
                                                      & (2U 
                                                         == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms))) 
                                                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_10) 
                                                        & (1U 
                                                           == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms)))))))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_ks_add_l__DOT__mem_assign 
            = ((((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
                << 4U) | (((((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
                            | ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2))) 
                           << 3U) | (((((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
                                       | (((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                          | ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)))) 
                                      << 2U) | ((((
                                                   (0U 
                                                    == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                                     | (((2U 
                                                          == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)) 
                                                        | ((3U 
                                                            == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2))))) 
                                                 << 1U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)) 
                                                      | (((2U 
                                                           == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                          & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)) 
                                                         | ((3U 
                                                             == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ks)) 
                                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))));
    } else {
        vlSelf->fm_clk1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__ed__DOT__prev__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_ed__DOT__prev__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem_assign 
            = (0x1ffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_add_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_add_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_l__DOT__mem_assign 
            = (0xfffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_l__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_1_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_1_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__load_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__load_ed__DOT__prev__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_2_l__DOT__mem_assign 
            = (0x7fU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_2_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_ks_add_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_ks_add_l__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w53 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
               & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_261 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v2)))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl564__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl564__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl512__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl512__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl466__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl466__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl333__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl333__DOT__mem));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl564__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl512__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w388;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl466__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem_assign 
            = (1U & (~ ((~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v2) 
                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v2))) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252))) 
                        & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v2) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl333__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_261)));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_342 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0x11U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_340 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0x18U)));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_342 = 0xfU;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_340 = 0xfU;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l2__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l3__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl20__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w18;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t13;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl465__DOT__mem_assign 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)) 
                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl466__DOT__mem)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_261))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l2__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l2__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l3__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l3__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl20__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl20__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl465__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl465__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem_assign 
        = (0x7ffU & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)) 
                      & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl333__DOT__mem)) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2)))
                      ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl328__DOT__mem))
                      : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem)));
    vlSelf->cart_uwr = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_uds) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_wr));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w718 
        = ((IData)(vlSelf->vdp_hclk1) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v2) 
                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__dclk_prescaler_dff2__rst)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l1)));
    vlSelf->cart_lwr = (1U & (~ (IData)(vlSelf->md_board__DOT__LWR_o)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_en 
        = ((~ (IData)(vlSelf->md_board__DOT__ZRD)) 
           & ((IData)(vlSelf->md_board__DOT__ZRES) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_sound)) 
                 & ((~ (IData)(vlSelf->ym2612_status_enable)) 
                    | (0U == (3U & (IData)(vlSelf->md_board__DOT__ZA)))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_15 
        = ((IData)(vlSelf->ext_reset) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182));
    vlSelf->md_board__DOT__m68k__DOT__br_fsm_cases 
        = ((((5U == vlSelf->md_board__DOT__m68k__DOT__w270
              [1U]) & vlSelf->md_board__DOT__m68k__DOT__w268
             [2U]) << 0xcU) | ((((0U == vlSelf->md_board__DOT__m68k__DOT__w270
                                  [1U]) & vlSelf->md_board__DOT__m68k__DOT__w269
                                 [2U]) << 0xbU) | (
                                                   (((~ 
                                                      vlSelf->md_board__DOT__m68k__DOT__w269
                                                      [2U]) 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_58)) 
                                                    << 0xaU) 
                                                   | ((((2U 
                                                         == 
                                                         vlSelf->md_board__DOT__m68k__DOT__w270
                                                         [1U]) 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_435)) 
                                                       << 9U) 
                                                      | ((((1U 
                                                            == 
                                                            vlSelf->md_board__DOT__m68k__DOT__w270
                                                            [1U]) 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_435)) 
                                                          << 8U) 
                                                         | ((((5U 
                                                               == 
                                                               vlSelf->md_board__DOT__m68k__DOT__w270
                                                               [1U]) 
                                                              & vlSelf->md_board__DOT__m68k__DOT__w269
                                                              [2U]) 
                                                             << 7U) 
                                                            | ((((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_437) 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__w269
                                                                 [2U]) 
                                                                << 6U) 
                                                               | ((((0U 
                                                                     == 
                                                                     vlSelf->md_board__DOT__m68k__DOT__w270
                                                                     [1U]) 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_436)) 
                                                                   << 5U) 
                                                                  | (((6U 
                                                                       == 
                                                                       vlSelf->md_board__DOT__m68k__DOT__w270
                                                                       [1U]) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_58) 
                                                                         << 3U) 
                                                                        | (((4U 
                                                                             == 
                                                                             vlSelf->md_board__DOT__m68k__DOT__w270
                                                                             [1U]) 
                                                                            << 2U) 
                                                                           | ((((1U 
                                                                                == 
                                                                                vlSelf->md_board__DOT__m68k__DOT__w270
                                                                                [1U]) 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w268
                                                                                [2U]) 
                                                                               << 1U) 
                                                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_437) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_436))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w162 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t22) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w165) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w166 
            = (1U & (~ (IData)(vlSelf->md_board__DOT___M3)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_1__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w166 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_1__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_1__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w50 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w114)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w159 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w138 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr82__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w161 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w172 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16_n) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w144 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t17) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w440 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w445 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem_assign 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w350) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_2__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w350));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_2__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_2__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w175 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_429)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w174 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_429))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum 
        = (0x1ffU & ((0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                         & (0x300U 
                                            == (0x700U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                                ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))
                                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_lg_1__val))) 
                     + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w235)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum 
        = (0x1ffU & ((0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                         & (0x500U 
                                            == (0x700U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_sa_low_1__val))) 
                     + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w235)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem)) 
                  & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem)))));
    md_board__DOT__ym__DOT__vdp__DOT__w221 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                                                  & (0x700U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w21 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w26) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w24 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34) 
         & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2) 
            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data_pull 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cd_d)
             ? 0xffffU : 0U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w97)
                                  ? 0x3fffU : 0U) | 
                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w71)
                                   ? 0x700U : 0U) | 
                                 (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w114)
                                    ? 0x3ffU : 0U) 
                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w134)
                                       ? 0xff00U : 0U) 
                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w142)
                                          ? 0xffU : 0U) 
                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160)
                                             ? 0xffffU
                                             : 0U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w47)
                                                ? 0xffU
                                                : 0U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w87)
                                                   ? 0xffU
                                                   : 0U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w89)
                                                      ? 0x3fffU
                                                      : 0U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w95)
                                                         ? 0xfffU
                                                         : 0U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w99)
                                                            ? 0x7f7fU
                                                            : 0U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w91)
                                                               ? 0x7ffU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w93)
                                                                 ? 0xffffU
                                                                 : 0U))))))))))))));
    md_board__DOT__ym__DOT__vdp__DOT__w856 = (1U & 
                                              (~ ((~ 
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_397))) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w818))));
    md_board__DOT__ym__DOT__vdp__DOT__w857 = (1U & 
                                              (~ ((~ 
                                                   ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_396))) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w818))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff2__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff2__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff2__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff2__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff23__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff23__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff23__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l2_assign 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_7) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l2)));
    vlSelf->md_board__DOT__m68k__DOT__w778 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w709)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w903 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w904)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl17__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_rd;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl17__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl17__DOT__mem;
    }
    vlSelf->md_board__DOT__m68k__DOT__w391 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_418)) 
                                               | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w392)) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_428)) 
                                                     & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_427)) 
                                                        & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_425)) 
                                                           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_424)) 
                                                              & ((~ 
                                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_73) 
                                                                   | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_421))) 
                                                                 & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_422)) 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w395)))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w423 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_418)) 
                                               | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_419)) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                     | ((IData)(vlSelf->md_board__DOT__m68k__DOT__c2)
                                                         ? 
                                                        (~ 
                                                         ((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x82U 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U]))) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT__w568)))
                                                         : (IData)(vlSelf->md_board__DOT__m68k__DOT__w423_mem))))));
    vlSelf->md_board__DOT__m68k__DOT__w418_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w330)
                                                    ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w568)
                                                    : (IData)(vlSelf->md_board__DOT__m68k__DOT__w418_mem)));
    vlSelf->md_board__DOT__m68k__DOT__w421_1 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w330) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w421_mem)) 
                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_419) 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_418)));
    vlSelf->md_board__DOT__m68k__DOT__w389[0U] = vlSelf->md_board__DOT__m68k__DOT__w392;
    vlSelf->md_board__DOT__m68k__DOT__w389[1U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_428;
    vlSelf->md_board__DOT__m68k__DOT__w389[2U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_427;
    vlSelf->md_board__DOT__m68k__DOT__w389[3U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_425;
    vlSelf->md_board__DOT__m68k__DOT__w389[4U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_424;
    vlSelf->md_board__DOT__m68k__DOT__w389[5U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_422;
    vlSelf->md_board__DOT__m68k__DOT__w389[6U] = vlSelf->md_board__DOT__m68k__DOT__w395;
    vlSelf->md_board__DOT__m68k__DOT__w389[7U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_73;
    vlSelf->md_board__DOT__m68k__DOT__w389[8U] = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_421;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v1;
    }
    vlSelf->md_board__DOT__ym_AS_o = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff22__DOT__l2) 
                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2_assign;
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_77) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_shift__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_shift__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_shift__DOT__mem_assign 
            = ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2))))) 
                << 3U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2) 
                            | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2) 
                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2) 
                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2) 
                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2))))) 
                           << 2U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2) 
                                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2) 
                                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2) 
                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2) 
                                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2)))))) 
                                      << 1U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v2) 
                                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2) 
                                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2) 
                                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2) 
                                                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2)))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem_assign 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2) 
                      >> 9U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2));
    }
    vlSelf->A_L = (0xffffU & (((0x8000U & (((IData)(vlSelf->MOL) 
                                            - (IData)(0x100U)) 
                                           << 7U)) 
                               | (0x7fc0U & (((IData)(vlSelf->MOL) 
                                              - (IData)(0x100U)) 
                                             << 6U))) 
                              + (IData)(vlSelf->PSG)));
    vlSelf->A_R = (0xffffU & (((0x8000U & (((IData)(vlSelf->MOR) 
                                            - (IData)(0x100U)) 
                                           << 7U)) 
                               | (0x7fc0U & (((IData)(vlSelf->MOR) 
                                              - (IData)(0x100U)) 
                                             << 6U))) 
                              + (IData)(vlSelf->PSG)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l2__DOT__mem_assign 
            = (0x3ffU & ((IData)(0x201U) + (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l1__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l__DOT__mem_assign 
            = (0x1ffffU & (~ ((0x1fffU & ((- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem) 
                                                          >> 2U))))) 
                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq2) 
                                             >> 3U))) 
                              | ((- (IData)((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__block_l__DOT__mem) 
                                                   >> 2U)))) 
                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq2) 
                                    << 1U)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem) 
               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__step_low_l__DOT__mem)) 
                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem)
                   ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem))
                   : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem)
                   ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem))
                   : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem) 
               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_15_l__DOT__mem)) 
                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem)) 
                     & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem_assign 
            = (0x3ffU & ((IData)(1U) + ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_add_l__DOT__mem)) 
                                        + (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l2__DOT__mem_assign 
            = (0x3ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l__DOT__mem_assign 
            = (0x1ffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem_assign 
            = (0x3ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w718) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v2) 
                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v2) 
                           << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2) 
                                      << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem;
    }
    vlSelf->ram_68k_byteena = (((IData)(vlSelf->cart_uwr) 
                                << 1U) | (IData)(vlSelf->cart_lwr));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_status 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_en));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_debug 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_en));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l2) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_15));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum 
        = (0x1ffU & ((0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                         & (0x400U 
                                            == (0x700U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                                ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))
                                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_lg_2__val))) 
                     + (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                               >> 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w234)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum 
        = (0x1ffU & ((0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                         & (0x600U 
                                            == (0x700U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_sa_low_2__val))) 
                     + (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                               >> 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w234)))));
    if (md_board__DOT__ym__DOT__vdp__DOT__w221) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_index__DOT__mem_assign 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_pal__DOT__mem_assign 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b6__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b7__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_index__DOT__mem_assign 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_index__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_pal__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_pal__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b6__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b7__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_b7__DOT__mem));
    }
    __VdfgRegularize_hd87f99a1_0_3 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem)
                                       ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s4) 
                                          | ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w21) 
                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem) 
                                                | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem)) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w13)) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w27)))))
                                       : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s2) 
                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)
                                               ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2))
                                               : (IData)(md_board__DOT__ym__DOT__vdp__DOT__w21)) 
                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w16))));
    md_board__DOT__NOE = (1U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l2)) 
                                  & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s4) 
                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s1)) 
                                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w25) 
                                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w27) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1) 
                                                     & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem) 
                                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w30)) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w24)))) 
                                                 | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem)) 
                                                    | ((~ 
                                                        ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)) 
                                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l2))) 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34))))))))) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l2))) 
                                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l2)) 
                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l2))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl538__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w856) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w894) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_346))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl539__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w856) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w895) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_344))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl540__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w857) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w896) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_342))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl541__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w857) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w897) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_340))))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl538__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl538__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl539__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl539__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl540__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl540__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl541__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl541__DOT__mem));
    }
    vlSelf->md_board__DOT__m68k__DOT__w365 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w391) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_422) 
                                                     | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_425) 
                                                        | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_424))))));
    md_board__DOT__m68k__DOT__w286 = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w287) 
                                               | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w292) 
                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                                                     | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w289) 
                                                        | ((~ 
                                                            ((IData)(vlSelf->md_board__DOT__m68k__DOT__w423) 
                                                             | (IData)(vlSelf->md_board__DOT__m68k__DOT__w429))) 
                                                           | vlSelf->md_board__DOT__m68k__DOT__w435
                                                           [2U])))))));
    vlSelf->md_board__DOT__m68k__DOT__w397 = (1U & 
                                              (~ ((~ 
                                                   ((~ 
                                                     ((~ 
                                                       vlSelf->md_board__DOT__m68k__DOT__w270
                                                       [0U]) 
                                                      | (vlSelf->md_board__DOT__m68k__DOT__w269
                                                         [2U] 
                                                         | (vlSelf->md_board__DOT__m68k__DOT__w268
                                                            [2U] 
                                                            | vlSelf->md_board__DOT__m68k__DOT__w276
                                                            [2U])))) 
                                                    | (IData)(vlSelf->md_board__DOT__m68k__DOT__w392))) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                     | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w426) 
                                                        | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w421_1)) 
                                                           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w333))))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w53 = 
        (((IData)(vlSelf->md_board__DOT__ym_AS_o) | (IData)(vlSelf->md_board__DOT__ZRD)) 
         & ((IData)(vlSelf->md_board__DOT__ZWR) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff18__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__arb_wait_o = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->md_board__DOT__DTACK) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79))) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182)));
    vlSelf->ram_68k_wren = ((IData)(__VdfgRegularize_hd87f99a1_0_3) 
                            & ((IData)(vlSelf->cart_lwr) 
                               | (IData)(vlSelf->cart_uwr)));
    vlSelf->md_board__DOT__ram_VD_d = ((0xff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((~ 
                                                                   ((~ (IData)(md_board__DOT__NOE)) 
                                                                    & (IData)(vlSelf->md_board__DOT___M3))) 
                                                                  | (~ (IData)(__VdfgRegularize_hd87f99a1_0_3)))))) 
                                                   << 8U)) 
                                       | (0xffU & (- (IData)(
                                                             (1U 
                                                              & ((~ (IData)(__VdfgRegularize_hd87f99a1_0_3)) 
                                                                 | (IData)(md_board__DOT__NOE)))))));
    vlSelf->md_board__DOT__m68k__DOT___w284_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w278)) 
                                                 & ((IData)(md_board__DOT__m68k__DOT__w286) 
                                                    | (IData)(vlSelf->md_board__DOT__m68k__DOT___w284_0)));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_434 
        = ((IData)(md_board__DOT__m68k__DOT__w286) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT___w284_2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w56 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w53) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w55 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w53) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w54 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w53) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l1)));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_en) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum 
        = (0x3fU & ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                      << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                 << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                               << 1U) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))) 
                    + (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in 
        = (0x3ffU & (VL_SHIFTL_III(10,10,32, (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                               << 9U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                  << 8U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))), 1U) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel2)
                         ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem))
                         : 0U)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_248 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_wait_o) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w38));
    vlSelf->md_board__DOT__m68k__DOT___w284_3 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w278)) 
                                                 & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_434));
    vlSelf->md_board__DOT__m68k__DOT__w285 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_434) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT___w284_3) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w285_mem)));
    vlSelf->md_board__DOT__m68k__DOT__w288 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w290) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w280) 
                                                     | (IData)(vlSelf->md_board__DOT__m68k__DOT__w285)))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__14(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w573 = ((~ (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                  >> 0xbU)) 
                                              & (0U 
                                                 != 
                                                 (0x1800000U 
                                                  & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)));
    vlSelf->md_board__DOT__m68k__DOT__w651 = (1U & 
                                              (~ ((0x1000000U 
                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w984) 
                                                   >> 0xfU)
                                                   : (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1e000000U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__ird_pla2))))));
    vlSelf->md_board__DOT__m68k__DOT__w576 = (1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xede00U 
                                                           & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)))));
    vlSelf->md_board__DOT__m68k__DOT__w849 = (1U & 
                                              (~ ((~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                    >> 0x1dU)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w576))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__34(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__34\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__arb_ce0;
    md_board__DOT__ym__DOT__arb_ce0 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2;
    md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__fsm_dac_out_sel;
    md_board__DOT__ym__DOT__fm__DOT__fsm_dac_out_sel = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write60;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write60 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write90;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write90 = 0;
    CData/*3:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT__op_out_2;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__op_out_2 = 0;
    SData/*8:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_masked;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_masked = 0;
    SData/*8:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_uf;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_uf = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_of;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_of = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_0;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_0 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_5;
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_5 = 0;
    SData/*15:0*/ md_board__DOT__ym__DOT__arb__DOT__va_out_t;
    md_board__DOT__ym__DOT__arb__DOT__va_out_t = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__ioc__DOT__vread;
    md_board__DOT__ym__DOT__ioc__DOT__vread = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__ioc__DOT__vread_high;
    md_board__DOT__ym__DOT__ioc__DOT__vread_high = 0;
    // Body
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_l__DOT__mem_assign 
            = (6U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__load_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__load_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__load_ed__DOT__prev__DOT__mem;
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_dt 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2_out;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_o 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2_out;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_dt 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1_out;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi_o 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1_out;
    }
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write90 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (9U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write60 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__fsm_dac_out_sel 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_0 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op1_sel));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeB0) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_55 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_connect__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_56 = (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)));
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_55 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect;
        vlSelf->__VdfgRegularize_hd87f99a1_0_56 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT____Vcellout__s_5__data_out;
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeB4) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_57 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_connect__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_58 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ams__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_59 = (3U 
                                                   & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ks__data)));
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_57 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms;
        vlSelf->__VdfgRegularize_hd87f99a1_0_58 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ams_o;
        vlSelf->__VdfgRegularize_hd87f99a1_0_59 = (3U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_o2));
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeA0) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_52 = (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)));
        vlSelf->__VdfgRegularize_hd87f99a1_0_51 = (
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_114) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_out));
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_52 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT____Vcellout__s_5__data_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_51 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT____Vcellout__s_5__data_out;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_19 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write) 
                                                & (0x29U 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4)))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_6)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_114)))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_20 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write) 
                                                & (0x2bU 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4)))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_6)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_115)))));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__op_out_2 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)) 
           & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op1_sel) 
               & (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect))) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_42) 
                     | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)))) 
                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel) 
                     & ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
                        | ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
                           | ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
                              | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)))))) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op4_sel)))));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_23) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_24 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_27 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_dt__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_24 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr1_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_27 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr1_out;
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_25) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_26 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_28 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_dt__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_26 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_multi__DOT__sr2_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_28 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dt__DOT__sr2_out;
    }
    vlSelf->md_board__DOT__z80__DOT__bus_comb_1 = (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__bus1_pulld)) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT__w146) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__bus1_pullu)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_53 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeA8)
                                                ? (
                                                   ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_115) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_out))
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3_o_5));
    if (vlSelf->md_board__DOT___M3) {
        md_board__DOT__ym__DOT__arb__DOT__va_out_t 
            = ((((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_12)
                  ? 0x180U : (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l2)) 
                << 7U) | (0x7fU & ((IData)(vlSelf->md_board__DOT__ZA) 
                                   >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus 
            = (0xffU & (IData)(vlSelf->md_board__DOT__VD));
    } else {
        md_board__DOT__ym__DOT__arb__DOT__va_out_t 
            = (((IData)(vlSelf->md_board__DOT__ZRES_o) 
                << 0xcU) | (((IData)(vlSelf->md_board__DOT__IORQ) 
                             << 0xbU) | (((IData)(vlSelf->md_board__DOT__MREQ) 
                                          << 0xaU) 
                                         | ((0x200U 
                                             & ((0x1ffe00U 
                                                 & (vlSelf->md_board__DOT__VA 
                                                    >> 0xbU)) 
                                                | ((IData)(vlSelf->md_board__DOT__MREQ) 
                                                   << 9U))) 
                                            | (0x1ffU 
                                               & ((IData)(vlSelf->md_board__DOT__ZA) 
                                                  >> 7U))))));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ZD));
    }
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_167 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w146) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w484));
    vlSelf->ram_68k_data = vlSelf->md_board__DOT__VD;
    vlSelf->cart_data_wr = vlSelf->md_board__DOT__VD;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_ch_match 
        = ((IData)(vlSelf->md_board__DOT__ZRES) & (
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high_out) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out)) 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ch_o)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_72 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_wr)
                                                ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_113)
                                                    : 0U)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_2a_dac__data_o));
    vlSelf->__VdfgRegularize_hd87f99a1_0_73 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem)))))
                                                    : 0U)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem) 
                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem) 
                           << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem) 
                                      << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem))))
            : 0U);
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_wr) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_70 = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_111)
                                                    : 0U);
        vlSelf->__VdfgRegularize_hd87f99a1_0_71 = md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_70 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ch_o;
        vlSelf->__VdfgRegularize_hd87f99a1_0_71 = (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))));
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_18 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_write)
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_65 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_24_data__data_o));
    vlSelf->__VdfgRegularize_hd87f99a1_0_67 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_timer_b_o));
    vlSelf->__VdfgRegularize_hd87f99a1_0_64 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_0)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_68 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_wr)
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_63 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite_sel 
        = (1U & (~ (IData)((((0x3eU == (0xfeU & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))) 
                             & (~ (IData)(vlSelf->md_board__DOT___M3))) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_24)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_a 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
                    & (1U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_a 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_high) 
                    & (1U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_a 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
                    & (4U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_b 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
                    & (2U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_b 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_high) 
                    & (4U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_b 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
                    & (5U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_c 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
                    & (3U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_c 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_high) 
                    & (7U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_c 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
                    & (6U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1_nq 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1_nq 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_a 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT__l2));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l1;
    }
    md_board__DOT__ym__DOT__ioc__DOT__vread = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_io));
    md_board__DOT__ym__DOT__arb_ce0 = (1U & (((~ ((~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff12__DOT__l2)) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w44))) 
                                                  | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l2)))) 
                                              | ((vlSelf->md_board__DOT__VA 
                                                  >> 0x15U) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w211))) 
                                             & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l2)) 
                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d5__DOT__dl) 
                                                     >> 1U)) 
                                                 & ((vlSelf->md_board__DOT__VA 
                                                     >> 0x15U) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l2)
                                                        ? (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w254)
                                                        : 
                                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) 
                                                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff45__DOT__l2) 
                                                           & ((IData)(vlSelf->cart_oe) 
                                                              & (vlSelf->md_board__DOT__VA 
                                                                 >> 0x16U))))))) 
                                                & ((((IData)(vlSelf->md_board__DOT__ZA) 
                                                     >> 0xfU) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w220) 
                                                       | (IData)(vlSelf->md_board__DOT___M3))) 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l2)) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff25__DOT__l2))) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l2)))))));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_49 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                                & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write90))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_50 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write90))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_37 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write60));
    vlSelf->__VdfgRegularize_hd87f99a1_0_39 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write60));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_61) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_lock__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_lock__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__dac_index_lock__DOT__mem_assign 
            = (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__dac_index_lock__DOT__mem));
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_lock__DOT__mem_assign 
            = (3U & (~ ((IData)(md_board__DOT__ym__DOT__fm__DOT__fsm_dac_out_sel)
                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_o2)
                         : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_o1))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__dac_index_lock__DOT__mem_assign 
            = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out) 
                     + (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)
                          ? 3U : 0U) + (1U & (~ (IData)(md_board__DOT__ym__DOT__fm__DOT__fsm_dac_out_sel))))));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem_assign 
        = ((1U & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load)) 
                      | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__load_ed__DOT__prev__DOT__mem))) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)))
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                | (IData)(md_board__DOT__ym__DOT__fm__DOT__fsm_dac_out_sel))
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_o2)
                : ((0x100U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                              << 4U)) | ((0x80U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                   << 3U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                << 2U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                   << 1U)) 
                                               | ((0x10U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                         >> 1U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                               >> 3U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                                 >> 4U)))))))))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i 
        = (0x1ffU & ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_0)
                      ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_o))
                      : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_o2)));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_masked 
        = (0x1ffU & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_o) 
                        | (- (IData)((1U & (~ ((~ (IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_0)) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)))))))));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_5 
        = ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__op_out_2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__arb_va_o = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_12)
                                                 ? 
                                                (0xff00U 
                                                 & (IData)(md_board__DOT__ym__DOT__arb__DOT__va_out_t))
                                                 : (IData)(md_board__DOT__ym__DOT__arb__DOT__va_out_t));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_data_sl__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__tx_data_sl__en)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_data_sl__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_data_sl__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__tx_data_sl__en)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_data_sl__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_data_sl__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__tx_data_sl__en)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_data_sl__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_addr_write 
        = ((0U != (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite0 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite_sel) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite1 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite_sel) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_data 
        = (((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
             ? (0x20U | ((0x80U & ((~ (IData)(vlSelf->jap)) 
                                   << 7U)) | (((IData)(vlSelf->pal) 
                                               << 6U) 
                                              | (IData)(vlSelf->tmss_enable))))
             : 0U) | (((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                        ? ((IData)(vlSelf->md_board__DOT___M3)
                            ? ((0x80U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l2)) 
                               | (IData)(vlSelf->PA_i))
                            : ((0xc0U & ((IData)(vlSelf->PB_i) 
                                         << 6U)) | 
                               ((0x20U & ((((~ (IData)(vlSelf->jap)) 
                                            << 5U) 
                                           | (0xffffffe0U 
                                              & (IData)(vlSelf->PA_d))) 
                                          & (IData)(vlSelf->PA_i))) 
                                | (0x1fU & (IData)(vlSelf->PA_i)))))
                        : 0U) | (((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                   ? ((IData)(vlSelf->md_board__DOT___M3)
                                       ? ((0x80U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l2)) 
                                          | (IData)(vlSelf->PB_i))
                                       : (0x10U | (
                                                   ((IData)(
                                                            (((IData)(vlSelf->PB_i) 
                                                              >> 6U) 
                                                             & ((~ (IData)(vlSelf->jap)) 
                                                                | ((IData)(vlSelf->PB_d) 
                                                                   >> 6U)))) 
                                                    << 7U) 
                                                   | (((IData)(
                                                               (((IData)(vlSelf->PA_i) 
                                                                 >> 6U) 
                                                                & ((~ (IData)(vlSelf->jap)) 
                                                                   | ((IData)(vlSelf->PA_d) 
                                                                      >> 6U)))) 
                                                       << 6U) 
                                                      | ((8U 
                                                          & ((((~ (IData)(vlSelf->jap)) 
                                                               << 3U) 
                                                              | (0x3ffffff8U 
                                                                 & ((IData)(vlSelf->PB_d) 
                                                                    >> 2U))) 
                                                             & ((IData)(vlSelf->PB_i) 
                                                                >> 2U))) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->PB_i) 
                                                               >> 2U)))))))
                                   : 0U) | (((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l2)) 
                                                 | (IData)(vlSelf->PC_i))
                                              : 0U) 
                                            | (((4U 
                                                 == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l2)
                                                 : 0U) 
                                               | (((5U 
                                                    == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l2)
                                                    : 0U) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l2)
                                                       : 0U) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_data_sl__DOT__mem)
                                                          : 0U) 
                                                        | (((8U 
                                                             == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                             ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_data__DOT__l2)
                                                             : 0U) 
                                                           | (((9U 
                                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                ? 
                                                               (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_error__DOT__l2) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l2) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_a))))
                                                                : 0U) 
                                                              | (((0xaU 
                                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                   ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_data_sl__DOT__mem)
                                                                   : 0U) 
                                                                 | (((0xbU 
                                                                      == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                      ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_data__DOT__l2)
                                                                      : 0U) 
                                                                    | (((0xcU 
                                                                         == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                         ? 
                                                                        (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_error__DOT__l2) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l2) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_b))))
                                                                         : 0U) 
                                                                       | (((0xdU 
                                                                            == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                            ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_data_sl__DOT__mem)
                                                                            : 0U) 
                                                                          | (((0xeU 
                                                                               == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                               ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_data__DOT__l2)
                                                                               : 0U) 
                                                                             | ((0xfU 
                                                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address))
                                                                                 ? 
                                                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_error__DOT__l2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_c))))
                                                                                 : 0U))))))))))))))));
    md_board__DOT__ym__DOT__ioc__DOT__vread_high = 
        ((~ (IData)(md_board__DOT__ym__DOT__ioc__DOT__vread)) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_23));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_38 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite_sel) 
            & (~ (((0xc0U == (0xe2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))) 
                   & ((~ (IData)(vlSelf->md_board__DOT___M3)) 
                      & ((0U == (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address) 
                                       >> 2U))) | (7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address) 
                                                       >> 2U)))))) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_21)))) 
           | (IData)(md_board__DOT__ym__DOT__ioc__DOT__vread));
    vlSelf->cart_cs = (1U & (~ ((IData)(vlSelf->tmss_enable)
                                 ? ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_4)) 
                                    | (IData)(md_board__DOT__ym__DOT__arb_ce0))
                                 : (IData)(md_board__DOT__ym__DOT__arb_ce0))));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w28 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_4) 
           | (IData)(md_board__DOT__ym__DOT__arb_ce0));
    vlSelf->__VdfgRegularize_hd87f99a1_0_38 = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_37)
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_40 = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_39)
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2_out));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum 
        = (0x1ffU & ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_masked) 
                     + (((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__op_out_2)
                          ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                              << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)))))))))
                          : 0U) + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_17 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_addr_write)
                                                ? (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus))
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__rx_error__reset 
        = ((~ ((IData)(md_board__DOT__ym__DOT__ioc__DOT__vread_high) 
               & (0U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__rx_error__reset 
        = ((~ ((IData)(md_board__DOT__ym__DOT__ioc__DOT__vread_high) 
               & (3U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__rx_error__reset 
        = ((~ ((IData)(md_board__DOT__ym__DOT__ioc__DOT__vread_high) 
               & (6U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))))) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc_vdata = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_38)
                                                  ? (IData)(vlSelf->md_board__DOT__ZD)
                                                  : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_data));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__arb_w1 
        = ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_38)) 
               & (IData)(vlSelf->md_board__DOT___M3))) 
           & (((IData)(vlSelf->cart_oe) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv)) 
              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz))));
    vlSelf->md_board__DOT__ym__DOT__tmss_data_out_en 
        = (1U & ((~ (IData)(vlSelf->tmss_enable)) | 
                 ((~ ((IData)(vlSelf->md_board__DOT__RW) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w15))) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w28))));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_of 
        = (IData)((((~ ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_masked) 
                        >> 8U)) & (~ (IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_5))) 
                   & ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum) 
                      >> 8U)));
    md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_uf 
        = (((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_masked) 
            >> 8U) & ((~ ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum) 
                          >> 8U)) & (IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT____VdfgRegularize_h5206f80f_0_5)));
    vlSelf->md_board__DOT__ym__DOT__ioc_bc3 = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__arb_w1) 
                                               & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i 
        = (0x1ffU & (~ ((0x100U & ((0xffffff00U & (
                                                   ((~ (IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_of)) 
                                                    << 8U) 
                                                   & (IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum))) 
                                   | ((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_uf) 
                                      << 8U))) | (0xffU 
                                                  & (((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sum) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_uf)))))) 
                                                     | (- (IData)((IData)(md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_of))))))));
    md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cd_d) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc_bc3) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss_data_out_en)));
    vlSelf->md_board__DOT__ym_VD_d = ((0xfe00U & ((- (IData)((IData)(md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2))) 
                                                  << 9U)) 
                                      | ((((IData)(md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2) 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__arb_w12)) 
                                          << 8U) | 
                                         (0xffU & (- (IData)(
                                                             ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cd_d) 
                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__arb_w1) 
                                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss_data_out_en))))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__16(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__16\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__z80__DOT__w224;
    md_board__DOT__z80__DOT__w224 = 0;
    CData/*7:0*/ md_board__DOT__z80__DOT__bcd_val;
    md_board__DOT__z80__DOT__bcd_val = 0;
    CData/*7:0*/ md_board__DOT__z80__DOT__bus2_pulld;
    md_board__DOT__z80__DOT__bus2_pulld = 0;
    CData/*7:0*/ md_board__DOT__z80__DOT__bus2_pullu;
    md_board__DOT__z80__DOT__bus2_pullu = 0;
    CData/*7:0*/ md_board__DOT__z80__DOT__bus_pulld_comb_12;
    md_board__DOT__z80__DOT__bus_pulld_comb_12 = 0;
    CData/*7:0*/ md_board__DOT__z80__DOT__bus_pullu_comb_12;
    md_board__DOT__z80__DOT__bus_pullu_comb_12 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212 = 0;
    // Body
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_127 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_191) 
            | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126)) 
           & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
              >> 0x10U));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw370__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_121) 
           & ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
               >> 0x15U) | (IData)(vlSelf->md_board__DOT__z80__DOT__w77)));
    vlSelf->md_board__DOT__z80__DOT__w326 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l42)) 
                                                    & vlSelf->md_board__DOT__z80__DOT__pla[3U])));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168 
        = ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
            >> 0x15U) & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_158)) 
                         & (IData)(vlSelf->md_board__DOT__z80__DOT__l84)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_169 
        = ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
            >> 0x15U) & ((~ (((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                              >> 7U) & (((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                                         >> 6U) | (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                                                    >> 5U) 
                                                   | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_158) 
                                                      & ((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                                                         >> 4U)))))) 
                         & (IData)(vlSelf->md_board__DOT__z80__DOT__l83)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_176 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w100));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_153 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95) 
            | (1U & ((0U != (0x4022000U & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                     | vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w390));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_170 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_233) 
            | ((IData)(vlSelf->md_board__DOT__z80__DOT__w271) 
               | ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                   >> 0x1fU) | (IData)(((0U != (0x28U 
                                                & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w86)))))) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w390));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_222 
        = (1U & ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                  >> 5U) | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95)));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_1__inp 
        = ((IData)((((0U != (0x98200800U & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                     | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_217)) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_209))) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184) 
              | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_188 
        = (1U & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i)) 
                     & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                        >> 0xeU))) | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_32) 
                                       & ((IData)((
                                                   (0U 
                                                    != 
                                                    (0x300b8000U 
                                                     & vlSelf->md_board__DOT__z80__DOT__pla[2U])) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236))) 
                                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w234))) 
                                      | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126) 
                                          & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                             >> 0xdU)) 
                                         | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_191) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x22000U 
                                                        & vlSelf->md_board__DOT__z80__DOT__pla[2U]))))))));
    vlSelf->md_board__DOT__z80__DOT__w161 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w234) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT__w86) 
                                                       | (IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xe0310000U 
                                                                    & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x880U 
                                                                      & vlSelf->md_board__DOT__z80__DOT__pla[2U]))))))));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212 
        = (1U & (IData)((((0U != (0x14021000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                          | (0U != (0x8000438U & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
                         | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_99))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_124 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193) 
            | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w225));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_2__inp 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
            & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
               >> 9U)) | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244)) 
                          & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_22)));
    vlSelf->md_board__DOT__z80__DOT__w316 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w315) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w317))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_1__inp 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130) 
            & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
               >> 6U)) | ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                          & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w86)) 
                             | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_137))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw373__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_142) 
           | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_128) 
               & vlSelf->md_board__DOT__z80__DOT__pla[0U]) 
              | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126)) 
                 | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_179) 
                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w86)))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw372__inp 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5) 
            & (IData)(vlSelf->md_board__DOT__z80__DOT__w287)) 
           | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130) 
              & ((IData)(vlSelf->md_board__DOT__z80__DOT__w287) 
                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w225))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_2__inp 
        = (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
            & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                & ((IData)(vlSelf->md_board__DOT__z80__DOT__w225) 
                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w234))) 
               | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_138))) 
           | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
               & (IData)(vlSelf->md_board__DOT__z80__DOT__w86)) 
              | ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                 & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                    | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i))))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_143 
        = (1U & ((~ (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_117) 
                      & (((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                           >> 0x18U) | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                        >> 0xaU)) | (IData)(vlSelf->md_board__DOT__z80__DOT__w86))) 
                     | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204) 
                        & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_118)))) 
                 & (~ (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_205) 
                        & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29) 
                           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193))) 
                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                          & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)))))))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_186 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_129) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_116) 
              & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130) 
            & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_218) 
               | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                  >> 7U))) | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                              & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236)) 
                                 & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_218))));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
           & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
              & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208)));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl53__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_191) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    vlSelf->md_board__DOT__z80__DOT__w366 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w249) 
                                                       | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w317))))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_182 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203) 
            & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130)) 
           | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184) 
               & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203))) 
              | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                  & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                     >> 9U)) | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_183))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_136 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_187 
        = (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
            & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_112) 
               | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_201)))) 
           | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
               & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                  >> 0xdU)) | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_201) 
                                & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_128)) 
                               | ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                  & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_112) 
                                     | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                        & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                           >> 0xeU)))))));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT__w390) 
            & ((~ (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                   >> 4U)) & (IData)(vlSelf->md_board__DOT__z80__DOT__w255))) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w400));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_150 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185 
        = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203) 
                 | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123) 
                     & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                        >> 3U)) | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_205)) 
                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_227)) 
                                   | (IData)(((0U != 
                                               (0x8000800U 
                                                & vlSelf->md_board__DOT__z80__DOT__pla[2U])) 
                                              | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208)))))));
    vlSelf->md_board__DOT__z80__DOT__w310 = ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_117) 
                                               & ((vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                   >> 0x18U) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w261))) 
                                              | ((~ 
                                                  ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213))) 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_122))) 
                                             | (((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                 & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                     | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))) 
                                                    & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                       >> 0x1bU))) 
                                                | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_121) 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x6000000U 
                                                                     & vlSelf->md_board__DOT__z80__DOT__pla[2U]))))))));
    vlSelf->md_board__DOT__z80__DOT__w254 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w255)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw381__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w380_i));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl56__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp) 
           | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
               & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111)) 
              | (((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                  & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_119) 
                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w255))) 
                 | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                     & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                         & ((IData)(vlSelf->md_board__DOT__z80__DOT__w255) 
                            | (IData)(vlSelf->md_board__DOT__z80__DOT__w234))) 
                        | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_125))) 
                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29) 
                       & ((IData)(vlSelf->md_board__DOT__z80__DOT__w255) 
                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w225)))))));
    vlSelf->md_board__DOT__z80__DOT__w133 = ((~ (((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_103)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_232) 
                                                       | ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                           >> 0x15U) 
                                                          | (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x62040100U 
                                                                       & vlSelf->md_board__DOT__z80__DOT__pla[2U])) 
                                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_101)))))) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_32))) 
                                                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w61_i)) 
                                                    | (((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                        & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                           | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                               & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204)) 
                                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w255)) 
                                                                     & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w234))))) 
                                                              | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                                  & (~ 
                                                                     (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                                      >> 0x18U))) 
                                                                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230) 
                                                                       | ((IData)(vlSelf->md_board__DOT__z80__DOT__w140) 
                                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT__w299)))))))) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                                                          & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204)) 
                                                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                                | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w140))))))))) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w54));
    vlSelf->md_board__DOT__z80__DOT__w324 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w326) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w302)));
    md_board__DOT__z80__DOT__bcd_val = (0x99U | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_169) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_169) 
                                                     << 5U) 
                                                    | (((IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168) 
                                                        << 2U) 
                                                       | ((IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168) 
                                                          << 1U)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_220 
        = (1U & ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_222) 
                   | (0U != (0xd4210800U & vlSelf->md_board__DOT__z80__DOT__pla[0U]))) 
                  | vlSelf->md_board__DOT__z80__DOT__pla[1U]) 
                 | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_86)));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw470__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_1__inp) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w271));
    vlSelf->md_board__DOT__z80__DOT__w118 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                      | ((((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_238)) 
                                                          | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                              & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_237) 
                                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w161) 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w126))))) 
                                                             | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                                & ((vlSelf->md_board__DOT__z80__DOT__pla[3U] 
                                                                    >> 2U) 
                                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_225)) 
                                                                      & ((~ 
                                                                          ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_238) 
                                                                           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230))) 
                                                                         | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230))))))) 
                                                         | ((IData)(vlSelf->md_board__DOT__z80__DOT__w299) 
                                                            | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                               & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_237)) 
                                                                  & ((IData)(vlSelf->md_board__DOT__z80__DOT__w161) 
                                                                     & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236)) 
                                                                        & (~ 
                                                                           ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                                            | (IData)(
                                                                                ((((0U 
                                                                                != 
                                                                                (0x118c0000U 
                                                                                & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x900e520U 
                                                                                & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
                                                                                | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123)) 
                                                                                | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_216))))))))))))));
    md_board__DOT__z80__DOT__w224 = ((IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212) 
                                     | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_237) 
                                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w225)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_173 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w316) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w318));
    vlSelf->md_board__DOT__z80__DOT__w365 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w249) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT__w317)))));
    vlSelf->md_board__DOT__z80__DOT__w309 = (((((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i)) 
                                                | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i))) 
                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_120) 
                                                  & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208)))) 
                                              | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29))) 
                                             | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208) 
                                                    | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                       >> 0x1dU))) 
                                                | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                   & (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_119)) 
                                                      | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190)))));
    vlSelf->md_board__DOT__z80__DOT__w216 = (1U & (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5) 
                                                    | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
                                                        & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213))) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_112) 
                                                             | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190))))) 
                                                   | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                       & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                           & (~ 
                                                              ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204)) 
                                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236) 
                                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w255))))) 
                                                          | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                             & (~ 
                                                                ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204)) 
                                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w218)))))) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                                                         & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                            | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_109) 
                                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208) 
                                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204))))))));
    vlSelf->md_board__DOT__z80__DOT__w394 = (1U & (~ 
                                                   (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x400c0200U 
                                                               & vlSelf->md_board__DOT__z80__DOT__pla[0U]))) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w390)) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_152) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_136)))));
    vlSelf->md_board__DOT__z80__DOT__w490 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154));
    vlSelf->md_board__DOT__z80__DOT__w491 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ 
                                                      ((~ (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__l76)))));
    vlSelf->md_board__DOT__z80__DOT__w375 = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_141) 
                                              | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_150)) 
                                             | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12) 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w247) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_210))) 
                                                | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                    & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                        | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i))) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w255))) 
                                                   | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_179) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w234)) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_134)))));
    vlSelf->md_board__DOT__z80__DOT__w253 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w235) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185));
    vlSelf->md_board__DOT__z80__DOT__w252 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w86) 
                                                | ((IData)(vlSelf->md_board__DOT__z80__DOT__w234) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w310) 
           | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_186) 
              | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131))));
    vlSelf->md_board__DOT__z80__DOT__w202 = (1U & (
                                                   ((~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w234)) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204)))) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                       | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)))) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                      & ((~ (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212)) 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x880000U 
                                                                      & vlSelf->md_board__DOT__z80__DOT__pla[2U])) 
                                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w254)))))));
    md_board__DOT__z80__DOT__bus2_pulld = (0xffU & 
                                           (((~ (IData)(md_board__DOT__z80__DOT__bcd_val)) 
                                             & (- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w370)))) 
                                            | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__status_val)) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__status_mask)) 
                                               | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w515)) 
                                                  & (- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w417)))))));
    md_board__DOT__z80__DOT__bus2_pullu = (0xffU & 
                                           (((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w370))) 
                                             & (IData)(md_board__DOT__z80__DOT__bcd_val)) 
                                            | (((IData)(vlSelf->md_board__DOT__z80__DOT__status_mask) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__status_val)) 
                                               | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w417))) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w515)))));
    vlSelf->md_board__DOT__z80__DOT__w436 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_220) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w390)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_172 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw372__inp) 
           | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_142) 
              | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw470__inp)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_192 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                       | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                           & (IData)(md_board__DOT__z80__DOT__w224)) 
                          | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                             & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212)))))));
    vlSelf->md_board__DOT__z80__DOT__w343 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_188) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_189) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w315)) 
                                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT__w317) 
                                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w310) 
                                                                | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174))))))));
    vlSelf->md_board__DOT__z80__DOT__w24 = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w202)) 
                                                     & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l6)))));
    vlSelf->md_board__DOT__z80__DOT__w201 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w202)) 
                                             & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204))) 
                                                | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_106) 
                                                   | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
                                                         & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213) 
                                                            | (IData)(vlSelf->md_board__DOT__z80__DOT__w255)))))));
    md_board__DOT__z80__DOT__bus_pulld_comb_12 = ((IData)(vlSelf->md_board__DOT__z80__DOT__bus1_pulld) 
                                                  | (IData)(md_board__DOT__z80__DOT__bus2_pulld));
    vlSelf->md_board__DOT__z80__DOT__bus_comb_2 = (
                                                   (~ (IData)(md_board__DOT__z80__DOT__bus2_pulld)) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                                      | (IData)(md_board__DOT__z80__DOT__bus2_pullu)));
    vlSelf->md_board__DOT__z80__DOT__bus_comb_23 = 
        ((~ ((IData)(md_board__DOT__z80__DOT__bus2_pulld) 
             | (IData)(vlSelf->md_board__DOT__z80__DOT__bus3_pulld))) 
         & (((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
             & (IData)(vlSelf->md_board__DOT__z80__DOT__w513)) 
            | ((IData)(md_board__DOT__z80__DOT__bus2_pullu) 
               | (IData)(vlSelf->md_board__DOT__z80__DOT__bus3_pullu))));
    md_board__DOT__z80__DOT__bus_pullu_comb_12 = ((IData)(vlSelf->md_board__DOT__z80__DOT__bus1_pullu) 
                                                  | (IData)(md_board__DOT__z80__DOT__bus2_pullu));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw301__inp 
        = (1U & ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w133) 
                     | ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_112) 
                            | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212)) 
                               | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                  & (IData)(md_board__DOT__z80__DOT__w224))))) 
                        & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w118)) 
                           | (~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_227)) 
                                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w299))))))) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_192)));
    vlSelf->md_board__DOT__z80__DOT__w3 = (1U & (~ 
                                                 ((IData)(vlSelf->md_board__DOT__z80__DOT__w201) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w202))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_7 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w201));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl13__inp 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w201));
    vlSelf->md_board__DOT__z80__DOT__bus_comb_12 = 
        ((~ (IData)(md_board__DOT__z80__DOT__bus_pulld_comb_12)) 
         & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_167) 
            | (IData)(md_board__DOT__z80__DOT__bus_pullu_comb_12)));
    vlSelf->md_board__DOT__z80__DOT__bus_comb_123 = 
        ((~ ((IData)(md_board__DOT__z80__DOT__bus_pulld_comb_12) 
             | (IData)(vlSelf->md_board__DOT__z80__DOT__bus3_pulld))) 
         & (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_167) 
             & (IData)(vlSelf->md_board__DOT__z80__DOT__w513)) 
            | ((IData)(md_board__DOT__z80__DOT__bus_pullu_comb_12) 
               | (IData)(vlSelf->md_board__DOT__z80__DOT__bus3_pullu))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__35(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__35\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w182;
    md_board__DOT__ym__DOT__vdp__DOT__w182 = 0;
    CData/*1:0*/ md_board__DOT__ym__DOT__fm__DOT__rate_sel;
    md_board__DOT__ym__DOT__fm__DOT__rate_sel = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write70;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write70 = 0;
    SData/*13:0*/ md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add1;
    md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add1 = 0;
    SData/*13:0*/ md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add2;
    md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add2 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w416;
    md_board__DOT__m68k__DOT__w416 = 0;
    // Body
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l2__DOT__mem)
            : (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                           << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                      << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_5 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__m68k__DOT__w263 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w263;
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w261[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w261__v0;
        vlSelf->md_board__DOT__m68k__DOT__w259[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w259__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w261[0U] = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w259[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w259__v1;
    }
    vlSelf->md_board__DOT__m68k__DOT__w795 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w767) 
                                                  | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w766)) 
                                                      & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w770)
                                                          ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w971)
                                                          : (IData)(vlSelf->md_board__DOT__m68k__DOT__w977))) 
                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w752) 
                                                         | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w781) 
                                                            ^ (IData)(vlSelf->md_board__DOT__m68k__DOT__w782))) 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w765))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_75 = (0x7fU 
                                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr_out) 
                                                  + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_of)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_o 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_0 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_4 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum 
        = (0x1ffU & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_cnt_sr__DOT__v2)
                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_timer_b_o)
                       : (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                           << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                      << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))))) 
                     + (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt_of_sr__DOT__v2)) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum 
        = (0x7ffU & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v2)
                       ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_24_data__data_o) 
                           << 2U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_25_data__data_o))
                       : (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                           << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                      << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))))))) 
                     + (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel1) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem)) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w266) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl47__DOT__mem_assign 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl595__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl596__DOT__mem_assign 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                        >> 8U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl47__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl47__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl595__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl595__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl596__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl596__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_tl 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2_out)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1_out));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op1_sel) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op_output;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_o;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_o;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_o;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op_output)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_o));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl593__DOT__mem_assign 
        = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1002)
                     ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                         ? (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                            >> 2U) : (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                                      >> 1U)) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl593__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl35__DOT__mem_assign 
        = (((IData)(vlSelf->vdp_hclk1) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w191) 
                                          | ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w188))) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2))))
            ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address
            : vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl35__DOT__mem);
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write40 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write70 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add1 
        = (((- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel) 
                        & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect))))) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op_output)) 
           | (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel))) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_o)) 
              | ((- (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op4_sel) 
                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_43) 
                                 | (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)))) 
                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel) 
                                & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)))))) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_o))));
    md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add2 
        = (((- (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op1_sel) 
                         & ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
                            | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_44) 
                               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_42)))) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_43) 
                              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_44)))))) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op_output)) 
           | ((- (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op4_sel) 
                           & ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
                              | (5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)))) 
                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel) 
                              & ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
                                 | (5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)))) 
                             | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel))))) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_o)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_191 
        = (IData)(((8U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w751)));
    if (vlSelf->md_board__DOT___M3) {
        vlSelf->md_board__DOT__cart_VD_d = (0xffffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->cart_data_en))))));
        vlSelf->md_board__DOT__ym_INT_pull = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t12;
    } else {
        vlSelf->md_board__DOT__cart_VD_d = (0xffffU 
                                            & (0xff00U 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->cart_data_en))))))));
        vlSelf->md_board__DOT__ym_INT_pull = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w58) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w12));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w120 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2)) 
                 & ((IData)(vlSelf->md_board__DOT___M3)
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2)
                     : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl92__DOT__mem_assign 
        = (0xffU & (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v2))
                     ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109) 
                         & ((~ (IData)(vlSelf->md_board__DOT___M3)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr85__DOT__v2)))
                         ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                            >> 8U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data))
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl92__DOT__mem)));
    vlSelf->md_board__DOT__IPL = (1U | ((4U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w12) 
                                                   & (IData)(vlSelf->md_board__DOT___M3))) 
                                               << 2U)) 
                                        | (2U & ((~ 
                                                  ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w11) 
                                                   & (IData)(vlSelf->md_board__DOT___M3))) 
                                                 << 1U))));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w298__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w298[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v0;
        vlSelf->md_board__DOT__m68k__DOT__w298[3U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v1;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w298__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w298[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v2;
        vlSelf->md_board__DOT__m68k__DOT__w298[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v3;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18 
        = ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_of));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_i 
        = (1U & ((~ ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2))) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__timer_ha)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_252 
        = (IData)((((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                    >> 3U) & (0U != (6U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w962)))));
    vlSelf->md_board__DOT__m68k__DOT__w354 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w403) 
                                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w351));
    vlSelf->md_board__DOT__m68k__DOT__w653 = (1U & 
                                              (~ ((0x1000000U 
                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w984) 
                                                   >> 0xcU)
                                                   : 
                                                  (~ vlSelf->md_board__DOT__m68k__DOT__irdbus))));
    vlSelf->md_board__DOT__m68k__DOT__w654 = (1U & 
                                              (~ ((0x1000000U 
                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w984) 
                                                   >> 0xdU)
                                                   : 
                                                  (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                    >> 2U)))));
    vlSelf->md_board__DOT__m68k__DOT__w655 = (1U & 
                                              (~ ((0x1000000U 
                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])
                                                   ? 
                                                  ((IData)(vlSelf->md_board__DOT__m68k__DOT__w984) 
                                                   >> 0xeU)
                                                   : 
                                                  (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                    >> 4U)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_392 
        = (IData)(((0x38U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (~ ((0U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w169)) 
                         | (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                            >> 0xcU)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_182 
        = (IData)(((0x20U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                      >> 0x10U)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_173 
        = (0xcU == ((8U & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                           >> 0x13U)) | ((4U & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                >> 0x12U)) 
                                         | (1U & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                  >> 0x10U)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_365 
        = ((2U & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                  >> 0x11U)) | (1U & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                      >> 0x10U)));
    vlSelf->md_board__DOT__m68k_RW_d = ((IData)(vlSelf->md_board__DOT__FC_z) 
                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__rw_l));
    md_board__DOT__ym__DOT__vdp__DOT__w182 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168) 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                                 >> 7U));
    vlSelf->__VdfgRegularize_hd87f99a1_0_8 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl20__DOT__mem) 
                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164) 
                                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w191) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w149)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w204 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l2)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l1));
    vlSelf->md_board__DOT__m68k__DOT__w361 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w362)) 
                                               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w361_mem))));
    vlSelf->md_board__DOT__m68k__DOT__w449 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w448) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w444 = ((~ vlSelf->md_board__DOT__m68k__DOT__w443
                                               [1U]) 
                                              & (vlSelf->md_board__DOT__m68k__DOT__w442
                                                 [1U]
                                                  ? (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)
                                                  : (IData)(vlSelf->md_board__DOT__m68k__DOT__w444_mem)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_c_in_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_c_in_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w757 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w756) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c1));
    vlSelf->md_board__DOT__m68k__DOT__w749 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w748) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__c5 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__c5_l));
    md_board__DOT__m68k__DOT__w416 = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w359_3) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w417))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_inc_l__DOT__mem_assign 
            = (0xfffffU & ((~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l2__DOT__mem) 
                           + (~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_l__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add2_l__DOT__mem_assign 
            = (0x3ffffU & (~ (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_3_l__DOT__mem))) 
                               & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem) 
                              | (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_2_l__DOT__mem))) 
                                  & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem 
                                     << 1U)) | (0x3fffcU 
                                                & ((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_1_l__DOT__mem))) 
                                                   & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem 
                                                      << 2U)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add1_l__DOT__mem_assign 
            = (0xfffffU & (~ (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_5_l__DOT__mem))) 
                               & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem 
                                  << 2U)) | (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem))) 
                                              & (0xc0001U 
                                                 | (0x3fffeU 
                                                    & ((~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem) 
                                                       << 1U)))) 
                                             | (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_7_l__DOT__mem))) 
                                                 & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem 
                                                    << 1U)) 
                                                | (((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem))) 
                                                    & (0xe0000U 
                                                       | (0x1ffffU 
                                                          & (~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem)))) 
                                                   | (0xffffU 
                                                      & ((- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_9_l__DOT__mem))) 
                                                         & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem 
                                                            >> 1U)))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem_assign 
            = (0x3ffU & ((IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_tl) 
                                   >> 0xaU) & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem) 
                                                  >> 0xaU))))
                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_tl)
                          : 0U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_l__DOT__mem_assign 
            = (0x7fU & ((IData)(1U) + ((1U | (0x3eU 
                                              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_l__DOT__mem)) 
                                                 << 1U))) 
                                       + (0x20U | (0x1fU 
                                                   & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_ks_add_l__DOT__mem)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_c_in_l__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l2__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_inc_l__DOT__mem_assign 
            = (0xfffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_inc_l__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add2_l__DOT__mem_assign 
            = (0x3ffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add2_l__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add1_l__DOT__mem_assign 
            = (0xfffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add1_l__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem_assign 
            = (0x3ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_l__DOT__mem_assign 
            = (0x7fU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_c_in_l__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_c_in_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l2__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l2__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_54 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeA8)
                                                ? (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)))
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_5));
    vlSelf->md_board__DOT__m68k__DOT__w784 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w775)
                                                ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w750))
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w770) 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w776))
                                                    ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w972)
                                                    : 
                                                   (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w770)) 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w776))
                                                     ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w978)
                                                     : 
                                                    ((IData)(vlSelf->md_board__DOT__m68k__DOT__w777)
                                                      ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w781)
                                                      : (IData)(vlSelf->md_board__DOT__m68k__DOT__w784_mem))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT____Vcellout__reg_ctrl__block 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_o) 
            & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_normal)))) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_0) 
               & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_3)))) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_4) 
                  & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_2)))) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3_o_5) 
                    & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_1)))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_29 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write40))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_tl__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_30 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write40))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_tl__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr2_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_41 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                                & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write70))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_42 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write70))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2_out));
    vlSelf->md_board__DOT__m68k__DOT__w346 = (1U & 
                                              (~ ((~ 
                                                   vlSelf->md_board__DOT__m68k__DOT__w435
                                                   [2U]) 
                                                  | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w400)) 
                                                     | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w325))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_78 = (0x7fffU 
                                               & (((0x4000U 
                                                    & ((IData)(md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add1) 
                                                       << 1U)) 
                                                   | (IData)(md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add1)) 
                                                  + 
                                                  ((0x4000U 
                                                    & ((IData)(md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add2) 
                                                       << 1U)) 
                                                   | (IData)(md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_add2))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_431 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w308));
    vlSelf->md_board__DOT__m68k__DOT__w968 = (1U & 
                                              (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_252)) 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w967))));
    vlSelf->md_board__DOT__m68k__DOT__w974 = (1U & 
                                              ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                                                 >> 7U) 
                                                & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                                                    >> 6U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                                                       >> 5U) 
                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_252) 
                                                         & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                                                            >> 4U))))) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w972)));
    vlSelf->md_board__DOT__m68k__DOT__w560 = ((8U & 
                                               (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                >> 0x13U)) 
                                              | ((4U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                     >> 0x12U)) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_365)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w63 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w61) 
         & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w182) 
            & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem) 
               >> 1U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w62 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w61) 
         & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem) 
                >> 1U)) & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w182)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)
            ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l1))
            : 0U);
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w204) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem_assign = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem_assign = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l2_assign = 0U;
    } else {
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem_assign 
                = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                         >> 4U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem_assign 
                = (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data));
        } else {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem_assign 
                = (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem_assign 
                = (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem));
        }
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l2_assign 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l2)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l1));
    }
    vlSelf->md_board__DOT__m68k__DOT__w355 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__c5) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))));
    vlSelf->md_board__DOT__m68k__DOT__w396 = (1U & 
                                              (~ (vlSelf->md_board__DOT__m68k__DOT__w414
                                                  [2U] 
                                                  | ((IData)(md_board__DOT__m68k__DOT__w416) 
                                                     | (IData)(vlSelf->md_board__DOT__m68k__DOT__w415)))));
    vlSelf->md_board__DOT__m68k__DOT__w376 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w369) 
                                               | ((~ 
                                                   ((IData)(md_board__DOT__m68k__DOT__w416) 
                                                    | (vlSelf->md_board__DOT__m68k__DOT__w414
                                                       [2U] 
                                                       | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w415) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT__w420))))) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w368))));
    vlSelf->md_board__DOT__m68k__DOT__w791 = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__m68k__DOT__w773)
                                                    ? 
                                                   (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w784))
                                                    : (IData)(vlSelf->md_board__DOT__m68k__DOT__w784)) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w751) 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w769)))));
    vlSelf->md_board__DOT__m68k__DOT__w347 = (1U & 
                                              (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w400)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w346))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_192 
        = (IData)(((0x24U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & ((1U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                      | (((2U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w751)) 
                         | (((2U == ((8U & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                            >> 0x13U)) 
                                     | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_365))) 
                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)) 
                            | (((3U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)) 
                                   & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w751)))) 
                               | (((4U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w751)) 
                                  | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w751)) 
                                      & (5U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560))) 
                                     | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)) 
                                         & (7U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560))) 
                                        | (((8U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__w752)) 
                                           | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w752)) 
                                               & (9U 
                                                  == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560))) 
                                              | (((0xaU 
                                                   == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w753)) 
                                                 | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753)) 
                                                     & (0xbU 
                                                        == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560))) 
                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_173) 
                                                        & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753)) 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w752))) 
                                                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_173) 
                                                           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w752)) 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))) 
                                                          | (((0xdU 
                                                               == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_393)) 
                                                             | (((0xdU 
                                                                  == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_394)) 
                                                                | (((0xeU 
                                                                     == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560)) 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)) 
                                                                   | (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)) 
                                                                       & (0xfU 
                                                                          == (IData)(vlSelf->md_board__DOT__m68k__DOT__w560))) 
                                                                      & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_393) 
                                                                         | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_394)))))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
        = (0xfffffU & ((~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add1_l__DOT__mem) 
                       + ((0xffffcU & ((~ vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add2_l__DOT__mem) 
                                       << 2U)) + (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_c_in_l__DOT__mem))))));
    vlSelf->md_board__DOT__m68k__DOT__w385 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w371) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w396) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w370)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_i 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem)) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v2));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_14) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_csm_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_csm_l__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_csm_l__DOT__mem_assign 
            = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode_o)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_i));
    }
    md_board__DOT__ym__DOT__fm__DOT__rate_sel = (((0x200000U 
                                                   & vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2)
                                                   ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle)
                                                   : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                                                      >> 0x14U)) 
                                                  | (1U 
                                                     & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                                                        >> 0x15U))));
    vlSelf->md_board__DOT__m68k__DOT__w555 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_192) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_179) 
                                                     | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_178) 
                                                        | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_391) 
                                                           | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_390) 
                                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_389) 
                                                                 | ((IData)(
                                                                            (((0x20U 
                                                                               == 
                                                                               (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                              & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x10U))) 
                                                                             & ((IData)(vlSelf->md_board__DOT__m68k__DOT__r8) 
                                                                                >> 1U))) 
                                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_182) 
                                                                        & (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__r8))))) 
                                                                       | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_183) 
                                                                          | ((IData)(
                                                                                (((0x1cU 
                                                                                == 
                                                                                (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x10U))) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__r8))) 
                                                                             | ((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w754))) 
                                                                                | ((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))) 
                                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_383) 
                                                                                | ((IData)(
                                                                                (((0x10U 
                                                                                == 
                                                                                (0x3cU 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w754))) 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))) 
                                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_380) 
                                                                                | ((2U 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                                                >> 2U))) 
                                                                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_190) 
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_379))))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_rate 
        = (((- (IData)((0U == (IData)(md_board__DOT__ym__DOT__fm__DOT__rate_sel)))) 
            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2_out)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1_out))) 
           | (((- (IData)((1U == (IData)(md_board__DOT__ym__DOT__fm__DOT__rate_sel)))) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                   ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2_out)
                   : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1_out))) 
              | (((- (IData)((2U == (IData)(md_board__DOT__ym__DOT__fm__DOT__rate_sel)))) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                      ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2_out)
                      : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1_out))) 
                 | ((((- (IData)((3U == (IData)(md_board__DOT__ym__DOT__fm__DOT__rate_sel)))) 
                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2_out)
                          : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1_out))) 
                     << 1U) | (3U == (IData)(md_board__DOT__ym__DOT__fm__DOT__rate_sel))))));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem_assign 
            = (0xcU != (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem_assign 
            = (0xdU != (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem_assign 
            = (0xeU != (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_15_l__DOT__mem_assign 
            = (0xfU != (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem_assign 
            = (0x3fU & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem) 
                           ^ (- (IData)((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_l__DOT__mem) 
                                               >> 6U)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem_assign 
            = ((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                       ? ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          >> 0xbU) : ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                      >> 0xbU))) ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ams_o)
                : 0U);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_5_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__multi_sel_5_l__inp;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_3_l__DOT__mem_assign 
            = ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
               | ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____VdfgRegularize_had9f0d59_3_14)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_add_l__DOT__mem_assign 
            = (((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_8) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem)) 
                 << 3U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_8) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem)) 
                            << 2U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_8) 
                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem)) 
                                       << 1U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_8) 
                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem))))) 
               | (((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_7) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem)) 
                    << 5U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_7) 
                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem)) 
                               << 4U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_7) 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem)) 
                                          << 3U) | 
                                         (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_0_7) 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem)) 
                                          << 2U)))) 
                  | (((- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc1_l__DOT__mem) 
                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_exp_step)))) 
                      & (0x3c0U | (0x3fU & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level2) 
                                               >> 4U))))) 
                     | (((- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc2_l__DOT__mem) 
                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_exp_step)))) 
                         & (0x380U | (0x7fU & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level2) 
                                                  >> 3U))))) 
                        | (((- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc3_l__DOT__mem) 
                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_exp_step)))) 
                            & (0x300U | (0xffU & (~ 
                                                  ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level2) 
                                                   >> 2U))))) 
                           | ((- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc4_l__DOT__mem) 
                                          & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_exp_step)))) 
                              & (0x200U | (0x1ffU & 
                                           (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level2) 
                                               >> 1U))))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem_assign 
            = (0x7ffU & ((0x7fU & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_lfo_mux_l__DOT__mem))) 
                         + ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)
                             ? 0U : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l2__DOT__mem_assign 
            = (0xfffffU & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v2) 
                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2) 
                               >> 1U)) ? (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                              << 0x13U) 
                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))))))
                            : 0xfffffU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_rate;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_12_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_13_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_14_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_15_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_15_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__lfo_am_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ams_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_5_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_5_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_3_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_3_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_add_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_add_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem_assign 
            = (0x7ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_lfo_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l2__DOT__mem_assign 
            = (0xfffffU & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l2__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_l__DOT__mem;
    }
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__17(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__codebus2 = ((0x300U 
                                                   & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w476)
                                                        ? 
                                                       (~ 
                                                        ((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus) 
                                                         >> 8U))
                                                        : 
                                                       ((IData)(vlSelf->md_board__DOT__m68k__DOT__w486)
                                                         ? 
                                                        (~ 
                                                         (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                          >> 0xdU))
                                                         : 
                                                        ((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2_mem) 
                                                         >> 8U))) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_83) 
                                                      << 6U) 
                                                     | (0x3fU 
                                                        & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w476)
                                                            ? 
                                                           (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__codebus))
                                                            : 
                                                           ((IData)(vlSelf->md_board__DOT__m68k__DOT__w486)
                                                             ? 
                                                            (~ 
                                                             ((0x3cU 
                                                               & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                                  >> 5U)) 
                                                              | (3U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                                    >> 0xbU))))
                                                             : (IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2_mem))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__18(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w570 = (IData)(
                                                     (0ULL 
                                                      != 
                                                      (0x700000000000ULL 
                                                       & vlSelf->md_board__DOT__m68k__DOT__ird_pla1)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__19(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w738 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__m68k__DOT__w726)
                                                ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w727)
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
                                                    : (IData)(vlSelf->md_board__DOT__m68k__DOT__w737))
                                                : (IData)(vlSelf->md_board__DOT__m68k__DOT__w740)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__36(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__36\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ZRAM;
    md_board__DOT__ZRAM = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w215;
    md_board__DOT__ym__DOT__vdp__DOT__w215 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w216;
    md_board__DOT__ym__DOT__vdp__DOT__w216 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w217;
    md_board__DOT__ym__DOT__vdp__DOT__w217 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w218;
    md_board__DOT__ym__DOT__vdp__DOT__w218 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w222;
    md_board__DOT__ym__DOT__vdp__DOT__w222 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w223;
    md_board__DOT__ym__DOT__vdp__DOT__w223 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w224;
    md_board__DOT__ym__DOT__vdp__DOT__w224 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w225;
    md_board__DOT__ym__DOT__vdp__DOT__w225 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w232;
    md_board__DOT__ym__DOT__vdp__DOT__w232 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w437;
    md_board__DOT__ym__DOT__vdp__DOT__w437 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w654;
    md_board__DOT__ym__DOT__vdp__DOT__w654 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w769;
    md_board__DOT__ym__DOT__vdp__DOT__w769 = 0;
    CData/*3:0*/ md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_shift_sum;
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_shift_sum = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute;
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_6_3;
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_6_3 = 0;
    // Body
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_3 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_3;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out_0 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out_0;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out_1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vsram_out_1;
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0] 
            = ((0x700U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0]) 
               | (IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1] 
            = ((0xffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1]) 
               | ((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1) 
                  << 8U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0] 
            = ((0x3fffff800ULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0]) 
               | (IData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v0)));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1] 
            = ((0x3fff007ffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v1)) 
                  << 0xbU));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2] 
            = ((0xfffffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sprdata__v2)) 
                  << 0x14U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v0] 
            = ((0x1fff80U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v0]) 
               | (IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v0));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v1] 
            = ((0x1ff87fU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v1]) 
               | ((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v1) 
                  << 7U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v2] 
            = ((0x7ffffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v2]) 
               | ((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v2) 
                  << 0x13U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__sat__v3) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v3] 
            = ((0x1807ffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__sat__v3]) 
               | ((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__sat__v3) 
                  << 0xbU));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sprdata_out;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out;
    vlSelf->MOL_2612 = ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_pan_l) 
                          >> 1U) & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_out_enable_2612_l))
                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__DAC_2612_matrix_out)
                         : ((0x100U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l))
                             ? 1U : 0x3ffU));
    vlSelf->MOR_2612 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_pan_l) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_out_enable_2612_l))
                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__DAC_2612_matrix_out)
                         : ((0x100U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l))
                             ? 1U : 0x3ffU));
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_shift_sum 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                    >> 2U) + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_shift__DOT__mem)));
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_6_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v2) 
           & (3U != (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                           >> 4U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w781 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__sum 
        = (7U & ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                   << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)) 
                 + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w421 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w666 
        = (0x3ffU & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2))
                      ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl342__DOT__mem)
                      : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl344__DOT__mem))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl346__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl346__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl340__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl340__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl346__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                           << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                      << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w772));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem_assign 
            = (1U & (~ ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2))) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl340__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w666;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w796 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w795 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr439__DOT__v2) 
            >> 4U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l371 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
            << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                       << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                  << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                             << 1U) 
                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))));
    md_board__DOT__ym__DOT__vdp__DOT__w654 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w611 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl266__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w645 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl317__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT____VdfgRegularize_h5bb4bc08_0_5 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                           << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                      << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op_output));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w805) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl450__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl452__DOT__mem_assign 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      >> 3U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                       >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl448__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w795;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl450__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl450__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl452__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl452__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl448__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl448__DOT__mem;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w676 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w586 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w799 
            = ((0x100U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                          << 4U)) | ((0x80U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                               << 3U)) 
                                     | ((0x40U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                  << 2U)) 
                                        | ((0x20U & 
                                            ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                             << 1U)) 
                                           | ((0x10U 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                     >> 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                        >> 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                             >> 4U))))))))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w676 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w586 
            = (3U & (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                           >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w799 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl437__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem_assign 
        = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w805)
                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w799)
                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl185__DOT__mem_assign 
        = ((1U & (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w379)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                     >> 7U))) ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl185__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl184__DOT__mem_assign 
        = ((1U & (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w543)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                     >> 7U))) ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out)
                                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl184__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_out_i 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2b_dac_en__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_33) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_31))))
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dac_msb__DOT__v2) 
                << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_2a_dac__data_o) 
                           << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2)))
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                           << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                      << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
            : ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem)
                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_241)
                  : 0U) << 1U) | (1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem))) 
                                        ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)))));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_31) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_32 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_35 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ks__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_32 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_35 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr1_out;
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_33) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_34 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_36 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ks__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_34 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_36 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ks__DOT__sr2_out;
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_43) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_44 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_47 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_sl__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_44 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_47 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1_out;
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_45) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_46 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data;
        vlSelf->__VdfgRegularize_hd87f99a1_0_48 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_sl__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_46 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2_out;
        vlSelf->__VdfgRegularize_hd87f99a1_0_48 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2_out;
    }
    vlSelf->ram_68k_address = ((0x4000U & vlSelf->md_board__DOT__VA) 
                               | ((0x2000U & ((~ ((IData)(vlSelf->md_board__DOT___M3) 
                                                  & (vlSelf->md_board__DOT__VA 
                                                     >> 0xdU))) 
                                              << 0xdU)) 
                                  | (0x1fffU & vlSelf->md_board__DOT__VA)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w150 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT___M3) 
                    & (IData)((((0x6000U == (0xff00U 
                                             & (IData)(vlSelf->md_board__DOT__ZA))) 
                                & (~ (IData)(vlSelf->md_board__DOT__ZWR))) 
                               & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w220)))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v1)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl192__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl192__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl224__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl224__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl225__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl225__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl243__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl243__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl244__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl244__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl245__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl245__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl275__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl275__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl276__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl276__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl277__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl277__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl294__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr301__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl294__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl295__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl295__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl296__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl296__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl342__DOT__mem_assign 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl342__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl343__DOT__mem_assign 
        = (0x3ffU & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl334__DOT__mem)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2))
                      ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                          ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl346__DOT__mem))
                          : (0x300U | (0xffU & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem)))))
                      : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl343__DOT__mem)));
    md_board__DOT__ZRAM = (1U & (~ (IData)(((0U == 
                                             (0xc000U 
                                              & (IData)(vlSelf->md_board__DOT__ZA))) 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_13)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w803 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_reset_and 
        = ((IData)(vlSelf->res_z80) & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2) 
                                          >> 0xbU)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_addr 
        = ((IData)(vlSelf->res_z80) | ((~ (IData)(vlSelf->md_board__DOT__ZA)) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l_en)));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l_en) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_data 
            = ((IData)(vlSelf->md_board__DOT__ZA) & (IData)(vlSelf->md_board__DOT__ZRES));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__8__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ZD));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__7__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__6__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZD) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ZA) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_data = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__8__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__8__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__7__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__7__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__6__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__6__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_rst 
        = ((IData)(vlSelf->res_z80) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0)));
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute 
        = ((IData)(vlSelf->res_z80) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_quiet_ssg) 
                                       & ((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o)) 
                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2) 
                                                >> 1U)))));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_7_l__DOT__mem_assign 
            = (7U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____Vcellinp__eg_cnt_ed__inp;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem_assign 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem)) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                            >> 1U)) | (((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem)) 
                                        & (1U == (3U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp)))) 
                                       | ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_low__DOT__mem)) 
                                          & (3U == 
                                             (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem_assign 
            = (0xfffU & ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                           << 0xbU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                        << 0xaU) | 
                                       (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                         << 9U) | (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                      << 2U) 
                                                                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                                        << 1U))))))))))) 
                         + (((0xf00U & ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l2__DOT__mem))))) 
                                        << 8U)) | (0xffU 
                                                   & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sum_l__DOT__mem)))) 
                            + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l3__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem_assign 
            = (0xeU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem_assign 
            = (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_9_l__DOT__mem_assign 
            = (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_2_l__DOT__mem_assign 
            = ((8U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
               | ((9U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____VdfgRegularize_had9f0d59_3_13) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__multi_sel_5_l__inp))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_7_l__DOT__mem_assign 
            = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
               | ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_multi)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____VdfgRegularize_had9f0d59_3_14) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____VdfgRegularize_had9f0d59_3_13))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__step_low_l__DOT__mem_assign 
            = (1U & (~ (((0xcU == (IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_shift_sum)) 
                         & ((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp)) 
                            & (IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_6_3))) 
                        | (((0xdU == (IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_shift_sum)) 
                            & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                >> 1U) & (IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_6_3))) 
                           | ((0xeU == (IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_shift_sum)) 
                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                 & (IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_6_3)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem_assign 
            = (0x3ffU & ((- (IData)((IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute))) 
                         | (((- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_not_max_sr__DOT__v2)))) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level2)) 
                            | (((- (IData)((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2) 
                                                  >> 1U)))) 
                                << 3U) & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                           << 9U) | 
                                          (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                            << 8U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                               << 7U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                        << 4U) 
                                                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__tl_sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                          << 3U)))))))))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_7_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_7_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_ed__DOT__prev__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_ed__DOT__prev__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_hi_sel_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem_assign 
            = (0xfffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_lfo_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_6_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_9_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_9_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_2_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_2_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_7_l__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_7_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__step_low_l__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__step_low_l__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem_assign 
            = (0x3ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w612 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w393) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 9U) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w638 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w402) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 0xaU) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr498__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl533__DOT__mem_assign 
            = (3U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl534__DOT__mem_assign 
            = (4U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl535__DOT__mem_assign 
            = (5U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl536__DOT__mem_assign 
            = (6U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl537__DOT__mem_assign 
            = (7U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl563__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr514__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl34__DOT__mem_assign 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem)) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l503) 
                << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w612))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w638))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr300__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr335__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr393__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl533__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl533__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl534__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl534__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl535__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl535__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl536__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl536__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl537__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl537__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl563__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl563__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl34__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl34__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem));
    }
    md_board__DOT__ym__DOT__vdp__DOT__w769 = ((IData)(vlSelf->vdp_hclk1) 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w97) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w772)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs1__set 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__o_bg)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w176 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w155)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w392 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w401 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w423 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w453 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w452)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w183 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w408 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)
            ? (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207) 
                                  & (0x200U == (0x700U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                         ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))
                         : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem)))
            : 0U);
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem_assign 
        = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                              & (0x700U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sb__DOT__mem_assign 
        = (0xfU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                             & (0x400U == (0x700U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sb__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wd__DOT__mem_assign 
        = (0x3fU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                              & (0x300U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                        >> 1U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wd__DOT__mem)));
    md_board__DOT__ym__DOT__vdp__DOT__w218 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                                                  & (0x200U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w222 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                                  & (0x200U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w223 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                                  & (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w224 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                                  & (0U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w225 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                                                  & (0x600U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w232 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                                                  & (0x600U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w437 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2)) 
                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w86) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w460)))));
    md_board__DOT__ym__DOT__vdp__DOT__w215 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                                                  & (0x400U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w216 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                                                  & (0U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w217 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                                                  & (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl305__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl305__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl304__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl304__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl303__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl303__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl291__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl291__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl282__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl282__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl281__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl281__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl280__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl280__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl279__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl279__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl260__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl260__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl259__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl259__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl233__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl233__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w592) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl232__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl223__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl234__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl225__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl235__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl226__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl255__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl243__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl256__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl244__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl257__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl245__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl258__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl246__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl260__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl259__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl233__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl224__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl232__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl232__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl234__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl234__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl235__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl235__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl255__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl255__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl256__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl256__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl257__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl257__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl258__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl258__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl260__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl260__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl233__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl233__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl180__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl180__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl324__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl324__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__sum 
        = (7U & ((3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w772)
                         ? (~ (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                                       >> 0x18U))) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l420))) 
                 + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w293) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl62__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl62__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl62__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w292) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl55__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl63__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl67__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl55__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl55__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl63__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl63__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl67__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl67__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w291) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl39__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl64__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl68__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl39__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl39__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl64__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl64__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl68__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl68__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w294) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl36__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl36__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl36__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum 
        = (0xffU & ((0x7fU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v2) 
                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2)))
                               ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out
                               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l351))) 
                    + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w684)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl442_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl442_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl439_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl439_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b7__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b7__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l351)
            : (0x40U | ((0x20U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                  << 4U)) | ((0x10U 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                 << 3U)) 
                                             | ((8U 
                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                    << 2U)) 
                                                | ((4U 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->A_L_2612 = (0x3ffffU & (((0x20000U & ((IData)(vlSelf->MOL_2612) 
                                                  << 8U)) 
                                     | ((IData)(vlSelf->MOL_2612) 
                                        << 7U)) + (
                                                   ((0x30000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->MOL_2612) 
                                                                       >> 9U)))) 
                                                        << 0x10U)) 
                                                    | ((IData)(vlSelf->MOL_2612) 
                                                       << 6U)) 
                                                   + (IData)(vlSelf->PSG))));
    vlSelf->A_R_2612 = (0x3ffffU & (((0x20000U & ((IData)(vlSelf->MOR_2612) 
                                                  << 8U)) 
                                     | ((IData)(vlSelf->MOR_2612) 
                                        << 7U)) + (
                                                   ((0x30000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->MOR_2612) 
                                                                       >> 9U)))) 
                                                        << 0x10U)) 
                                                    | ((IData)(vlSelf->MOR_2612) 
                                                       << 6U)) 
                                                   + (IData)(vlSelf->PSG))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_index 
        = (0x1fU & ((0x1000U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l371)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl259__inp 
        = ((0x80U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                       ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                          >> 7U) : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                    >> 4U)) << 7U)) 
           | ((0x40U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                        >> 1U)) | ((0x20U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w586) 
                                             << 4U)) 
                                   | ((0x10U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                                                >> 2U)) 
                                      | ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w586) 
                                                << 3U)) 
                                         | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                                                   >> 3U)) 
                                            | ((2U 
                                                & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                                     ? 
                                                    ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                                     >> 3U)
                                                     : 
                                                    ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                                     >> 1U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                                                     >> 3U)))))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w591) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl223__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl259__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl259__inp;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl223__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl223__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl259__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl259__DOT__mem;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w631) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl306__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl297__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl305__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl296__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl304__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl295__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl303__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl294__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl291__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sl259__inp;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl282__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl278__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl281__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl277__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl280__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl276__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl279__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl275__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl306__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl306__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl305__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl305__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl304__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl304__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl303__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl303__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl291__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl291__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl282__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl282__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl281__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl281__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl280__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl280__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl279__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl279__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w662 
        = (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355) 
                                    + ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl340__DOT__mem)) 
                                       + (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106) 
                                           << 8U) | 
                                          (((IData)(md_board__DOT__ym__DOT__vdp__DOT__w654) 
                                            << 7U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106) 
                                               << 1U) 
                                              | (IData)(md_board__DOT__ym__DOT__vdp__DOT__w654))))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl344__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl344__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr439__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr439__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem_assign 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl442_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl442_1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl439_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl439_1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl344__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl343__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr439__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr439__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w662));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_2__DOT__mem_assign 
            = (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w662) 
                       >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl442_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl439_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__sum 
        = (7U & ((3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w846)
                         ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w799) 
                            >> 1U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l503))) 
                 + (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w846)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl505__DOT__mem_assign 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w846)
                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w799)
                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl505__DOT__mem)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w611) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl237__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl232__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl239__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl234__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl240__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl235__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl261__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl255__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl262__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl256__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl263__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl257__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl264__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl258__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl260__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl238__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl233__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl237__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl237__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl239__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl239__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl240__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl240__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl261__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl261__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl262__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl262__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl263__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl263__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl264__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl264__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl238__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl238__DOT__mem;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w645) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl310__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl306__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl309__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl305__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl308__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl304__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl307__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl303__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl291__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl290__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl282__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl289__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl281__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl288__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl280__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl287__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl279__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl310__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl310__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl309__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl309__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl308__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl308__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl307__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl307__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl290__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl290__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl289__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl289__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl288__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl288__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl287__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl287__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_d_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v2;
    }
    vlSelf->ram_z80_wren = (1U & (~ ((IData)(md_board__DOT__ZRAM) 
                                     | (IData)(vlSelf->md_board__DOT__ZWR))));
    vlSelf->md_board__DOT__ram_ZD_d = (0xffU & (- (IData)(
                                                          ((IData)(md_board__DOT__ZRAM) 
                                                           | (IData)(vlSelf->md_board__DOT__ZRD)))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w803) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl451__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl450__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl453__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl452__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl451__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl451__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl453__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl453__DOT__mem;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_127 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                                 & (3U 
                                                    == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o))) 
                                                | ((IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute) 
                                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                                      & (~ 
                                                         ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2) 
                                                          >> 1U)))));
    if (md_board__DOT__ym__DOT__vdp__DOT__w769) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem_assign 
            = (1U & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                             >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem_assign 
            = (3U & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                             >> 0x15U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem_assign 
            = (1U & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                             >> 0x17U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem_assign 
            = (3U & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                             >> 0x18U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl417__DOT__mem_assign 
            = (3U & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                             >> 0x1aU)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem_assign 
            = (0x3fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                                >> 0x1cU)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl424__DOT__mem_assign 
            = (0x7ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem_assign 
            = (0x1ffU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out 
                                 >> 0xbU)));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl417__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl417__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl424__DOT__mem_assign 
            = (0x7ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl424__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem_assign 
            = (0x1ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w218) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa__DOT__mem_assign 
            = (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                       >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_nt__DOT__mem_assign 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa__DOT__mem_assign 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_nt__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_nt__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w222) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wvp__DOT__mem_assign 
            = (0x1fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_down__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wvp__DOT__mem_assign 
            = (0x1fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wvp__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_down__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_down__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w223) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_whp__DOT__mem_assign 
            = (0x1fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rigt__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_whp__DOT__mem_assign 
            = (0x1fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_whp__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rigt__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rigt__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w224) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vsz__DOT__mem_assign 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vsz__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vsz__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w225) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b2__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b5__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 5U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b2__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b5__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b5__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w232) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b4__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b0__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b4__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b4__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum 
        = (0x3ffU & ((0x1ffU & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w437)
                                 ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w86)
                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                                     : (0x180U | ((0x40U 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w431)) 
                                                      << 6U)) 
                                                  | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w431)) 
                                                      << 5U) 
                                                     | ((0x10U 
                                                         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107)) 
                                                            << 4U)) 
                                                        | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w432) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w431)) 
                                                            << 3U) 
                                                           | ((4U 
                                                               & ((~ (IData)(vlSelf->pal)) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    ^ 
                                                                    ((IData)(vlSelf->pal) 
                                                                     ^ (IData)(vlSelf->vdp_intfield)))))))))))
                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     + (1U & (((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                                   >> 2U)) & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
                                              & (~ (IData)(md_board__DOT__ym__DOT__vdp__DOT__w437)))) 
                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__o_bg) 
                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                                    >> 2U))))));
    if (md_board__DOT__ym__DOT__vdp__DOT__w215) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ste__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b4__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b6__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs0__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ste__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ste__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b4__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b4__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b6__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs0__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w216) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m3__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b2__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie1__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b6__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b7__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m3__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m3__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b2__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie1__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b6__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b7__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b7__DOT__mem));
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w217) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b1__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m1__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie0__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b7__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b0__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b1__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m1__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie0__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie0__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b7__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b7__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w461 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w460) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem_assign 
        = (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl180__DOT__mem_assign 
        = (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vsram_out)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl180__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl324__DOT__mem_assign 
        = (0x7ffU & (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2))
                      ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v2)
                          ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out
                          : (0x3ffU & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                                       >> 0xbU))) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl324__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w328)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem)
             : 0U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w327)
                        ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem)
                        : 0U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w329)
                                   ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem)
                                   : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w326)
                                             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem)
                                             : 0U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w784 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2) 
           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l420)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__sum 
        = (7U & ((3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w804)
                         ? (~ ((0x1ffffffeU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                                                << 1U) 
                                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                  >> 3U))) 
                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                     >> 4U)))) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l457))) 
                 + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800 
        = (0x3fU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w799) 
                     >> 3U) + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w795) 
                               + ((0x30U & ((- (IData)(
                                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w796)))) 
                                            << 4U)) 
                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w796) 
                                      << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w796) 
                                                 << 2U) 
                                                | (((0x1ffffffeU 
                                                     & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                         >> 3U) 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w795) 
                                                           << 1U))) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w796) 
                                                       << 1U)) 
                                                   | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr442__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                        >> 4U) 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w795)) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w796)))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__sum 
        = (0x3fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l371) 
                    + (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v2) 
                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w784))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__37(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__37\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w213;
    md_board__DOT__ym__DOT__vdp__DOT__w213 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w227;
    md_board__DOT__ym__DOT__vdp__DOT__w227 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w337;
    md_board__DOT__ym__DOT__vdp__DOT__w337 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w858;
    md_board__DOT__ym__DOT__vdp__DOT__w858 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w859;
    md_board__DOT__ym__DOT__vdp__DOT__w859 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w1021;
    md_board__DOT__ym__DOT__vdp__DOT__w1021 = 0;
    IData/*22:0*/ md_board__DOT__ym__DOT__vdp__DOT__io_address_pull;
    md_board__DOT__ym__DOT__vdp__DOT__io_address_pull = 0;
    CData/*0:0*/ md_board__DOT__vram1__DOT__wr;
    md_board__DOT__vram1__DOT__wr = 0;
    // Body
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0] 
            = ((0xffffffffffff80ULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0]) 
               | (IData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0)));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1] 
            = ((0xffffffffffc07fULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1)) 
                  << 7U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2] 
            = ((0xffffffffe03fffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2)) 
                  << 0xeU));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3] 
            = ((0xfffffff01fffffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3)) 
                  << 0x15U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4] 
            = ((0xfffff80fffffffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4)) 
                  << 0x1cU));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5] 
            = ((0xfffc07ffffffffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5)) 
                  << 0x23U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6] 
            = ((0xfe03ffffffffffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6)) 
                  << 0x2aU));
    }
    if (vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer[vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7] 
            = ((0x1ffffffffffffULL & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                [vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7]) 
               | ((QData)((IData)(vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7)) 
                  << 0x31U));
    }
    vlSelf->md_board__DOT__vram1__DOT__addr_ser = vlSelf->__Vdly__md_board__DOT__vram1__DOT__addr_ser;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802 
        = (0x3fU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2)
                      ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                          << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                     << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
                      : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                          << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                     << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))) 
                    + (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w789) 
                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v2))) 
                       + (- (IData)(((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w789) 
                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v2)))))));
    vlSelf->vdp_dma = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem)) 
                             | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem))));
    md_board__DOT__ym__DOT__vdp__DOT__io_address_pull 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)
             ? 0U : 0x73ffffU) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)
                                   ? 0x33ffffU : 0U));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3_o_0 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
            << 0xaU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                    << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                               << 7U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3_o_4 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
            << 0xaU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                    << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                               << 7U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))));
    md_board__DOT__ym__DOT__vdp__DOT__w337 = (1U & 
                                              ((~ (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m3__DOT__mem))) 
                                               | ((IData)(vlSelf->vdp_hclk1) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2) 
            | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2))))
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2)
                 ? ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_pal__DOT__mem)
                       : 1U) << 4U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_index__DOT__mem))
                 : 0x7fU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2)
                               ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v2) 
                                   << 6U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                               << 5U) 
                                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                 << 4U)) 
                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
                               : 0x7fU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2)
                                             ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr321__DOT__v2) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                     << 5U) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
                                             : 0x7fU) 
                                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2)
                                               ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr274__DOT__v2) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
                                               : 0x7fU))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus_mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w264 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w249) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w150));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index 
        = (0x3fU & (((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_294)) 
                            & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                  >> 0xdU)))) ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
                      : 0U) | ((((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                                     >> 0xdU)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_294))
                                 ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                     << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                << 4U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))
                                 : 0U) | ((0x2000U 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))
                                           ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem)
                                           : 0U))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_338 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0x1fU)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_336 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0x26U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_334 
            = (0xfU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                               >> 0x2dU)));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_338 = 0xfU;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_336 = 0xfU;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_334 = 0xfU;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
        = (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem)) 
            << 0x34U) | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w980)) 
                          << 0x32U) | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w979)) 
                                        << 0x31U) | 
                                       (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem)) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w983)) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w982)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem)) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w980)) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w979)) 
                                                        << 0x23U) 
                                                       | (((QData)((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem)) 
                                                           << 0x1fU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w983) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w982) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w980) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w979) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w983) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w982) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w980) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w979) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w983) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w982))))))))))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__dclk_prescaler_dff1__rst 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l2__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l515 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w883)))
                    ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845) 
                       >> 4U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl515__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l516 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w873) 
                       | (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem))))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845)
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl516__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l517 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w873)))
                    ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845) 
                       >> 4U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl517__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l518 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w876) 
                       | (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem))))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845)
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl518__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l519 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w876)))
                    ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845) 
                       >> 4U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl519__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l520 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w880) 
                       | (4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem))))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845)
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl520__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l521 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w880)))
                    ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845) 
                       >> 4U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl521__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l522 
        = (0xfU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w883) 
                       | (6U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem))))
                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845)
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl522__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w346 
        = ((~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                >> 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem))) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w274));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w286 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w289) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w319))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w288 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109) 
              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w317) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w289))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_8 
        = (1U & (~ ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w293) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl37__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl58__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl66__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl70__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl74__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl78__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl37__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl37__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl58__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl58__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl66__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl66__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl70__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl70__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl74__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl74__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl78__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl78__DOT__mem));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w292) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl38__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl59__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl71__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl75__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl38__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl38__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl59__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl59__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl71__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl71__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl75__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl75__DOT__mem));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w291) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl56__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl60__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl72__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl76__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl56__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl56__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl60__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl60__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl72__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl72__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl76__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl76__DOT__mem));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w294) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl57__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl61__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl65__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl69__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl73__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl77__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl57__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl57__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl61__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl61__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl65__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl65__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl69__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl69__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl73__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl73__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl77__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl77__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset 
        = ((IData)(vlSelf->res_z80) | (IData)(vlSelf->fm_sel23));
    md_board__DOT__ym__DOT__vdp__DOT__w1021 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w302) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w178) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w303)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_66 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_25_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_110)
                                                    : 0U)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_25_data__data_o));
    vlSelf->__VdfgRegularize_hd87f99a1_0_69 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_wr)
                                                ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem))
                                                    : 0U)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode_o));
    vlSelf->md_board__DOT__ym_VA_d = ((((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)))
                                        ? 0x700000U
                                        : 0U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)))
                                                   ? 0xfff80U
                                                   : 0U) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv) 
                                                     & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)))
                                                     ? 0x7fU
                                                     : 0U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w5 = 
        ((IData)(vlSelf->md_board__DOT__BGACK) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2) 
                                                  & ((IData)(vlSelf->md_board__DOT__DTACK) 
                                                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff2__DOT__l2) 
                                                        & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as)) 
                                                           & (IData)(vlSelf->md_board__DOT___M3))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w298 
        = (IData)(((vlSelf->md_board__DOT__VA >> 0x16U) 
                   & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d7__DOT__dl) 
                            >> 5U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem_assign 
        = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207) 
                              & (0x100U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hs__DOT__mem_assign 
        = (0x7fU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                              & (0x500U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hs__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_88__DOT__mem_assign 
        = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207) 
                              & (0U == (0x700U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_88__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem_assign 
        = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                              & (0x500U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_at__DOT__mem)));
    md_board__DOT__ym__DOT__vdp__DOT__w227 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                                  & (0x700U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT__w213 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                                                  & (0x300U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_97) 
                 << 1U) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w739)))
             : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                       ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                << 9U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_97))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_98) 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w739) 
                                 >> 1U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                     << 9U) 
                                                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_98))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_99) 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w739) 
                                 >> 2U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                     << 9U) 
                                                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_99))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_100) 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w739) 
                                 >> 3U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                     << 9U) 
                                                    | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_100))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_101 
                 << 1U) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752)))
             : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                       ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                << 0x13U) | vlSelf->__VdfgRegularize_hd87f99a1_0_101)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_102 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752) 
                                 >> 1U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                     << 0x13U) 
                                                    | vlSelf->__VdfgRegularize_hd87f99a1_0_102)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_103 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752) 
                                 >> 2U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                     << 0x13U) 
                                                    | vlSelf->__VdfgRegularize_hd87f99a1_0_103)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_104 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752) 
                                 >> 3U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                     << 0x13U) 
                                                    | vlSelf->__VdfgRegularize_hd87f99a1_0_104)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_105 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752) 
                                 >> 4U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                     << 0x13U) 
                                                    | vlSelf->__VdfgRegularize_hd87f99a1_0_105)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_106 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752) 
                                 >> 5U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                     << 0x13U) 
                                                    | vlSelf->__VdfgRegularize_hd87f99a1_0_106)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_107 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w752) 
                                 >> 6U))) : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                                     << 0x13U) 
                                                    | vlSelf->__VdfgRegularize_hd87f99a1_0_107)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
             ? ((vlSelf->__VdfgRegularize_hd87f99a1_0_108 
                 << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w94)
                                  ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                     >> 0xbU) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2))))
             : 0U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w732)
                       ? 0U : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                                << 0x13U) | vlSelf->__VdfgRegularize_hd87f99a1_0_108)));
    md_board__DOT__ym__DOT__vdp__DOT__w858 = (1U & 
                                              (~ ((~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                                     >> 7U) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_397))) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w818))));
    md_board__DOT__ym__DOT__vdp__DOT__w859 = (1U & 
                                              (~ ((~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem) 
                                                     >> 7U) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_396))) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w818))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w238 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223));
    vlSelf->md_board__DOT__z80__DOT__w433 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_156));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w164 
        = (1U & (~ (((~ (IData)(vlSelf->dma_z80_ack)) 
                     | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l2))) 
                    & (IData)(vlSelf->md_board__DOT__ZRES_o))));
    vlSelf->md_board__DOT__z80__DOT__rpullup1_comb[0U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpullup1
           [0U] | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
                   & vlSelf->md_board__DOT__z80__DOT__rpullup2
                   [0U]));
    vlSelf->md_board__DOT__z80__DOT__rpullup1_comb[1U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpullup1
           [1U] | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
                   & vlSelf->md_board__DOT__z80__DOT__rpullup2
                   [1U]));
    vlSelf->md_board__DOT__z80__DOT__rpull1_comb[0U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpull1[0U] 
           | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
              & vlSelf->md_board__DOT__z80__DOT__rpull2
              [0U]));
    vlSelf->md_board__DOT__z80__DOT__rpull1_comb[1U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpull1[1U] 
           | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
              & vlSelf->md_board__DOT__z80__DOT__rpull2
              [1U]));
    vlSelf->md_board__DOT__z80__DOT__rpullup2_comb[0U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpullup2
           [0U] | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
                   & vlSelf->md_board__DOT__z80__DOT__rpullup1
                   [0U]));
    vlSelf->md_board__DOT__z80__DOT__rpullup2_comb[1U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpullup2
           [1U] | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
                   & vlSelf->md_board__DOT__z80__DOT__rpullup1
                   [1U]));
    vlSelf->md_board__DOT__z80__DOT__rpull2_comb[0U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpull2[0U] 
           | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
              & vlSelf->md_board__DOT__z80__DOT__rpull1
              [0U]));
    vlSelf->md_board__DOT__z80__DOT__rpull2_comb[1U] 
        = (vlSelf->md_board__DOT__z80__DOT__rpull2[1U] 
           | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w338))) 
              & vlSelf->md_board__DOT__z80__DOT__rpull1
              [1U]));
    vlSelf->md_board__DOT__ym__DOT__ioc_bc4 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv)) 
                                               & ((IData)(vlSelf->cart_oe) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)));
    if (vlSelf->md_board__DOT__m68k__DOT__w104) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_275 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b1_mem
               [1U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_277 
            = vlSelf->md_board__DOT__m68k__DOT__b1_mem
            [0U];
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_275 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w37)
                            ? (~ vlSelf->md_board__DOT__m68k__DOT__r1
                               [0U]) : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w36)
                                                ? (~ 
                                                   vlSelf->md_board__DOT__m68k__DOT__r1
                                                   [1U])
                                                : 0U) 
                                              | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w33)
                                                   ? 
                                                  (~ 
                                                   vlSelf->md_board__DOT__m68k__DOT__r1
                                                   [2U])
                                                   : 0U) 
                                                 | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w32)
                                                      ? 
                                                     (~ 
                                                      vlSelf->md_board__DOT__m68k__DOT__r1
                                                      [3U])
                                                      : 0U) 
                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w29)
                                                         ? 
                                                        (~ 
                                                         vlSelf->md_board__DOT__m68k__DOT__r1
                                                         [4U])
                                                         : 0U) 
                                                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w28)
                                                            ? 
                                                           (~ 
                                                            vlSelf->md_board__DOT__m68k__DOT__r1
                                                            [5U])
                                                            : 0U) 
                                                          | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w25)
                                                               ? 
                                                              (~ 
                                                               vlSelf->md_board__DOT__m68k__DOT__r1
                                                               [6U])
                                                               : 0U) 
                                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w24)
                                                                  ? 
                                                                 (~ 
                                                                  vlSelf->md_board__DOT__m68k__DOT__r1
                                                                  [7U])
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w21)
                                                                     ? 
                                                                    (~ 
                                                                     vlSelf->md_board__DOT__m68k__DOT__r1
                                                                     [8U])
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w20)
                                                                        ? 
                                                                       (~ 
                                                                        vlSelf->md_board__DOT__m68k__DOT__r1
                                                                        [9U])
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w17)
                                                                           ? 
                                                                          (~ 
                                                                           vlSelf->md_board__DOT__m68k__DOT__r1
                                                                           [0xaU])
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w16)
                                                                              ? 
                                                                             (~ 
                                                                              vlSelf->md_board__DOT__m68k__DOT__r1
                                                                              [0xbU])
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w13)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xcU])
                                                                                 : 0U) 
                                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w12)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xdU])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w9)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xeU])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w8)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xfU])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w5)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x10U])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w4)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x11U])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w86)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r2))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w102)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r3))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w93)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w109))
                                                                                 : 0U) 
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_274)))))))))))))))))))))));
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_277 
            = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w37)
                 ? vlSelf->md_board__DOT__m68k__DOT__r1
                [0U] : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w36)
                                ? vlSelf->md_board__DOT__m68k__DOT__r1
                               [1U] : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w33)
                                               ? vlSelf->md_board__DOT__m68k__DOT__r1
                                              [2U] : 0U) 
                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w32)
                                                  ? 
                                                 vlSelf->md_board__DOT__m68k__DOT__r1
                                                 [3U]
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w29)
                                                     ? 
                                                    vlSelf->md_board__DOT__m68k__DOT__r1
                                                    [4U]
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w28)
                                                        ? 
                                                       vlSelf->md_board__DOT__m68k__DOT__r1
                                                       [5U]
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w25)
                                                           ? 
                                                          vlSelf->md_board__DOT__m68k__DOT__r1
                                                          [6U]
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w24)
                                                              ? 
                                                             vlSelf->md_board__DOT__m68k__DOT__r1
                                                             [7U]
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w21)
                                                                 ? 
                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                [8U]
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w20)
                                                                    ? 
                                                                   vlSelf->md_board__DOT__m68k__DOT__r1
                                                                   [9U]
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w17)
                                                                       ? 
                                                                      vlSelf->md_board__DOT__m68k__DOT__r1
                                                                      [0xaU]
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w16)
                                                                          ? 
                                                                         vlSelf->md_board__DOT__m68k__DOT__r1
                                                                         [0xbU]
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w13)
                                                                             ? 
                                                                            vlSelf->md_board__DOT__m68k__DOT__r1
                                                                            [0xcU]
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w12)
                                                                                ? 
                                                                               vlSelf->md_board__DOT__m68k__DOT__r1
                                                                               [0xdU]
                                                                                : 0U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w9)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xeU]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w8)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xfU]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w5)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x10U]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w4)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x11U]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w86)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r2)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w102)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r3)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w93)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w109)
                                                                                 : 0U) 
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_276))))))))))))))))))))));
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281 
        = (0xffffU & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w106)
                       ? vlSelf->md_board__DOT__m68k__DOT__b1_mem
                      [2U] : (((IData)(vlSelf->md_board__DOT__m68k__DOT__w38)
                                ? vlSelf->md_board__DOT__m68k__DOT__r1
                               [0U] : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w35)
                                               ? vlSelf->md_board__DOT__m68k__DOT__r1
                                              [1U] : 0U) 
                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w34)
                                                  ? 
                                                 vlSelf->md_board__DOT__m68k__DOT__r1
                                                 [2U]
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w31)
                                                     ? 
                                                    vlSelf->md_board__DOT__m68k__DOT__r1
                                                    [3U]
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w30)
                                                        ? 
                                                       vlSelf->md_board__DOT__m68k__DOT__r1
                                                       [4U]
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w27)
                                                           ? 
                                                          vlSelf->md_board__DOT__m68k__DOT__r1
                                                          [5U]
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w26)
                                                              ? 
                                                             vlSelf->md_board__DOT__m68k__DOT__r1
                                                             [6U]
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w23)
                                                                 ? 
                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                [7U]
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w22)
                                                                    ? 
                                                                   vlSelf->md_board__DOT__m68k__DOT__r1
                                                                   [8U]
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w19)
                                                                       ? 
                                                                      vlSelf->md_board__DOT__m68k__DOT__r1
                                                                      [9U]
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w18)
                                                                          ? 
                                                                         vlSelf->md_board__DOT__m68k__DOT__r1
                                                                         [0xaU]
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w15)
                                                                             ? 
                                                                            vlSelf->md_board__DOT__m68k__DOT__r1
                                                                            [0xbU]
                                                                             : 0U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w14)
                                                                                ? 
                                                                               vlSelf->md_board__DOT__m68k__DOT__r1
                                                                               [0xcU]
                                                                                : 0U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w11)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xdU]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w10)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xeU]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w7)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xfU]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w6)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x10U]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w3)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x11U]
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w87)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r2)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w101)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r3)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w94)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w109)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w79)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w107))
                                                                                 : 0U) 
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_280)))))))))))))))))))))))));
    if (vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_324) {
        vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[0U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_356;
        vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[1U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_357;
        vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[0U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_356;
        vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[1U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_357;
        vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[0U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_356;
        vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[1U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_357;
    } else {
        if (vlSelf->md_board__DOT__m68k__DOT__w128) {
            vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[0U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_348;
            vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[1U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_349;
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[0U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_348;
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[1U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_349;
        } else {
            if (vlSelf->md_board__DOT__m68k__DOT__w850) {
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[0U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_352;
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[1U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_353;
            } else {
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[0U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_342;
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[1U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_343;
            }
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[0U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_338;
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[1U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_339;
        }
        if (vlSelf->md_board__DOT__m68k__DOT__w850) {
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[0U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_352;
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[1U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_353;
        } else {
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[0U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_346;
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[1U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_347;
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327) {
        vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[2U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_358;
        vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[3U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_359;
        vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[2U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_358;
        vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[3U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_359;
        vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[2U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_358;
        vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[3U] 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_359;
    } else {
        if (vlSelf->md_board__DOT__m68k__DOT__w127) {
            vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[2U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_350;
            vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[3U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_351;
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[2U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_350;
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[3U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_351;
        } else {
            if (vlSelf->md_board__DOT__m68k__DOT__w848) {
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[2U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_354;
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[3U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_355;
            } else {
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[2U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_344;
                vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb[3U] 
                    = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_345;
            }
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[2U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_340;
            vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb[3U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_341;
        }
        if (vlSelf->md_board__DOT__m68k__DOT__w848) {
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[2U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_354;
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[3U] 
                = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_355;
        } else {
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[2U] 
                = vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
                [2U];
            vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb[3U] 
                = vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
                [3U];
        }
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl544__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl544__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl543__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl543__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl542__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl542__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr501__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr501__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl567__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl577__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl545__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w859) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w901) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_331))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl544__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w859) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w900) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_334))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl543__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w858) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w899) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_336))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl542__DOT__mem_assign 
            = (1U & (~ ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w858) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w898) 
                           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_338))))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr501__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr501__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl567__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl567__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl545__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl545__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl544__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl544__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl543__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl543__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl542__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl542__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem_assign;
    vlSelf->md_board__DOT__vram1__DOT__o_SC = vlSelf->md_board__DOT__SC;
    vlSelf->md_board__DOT__AD = (0xffU & (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2)
                                            ? ((0x20U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))
                                                ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address
                                                : (
                                                   (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem)) 
                                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2))
                                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl592__DOT__mem)
                                                     : 0U) 
                                                   | ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl567__DOT__mem)) 
                                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2))
                                                        ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl593__DOT__mem)
                                                        : 0U) 
                                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2)
                                                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl594__DOT__mem)
                                                          : 0U))))
                                            : 0U) | 
                                          (((IData)(vlSelf->md_board__DOT__vram1__DOT__o_valid)
                                             ? (IData)(vlSelf->md_board__DOT__vram1_AD_o)
                                             : 0U) 
                                           | ((1U & 
                                               ((~ (IData)(vlSelf->md_board__DOT__vram1__DOT__o_valid)) 
                                                & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2))))
                                               ? (IData)(vlSelf->md_board__DOT__AD_mem)
                                               : 0U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v2_assign;
    vlSelf->md_board__DOT__vram1__DOT__o_OE = vlSelf->md_board__DOT__OE1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl41__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl41__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl41__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w18;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__vram1__DOT__o_cas = vlSelf->md_board__DOT__vram1__DOT__cas;
    vlSelf->md_board__DOT__vram1__DOT__o_RAS = (1U 
                                                & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_140)));
    vlSelf->vdp_dma_oe_early = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem)
                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_434)
                                 : ((IData)(vlSelf->vdp_dma) 
                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_325)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address_t 
        = ((md_board__DOT__ym__DOT__vdp__DOT__io_address_pull 
            & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)
                 ? 0x73ffffU : (0x73ffffU & vlSelf->md_board__DOT__VA)) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)
                   ? (0x33ffffU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem) 
                                    << 0x10U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_sa_low)))
                   : 0x73ffffU))) | ((~ md_board__DOT__ym__DOT__vdp__DOT__io_address_pull) 
                                     & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_o) 
            & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_normal)))) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3_o_0) 
               & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_3)))) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3_o_4) 
                  & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_2)))) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3_o_5) 
                    & (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sel_ch3_1)))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl90__DOT__mem_assign 
        = ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                  | (IData)(md_board__DOT__ym__DOT__vdp__DOT__w337)))
            ? ((0xfeU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355)) 
               | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0_latch__DOT__mem)
                         ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355) 
                            >> 8U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl90__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl91__DOT__mem_assign 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w337)
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                           << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                      << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2))))))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl91__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__sum 
        = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l51) 
                 + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w264)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__dclk_prescaler_dff1__rst)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l1)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w885) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l515;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l516;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l517;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l518;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l519;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l520;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l521;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l522;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w157 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245) 
            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w346)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl93__DOT__mem_assign 
        = (0xffU & (((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr88__DOT__v2))
                     ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w346)
                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data)
                         : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                            >> 8U)) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl93__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reset_low_cnt 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076 
        = (0x3fU & (((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1021)
                      ? 0U : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus)) 
                    | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                         & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1021))
                         ? (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                            >> 1U) : 0U) | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                             & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w1021))
                                             ? (0x1fU 
                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address)
                                             : 0U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs1__rst 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
               >> 7U)) & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w227) 
                          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)));
    if (md_board__DOT__ym__DOT__vdp__DOT__w227) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem_assign 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem_assign 
            = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem_assign 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs4__rst 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w5));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w156 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w197 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l1)));
    if (md_board__DOT__ym__DOT__vdp__DOT__w213) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem));
    }
    vlSelf->cart_cas2 = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w27) 
                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w71) 
                                     & ((~ (IData)(
                                                   (((0x8000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->md_board__DOT__ZA))) 
                                                     & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w220))) 
                                                    & (~ (IData)(vlSelf->md_board__DOT___M3))))) 
                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w238))))));
    vlSelf->md_board__DOT__z80__DOT__w446 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w442)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w433))));
    vlSelf->md_board__DOT__ym_ZD_d = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc_bc4) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm_data_d))
                                       ? 0xffU : 0U);
    vlSelf->md_board__DOT__SC = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) 
                                          & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109)) 
                                             | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w998) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem_assign 
            = vlSelf->md_board__DOT__AD;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem_assign 
            = vlSelf->md_board__DOT__RD;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem;
    }
    vlSelf->md_board__DOT__OE1 = (1U & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2) 
                                            & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w992)) 
                                               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem)) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl572__DOT__mem)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem))))) 
                                           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl575__DOT__mem)) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr576__DOT__v2)))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_140 = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem)) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2)) 
                                                      & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem)))));
    if (vlSelf->md_board__DOT__z80__DOT__w446) {
        vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl75__en 
            = vlSelf->md_board__DOT__ym__DOT__vdp_clk0;
        vlSelf->md_board__DOT__z80__DOT__o2 = (0xfU 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w498));
        vlSelf->md_board__DOT__z80__DOT__o1 = (0xfU 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w511_xor));
    } else {
        vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl75__en = 0U;
        vlSelf->md_board__DOT__z80__DOT__o2 = (0xfU 
                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                                                  >> 4U));
        vlSelf->md_board__DOT__z80__DOT__o1 = (0xfU 
                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT__w511_xor) 
                                                  >> 4U));
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_7 
        = (1U & (~ ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__SD = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v2)
                                  ? (IData)(vlSelf->md_board__DOT__SD_mem)
                                  : (IData)(vlSelf->md_board__DOT__vram1__DOT__vram_ser));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl462__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w814;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl531__DOT__mem_assign 
            = (1U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl532__DOT__mem_assign 
            = (2U <= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w417))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v2) 
               ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl502__DOT__mem_assign 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr501__DOT__v2) 
                ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v2))
                ? ((0xf0U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w843) 
                             << 4U)) | (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w843) 
                                                >> 4U)))
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w843));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem_assign 
            = vlSelf->md_board__DOT__SD;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl462__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl462__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl531__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl531__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl532__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl532__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl579__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl395__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl461__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl502__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl502__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl483__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl592__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1002)
            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109)
                ? ((0x80U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem)
                               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem)
                               : (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                                  >> 0x10U)) << 7U)) 
                   | ((0x7eU & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                                >> 9U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1010)))
                : ((0xfcU & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                             >> 8U)) | ((2U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1010) 
                                                << 1U) 
                                               | (0xfffffeU 
                                                  & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                                      << 1U) 
                                                     & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                                                        >> 8U))))) 
                                        | (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address))))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl592__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl597__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1003)
            ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v2)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl596__DOT__mem))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl597__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_1_l__DOT__mem_assign 
        = (0x7fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2)
                     ? (~ (((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                              << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2))))))) 
                            & (- (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_10) 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_6_7)) 
                                          | ((7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val)) 
                                             & (4U 
                                                == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms))))))) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_9) 
                              & (- (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_6) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_6_7)) 
                                            | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_11) 
                                                 | (6U 
                                                    == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_val))) 
                                                & (4U 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms))) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_10) 
                                                   & (3U 
                                                      == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms))) 
                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_8) 
                                                     & (2U 
                                                        == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms)))))))))))
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_add_1_l__DOT__mem)));
    vlSelf->md_board__DOT__vram1__DOT__cas = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_140) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_139));
    vlSelf->md_board__DOT__vram1__DOT__rd = ((~ ((IData)(vlSelf->md_board__DOT__OE1) 
                                                 | (IData)(vlSelf->md_board__DOT__vram1__DOT__dt))) 
                                             & (IData)(vlSelf->md_board__DOT__vram1__DOT__cas));
    md_board__DOT__vram1__DOT__wr = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v2) 
                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w998)) 
                                     & (IData)(vlSelf->md_board__DOT__vram1__DOT__cas));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__0__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__1__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0x20U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__2__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0x40U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__3__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0x60U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__4__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0x80U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__5__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0xa0U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__6__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0xc0U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
    vlSelf->md_board__DOT__vram1__DOT____Vcellinp__l2__BRA__7__KET____DOT__mem__wren 
        = ((IData)(md_board__DOT__vram1__DOT__wr) & 
           (0xe0U == (0xe0U & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr))));
}
