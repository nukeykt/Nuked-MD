// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__22(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__22\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write30;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write30 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write50;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write50 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write80;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write80 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_2;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_2 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12;
    md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12 = 0;
    CData/*1:0*/ __VdfgRegularize_hd87f99a1_0_116;
    __VdfgRegularize_hd87f99a1_0_116 = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q;
    __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q = 0;
    // Body
    __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q;
    vlSelf->__VdfgRegularize_hd87f99a1_0_108 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____Vcellinp__eg_cnt_ed__inp 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 2U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2))));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_2 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
            ^ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
              ^ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
    __VdfgRegularize_hd87f99a1_0_116 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                         << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w846 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl500__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1033 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                 | (0U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                            << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                       << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_o 
        = ((0x2000U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                       << 8U)) | ((0x1000U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                << 6U)) 
                                     | ((0x400U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                   << 5U)) 
                                        | ((0x200U 
                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                               << 4U)) 
                                           | ((0x100U 
                                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                  << 3U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                     << 2U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                        << 1U)) 
                                                    | ((0x20U 
                                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)) 
                                                       | ((0x10U 
                                                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                              >> 1U)) 
                                                          | ((8U 
                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                 >> 2U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                    >> 3U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                       >> 4U)) 
                                                                   | (1U 
                                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                                         >> 5U)))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_ch3_sel 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel2) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_11) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_19) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_27))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_o 
        = ((0x2000U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                       << 8U)) | ((0x1000U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                << 6U)) 
                                     | ((0x400U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                   << 5U)) 
                                        | ((0x200U 
                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                               << 4U)) 
                                           | ((0x100U 
                                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                  << 3U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                     << 2U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                        << 1U)) 
                                                    | ((0x20U 
                                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)) 
                                                       | ((0x10U 
                                                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                              >> 1U)) 
                                                          | ((8U 
                                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                 >> 2U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                    >> 3U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                       >> 4U)) 
                                                                   | (1U 
                                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                                         >> 5U)))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_6) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_11) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_17) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_22) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_27))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w877 
        = (1U & (~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                        >> 0xdU)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl563__DOT__mem)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op3_sel 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_17) 
           | (((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
               & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_19) 
                 | (((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                     & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_22) 
                       | ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                          & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op2_sel 
        = (((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
            & ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)) 
               | (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)))) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_27) 
              | (((7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                  & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))) 
                 | (((7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                     & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))) 
                    | (IData)(vlSelf->fm_sel23)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_op1_sel 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_31) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_11) 
              | ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                 & ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)) 
                    | ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)) 
                       | (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_90 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w201 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w189) 
           & (1U == (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__fsm_op4_sel 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel1) 
              | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel2) 
                 | (((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
                     & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_33)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w179 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w202) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
              >> 4U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w178 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
               >> 4U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w202));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl333__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl333__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w285_mem = vlSelf->md_board__DOT__m68k__DOT__w285;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl522__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l522;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl521__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l521;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl520__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l520;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__load_ed__DOT__prev__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__load_ed__DOT__prev__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_index_l 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__dac_index_lock__DOT__mem;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__ed__DOT__prev__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__ed__DOT__prev__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_shift__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_shift__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ste__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ste__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_pan_l 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__pan_lock__DOT__mem;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l 
        = ((0x100U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_out_i) 
                          >> 8U)) << 8U)) | (0xffU 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_out_i)));
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__sr_in);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr128__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem) 
                        >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem) 
                        >> 0xaU)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2;
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__mask_bit_sr__DOT__v2)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_i));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__0__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2) 
                     >> 1U));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v2_assign;
    __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_addr) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_nq 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_addr)) 
                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem) 
                    | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl505__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl505__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__2__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__3__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__4__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__5__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2_assign;
    vlSelf->__VdfgRegularize_hd87f99a1_0_77 = (1U & 
                                               ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____Vcellinp__eg_cnt_ed__inp)) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_cnt_ed__DOT__prev__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_7 
        = ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms)) 
           | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2 
        = (0x1fU & ((IData)(1U) + ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3) 
                                     << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)))) 
                                   + VL_SHIFTR_III(5,5,32, 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                           << 2U) 
                                                          | (IData)(__VdfgRegularize_hd87f99a1_0_116)))), 2U))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon_csm 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_ch3_sel) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_csm_l__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w873 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w877) 
           | (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w876 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w877) 
           | (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w880 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w877) 
           | (5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w883 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w877) 
           | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_91 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                << 2U) 
                                               | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_90));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q 
        = __Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_5_6_7 
        = ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_pms)) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pms_6_7));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_9 
        = (IData)(((0x12U == (0x1eU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_8 
        = (IData)(((0x10U == (0x1eU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_7 
        = (IData)(((0xeU == (0x1eU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_6 
        = (IData)(((0xcU == (0x1eU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16 
        = ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2) 
                  << 2U)) | ((7U == (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                      << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2))))
                              ? 0U : (IData)(__VdfgRegularize_hd87f99a1_0_116)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_92 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_91));
    vlSelf->__VdfgRegularize_hd87f99a1_0_61 = (1U & 
                                               ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load)) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__load_ed__DOT__prev__DOT__mem)));
    vlSelf->DAC_ch_index = vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_index_l;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__dac_index_lock__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__dac_index_lock__DOT__mem_assign;
    vlSelf->__VdfgRegularize_hd87f99a1_0_14 = (1U & 
                                               ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel2)) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__ed__DOT__prev__DOT__mem)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_107 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                                << 0xdU) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l351 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
            << 6U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_96));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1029 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ste__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__DAC_2612_matrix_out 
        = (0x3ffU & ((0x100U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l))
                      ? ((IData)(1U) + (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l)))
                      : (0x300U | (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch_out_l)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr316__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr337__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr336__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__6__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__7__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__8__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__9__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__10__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__11__KET____DOT__timer_shift_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__pg_reset_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr2_q;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_of_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_nz_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr3__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_slot__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__csm_kon_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__l1__BRA__1__KET____DOT__timer_shift_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1062 
        = (IData)(((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                       >> 6U)) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2) 
                                  >> 2U)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__timer_ha 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_sr2__DOT__v2) 
                 + (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel1_sr__DOT__v2) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__carry_sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon = (IData)(
                                                           (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_sr4__DOT__v2) 
                                                             >> 5U) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon_csm)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_87 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_1_9 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
            << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                       << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                  << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                             << 2U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                << 1U) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write 
        = (1U & ((~ ((IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_2) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_3))) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write 
        = (1U & ((~ ((IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_2) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         ^ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_3)))) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data_sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_13 
        = ((3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
           | ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
              | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_14 
        = ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
           | ((4U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
              | (6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_11 
        = ((6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
           | (7U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_93 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                << 4U) 
                                               | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeB0 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write) 
           & (0x2cU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeA0 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write) 
           & (0x28U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeA8 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write) 
           & (0x2aU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_writeB4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ch_write) 
           & (0x2dU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_4)));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write30 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write50 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write80 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write) 
           & (8U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_5)));
    md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12 
        = ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_11));
    vlSelf->__VdfgRegularize_hd87f99a1_0_94 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                << 5U) 
                                               | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_93));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w460 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr176__DOT__v2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem));
    vlSelf->__VdfgRegularize_hd87f99a1_0_23 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write30));
    vlSelf->__VdfgRegularize_hd87f99a1_0_25 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write30));
    vlSelf->__VdfgRegularize_hd87f99a1_0_31 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write50));
    vlSelf->__VdfgRegularize_hd87f99a1_0_33 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write50));
    vlSelf->__VdfgRegularize_hd87f99a1_0_43 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write80));
    vlSelf->__VdfgRegularize_hd87f99a1_0_45 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                               & (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__op_write80));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT____Vcellinp__dt_value_sr__data_in 
        = (0x1fU & ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_9) 
                      << 4U) | (((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_9) 
                                   & (IData)(md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12)) 
                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_8)) 
                                 << 3U) | (((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_9) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_13)) 
                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_8) 
                                                 & (IData)(md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12)) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_7))) 
                                            << 2U) 
                                           | (((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_9) 
                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_14)) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_8) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_13)) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_7) 
                                                       & (IData)(md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12)) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_6)))) 
                                               << 1U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_9) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
                                                     | ((2U 
                                                         == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_16)) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_11)))) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_8) 
                                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_14)) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_7) 
                                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_13)) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_shift_6) 
                                                           & (IData)(md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_12)) 
                                                          | (IData)(
                                                                    ((0xaU 
                                                                      == 
                                                                      (0x1eU 
                                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT____VdfgRegularize_hffbde1a0_0_2))) 
                                                                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_1_2_3))))))))))) 
                    ^ (- (IData)((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__detune__DOT__dt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_94))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__23(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__23\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_27;
    // Body
    vlSelf->__VdfgRegularize_hd87f99a1_0_115 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ams__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_connect__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w270__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w270[0U] 
            = ((6U & vlSelf->md_board__DOT__m68k__DOT__w270
                [0U]) | (IData)(vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v0));
        vlSelf->md_board__DOT__m68k__DOT__w270[0U] 
            = ((5U & vlSelf->md_board__DOT__m68k__DOT__w270
                [0U]) | ((IData)(vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v1) 
                         << 1U));
        vlSelf->md_board__DOT__m68k__DOT__w270[0U] 
            = ((3U & vlSelf->md_board__DOT__m68k__DOT__w270
                [0U]) | ((IData)(vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v2) 
                         << 2U));
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w270__v3) {
        vlSelf->md_board__DOT__m68k__DOT__w270[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v3;
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_13 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w220)) 
           & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1 = 
        ((IData)(vlSelf->md_board__DOT__RW) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w147));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s4 
        = ((~ (1U & (((((IData)(vlSelf->md_board__DOT__VD) 
                        >> 8U) | (IData)(vlSelf->md_board__DOT__MREQ)) 
                      | (vlSelf->md_board__DOT__VA 
                         >> 0x15U)) | (IData)(vlSelf->md_board__DOT___M3)))) 
           & ((~ (IData)(vlSelf->md_board__DOT___M3)) 
              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s1) 
                 | (3U == (3U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address 
                                 >> 0xeU))))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                >> 0x10U)))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                >> 0x14U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                   >> 0x18U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                      >> 0x1cU)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U]))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                            >> 4U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                               >> 8U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xcU)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x10U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x14U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x18U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1cU)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U]))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 8U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U]))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 8U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U]))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 8U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xaU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U]) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x11U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 7U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 2U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 3U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 8U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xcU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                   >> 0x10U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                 >> 0x14U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                    >> 0x18U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                       >> 0x1cU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U]))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                             >> 4U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 8U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xcU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x10U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x14U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x18U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1cU)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U]))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 8U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U]))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 8U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U]))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 8U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xaU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 5U)) 
                                                                                | ((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U]) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x11U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 7U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 2U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 3U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 8U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xcU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_8[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                >> 0x12U)))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                >> 0x16U)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                   >> 0x1aU)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                      >> 0x1eU)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                         >> 2U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                            >> 6U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                               >> 0xaU)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xeU)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x12U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x16U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1aU)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1eU)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 2U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 6U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 6U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 6U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xdU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 8U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 3U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x14U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xfU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 5U)) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U]) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 5U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xcU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xeU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_8[1U] = (IData)(((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                   >> 0x12U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                 >> 0x16U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                    >> 0x1aU)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                       >> 0x1eU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                          >> 2U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                             >> 6U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xaU)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xeU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x12U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x16U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1aU)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1eU)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 2U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 6U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 6U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 6U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xdU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 8U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 3U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x14U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xfU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 5U)) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U]) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 5U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xcU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xeU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_14[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                   >> 0x11U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                 >> 0x15U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                    >> 0x19U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                       >> 0x1dU)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                          >> 1U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                             >> 5U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 9U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xdU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x11U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x15U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x19U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1dU)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 1U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 5U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 9U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 9U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 9U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 9U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 4U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 6U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 4U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 9U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xdU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_14[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                    >> 0x11U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                  >> 0x15U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                     >> 0x19U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                        >> 0x1dU)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                           >> 1U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                              >> 5U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 9U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xdU)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x11U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x15U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x19U)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1dU)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 1U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 5U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 9U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 9U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 9U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 9U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 4U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 6U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 4U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 9U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xdU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_20[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                 >> 0x17U)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                    >> 0x1bU)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                    >> 0x1fU))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                          >> 3U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                             >> 7U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xbU)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xfU)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x13U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x17U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1bU)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1fU))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 3U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 7U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 7U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 7U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xcU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 7U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 2U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x13U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 4U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 6U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xbU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_20[1U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                  >> 0x17U)))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                     >> 0x1bU)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                                     >> 0x1fU))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                           >> 3U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                              >> 7U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xbU)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0xfU)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x13U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x17U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1bU)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ncode_out[1U] 
                                                                                >> 0x1fU))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 3U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 7U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ncode_out[2U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 7U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ncode_out[3U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 7U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xbU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 0xcU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 7U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                << 2U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[4U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0x13U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                << 4U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 1U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 6U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[5U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 0xbU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[6U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[7U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[8U] 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_27[2U] = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10)
                        ? 0U : ((8U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                       << 1U)) | ((4U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                      >> 4U)) 
                                                  | ((2U 
                                                      & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                         >> 9U)) 
                                                     | (1U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                           >> 0xeU)))))) 
                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)
                           ? 0U : ((8U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                          << 2U)) | 
                                   ((4U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                           >> 3U)) 
                                    | ((2U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                              >> 8U)) 
                                       | (1U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                >> 0xdU)))))) 
                         | ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505)) 
                                   | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506))))
                             ? 0U : ((8U & vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U]) 
                                     | ((4U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                               >> 5U)) 
                                        | ((2U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                  >> 0xaU)) 
                                           | (1U & 
                                              (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                               >> 0xfU))))))));
    vlSelf->md_board__DOT__m68k__DOT__ncode_out_m[0U] 
        = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11)
             ? 0U : __Vtemp_2[0U]) | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10)
                                        ? 0U : __Vtemp_8[0U]) 
                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)
                                           ? 0U : __Vtemp_14[0U]) 
                                         | ((1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505)) 
                                                   | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506))))
                                             ? 0U : 
                                            __Vtemp_20[0U]))));
    vlSelf->md_board__DOT__m68k__DOT__ncode_out_m[1U] 
        = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11)
             ? 0U : __Vtemp_2[1U]) | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10)
                                        ? 0U : __Vtemp_8[1U]) 
                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)
                                           ? 0U : __Vtemp_14[1U]) 
                                         | ((1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505)) 
                                                   | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506))))
                                             ? 0U : 
                                            __Vtemp_20[1U]))));
    vlSelf->md_board__DOT__m68k__DOT__ncode_out_m[2U] 
        = (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11)
             ? 0U : ((8U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                            << 3U)) | ((4U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                              >> 2U)) 
                                       | ((2U & (vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                 >> 7U)) 
                                          | (1U & (
                                                   vlSelf->md_board__DOT__m68k__DOT__ncode_out[0U] 
                                                   >> 0xcU)))))) 
           | __Vtemp_27[2U]);
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76 = 
        ((IData)(vlSelf->ext_reset) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as) 
         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2)) 
            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2)));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w294__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w436[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w436__v0;
        vlSelf->md_board__DOT__m68k__DOT__w435[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w435__v0;
        vlSelf->md_board__DOT__m68k__DOT__w294[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w294__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w294__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w436[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w436__v1;
        vlSelf->md_board__DOT__m68k__DOT__w435[0U] = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w435[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w435__v2;
        vlSelf->md_board__DOT__m68k__DOT__w294[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w294__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__w330) {
        vlSelf->md_board__DOT__m68k__DOT__w324 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w607)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl17__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl17__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_am__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_dt__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
            << 2U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ams__data));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
            << 3U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_connect__data));
    if (vlSelf->md_board__DOT__m68k__DOT__w604) {
        vlSelf->md_board__DOT__m68k__DOT__w606 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                                                     >> 0xfU));
        vlSelf->md_board__DOT__m68k__DOT__w607 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                                                     >> 0xdU));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w602) {
        vlSelf->md_board__DOT__m68k__DOT__w606 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w607 = 1U;
    }
    vlSelf->md_board__DOT__ym__DOT__arb_sound = (1U 
                                                 & (~ (IData)(
                                                              ((0x4000U 
                                                                == 
                                                                (0xe000U 
                                                                 & (IData)(vlSelf->md_board__DOT__ZA))) 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_13)))));
    vlSelf->md_board__DOT__FC_z = (1U & (~ ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w278) 
                                                | ((~ 
                                                    (vlSelf->md_board__DOT__m68k__DOT__w270
                                                     [0U] 
                                                     >> 1U)) 
                                                   | (~ 
                                                      vlSelf->md_board__DOT__m68k__DOT__w270
                                                      [0U])))) 
                                            | (IData)(vlSelf->md_board__DOT__m68k__DOT__w410))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s2 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s1)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s4));
    vlSelf->md_board__DOT__ym__DOT__arb_zv = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                              & (IData)(vlSelf->md_board__DOT___M3));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w299) {
        if (vlSelf->cart_dma) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff51__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff51__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->cart_dma)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff51__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb_wait_o;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff51__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff51__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
            << 4U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_multi__data));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l_en 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ZWR)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_sound))));
    vlSelf->md_board__DOT__FC0 = (1U & ((IData)(vlSelf->md_board__DOT__FC_z) 
                                        | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w322))));
    vlSelf->md_board__DOT__FC1 = (1U & ((IData)(vlSelf->md_board__DOT__FC_z) 
                                        | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w323))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_2a_dac__data_o 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
            << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                       << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                  << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                             << 3U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))));
    vlSelf->md_board__DOT__m68k__DOT__w325 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w322) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w323) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w324)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff4__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w25 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_rd) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl17__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__reset_low_cnt 
        = (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2) 
                    >> 3U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_6 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
            << 5U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_ar__data));
    vlSelf->md_board__DOT__ym__DOT__arb_intak = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv) 
                                                     & ((IData)(vlSelf->md_board__DOT__FC0) 
                                                        & (IData)(vlSelf->md_board__DOT__FC1)))));
    vlSelf->md_board__DOT__m68k__DOT__alu_io = vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_tl__data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_data__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
            << 6U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_6));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w2 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak) 
         & (0x700000U == (0x700000U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)));
    vlSelf->cart_dma = (1U & (~ (IData)(vlSelf->md_board__DOT__BGACK)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w299 
        = (1U & ((~ (IData)(vlSelf->ext_reset)) & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l2)) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w2) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__24(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__24\n"); );
    // Init
    CData/*3:0*/ md_board__DOT__ym__DOT__vdp__DOT__w576;
    md_board__DOT__ym__DOT__vdp__DOT__w576 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__arb__DOT__w63;
    md_board__DOT__ym__DOT__arb__DOT__w63 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__MCLK_e = vlSelf->md_board__DOT__MCLK_e;
    vlSelf->md_board__DOT__z80__DOT__w520 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w520;
    vlSelf->md_board__DOT__z80__DOT__w514 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w514;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_0 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_0;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out_0 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sprdata_out_0;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sprdata_out_1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sprdata_out_1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_0 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_0;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out_1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__sat_out_1;
    vlSelf->md_board__DOT__z80__DOT__w476 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w476;
    vlSelf->md_board__DOT__z80__DOT__w80 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w80;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_134 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_121 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                 | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_32 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l1;
    vlSelf->md_board__DOT__z80__DOT__w40 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w40;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_136 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                             << 5U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                << 4U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_139 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                             << 5U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                << 4U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__z80__DOT__w511 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w511;
    vlSelf->md_board__DOT__z80__DOT__w498 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w498;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_408 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w416)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)));
    md_board__DOT__ym__DOT__vdp__DOT__w576 = (0xfU 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v2)
                                                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355)
                                                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w522)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w257 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__LDS) 
                    & (IData)(vlSelf->md_board__DOT__UDS))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w95 = 
        (1U & (~ ((IData)(vlSelf->md_board__DOT__RW) 
                  | (IData)(vlSelf->md_board__DOT__UDS))));
    vlSelf->cart_address = vlSelf->md_board__DOT__VA;
    vlSelf->tmss_address = (0x3ffU & vlSelf->md_board__DOT__VA);
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_10 
        = ((IData)(vlSelf->md_board__DOT___M3) & (0x508800U 
                                                  == 
                                                  (0x7ffe00U 
                                                   & vlSelf->md_board__DOT__VA)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w119 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT___M3) 
                    & (0x500000U == (0x7f8000U & vlSelf->md_board__DOT__VA)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w274 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109)) 
           & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_wr 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ZWR)) 
                 & (~ (IData)(vlSelf->md_board__DOT___M3))));
    vlSelf->md_board__DOT__z80__DOT__w473 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w473;
    vlSelf->md_board__DOT__ym_HALT_pull = (1U & (~ 
                                                 (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w328) 
                                                   & (IData)(vlSelf->md_board__DOT___M3)) 
                                                  & ((~ (IData)(vlSelf->tmss_enable)) 
                                                     | (~ 
                                                        ((~ (IData)(vlSelf->jap)) 
                                                         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l2))))))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))));
    vlSelf->md_board__DOT__m68k__DOT__w689 = (1U & 
                                              (~ ((IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x60U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__w529[0U]))) 
                                                  | (IData)(
                                                            (0x40U 
                                                             == 
                                                             (0x60U 
                                                              & vlSelf->md_board__DOT__m68k__DOT__w529[0U]))))));
    vlSelf->md_board__DOT__m68k__DOT__w637 = (IData)(
                                                     (0x5000000U 
                                                      != 
                                                      (0x7000000U 
                                                       & vlSelf->md_board__DOT__m68k__DOT__w529[1U])));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w10 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__AS)) 
                    & (0x600000U == (0x700000U & vlSelf->md_board__DOT__VA)))));
    vlSelf->md_board__DOT__FDC = (1U & ((~ ((IData)(vlSelf->md_board__DOT___M3) 
                                            & (0x509000U 
                                               == (0x7fff80U 
                                                   & vlSelf->md_board__DOT__VA)))) 
                                        | (IData)(vlSelf->md_board__DOT__AS)));
    vlSelf->md_board__DOT__TIME = (1U & ((~ ((IData)(vlSelf->md_board__DOT___M3) 
                                             & (0x509800U 
                                                == 
                                                (0x7fff80U 
                                                 & vlSelf->md_board__DOT__VA)))) 
                                         | (IData)(vlSelf->md_board__DOT__AS)));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_2 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__AS)) 
                 & (~ (IData)(vlSelf->md_board__DOT__LDS))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w94 = 
        (1U & ((~ ((IData)(vlSelf->md_board__DOT___M3) 
                   & (0x508000U == (0x7fff80U & vlSelf->md_board__DOT__VA)))) 
               | (IData)(vlSelf->md_board__DOT__AS)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_432 
        = ((~ (IData)(vlSelf->md_board__DOT__RW)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w124));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w87 = (IData)(
                                                            ((0x200U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w89 = (IData)(
                                                            ((0x300U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w91 = (IData)(
                                                            ((0x400U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w93 = (IData)(
                                                            ((0x500U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w99 = (IData)(
                                                            ((0x800U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w97 = (IData)(
                                                            ((0x700U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w95 = (IData)(
                                                            ((0x600U 
                                                              == 
                                                              (0xf00U 
                                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135)));
    vlSelf->md_board__DOT__m68k__DOT__c3 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3_l));
    vlSelf->md_board__DOT__m68k__DOT__c2 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2_l));
    vlSelf->md_board__DOT__z80__DOT__w67 = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w59))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs63__nset 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l23)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_246 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l24)) 
                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w59)) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0))));
    vlSelf->md_board__DOT__z80__DOT__w471 = ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                 >> 3U)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w470));
    vlSelf->md_board__DOT__z80__DOT__w472 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w470) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                >> 3U));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w30)) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w103)));
    vlSelf->__Vdly__md_board__DOT__MCLK_e = (1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl580__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl580__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl436__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl436__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl435__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl435__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl437__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl437__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr508__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr422__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x7eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_2) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x7eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 1U)));
    }
    if (vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl75__en) {
        vlSelf->md_board__DOT__z80__DOT__l75 = vlSelf->md_board__DOT__z80__DOT__w477;
        vlSelf->md_board__DOT__z80__DOT__w449 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw449__inp;
    }
    vlSelf->md_board__DOT__z80__DOT__w467 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w115_i) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w464))));
    vlSelf->md_board__DOT__z80__DOT__w480 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l77))));
    vlSelf->md_board__DOT__z80__DOT__w79 = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l28))));
    vlSelf->md_board__DOT__z80__DOT__w71 = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l26))));
    vlSelf->md_board__DOT__ZBR = (1U & ((~ (IData)(vlSelf->dma_z80_req)) 
                                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__z80__DOT__w338 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w301)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w305));
    vlSelf->md_board__DOT__z80__DOT__w481 = ((~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)) 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__l72))) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w464));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w339 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff47__DOT__l2)) 
                    & (IData)(vlSelf->md_board__DOT__AS))));
    vlSelf->md_board__DOT__z80__DOT__w41 = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w40)) 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w34))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d4__DOT__dl 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w113;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_128 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_127) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem));
    vlSelf->md_board__DOT__z80__DOT__bus3_pulld = (0xffU 
                                                   & (((~ 
                                                        ((IData)(vlSelf->md_board__DOT__z80__DOT__w515) 
                                                         >> 8U)) 
                                                       & (- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w418)))) 
                                                      | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_166) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__w496))));
    vlSelf->md_board__DOT__z80__DOT__bus3_pullu = (0xffU 
                                                   & (((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w418))) 
                                                       & ((IData)(vlSelf->md_board__DOT__z80__DOT__w515) 
                                                          >> 8U)) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w496)) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_166))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_158 
        = (IData)((((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                    >> 3U) & (0U != (6U & (IData)(vlSelf->md_board__DOT__z80__DOT__w498)))));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2 = 0U;
    } else if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1;
    }
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l2 = 1U;
    } else if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_137 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_408) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w577 
        = (0xfU & ((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2)
                           ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem) 
                              >> 4U) : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                                         ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                            >> 4U) : 
                                        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem) 
                                         >> 2U)))) ? 
                   (~ (IData)(md_board__DOT__ym__DOT__vdp__DOT__w576))
                    : (IData)(md_board__DOT__ym__DOT__vdp__DOT__w576)));
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w349 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w333)));
    }
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w97 = 
        (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w95) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_10) 
                     & (0U == (0x180U & vlSelf->md_board__DOT__VA))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w96 = 
        (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w95) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_10) 
                     & (0x100U == (0x180U & vlSelf->md_board__DOT__VA))))));
    md_board__DOT__ym__DOT__arb__DOT__w63 = (1U & (~ (IData)(
                                                             (((0x80U 
                                                                == 
                                                                (0x180U 
                                                                 & vlSelf->md_board__DOT__VA)) 
                                                               & (~ (IData)(vlSelf->md_board__DOT__UDS))) 
                                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_10)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w273 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w274) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318)) 
              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316))));
    vlSelf->md_board__DOT__LWR_o = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_wr) 
                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_lds) 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_wr)))));
    if (vlSelf->md_board__DOT__m68k__DOT__w903) {
        vlSelf->md_board__DOT__m68k__DOT__w962 = vlSelf->md_board__DOT__m68k__DOT__w961;
    }
    vlSelf->cart_time = (1U & (~ (IData)(vlSelf->md_board__DOT__TIME)));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w23 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_2) 
           & (0x50a080U == vlSelf->md_board__DOT__VA));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w15 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_2) 
           & ((~ (IData)(vlSelf->md_board__DOT__UDS)) 
              & (0x50a000U == (0x7ffffeU & vlSelf->md_board__DOT__VA))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_17 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_432) 
           & (0xcU == (0xcU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_26 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__l8)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT__c2)
            : (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_53 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w231)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT__c2)
            : (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w79 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w637)) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w94 = ((~ (IData)(
                                                        (0x4000U 
                                                         != 
                                                         (0xc000U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__w529[1U])))) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w878 = ((vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                               >> 0x14U) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w892 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w891) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w877 = ((~ ((~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                    >> 8U)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w834))) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w895 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w894)
                                               ? ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w893)) 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))
                                               : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w879 = ((vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                               >> 0x15U) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w890 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w889) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w1 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__l2)
                                             ? ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__l1)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))
                                             : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w853 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w852)
                                               ? ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w851)) 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))
                                               : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w847 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w845)
                                               ? ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w844)) 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))
                                               : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_247 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs63__nset)) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w63_t)));
    vlSelf->dma_z80_ack = ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w66_i) 
                               | (IData)(vlSelf->md_board__DOT__z80__DOT__w67))) 
                           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_246));
    vlSelf->md_board__DOT__z80__DOT__w424 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w472));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244 
        = (1U & ((~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w78_i)) 
                     | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w80)))) 
                 & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1;
    vlSelf->md_board__DOT__z80__DOT__w511_xor = (0xffU 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w481)
                                                     ? 
                                                    (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w511))
                                                     : (IData)(vlSelf->md_board__DOT__z80__DOT__w511)));
    vlSelf->md_board__DOT__z80__DOT__status_val = (
                                                   (0x80U 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w450)) 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->md_board__DOT__z80__DOT__w445) 
                                                       << 6U) 
                                                      | ((0x10U 
                                                          & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w476)) 
                                                             << 4U)) 
                                                         | ((4U 
                                                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w441)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w481)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w473))))))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w339) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff70__DOT__l2));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_245 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w131_i) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w41));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_179 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w41));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_191 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w41));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w41));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w41));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_122 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_116));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w41));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w113 
        = ((IData)(vlSelf->md_board__DOT__IORQ) | ((IData)(vlSelf->md_board__DOT___M3) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__m1)));
    vlSelf->md_board__DOT__z80__DOT__bus_comb_3 = (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__bus3_pulld)) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT__w513) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__bus3_pullu)));
    vlSelf->md_board__DOT__m68k__DOT__c1 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__c1_l));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w36 = 
        ((IData)(md_board__DOT__ym__DOT__arb__DOT__w63) 
         | (IData)(vlSelf->md_board__DOT__RW));
    vlSelf->md_board__DOT__ym__DOT__arb_w12 = (1U & 
                                               ((~ (IData)(vlSelf->md_board__DOT__RW)) 
                                                | (IData)(md_board__DOT__ym__DOT__arb__DOT__w63)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w275 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w188) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w273) 
              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT____Vcellinp__dff3__clk 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w23)) 
                 | (IData)(vlSelf->md_board__DOT__RW)));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_3 
        = ((~ (IData)(vlSelf->md_board__DOT__RW)) & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w15));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_17) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130));
    vlSelf->md_board__DOT__m68k__DOT__w101 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__l7)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_26));
    vlSelf->md_board__DOT__m68k__DOT__w239 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w238)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_53));
    vlSelf->md_board__DOT__m68k__DOT__w38 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w70) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w75)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w1)));
    vlSelf->md_board__DOT__m68k__DOT__w35 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_9) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w634)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w1)));
    vlSelf->md_board__DOT__m68k__DOT__w34 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_9) 
                                             & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w634) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w1)));
    vlSelf->md_board__DOT__m68k__DOT__w87 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w69) 
                                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w75)) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w1));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w65) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w1));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w65)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w1));
    vlSelf->md_board__DOT__m68k__DOT__w860 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_39) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w864 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_38) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w868 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_37) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w872 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_32) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w873 = ((~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w649)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w665))) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853));
    vlSelf->__VdfgRegularize_hd87f99a1_0_124 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w659) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853));
    vlSelf->md_board__DOT__m68k__DOT__w240 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w634)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_52) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w243 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_52) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w634) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w248 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_48) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w252 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_47) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w859 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_42) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w863 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_41) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w867 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_40) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w871 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_35) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w874 = ((~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w663)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w666))) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847));
    vlSelf->__VdfgRegularize_hd87f99a1_0_123 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w657) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847));
    vlSelf->md_board__DOT__z80__DOT__w113 = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w66) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_247)) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_246)))));
    vlSelf->md_board__DOT__ym__DOT__arb_vz = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w119) 
                                               | (~ (IData)(vlSelf->dma_z80_ack))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1003 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl580__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_410 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
           & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b0__DOT__mem)) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w416))) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w728 
        = (0xfU & ((0x10U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem))
                    ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem))
                    : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w724 
        = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem) 
                  >> 4U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem) 
                            >> 1U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr359__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr347__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr581__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_2 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
            ? ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      >> 6U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                       >> 7U))) : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29)));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw305__inp 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14))));
    vlSelf->md_board__DOT__ym__DOT__arb_io = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w113) 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff29__DOT__l2) 
                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w94)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_278 
        = ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)) 
                  & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w105) 
                        | (vlSelf->md_board__DOT__m68k__DOT__b2_mem
                           [2U] >> 0xfU))))) ? 0xffffU
            : 0U);
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl1__DOT__mem_assign 
        = (((~ vlSelf->md_board__DOT__VA) & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_3))
            ? (IData)(vlSelf->md_board__DOT__VD) : (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl1__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl2__DOT__mem_assign 
        = ((vlSelf->md_board__DOT__VA & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_3))
            ? (IData)(vlSelf->md_board__DOT__VD) : (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl2__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in 
        = (1U & ((~ (IData)(((0xf00U == (0xf00U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)))) 
                 & (~ (IData)(vlSelf->ext_reset))));
    vlSelf->md_board__DOT__m68k__DOT__w30 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_7) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w26 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_6) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w22 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_5) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w18 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_4) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w14 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_3) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w10 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_2) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w6 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_1) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_440));
    vlSelf->md_board__DOT__m68k__DOT__w31 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_8) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w27 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_7) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w23 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_6) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w19 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_5) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w15 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_4) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w11 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_3) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w7 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_2) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w3 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_1) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_439));
    vlSelf->md_board__DOT__m68k__DOT__w843 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_39) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w861 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_38) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w865 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_37) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w869 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_32) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w858 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_42) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__m68k__DOT__w862 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_41) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__m68k__DOT__w866 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_40) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__m68k__DOT__w870 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_35) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w113) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w111));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w730 
        = (3U & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                    ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem) 
                       >> 4U) : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl380__DOT__mem) 
                                 >> 3U)) + ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem)) 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w724))) 
                 ^ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w724) 
                     << 1U) | (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem) 
                                      >> 4U) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl379__DOT__mem)))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_24 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_io) 
                    | (IData)(vlSelf->md_board__DOT__LWR_o))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w295)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_117 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_116));
    vlSelf->vdp_de_v = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                              >> 6U));
    vlSelf->vdp_de_h = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                              >> 6U));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_21) 
           & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address) 
                  >> 3U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_24)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__tx_data_sl__en 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_low) 
           & (7U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__tx_data_sl__en)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__4(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_30 
        = ((0x10U & vlSelf->md_board__DOT__m68k__DOT__w597)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT__c3)
            : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__m68k__DOT__w179 = ((vlSelf->md_board__DOT__m68k__DOT__w597 
                                               >> 6U) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_30));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__25(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__25\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w268;
    md_board__DOT__ym__DOT__vdp__DOT__w268 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w544;
    md_board__DOT__ym__DOT__vdp__DOT__w544 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_330;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_330 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vram_address;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1_latch__DOT__mem_assign 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1_latch__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1__DOT__mem));
    vlSelf->__VdfgRegularize_hd87f99a1_0_95 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l51 = 
        (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
          << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w247 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2) 
           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_417 
        = ((IData)(vlSelf->pal) & (IData)(vlSelf->vdp_intfield));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_68 
        = (1U & ((~ (IData)(vlSelf->vdp_intfield)) 
                 & (~ (IData)(vlSelf->pal))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434 
        = ((~ (IData)(vlSelf->vdp_intfield)) & (IData)(vlSelf->pal));
    vlSelf->vdp_rs1 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w459 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2));
    vlSelf->vdp_m2 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w431 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->pal));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w543 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_404 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w280 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_194 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w550 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w394));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t40 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w721) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t40)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t42 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t42)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t41 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr385__DOT__v2) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t41)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d7__DOT__dl 
        = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d7__DOT__dl) 
                     << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223));
    if (vlSelf->cart_oe) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w298)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1 = 1U;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l2)));
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d5__DOT__dl 
        = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d5__DOT__dl) 
                  << 1U)) | (IData)((((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d6__DOT__dl) 
                                      >> 5U) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr384__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_down__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_down__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wvp__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wvp__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rigt__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rigt__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_whp__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_whp__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_88__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_88__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl236__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl236__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl593__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl593__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m3__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m3__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr565__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl62__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl62__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl61__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl61__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl60__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl60__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl59__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl59__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl58__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl58__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl57__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl57__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl56__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl56__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl55__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl55__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v1 
            = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr616__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w389));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr591__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w265;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__edclk_buf 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff3__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff5__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l2;
        }
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_4 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff3__DOT__l2) 
                 | (~ (IData)(vlSelf->md_board__DOT___M3))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w247) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w246));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w356 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2)) 
                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__l2)) 
                       | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__l2)) 
                          | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__l2)))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w454 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w459));
    md_board__DOT__ym__DOT__vdp__DOT__w544 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w543) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                                                  >> 7U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w432 
        = ((IData)(vlSelf->pal) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430 
        = ((~ (IData)(vlSelf->pal)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w365 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_194));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w743 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_194) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2)) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_404) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2)) 
              | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w332 
        = (1U & (~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d8__DOT__dl) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2))) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d8__DOT__dl))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73 = 
        ((IData)(vlSelf->md_board__DOT___M3) & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w265 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w287 
        = ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__l2)) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__l2)) 
                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__l2)) 
                     | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2)))))) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w356));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w298) {
        if (vlSelf->cart_oe) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff46__DOT__l2 = 1U;
    }
    if (md_board__DOT__ym__DOT__vdp__DOT__w544) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl189__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_down__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl190__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_wvp__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl189__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl189__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl190__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl190__DOT__mem;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w313 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl59__DOT__mem)) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl60__DOT__mem)) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl61__DOT__mem)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl62__DOT__mem)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w311 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl55__DOT__mem)) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl56__DOT__mem)) 
              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl57__DOT__mem)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl58__DOT__mem)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr205__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr204__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v1;
    }
    md_board__DOT__ym__DOT__vdp__DOT__w268 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w265)) 
                                               & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff15__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w13 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w246));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w18 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267) 
         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2)));
    vlSelf->vdp_lcb = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_412 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem) 
           & (IData)(vlSelf->pal));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_100 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem)) 
           & (IData)(vlSelf->pal));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2)) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w287))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w332 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w311) 
           ^ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w313));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1022 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2)
                  ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973)
                  : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1023 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_330 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w973)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_420 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2)) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w268));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_44 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w268) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w16 = 
        (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem)) 
          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem)) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w13));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w249 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w18));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__l2) 
                 + (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__l2) 
                 + ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w356))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1024 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2)) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_330));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1026 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_330) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w326 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_420));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w327 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_420) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w328 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_44));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w329 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_44) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp_edclk_o = (
                                                   (1U 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs0__DOT__mem) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem)))
                                                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__edclk_buf)
                                                    : 
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)
                                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff4__DOT__l2)
                                                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff7__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__l2) 
                 + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__sum), 1U)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__l2) 
                 + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__sum), 1U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_edclk_o));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__l2) 
                 + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__sum), 1U)));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__sum 
        = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__l2) 
                 + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__sum), 1U)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__5(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__5\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_29;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((0xc9U 
                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            ((2U 
                                                              == 
                                                              (0xe7U 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               ((0xd3U 
                                                                 == 
                                                                 (0xf7U 
                                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  ((0x32U 
                                                                    == 
                                                                    (0xf7U 
                                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     ((8U 
                                                                       == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (((0x36U 
                                                                           == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                         & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           ((0xddU 
                                                                             == 
                                                                             (0xdfU 
                                                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              ((0xc4U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                ((0xcbU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                ((0x45U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                ((0xcbU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x36U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((0xedU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x86U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x34U 
                                                                                == 
                                                                                (0xfeU 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((6U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x47U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (((0x46U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                                                >> 3U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((0x70U 
                                                                                == 
                                                                                (0xf8U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                                                >> 3U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x67U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((6U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((0xc6U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                == 
                                                                                (0xc6U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((0x40U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0x1fU) 
                                                                                | ((((0x42U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0x1eU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x1dU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x1cU) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x1bU) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x1aU) 
                                                                                | ((((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x19U) 
                                                                                | ((((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x18U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x17U) 
                                                                                | ((((0x38U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x16U) 
                                                                                | ((((0x27U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x15U) 
                                                                                | ((((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x14U) 
                                                                                | ((((0x18U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x13U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x12U) 
                                                                                | ((((0x2fU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x11U) 
                                                                                | ((((0x44U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0x10U) 
                                                                                | (((((0x57U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w74))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xeU) 
                                                                                | ((((0x20U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xdU) 
                                                                                | ((((0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xcU) 
                                                                                | ((((0x57U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0xbU) 
                                                                                | ((((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xaU) 
                                                                                | ((((0x3fU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 9U) 
                                                                                | ((((0x10U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 8U) 
                                                                                | ((((0xa2U 
                                                                                == 
                                                                                (0xe6U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 7U) 
                                                                                | ((((0x37U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 6U) 
                                                                                | ((((0xa1U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 5U) 
                                                                                | ((((0xa0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 4U) 
                                                                                | ((((0x76U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 3U) 
                                                                                | ((((0x46U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 2U) 
                                                                                | ((((0xf3U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 1U) 
                                                                                | ((0xd3U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(((0xc9U 
                                                 == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (0xe7U 
                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((0xd3U 
                                                                  == 
                                                                  (0xf7U 
                                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   ((0x32U 
                                                                     == 
                                                                     (0xf7U 
                                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      ((8U 
                                                                        == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (((0x36U 
                                                                            == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            ((0xddU 
                                                                              == 
                                                                              (0xdfU 
                                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               ((0xc4U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                ((0xcbU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                ((0x45U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                ((0xcbU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x36U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((0xedU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x86U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x34U 
                                                                                == 
                                                                                (0xfeU 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((6U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x47U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (((0x46U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                                                >> 3U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((0x70U 
                                                                                == 
                                                                                (0xf8U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                                                >> 3U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x67U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((6U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((0xc6U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                == 
                                                                                (0xc6U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((0x40U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0x1fU) 
                                                                                | ((((0x42U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0x1eU) 
                                                                                | ((((9U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x1dU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x1cU) 
                                                                                | ((((7U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x1bU) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x1aU) 
                                                                                | ((((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x19U) 
                                                                                | ((((0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w96))) 
                                                                                << 0x18U) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x17U) 
                                                                                | ((((0x38U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x16U) 
                                                                                | ((((0x27U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x15U) 
                                                                                | ((((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x14U) 
                                                                                | ((((0x18U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x13U) 
                                                                                | ((((8U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0x12U) 
                                                                                | ((((0x2fU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 0x11U) 
                                                                                | ((((0x44U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0x10U) 
                                                                                | (((((0x57U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w74))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xeU) 
                                                                                | ((((0x20U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xdU) 
                                                                                | ((((0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xcU) 
                                                                                | ((((0x57U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 0xbU) 
                                                                                | ((((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w82))) 
                                                                                << 0xaU) 
                                                                                | ((((0x3fU 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 9U) 
                                                                                | ((((0x10U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 8U) 
                                                                                | ((((0xa2U 
                                                                                == 
                                                                                (0xe6U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 7U) 
                                                                                | ((((0x37U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 6U) 
                                                                                | ((((0xa1U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 5U) 
                                                                                | ((((0xa0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 4U) 
                                                                                | ((((0x76U 
                                                                                == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 3U) 
                                                                                | ((((0x46U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                                                << 2U) 
                                                                                | ((((0xf3U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                                                << 1U) 
                                                                                | ((0xd3U 
                                                                                == 
                                                                                (0xf7U 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_8[2U] = ((((0xd3U == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                      << 6U) | ((((0xc3U == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                 << 5U) | ((((0x22U 
                                              == (0xf7U 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                            << 4U) 
                                           | ((((0x43U 
                                                 == 
                                                 (0xc7U 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                               << 3U) 
                                              | ((((0x47U 
                                                    == 
                                                    (0xe7U 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                  << 2U) 
                                                 | ((((0x43U 
                                                       == 
                                                       (0xcfU 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                     << 1U) 
                                                    | ((0x41U 
                                                        == 
                                                        (0xc7U 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w92))))))));
    __Vtemp_15[2U] = ((((0xa2U == (0xe7U & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                       << 0xdU) | ((((0xcbU == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                     & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100))) 
                                    << 0xcU) | ((((0xc1U 
                                                   == 
                                                   (0xcbU 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                 << 0xbU) 
                                                | ((((0xcdU 
                                                      == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                    << 0xaU) 
                                                   | ((((7U 
                                                         == 
                                                         (0xe7U 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                       << 9U) 
                                                      | ((((0x10U 
                                                            == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                          << 8U) 
                                                         | ((((0x40U 
                                                               == 
                                                               (0xc6U 
                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                             << 7U) 
                                                            | __Vtemp_8[2U])))))));
    __Vtemp_22[2U] = ((((0xbU == (0xcfU & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                       << 0x14U) | ((((0x67U == (0xf7U 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                     << 0x13U) | ((
                                                   ((0xc5U 
                                                     == 
                                                     (0xcfU 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                   << 0x12U) 
                                                  | ((((6U 
                                                        == 
                                                        (0xc7U 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                      << 0x11U) 
                                                     | ((((0xa0U 
                                                           == 
                                                           (0xe7U 
                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                         << 0x10U) 
                                                        | ((((0xa1U 
                                                              == 
                                                              (0xe7U 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                            << 0xfU) 
                                                           | ((((0xa3U 
                                                                 == 
                                                                 (0xe7U 
                                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                               << 0xeU) 
                                                              | __Vtemp_15[2U])))))));
    __Vtemp_29[2U] = ((((1U == (0xcfU & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                       << 0x1bU) | ((((2U == (0xe7U 
                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                     << 0x1aU) | ((
                                                   ((3U 
                                                     == 
                                                     (0xc7U 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                   << 0x19U) 
                                                  | ((((0xe3U 
                                                        == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                      << 0x18U) 
                                                     | ((((0xa1U 
                                                           == 
                                                           (0xe7U 
                                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                          & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                         << 0x17U) 
                                                        | ((((0xa0U 
                                                              == 
                                                              (0xe7U 
                                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                            << 0x16U) 
                                                           | ((((2U 
                                                                 == 
                                                                 (0xcfU 
                                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                               << 0x15U) 
                                                              | __Vtemp_22[2U])))))));
    vlSelf->md_board__DOT__z80__DOT__pla[0U] = __Vtemp_2[0U];
    vlSelf->md_board__DOT__z80__DOT__pla[1U] = __Vtemp_2[1U];
    vlSelf->md_board__DOT__z80__DOT__pla[2U] = ((((0xddU 
                                                   == 
                                                   (0xdfU 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                 << 0x1fU) 
                                                | ((((0x47U 
                                                      == 
                                                      (0xe7U 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                    << 0x1eU) 
                                                   | ((((0xf9U 
                                                         == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                       << 0x1dU) 
                                                      | ((((0xe9U 
                                                            == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                           & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                          << 0x1cU) 
                                                         | __Vtemp_29[2U]))));
    vlSelf->md_board__DOT__z80__DOT__pla[3U] = ((((0xa0U 
                                                   == 
                                                   (0xf4U 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w147))) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT__w92)) 
                                                 << 2U) 
                                                | ((((0xd9U 
                                                      == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w90)) 
                                                    << 1U) 
                                                   | ((0xebU 
                                                       == (IData)(vlSelf->md_board__DOT__z80__DOT__w147)) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w90))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__26(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__26\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w139;
    md_board__DOT__ym__DOT__vdp__DOT__w139 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w304;
    md_board__DOT__ym__DOT__vdp__DOT__w304 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_41;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_41 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_422;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_422 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0;
    md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w39;
    md_board__DOT__m68k__DOT__w39 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w40;
    md_board__DOT__m68k__DOT__w40 = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT__b3_pulldown_2_t;
    md_board__DOT__m68k__DOT__b3_pulldown_2_t = 0;
    SData/*15:0*/ md_board__DOT__m68k__DOT__b3_pulldown_3_t;
    md_board__DOT__m68k__DOT__b3_pulldown_3_t = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_4;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_4 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_6;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_6 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_8;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_8 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_10;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_10 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_442;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_442 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_443;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_443 = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t16;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t16 = 0;
    // Body
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t16 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w145 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t25) 
              & ((2U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w198 
        = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                     >> 2U)) | ((~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                                     >> 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem) 
                                                >> 1U) 
                                               | ((~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t24) 
                                                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t23) 
                                                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t25)))) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154))) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem))))) 
                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154) 
                                   & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t24))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_mux 
        = (0x1ffffU & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl26__DOT__mem)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem))
                        ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem) 
                            << 0xeU) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_2__DOT__mem) 
                                         << 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_1__DOT__mem)))
                        : (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2 
                           + ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem) 
                              + (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)))))));
    if ((0x2000U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w979 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w980 
            = (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w982 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w983 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w979 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w811));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w980 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w812));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w982 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w811));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w983 
            = (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w812));
    }
    if (vlSelf->md_board__DOT___M3) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w350 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                        >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t19));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t20)));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address 
            = (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address));
        vlSelf->PA_d = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a_d;
        vlSelf->PB_d = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b_d;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w350 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w280;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w280)));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__read_address 
            = (0xfU & ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))
                        ? 2U : 1U));
        vlSelf->PA_d = ((0x60U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l2) 
                                  << 5U)) | (0x1fU 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a_d)));
        vlSelf->PB_d = ((0x60U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l2) 
                                  << 3U)) | (0x1fU 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b_d)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w591 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w885 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem)) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w140 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_iorq) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_wr) 
              & (0x80U == (0xc0U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w331 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w273) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w332))
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w311)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_43 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w273)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w332)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_high 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_24) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_23));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1;
    vlSelf->md_board__DOT__m68k__DOT__w92 = ((~ (IData)(
                                                        (0xc000U 
                                                         != 
                                                         (0xc000U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__w529[1U])))) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    vlSelf->md_board__DOT__z80__DOT__w52 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__l19));
    vlSelf->md_board__DOT__z80__DOT__w132 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__l36));
    vlSelf->md_board__DOT__z80__DOT__w53 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                            & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l20)) 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w54)));
    vlSelf->md_board__DOT__z80__DOT__w32 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__l9));
    vlSelf->md_board__DOT__z80__DOT__w26 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5) 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_274 
        = ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)) 
                  & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w103) 
                        | (vlSelf->md_board__DOT__m68k__DOT__b2_mem
                           [0U] >> 0xfU))))) ? 0xffffU
            : 0U);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_276 
        = ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)) 
                  & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w103) 
                        | (vlSelf->md_board__DOT__m68k__DOT__b2_mem
                           [1U] >> 0xfU))))) ? 0xffffU
            : 0U);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_280 
        = ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)) 
                  & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w105) 
                        | (vlSelf->md_board__DOT__m68k__DOT__b2_mem
                           [3U] >> 0xfU))))) ? 0xffffU
            : 0U);
    vlSelf->md_board__DOT__m68k__DOT__w93 = ((~ (IData)(
                                                        (0x8000U 
                                                         != 
                                                         (0xc000U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__w529[1U])))) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    if (vlSelf->md_board__DOT__m68k__DOT__w106) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_340 
            = vlSelf->md_board__DOT__m68k__DOT__b1_mem
            [3U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b1_mem
               [3U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_341 
            = vlSelf->md_board__DOT__m68k__DOT__b1_mem
            [2U];
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_340 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_278;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w38)
                            ? (~ vlSelf->md_board__DOT__m68k__DOT__r1
                               [0U]) : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w35)
                                                ? (~ 
                                                   vlSelf->md_board__DOT__m68k__DOT__r1
                                                   [1U])
                                                : 0U) 
                                              | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w34)
                                                   ? 
                                                  (~ 
                                                   vlSelf->md_board__DOT__m68k__DOT__r1
                                                   [2U])
                                                   : 0U) 
                                                 | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w31)
                                                      ? 
                                                     (~ 
                                                      vlSelf->md_board__DOT__m68k__DOT__r1
                                                      [3U])
                                                      : 0U) 
                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w30)
                                                         ? 
                                                        (~ 
                                                         vlSelf->md_board__DOT__m68k__DOT__r1
                                                         [4U])
                                                         : 0U) 
                                                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w27)
                                                            ? 
                                                           (~ 
                                                            vlSelf->md_board__DOT__m68k__DOT__r1
                                                            [5U])
                                                            : 0U) 
                                                          | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w26)
                                                               ? 
                                                              (~ 
                                                               vlSelf->md_board__DOT__m68k__DOT__r1
                                                               [6U])
                                                               : 0U) 
                                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w23)
                                                                  ? 
                                                                 (~ 
                                                                  vlSelf->md_board__DOT__m68k__DOT__r1
                                                                  [7U])
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w22)
                                                                     ? 
                                                                    (~ 
                                                                     vlSelf->md_board__DOT__m68k__DOT__r1
                                                                     [8U])
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w19)
                                                                        ? 
                                                                       (~ 
                                                                        vlSelf->md_board__DOT__m68k__DOT__r1
                                                                        [9U])
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w18)
                                                                           ? 
                                                                          (~ 
                                                                           vlSelf->md_board__DOT__m68k__DOT__r1
                                                                           [0xaU])
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w15)
                                                                              ? 
                                                                             (~ 
                                                                              vlSelf->md_board__DOT__m68k__DOT__r1
                                                                              [0xbU])
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w14)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xcU])
                                                                                 : 0U) 
                                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w11)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xdU])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w10)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xeU])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w7)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0xfU])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w6)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x10U])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w3)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r1
                                                                                [0x11U])
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w87)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r2))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w101)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r3))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w94)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w109))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w79)
                                                                                 ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w107)
                                                                                 : 0U) 
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_278))))))))))))))))))))))));
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_341 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_280;
    }
    vlSelf->md_board__DOT__m68k__DOT__w156 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w648) 
                                               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w665)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853));
    vlSelf->md_board__DOT__m68k__DOT__w241 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w634)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_50) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w242 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_50) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w634) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w245 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_49) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w249 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_45) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w253 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_44) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w257 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w659)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_43) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w853)));
    vlSelf->md_board__DOT__m68k__DOT__w155 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_242) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847));
    vlSelf->md_board__DOT__m68k__DOT__w244 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_51) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__m68k__DOT__w256 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w657)) 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_46) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w847)));
    vlSelf->md_board__DOT__z80__DOT__w77 = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_142 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT__w80) 
              & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                 & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_19))));
    vlSelf->md_board__DOT__m68k__DOT__w246 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_45) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w250 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_44) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w254 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_43) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_124));
    vlSelf->md_board__DOT__m68k__DOT__w247 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_48) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__m68k__DOT__w251 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_47) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__m68k__DOT__w255 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_46) 
                                              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_123));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs322__set 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w113)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_106 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244));
    if (vlSelf->md_board__DOT__m68k__DOT__c6) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b3_mem
               [1U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b3_mem
               [0U]);
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w877)
                            ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_250))
                            : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w878)
                                       ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w948)
                                       : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w892)
                                                  ? 
                                                 (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w962))
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w843)
                                                     ? 
                                                    (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__r7
                                                     [0U])
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w860)
                                                        ? 
                                                       (~ 
                                                        vlSelf->md_board__DOT__m68k__DOT__r7
                                                        [1U])
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w861)
                                                           ? 
                                                          (~ 
                                                           vlSelf->md_board__DOT__m68k__DOT__r7
                                                           [2U])
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w864)
                                                              ? 
                                                             (~ 
                                                              vlSelf->md_board__DOT__m68k__DOT__r7
                                                              [3U])
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w865)
                                                                 ? 
                                                                (~ 
                                                                 vlSelf->md_board__DOT__m68k__DOT__r7
                                                                 [4U])
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w868)
                                                                    ? 
                                                                   (~ 
                                                                    vlSelf->md_board__DOT__m68k__DOT__r7
                                                                    [5U])
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w869)
                                                                       ? 
                                                                      (~ 
                                                                       vlSelf->md_board__DOT__m68k__DOT__r7
                                                                       [6U])
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w872)
                                                                          ? 
                                                                         (~ 
                                                                          vlSelf->md_board__DOT__m68k__DOT__r7
                                                                          [7U])
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w873)
                                                                             ? 
                                                                            (~ 
                                                                             vlSelf->md_board__DOT__m68k__DOT__r7
                                                                             [8U])
                                                                             : 0U) 
                                                                           | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w895)
                                                                               ? 
                                                                              (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r8))
                                                                               : 0U))))))))))))));
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w877)
                            ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_250)
                            : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w878)
                                       ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w948))
                                       : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w892)
                                                  ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w962)
                                                  : 0U) 
                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w843)
                                                     ? 
                                                    vlSelf->md_board__DOT__m68k__DOT__r7
                                                    [0U]
                                                     : 0U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w860)
                                                        ? 
                                                       vlSelf->md_board__DOT__m68k__DOT__r7
                                                       [1U]
                                                        : 0U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w861)
                                                           ? 
                                                          vlSelf->md_board__DOT__m68k__DOT__r7
                                                          [2U]
                                                           : 0U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w864)
                                                              ? 
                                                             vlSelf->md_board__DOT__m68k__DOT__r7
                                                             [3U]
                                                              : 0U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w865)
                                                                 ? 
                                                                vlSelf->md_board__DOT__m68k__DOT__r7
                                                                [4U]
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w868)
                                                                    ? 
                                                                   vlSelf->md_board__DOT__m68k__DOT__r7
                                                                   [5U]
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w869)
                                                                       ? 
                                                                      vlSelf->md_board__DOT__m68k__DOT__r7
                                                                      [6U]
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w872)
                                                                          ? 
                                                                         vlSelf->md_board__DOT__m68k__DOT__r7
                                                                         [7U]
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w873)
                                                                             ? 
                                                                            vlSelf->md_board__DOT__m68k__DOT__r7
                                                                            [8U]
                                                                             : 0U) 
                                                                           | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w895)
                                                                               ? (IData)(vlSelf->md_board__DOT__m68k__DOT__r8)
                                                                               : 0U))))))))))))));
    }
    md_board__DOT__m68k__DOT__b3_pulldown_2_t = (0xffffU 
                                                 & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w879)
                                                      ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w948)
                                                      : 0U) 
                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w890)
                                                         ? 
                                                        (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w962))
                                                         : 0U) 
                                                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w858)
                                                            ? 
                                                           (~ 
                                                            vlSelf->md_board__DOT__m68k__DOT__r7
                                                            [0U])
                                                            : 0U) 
                                                          | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w859)
                                                               ? 
                                                              (~ 
                                                               vlSelf->md_board__DOT__m68k__DOT__r7
                                                               [1U])
                                                               : 0U) 
                                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w862)
                                                                  ? 
                                                                 (~ 
                                                                  vlSelf->md_board__DOT__m68k__DOT__r7
                                                                  [2U])
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w863)
                                                                     ? 
                                                                    (~ 
                                                                     vlSelf->md_board__DOT__m68k__DOT__r7
                                                                     [3U])
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w866)
                                                                        ? 
                                                                       (~ 
                                                                        vlSelf->md_board__DOT__m68k__DOT__r7
                                                                        [4U])
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w867)
                                                                           ? 
                                                                          (~ 
                                                                           vlSelf->md_board__DOT__m68k__DOT__r7
                                                                           [5U])
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w870)
                                                                              ? 
                                                                             (~ 
                                                                              vlSelf->md_board__DOT__m68k__DOT__r7
                                                                              [6U])
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w871)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r7
                                                                                [7U])
                                                                                 : 0U) 
                                                                               | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w874)
                                                                                 ? 
                                                                                (~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r7
                                                                                [8U])
                                                                                 : 0U))))))))))));
    md_board__DOT__m68k__DOT__b3_pulldown_3_t = (0xffffU 
                                                 & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w879)
                                                      ? 
                                                     (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w948))
                                                      : 0U) 
                                                    | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w890)
                                                         ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w962)
                                                         : 0U) 
                                                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w858)
                                                            ? 
                                                           vlSelf->md_board__DOT__m68k__DOT__r7
                                                           [0U]
                                                            : 0U) 
                                                          | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w859)
                                                               ? 
                                                              vlSelf->md_board__DOT__m68k__DOT__r7
                                                              [1U]
                                                               : 0U) 
                                                             | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w862)
                                                                  ? 
                                                                 vlSelf->md_board__DOT__m68k__DOT__r7
                                                                 [2U]
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w863)
                                                                     ? 
                                                                    vlSelf->md_board__DOT__m68k__DOT__r7
                                                                    [3U]
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w866)
                                                                        ? 
                                                                       vlSelf->md_board__DOT__m68k__DOT__r7
                                                                       [4U]
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w867)
                                                                           ? 
                                                                          vlSelf->md_board__DOT__m68k__DOT__r7
                                                                          [5U]
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w870)
                                                                              ? 
                                                                             vlSelf->md_board__DOT__m68k__DOT__r7
                                                                             [6U]
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w871)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r7
                                                                                [7U]
                                                                                 : 0U) 
                                                                               | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w874)
                                                                                 ? 
                                                                                vlSelf->md_board__DOT__m68k__DOT__r7
                                                                                [8U]
                                                                                 : 0U))))))))))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_135 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_22 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_129 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w41)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_128 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl275__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl275__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl243__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl243__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l3__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l3__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem_assign;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t16 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w166) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w174)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16_n 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w174) 
                 | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w166)) 
                    & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem_assign 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr497__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr497__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem_assign 
            = (1U & (~ ((2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem)) 
                        & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem)) 
                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl25__DOT__mem))) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t25)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr497__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr497__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl66__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl66__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl65__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl65__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl64__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl64__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl63__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl63__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl78__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl78__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl77__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl77__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl76__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl76__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl75__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl75__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2_assign;
    vlSelf->md_board__DOT__z80__DOT__w62 = ((IData)(vlSelf->md_board__DOT__z80__DOT__l22) 
                                            | (IData)(vlSelf->dma_z80_ack));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl26__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl26__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl575__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl575__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl26__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w191;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl575__DOT__mem_assign 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1008)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_b)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_a)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__p_control__reset) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_c)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_b)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_a)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_c)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l1 
                = (0x1fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus) 
                            >> 3U));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_b)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l1 
                = (0x1fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus) 
                            >> 3U));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_a)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l1 
                = (0x1fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus) 
                            >> 3U));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__m68k__DOT__w102 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__l9)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_26));
    vlSelf->md_board__DOT__m68k__DOT__w235 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w232)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_53));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_4 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w63)) 
                 & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w62))));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_443 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w62)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w63));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_6 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w63)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w62));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_442 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w62) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w63));
    vlSelf->md_board__DOT__m68k__DOT__w2 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__l4)
                                             ? ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__l3)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))
                                             : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_10 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w71) 
                    | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w72) 
                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w77)))));
    vlSelf->md_board__DOT__z80__DOT__w287 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w95_i) 
                                             | ((IData)(vlSelf->md_board__DOT__z80__DOT__w103) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w98)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w317 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w277;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w319 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w279;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w317 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w311;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w319 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w313;
    }
    md_board__DOT__ym__DOT__vdp__DOT__w139 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_432) 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_430)) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w140));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_42 
        = (7U & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2) 
                   << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2) 
                              << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2))) 
                 + ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_43) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2)) 
                     << 1U) | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_43)) 
                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc_hl = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT___M3)
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlSelf->PA_i) 
                                                      >> 6U)) 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l2) 
                                                       >> 7U)) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l2) 
                                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->PB_i) 
                                                            >> 6U)) 
                                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l2) 
                                                             >> 7U)) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l2) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2)) 
                                                            | (((~ 
                                                                 ((IData)(vlSelf->PC_i) 
                                                                  >> 6U)) 
                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l2) 
                                                                   >> 7U)) 
                                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l2) 
                                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2)))))))
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlSelf->PA_i) 
                                                      >> 6U)) 
                                                    & ((IData)(vlSelf->PA_d) 
                                                       >> 6U)) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->PB_i) 
                                                        >> 6U)) 
                                                      & ((IData)(vlSelf->PB_d) 
                                                         >> 6U))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__tx_data_sl__en 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_high) 
           & (2U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__tx_data_sl__en 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__vwrite_high) 
           & (5U == (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__load 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)) 
                    | ((0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l2)) 
                       & (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l2))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i1 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2) 
            << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l2) 
                       << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l2) 
                                  << 1U) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l2) 
                                                  >> 2U)))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs22__rst 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w26) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w32));
    if (vlSelf->md_board__DOT__m68k__DOT__w104) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_338 
            = vlSelf->md_board__DOT__m68k__DOT__b1_mem
            [1U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_339 
            = vlSelf->md_board__DOT__m68k__DOT__b1_mem
            [0U];
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_338 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_274;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_339 
            = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_276;
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_350 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_340) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_344));
    vlSelf->md_board__DOT__m68k__DOT__b3_pulldown[0U] 
        = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309;
    vlSelf->md_board__DOT__m68k__DOT__b3_pulldown[1U] 
        = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311;
    vlSelf->md_board__DOT__m68k__DOT__b3_pulldown[2U] 
        = ((0xff00U & vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
            [2U]) | (0xffU & ((IData)(vlSelf->md_board__DOT__m68k__DOT__c6)
                               ? vlSelf->md_board__DOT__m68k__DOT__b3_mem
                              [3U] : (IData)(md_board__DOT__m68k__DOT__b3_pulldown_2_t))));
    vlSelf->md_board__DOT__m68k__DOT__b3_pulldown[2U] 
        = ((0xffU & vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
            [2U]) | (0xff00U & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w857)
                                  ? (vlSelf->md_board__DOT__m68k__DOT__b3_mem
                                     [3U] >> 8U) : 
                                 ((IData)(md_board__DOT__m68k__DOT__b3_pulldown_2_t) 
                                  >> 8U)) << 8U)));
    vlSelf->md_board__DOT__m68k__DOT__b3_pulldown[3U] 
        = ((0xff00U & vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
            [3U]) | (0xffU & ((IData)(vlSelf->md_board__DOT__m68k__DOT__c6)
                               ? vlSelf->md_board__DOT__m68k__DOT__b3_mem
                              [2U] : (IData)(md_board__DOT__m68k__DOT__b3_pulldown_3_t))));
    vlSelf->md_board__DOT__m68k__DOT__b3_pulldown[3U] 
        = ((0xffU & vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
            [3U]) | (0xff00U & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w857)
                                  ? (vlSelf->md_board__DOT__m68k__DOT__b3_mem
                                     [2U] >> 8U) : 
                                 ((IData)(md_board__DOT__m68k__DOT__b3_pulldown_3_t) 
                                  >> 8U)) << 8U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16 = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t16;
    vlSelf->md_board__DOT__z80_ZRD_d = ((IData)(vlSelf->md_board__DOT__z80__DOT__w31_i) 
                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w62));
    vlSelf->md_board__DOT__z80_ZWR_d = ((IData)(vlSelf->md_board__DOT__z80__DOT__w33_i) 
                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w62));
    vlSelf->md_board__DOT__z80_MREQ_d = ((IData)(vlSelf->md_board__DOT__z80__DOT__w21_i) 
                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__w62));
    vlSelf->md_board__DOT__m68k__DOT__w37 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w72) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w77)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w2)));
    vlSelf->md_board__DOT__m68k__DOT__w86 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w71) 
                                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w77)) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w2));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w64) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w2));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w64)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w2));
    md_board__DOT__m68k__DOT__w39 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_10) 
                                     & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w73)));
    md_board__DOT__m68k__DOT__w40 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_10) 
                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w73));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__p_control__reset 
        = ((IData)(vlSelf->md_board__DOT___M3) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w163 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w113) 
           | (IData)(md_board__DOT__ym__DOT__vdp__DOT__w139));
    if (md_board__DOT__ym__DOT__vdp__DOT__w139) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w165 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18_n) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15_n)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15_n) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w165 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w549 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w372) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 8U) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
    md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__tx_data_sl__en)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__tx_data_sl__en)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i1) 
                 >> (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2) 
                           >> 3U))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i1) 
                 >> (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2) 
                           >> 3U))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i1) 
                 >> (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2) 
                           >> 3U))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_348 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_338) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_342));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_349 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_339) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_343));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_351 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_341) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_345));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_358 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_350) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
           [2U]);
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__dclk_prescaler_dff2__rst 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l3__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w173 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w61 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m1__DOT__mem) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l472 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w301 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem)
             : ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl63__DOT__mem)) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307) 
                       & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl64__DOT__mem)) 
                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308) 
                          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl65__DOT__mem)) 
                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl66__DOT__mem))))))) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_41 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2)
                     ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem) 
                        >> 1U) : (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306) 
                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl75__DOT__mem)) 
                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307) 
                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl76__DOT__mem)) 
                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308) 
                                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl77__DOT__mem)) 
                                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309) 
                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl78__DOT__mem))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w631 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w592 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr302__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2));
    vlSelf->md_board__DOT__m68k__DOT__v2_1 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_4) 
                                              & (IData)(md_board__DOT__m68k__DOT__w39));
    vlSelf->md_board__DOT__m68k__DOT__v2_2 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_443) 
                                              & (IData)(md_board__DOT__m68k__DOT__w39));
    vlSelf->md_board__DOT__m68k__DOT__v2_3 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_6) 
                                              & (IData)(md_board__DOT__m68k__DOT__w39));
    vlSelf->md_board__DOT__m68k__DOT__v2_4 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_442) 
                                              & (IData)(md_board__DOT__m68k__DOT__w39));
    vlSelf->md_board__DOT__m68k__DOT__v2_5 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_4) 
                                              & (IData)(md_board__DOT__m68k__DOT__w40));
    vlSelf->md_board__DOT__m68k__DOT__v2_6 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_443) 
                                              & (IData)(md_board__DOT__m68k__DOT__w40));
    vlSelf->md_board__DOT__m68k__DOT__v2_7 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_6) 
                                              & (IData)(md_board__DOT__m68k__DOT__w40));
    vlSelf->md_board__DOT__m68k__DOT__v2_8 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_442) 
                                              & (IData)(md_board__DOT__m68k__DOT__w40));
    md_board__DOT__ym__DOT__vdp__DOT__w304 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w249) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164 
        = (((IData)(vlSelf->md_board__DOT___M3) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w165)) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem) 
              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w140) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_429 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w114));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1_nq 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT__l2)) 
           & (IData)(md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_b 
        = ((IData)(md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_c 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT____VdfgRegularize_hf50784ae_0_0) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT__l2));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_356 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_348) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_346));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_357 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_349) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_347));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_359 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_351) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
           [3U]);
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_421 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_41) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w289 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w301) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318)) 
                 & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_41))));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_422 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w301) 
           & ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_41) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316)));
    vlSelf->md_board__DOT__m68k__DOT__w5 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_1) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w4 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_1) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    vlSelf->md_board__DOT__m68k__DOT__w9 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_2) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w8 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_2) 
                                            & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    vlSelf->md_board__DOT__m68k__DOT__w13 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_3) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w12 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_3) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    vlSelf->md_board__DOT__m68k__DOT__w17 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_4) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w16 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_4) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    vlSelf->md_board__DOT__m68k__DOT__w21 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_5) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w20 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_5) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    vlSelf->md_board__DOT__m68k__DOT__w25 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_6) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w24 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_6) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    vlSelf->md_board__DOT__m68k__DOT__w29 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_7) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_441));
    vlSelf->md_board__DOT__m68k__DOT__w28 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_7) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_8 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_8) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w64));
    vlSelf->md_board__DOT__m68k__DOT__w32 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v2_8) 
                                             & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_438));
    if (md_board__DOT__ym__DOT__vdp__DOT__w304) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w350;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl94__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem_assign 
            = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl95__DOT__mem));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w302 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_422) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w317)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w303 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_422) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w319)));
    vlSelf->md_board__DOT__m68k__DOT__w36 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_8) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w634)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w2)));
    vlSelf->md_board__DOT__m68k__DOT__w33 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_8) 
                                             & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w634) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w2)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__6(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w167 = (vlSelf->md_board__DOT__m68k__DOT__w597 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w604 = ((vlSelf->md_board__DOT__m68k__DOT__w597 
                                               >> 0xcU) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w602 = ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x608U 
                                                        & vlSelf->md_board__DOT__m68k__DOT__w597))) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w600 = ((vlSelf->md_board__DOT__m68k__DOT__w597 
                                               >> 9U) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3));
    vlSelf->md_board__DOT__m68k__DOT__w178 = ((vlSelf->md_board__DOT__m68k__DOT__w597 
                                               >> 5U) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_30));
    if (vlSelf->md_board__DOT__m68k__DOT__c6) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b2_mem
               [2U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b2_mem
               [3U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b2_mem
               [1U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296 
            = vlSelf->md_board__DOT__m68k__DOT__b2_mem
            [0U];
    } else {
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
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_319 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_298) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [3U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_318 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_297) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [2U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_316 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_295) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_309));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_317 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_296) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_311));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_314) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
           [2U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_322)
            : ((IData)(vlSelf->md_board__DOT__m68k__DOT__w848)
                ? (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_318)
                : vlSelf->md_board__DOT__m68k__DOT__b3_pulldown
               [2U]));
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
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__27(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__27\n"); );
    // Body
    vlSelf->md_board__DOT__z80__DOT__w327_n = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__l46) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w328)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w327_i))));
    vlSelf->md_board__DOT__z80__DOT__w327_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__l46_i) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w328)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w327_n))));
    vlSelf->md_board__DOT__z80__DOT__w526 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w526;
    vlSelf->md_board__DOT__z80__DOT__w521 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w521;
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v0) {
        vlSelf->md_board__DOT__z80__DOT__regs[0U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v0;
        vlSelf->md_board__DOT__z80__DOT__regs[0U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v1;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v2) {
        vlSelf->md_board__DOT__z80__DOT__regs[1U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v2;
        vlSelf->md_board__DOT__z80__DOT__regs[1U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v3;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v4) {
        vlSelf->md_board__DOT__z80__DOT__regs[2U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v4;
        vlSelf->md_board__DOT__z80__DOT__regs[2U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v5;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v6) {
        vlSelf->md_board__DOT__z80__DOT__regs[3U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v6;
        vlSelf->md_board__DOT__z80__DOT__regs[3U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v7;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v8) {
        vlSelf->md_board__DOT__z80__DOT__regs[4U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v8;
        vlSelf->md_board__DOT__z80__DOT__regs[4U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v9;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v10) {
        vlSelf->md_board__DOT__z80__DOT__regs[5U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v10;
        vlSelf->md_board__DOT__z80__DOT__regs[5U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v11;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v12) {
        vlSelf->md_board__DOT__z80__DOT__regs[6U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v12;
        vlSelf->md_board__DOT__z80__DOT__regs[6U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v13;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v14) {
        vlSelf->md_board__DOT__z80__DOT__regs[7U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v14;
        vlSelf->md_board__DOT__z80__DOT__regs[7U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v15;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v16) {
        vlSelf->md_board__DOT__z80__DOT__regs[8U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v16;
        vlSelf->md_board__DOT__z80__DOT__regs[8U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v17;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v18) {
        vlSelf->md_board__DOT__z80__DOT__regs[9U][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v18;
        vlSelf->md_board__DOT__z80__DOT__regs[9U][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v19;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v20) {
        vlSelf->md_board__DOT__z80__DOT__regs[0xaU][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v20;
        vlSelf->md_board__DOT__z80__DOT__regs[0xaU][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v21;
    }
    if (vlSelf->__VdlySet__md_board__DOT__z80__DOT__regs__v22) {
        vlSelf->md_board__DOT__z80__DOT__regs[0xbU][0U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v22;
        vlSelf->md_board__DOT__z80__DOT__regs[0xbU][1U] 
            = vlSelf->__VdlyVal__md_board__DOT__z80__DOT__regs__v23;
    }
    vlSelf->md_board__DOT__z80__DOT__w73 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w73;
    vlSelf->md_board__DOT__z80__DOT__w314 = ((IData)(vlSelf->md_board__DOT__z80__DOT__l44) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w307));
    vlSelf->md_board__DOT__z80__DOT__w342 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w341)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w320))));
    vlSelf->md_board__DOT__z80__DOT__w340 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w341)) 
                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w320)))));
    vlSelf->md_board__DOT__z80__DOT__w364 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l81)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w361_i))));
    vlSelf->md_board__DOT__z80__DOT__w363 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l81)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w361_n))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__sum 
        = (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out) 
                   + (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__z80__DOT__w355 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w347)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w327))));
    vlSelf->md_board__DOT__z80__DOT__w354 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w327)) 
                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w347)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1;
    vlSelf->md_board__DOT__z80__DOT__w353 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w351) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w327))));
    vlSelf->md_board__DOT__z80__DOT__w352 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w327)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w351))));
    vlSelf->md_board__DOT__z80__DOT__w350 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w349) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w327))));
    vlSelf->md_board__DOT__z80__DOT__w348 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w327)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w349))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i2) 
                 >> (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2) 
                           >> 3U))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i2) 
                 >> (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2) 
                           >> 3U))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i2) 
                 >> (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2) 
                           >> 3U))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_253 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0));
    if (vlSelf->md_board__DOT__z80__DOT__w360) {
        vlSelf->md_board__DOT__z80__DOT__l49_i = vlSelf->md_board__DOT__z80__DOT__w361_i;
        vlSelf->md_board__DOT__z80__DOT__l49 = vlSelf->md_board__DOT__z80__DOT__w361_n;
    }
    vlSelf->md_board__DOT__z80__DOT__w362 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w359));
    vlSelf->md_board__DOT__z80__DOT__w328 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w302))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_121 = ((0x10U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))
                                                      ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_bit__DOT__l2)
                                                      : 
                                                     ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l2) 
                                                      >> 4U)) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l2)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_120 = ((0x10U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))
                                                      ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_bit__DOT__l2)
                                                      : 
                                                     ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l2) 
                                                      >> 4U)) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__rx_error__reset) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_clk2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__rx_error__reset) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_clk2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l1 = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_clk2)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_data__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter_q_delay;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_clk2)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_data__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter_q_delay;
    }
    vlSelf->md_board__DOT__z80__DOT__w516 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l79))));
    vlSelf->md_board__DOT__z80__DOT__w517 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w416))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_1 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_1 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_3 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_3 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_0 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_8 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_0 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_8 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_6 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2)) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2_l__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_1 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_5 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_6 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2)) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2_l__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_1 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_5 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2));
    if (vlSelf->md_board__DOT__z80__DOT__w324) {
        vlSelf->md_board__DOT__z80__DOT__l46 = vlSelf->md_board__DOT__z80__DOT__w327_n;
        vlSelf->md_board__DOT__z80__DOT__l46_i = vlSelf->md_board__DOT__z80__DOT__w327_i;
    }
    vlSelf->md_board__DOT__z80__DOT__w360 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w359))));
    if (vlSelf->md_board__DOT___M3) {
        vlSelf->PB_o = ((0x60U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l2)) 
                        | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_121));
        vlSelf->PA_o = ((0x60U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l2)) 
                        | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_120));
    } else {
        vlSelf->PB_o = ((0x60U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l2) 
                                  >> 1U)) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_121));
        vlSelf->PA_o = ((0x60U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l2) 
                                  << 1U)) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_120));
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_clk2 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_5__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_clk2 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_5__DOT__l2)));
    vlSelf->md_board__DOT__z80__DOT__rpull1[0U] = (
                                                   (((((((((((((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w364))))) 
                                                               & vlSelf->md_board__DOT__z80__DOT__regs
                                                               [0U]
                                                               [1U]) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w363))))) 
                                                                 & vlSelf->md_board__DOT__z80__DOT__regs
                                                                 [1U]
                                                                 [1U])) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w355))))) 
                                                                & vlSelf->md_board__DOT__z80__DOT__regs
                                                                [2U]
                                                                [1U])) 
                                                            | ((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w354))))) 
                                                               & vlSelf->md_board__DOT__z80__DOT__regs
                                                               [3U]
                                                               [1U])) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w353))))) 
                                                              & vlSelf->md_board__DOT__z80__DOT__regs
                                                              [4U]
                                                              [1U])) 
                                                          | ((- (IData)(
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w352))))) 
                                                             & vlSelf->md_board__DOT__z80__DOT__regs
                                                             [5U]
                                                             [1U])) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w350))))) 
                                                            & vlSelf->md_board__DOT__z80__DOT__regs
                                                            [6U]
                                                            [1U])) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w348))))) 
                                                           & vlSelf->md_board__DOT__z80__DOT__regs
                                                           [7U]
                                                           [1U])) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w342))))) 
                                                          & vlSelf->md_board__DOT__z80__DOT__regs
                                                          [8U]
                                                          [1U])) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w340))))) 
                                                         & vlSelf->md_board__DOT__z80__DOT__regs
                                                         [9U]
                                                         [1U])) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w319))))) 
                                                        & vlSelf->md_board__DOT__z80__DOT__regs
                                                        [0xaU]
                                                        [1U])) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w314))))) 
                                                       & vlSelf->md_board__DOT__z80__DOT__regs
                                                       [0xbU]
                                                       [1U])) 
                                                   | ((((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w517))) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w513)) 
                                                       << 8U) 
                                                      | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w516))) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__w484))));
    vlSelf->md_board__DOT__z80__DOT__rpull1[1U] = (
                                                   (((((((((((((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w364))))) 
                                                               & vlSelf->md_board__DOT__z80__DOT__regs
                                                               [0U]
                                                               [0U]) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w363))))) 
                                                                 & vlSelf->md_board__DOT__z80__DOT__regs
                                                                 [1U]
                                                                 [0U])) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w355))))) 
                                                                & vlSelf->md_board__DOT__z80__DOT__regs
                                                                [2U]
                                                                [0U])) 
                                                            | ((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w354))))) 
                                                               & vlSelf->md_board__DOT__z80__DOT__regs
                                                               [3U]
                                                               [0U])) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w353))))) 
                                                              & vlSelf->md_board__DOT__z80__DOT__regs
                                                              [4U]
                                                              [0U])) 
                                                          | ((- (IData)(
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w352))))) 
                                                             & vlSelf->md_board__DOT__z80__DOT__regs
                                                             [5U]
                                                             [0U])) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w350))))) 
                                                            & vlSelf->md_board__DOT__z80__DOT__regs
                                                            [6U]
                                                            [0U])) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w348))))) 
                                                           & vlSelf->md_board__DOT__z80__DOT__regs
                                                           [7U]
                                                           [0U])) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w342))))) 
                                                          & vlSelf->md_board__DOT__z80__DOT__regs
                                                          [8U]
                                                          [0U])) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w340))))) 
                                                         & vlSelf->md_board__DOT__z80__DOT__regs
                                                         [9U]
                                                         [0U])) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w319))))) 
                                                        & vlSelf->md_board__DOT__z80__DOT__regs
                                                        [0xaU]
                                                        [0U])) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w314))))) 
                                                       & vlSelf->md_board__DOT__z80__DOT__regs
                                                       [0xbU]
                                                       [0U])) 
                                                   | ((0xff00U 
                                                       & (((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w517))) 
                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w513))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w516))) 
                                                            & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w484))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__rpullup1[0U] = 0xffffU;
        vlSelf->md_board__DOT__z80__DOT__rpullup1[1U] = 0xffffU;
    } else {
        vlSelf->md_board__DOT__z80__DOT__rpullup1[0U] 
            = ((((((((((((((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w364))))) 
                           & vlSelf->md_board__DOT__z80__DOT__regs
                           [0U][0U]) | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w363))))) 
                                        & vlSelf->md_board__DOT__z80__DOT__regs
                                        [1U][0U])) 
                         | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w355))))) 
                            & vlSelf->md_board__DOT__z80__DOT__regs
                            [2U][0U])) | ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w354))))) 
                                          & vlSelf->md_board__DOT__z80__DOT__regs
                                          [3U][0U])) 
                       | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w353))))) 
                          & vlSelf->md_board__DOT__z80__DOT__regs
                          [4U][0U])) | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w352))))) 
                                        & vlSelf->md_board__DOT__z80__DOT__regs
                                        [5U][0U])) 
                     | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w350))))) 
                        & vlSelf->md_board__DOT__z80__DOT__regs
                        [6U][0U])) | ((- (IData)((1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w348))))) 
                                      & vlSelf->md_board__DOT__z80__DOT__regs
                                      [7U][0U])) | 
                   ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w342))))) 
                    & vlSelf->md_board__DOT__z80__DOT__regs
                    [8U][0U])) | ((- (IData)((1U & 
                                              (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w340))))) 
                                  & vlSelf->md_board__DOT__z80__DOT__regs
                                  [9U][0U])) | ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w319))))) 
                                                & vlSelf->md_board__DOT__z80__DOT__regs
                                                [0xaU]
                                                [0U])) 
                | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w314))))) 
                   & vlSelf->md_board__DOT__z80__DOT__regs
                   [0xbU][0U])) | ((0xff00U & (((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w517))) 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w513))) 
                                               << 8U)) 
                                   | (0xffU & ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w516))) 
                                               & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w484))))));
        vlSelf->md_board__DOT__z80__DOT__rpullup1[1U] 
            = ((((((((((((((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w364))))) 
                           & vlSelf->md_board__DOT__z80__DOT__regs
                           [0U][1U]) | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w363))))) 
                                        & vlSelf->md_board__DOT__z80__DOT__regs
                                        [1U][1U])) 
                         | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w355))))) 
                            & vlSelf->md_board__DOT__z80__DOT__regs
                            [2U][1U])) | ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w354))))) 
                                          & vlSelf->md_board__DOT__z80__DOT__regs
                                          [3U][1U])) 
                       | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w353))))) 
                          & vlSelf->md_board__DOT__z80__DOT__regs
                          [4U][1U])) | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w352))))) 
                                        & vlSelf->md_board__DOT__z80__DOT__regs
                                        [5U][1U])) 
                     | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w350))))) 
                        & vlSelf->md_board__DOT__z80__DOT__regs
                        [6U][1U])) | ((- (IData)((1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w348))))) 
                                      & vlSelf->md_board__DOT__z80__DOT__regs
                                      [7U][1U])) | 
                   ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w342))))) 
                    & vlSelf->md_board__DOT__z80__DOT__regs
                    [8U][1U])) | ((- (IData)((1U & 
                                              (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w340))))) 
                                  & vlSelf->md_board__DOT__z80__DOT__regs
                                  [9U][1U])) | ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w319))))) 
                                                & vlSelf->md_board__DOT__z80__DOT__regs
                                                [0xaU]
                                                [1U])) 
                | ((- (IData)((1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w314))))) 
                   & vlSelf->md_board__DOT__z80__DOT__regs
                   [0xbU][1U])) | ((((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w517))) 
                                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w513)) 
                                    << 8U) | ((- (IData)((IData)(vlSelf->md_board__DOT__z80__DOT__w516))) 
                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w484))));
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_2 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_1));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_2 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_1));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2_l__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_2 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l2)) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2_l__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_2 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l2)) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_5 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_4));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_5 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_4));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r1_j 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l2)) 
                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_0)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r2_j 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_0) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l2)) 
              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_10 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_3) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_8));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_9 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_8)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r1_j 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l2)) 
                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_0)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r2_j 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_0) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l2)) 
              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_10 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_3) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_8));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_9 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_8)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_0 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_6) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_5) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_0 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_6) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_5) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter_q_delay 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter_q_delay 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_6 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r2_j) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_9));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_6 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r2_j) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_9));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_7 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_6) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_10));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_7 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_6) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_10));
}
