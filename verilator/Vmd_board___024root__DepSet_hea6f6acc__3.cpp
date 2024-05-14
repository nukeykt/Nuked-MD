// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__11(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr2_q 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_nq))) 
           & (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr1_q)) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_tr2_q)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_7_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_7_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_8_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_outinv_l2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_l2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__6__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__6__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__7__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__7__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__8__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__8__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_cnt_i;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_of_sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr_i) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_lock__DOT__mem) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 8U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 7U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 6U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 5U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 4U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 3U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 2U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 1U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_pg_reset_sr__DOT__v2) 
                      << 1U)) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT____VdfgRegularize_h33a74b76_3_1) 
                                 & (0U == (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 0xaU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr_i) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 0xdU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 0xcU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 0xbU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 0xaU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr_i)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                     >> 0x14U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 0xdU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 0xcU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 0xbU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 0xaU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr_i)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_invert_sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2 
                        >> 0x15U) & ((IData)((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg)))) 
                                     ^ (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2 
                                        >> 0x17U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0x1ffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                             << 1U)) | (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sum_l__DOT__mem) 
                                                 >> 9U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v1 
            = ((0xfffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2 
                             << 1U)) | (IData)(((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg) 
                                                  >> 3U) 
                                                 & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr1__DOT__v2 
                                                    >> 0x15U)) 
                                                & (((vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                                                     >> 0x14U) 
                                                    & (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg)))) 
                                                   | (((vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                                                        >> 0x14U) 
                                                       & (2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg)))) 
                                                      ^ 
                                                      (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_inv_sr__DOT__v2 
                                                       >> 0x17U))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_wr) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_wr) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x26U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x28U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x27U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                                       >> 0x14U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pms__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_57) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_54) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_54));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_52) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_52) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_52));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_34) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_34) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_34) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_34) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_34)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_32) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_32) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_32) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_32) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_32)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_42) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41) 
                                        >> 4U)));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_timer_b_o 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 4U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_24_data__data_o 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 4U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_110 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__7__KET____DOT__mem) 
                                                 << 1U) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__8__KET____DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_out_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_value_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_2_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_op1_1_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_ctrl__DOT__reg_addr_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_ctrl__DOT__reg_addr_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ar__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_111 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__6__KET____DOT__mem) 
                                                 << 2U) 
                                                | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_110));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_42 
        = ((5U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)) 
           | (6U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__connect)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_112 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__5__KET____DOT__mem) 
                                                 << 3U) 
                                                | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_111));
    vlSelf->__VdfgRegularize_hd87f99a1_0_113 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__3__KET____DOT__mem) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__4__KET____DOT__mem) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_112))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__12(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__ch_dbg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_cnt_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_cnt_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt_of_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt_of_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_reset_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_inc_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_inc_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l3__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l3__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_pm_sign_l2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index_0_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index_0_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_l__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_l__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_value_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_out_enable_l 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__dac_out_enable_2612_l 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_dac_load));
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT____Vcellout__reg_ctrl__block) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt_of_sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__sum) 
                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__sum) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_78) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__kcode_sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x400U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux))
                ? (0U != (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                                >> 7U))) : (7U == (7U 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                                                      >> 7U))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_mux));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__multi_sel_4_l2__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__fnum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fnum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__phase_sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__att_sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_res_latch__DOT__v2) 
                         >> 3U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_add3_l__DOT__mem);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_cnt_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_75));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 9U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x2dU) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x2cU) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x2aU) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                           >> 0x2bU) & (0x40U == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x28U) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                           >> 0x29U) & (0x40U == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x24U) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 0x25U) & (0x40U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                              >> 0x26U) & (0x80U == 
                                           (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x23U) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x20U) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 0x21U) & (0x40U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                              >> 0x22U) & (0x80U == 
                                           (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x1fU) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x1aU) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x16U) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 0x17U) & (0x40U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                               >> 0x18U) & (0x80U == 
                                            (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                     | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                                 >> 0x19U) & (0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                        >> 0x15U) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0x11U) & (0U == (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 0x12U) & (0x40U == (0xc0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                               >> 0x13U) & (0x80U == 
                                            (0xc0U 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                     | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                                 >> 0x14U) & (0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 0xfU) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                           >> 0x10U) & (0x40U == (0xc0U 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_lut_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                         >> 8U) & (0U == (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
               | ((IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                            >> 9U) & (0x40U == (0xc0U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index))))) 
                  | (IData)(((vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sine_lut_out 
                              >> 0xaU) & (0x80U == 
                                          (0xc0U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__sin_index)))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem) 
                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__eg_att_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_out_l__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_cnt__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_fm_value) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0x12U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0x11U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0x10U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0xfU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0xeU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0xdU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0xcU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0xbU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((0xffffeU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
                            << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__phase 
                                             >> 0xaU)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2)) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_8)) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_8) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_of_sr__DOT__v2))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_cnt_sr__DOT__v1 
            = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_sr__DOT__v2)) 
                & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_load_l__DOT__mem)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_of_sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_load_l__DOT__mem) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_cnt__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                        << 1U)) | (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
                                         >> 0x13U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x3eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_i)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x22U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_59) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_59));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_58) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ams__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_58));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_25_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_66) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_25_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_66));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_55) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_64) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_64));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_68) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_68));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__sum) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__sum) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__sum) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_subcnt__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_dac__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_72) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_26_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_67));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_24_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_65));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_73) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_73) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_73) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_73) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_73));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum_ch3__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_53));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_0__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_51));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 8U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 6U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_address__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_17) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_48) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_48) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_48) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_48)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_47)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                                        >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                                        >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_29)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_46) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_46) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_46) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_46)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_44) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_44) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_44) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_44)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_40) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_40) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_40) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_40) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_40)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_38) 
                                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_38) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_38) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_38) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_38)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_42) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_42) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_42) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_42)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_41)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_50) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_50) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_50) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_50)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49) 
                                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49) 
                                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49) 
                                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                          << 1U)) | ((IData)(vlSelf->md_board__DOT__ZRES) 
                                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_49)));
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT____Vcellout__s_5__data_out 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_data__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_3__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_pan__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_block__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fnum__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__op__DOT__op_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_connect__DOT__sr_0__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__pg_values2__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_dr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr_o 
        = ((0x100U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                      << 3U)) | ((0x80U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                           << 2U)) 
                                 | ((0x40U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                              << 1U)) 
                                    | ((0x20U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)) 
                                       | ((0x10U & 
                                           ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                            >> 1U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                               >> 2U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                    >> 3U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__ch__DOT__ch_accm_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                         >> 5U))))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1_out 
        = ((0x40U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                     >> 5U)) | ((0x20U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                          >> 6U)) | 
                                ((0x10U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                           >> 7U)) 
                                 | ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                           >> 8U)) 
                                    | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                              >> 9U)) 
                                       | ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                 >> 0xaU)) 
                                          | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_tl__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                   >> 0xbU))))))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_rr__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1_out 
        = ((8U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ssgeg__DOT__sr1__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                                                     >> 0xbU)))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__13(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__13\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_327;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_327 = 0;
    // Body
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w298__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w298__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w269__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w269__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w275__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w275__v1 = 0U;
    vlSelf->md_board__DOT__z80__DOT__w74 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w74;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38 = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t38;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w418 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w295 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
              == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2)));
    vlSelf->md_board__DOT__RW = vlSelf->__Vdly__md_board__DOT__RW;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t13 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w163) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w159)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t13)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr560__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl424__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl424__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl417__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl417__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl418__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr585__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w288;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w286;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w647) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w647) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w647) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w647));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w482;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr358__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr331__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr271__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr271__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0x11U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr410__DOT__sr_in);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr568__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w286) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr571__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v1 
            = ((0x3feU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr376__DOT__v2) 
                          << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w743));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w417;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr321__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr274__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2;
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff45__DOT__l2 = 1U;
    } else if (vlSelf->cart_oe) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff45__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff45__DOT__l1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1_latch__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1_latch__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0_latch__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0_latch__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem_assign;
    vlSelf->md_board__DOT__z80__DOT__w147_prev = vlSelf->md_board__DOT__z80__DOT__w147;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l2;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l1 = 0U;
    }
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l2;
        }
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w332) {
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l2 = 1U;
    }
    vlSelf->md_board__DOT__z80__DOT__w90 = (1U & (~ 
                                                  (((IData)(vlSelf->md_board__DOT__z80__DOT__w92) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w95_i)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w30))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address 
        = ((0x700000U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address_t) 
           | ((0xc0000U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem) 
                           << 0x10U)) | (0x3ffffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address_t)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w220 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff44__DOT__l2)) 
                 | (IData)(vlSelf->md_board__DOT__MREQ)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_55 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem_assign;
    if (((IData)(vlSelf->md_board__DOT__m68k__DOT__w935) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->md_board__DOT__m68k__DOT__w981 = vlSelf->md_board__DOT__m68k__DOT__b3
            [0U];
    } else if (((IData)(vlSelf->md_board__DOT__m68k__DOT__w937) 
                & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->md_board__DOT__m68k__DOT__w981 = vlSelf->md_board__DOT__m68k__DOT__b3
            [2U];
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c2) {
        vlSelf->md_board__DOT__m68k__DOT__w841 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0xdU)));
        vlSelf->md_board__DOT__m68k__DOT__w839 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0xcU)));
        vlSelf->md_board__DOT__m68k__DOT__w838 = 0U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w838 = vlSelf->md_board__DOT__m68k__DOT__w835;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w330) {
        vlSelf->md_board__DOT__m68k__DOT__w322 = (1U 
                                                  & ((~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                       >> 0xfU)) 
                                                     & ((vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                         >> 1U) 
                                                        | (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                           >> 0x10U))));
        vlSelf->md_board__DOT__m68k__DOT__w323 = (1U 
                                                  & ((~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                       >> 0x10U)) 
                                                     & ((vlSelf->md_board__DOT__m68k__DOT__w522 
                                                         >> 0xfU) 
                                                        | (~ 
                                                           (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                            >> 1U)))));
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d2__DOT__dl 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w188;
    if ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w401)) 
               & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o))))) {
        vlSelf->md_board__DOT__m68k__DOT__w400 = 1U;
    } else if (((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w398)) 
                 | ((IData)(vlSelf->md_board__DOT__m68k__DOT__c2) 
                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))) 
                | (IData)(vlSelf->md_board__DOT__m68k__DOT__w401))) {
        vlSelf->md_board__DOT__m68k__DOT__w400 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
               & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w941))))) {
        vlSelf->md_board__DOT__m68k__DOT__w984 = vlSelf->md_board__DOT__m68k__DOT__data_io;
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w71 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l2) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l2));
    vlSelf->md_board__DOT___M3 = vlSelf->M3;
    vlSelf->md_board__DOT__z80__DOT__w484 = (((IData)(vlSelf->md_board__DOT__z80__DOT__w369) 
                                              & (IData)(vlSelf->md_board__DOT__z80__DOT__w419))
                                              ? (IData)(vlSelf->md_board__DOT__z80__DOT__bus_comb_123)
                                              : ((IData)(vlSelf->md_board__DOT__z80__DOT__w369)
                                                  ? (IData)(vlSelf->md_board__DOT__z80__DOT__bus_comb_12)
                                                  : 
                                                 ((IData)(vlSelf->md_board__DOT__z80__DOT__w419)
                                                   ? (IData)(vlSelf->md_board__DOT__z80__DOT__bus_comb_23)
                                                   : (IData)(vlSelf->md_board__DOT__z80__DOT__bus_comb_2))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__l71 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl53__inp)));
        vlSelf->md_board__DOT__z80__DOT__l56 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl56__inp;
        vlSelf->md_board__DOT__z80__DOT__w379_1 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_1__inp;
        vlSelf->md_board__DOT__z80__DOT__l66 = (1U 
                                                & (~ 
                                                   ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_79) 
                                                      | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_223) 
                                                         | (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x5c0000U 
                                                                      & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w234))))) 
                                                     & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12)) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_150) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_141)))));
        vlSelf->md_board__DOT__z80__DOT__w390 = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_139)) 
                                                 | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114));
        vlSelf->md_board__DOT__z80__DOT__w378_2 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_2__inp;
        vlSelf->md_board__DOT__z80__DOT__w378_1 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_1__inp;
        vlSelf->md_board__DOT__z80__DOT__w373 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw373__inp;
        vlSelf->md_board__DOT__z80__DOT__w372 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw372__inp;
        vlSelf->md_board__DOT__z80__DOT__w377 = vlSelf->md_board__DOT__z80__DOT__w375;
        vlSelf->md_board__DOT__z80__DOT__w404 = (1U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl56__inp) 
                                                      | ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_1__inp) 
                                                         | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_2__inp)))) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_172)));
        vlSelf->md_board__DOT__z80__DOT__l73 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w473)));
        vlSelf->md_board__DOT__z80__DOT__w419 = (1U 
                                                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp)));
        vlSelf->md_board__DOT__z80__DOT__w369 = (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw370__inp)) 
                                                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111)) 
                                                 | ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl13__inp) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                       & ((IData)(vlSelf->md_board__DOT__z80__DOT__w3) 
                                                          & (~ 
                                                             ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                              | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                                 & ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                                     >> 3U) 
                                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w107)))))))));
        vlSelf->md_board__DOT__z80__DOT__w107 = (1U 
                                                 & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                                                    >> 0xcU));
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l2 = 1U;
    }
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__d1__DOT__dl 
        = (1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__m1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_55));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w417 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr146__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v2_assign;
    if (vlSelf->cart_oe) {
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff45__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff45__DOT__l1 
            = (1U & (vlSelf->md_board__DOT__VA >> 0x16U));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0_latch__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1_latch__DOT__mem));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w332)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l1 
            = (1U & (vlSelf->md_board__DOT__VA >> 0x16U));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s1 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l2));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w388 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_327 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2));
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w522 = vlSelf->md_board__DOT__m68k__DOT__ucode_out_m2;
    } else if (vlSelf->md_board__DOT__m68k__DOT__c5) {
        vlSelf->md_board__DOT__m68k__DOT__w522 = (0x1fffeU 
                                                  & vlSelf->md_board__DOT__m68k__DOT__w522);
        vlSelf->md_board__DOT__m68k__DOT__w522 = (0x7fffU 
                                                  & vlSelf->md_board__DOT__m68k__DOT__w522);
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w885) {
        vlSelf->md_board__DOT__m68k__DOT__data_io = 
            ((0xff00U & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
             | (0xffU & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w964))));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w986) {
        vlSelf->md_board__DOT__m68k__DOT__data_io = 
            ((0xff00U & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
             | (0xffU & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__data_l))));
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w882)))) {
        if (vlSelf->md_board__DOT__m68k__DOT__w884) {
            vlSelf->md_board__DOT__m68k__DOT__data_io 
                = ((0xff00U & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
                   | (0xffU & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w964) 
                                  >> 8U))));
        } else if (vlSelf->md_board__DOT__m68k__DOT__w987) {
            vlSelf->md_board__DOT__m68k__DOT__data_io 
                = ((0xff00U & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
                   | (0xffU & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__data_l) 
                                  >> 8U))));
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w884) {
        vlSelf->md_board__DOT__m68k__DOT__data_io = 
            ((0xffU & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
             | (0xff00U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w964) 
                               >> 8U)) << 8U)));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w987) {
        vlSelf->md_board__DOT__m68k__DOT__data_io = 
            ((0xffU & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
             | (0xff00U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__data_l) 
                               >> 8U)) << 8U)));
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w882)))) {
        if (vlSelf->md_board__DOT__m68k__DOT__w885) {
            vlSelf->md_board__DOT__m68k__DOT__data_io 
                = ((0xffU & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
                   | (0xff00U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w964)) 
                                 << 8U)));
        } else if (vlSelf->md_board__DOT__m68k__DOT__w986) {
            vlSelf->md_board__DOT__m68k__DOT__data_io 
                = ((0xffU & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)) 
                   | (0xff00U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__data_l)) 
                                 << 8U)));
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c2) {
        vlSelf->md_board__DOT__m68k__DOT__w941 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w941 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w940)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w717 = (1U 
                                                  & (~ 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                           >> 2U))) 
                                                      | (IData)(
                                                                ((8U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x80U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w693 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w689) 
                                                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w570)) 
                                                      | (IData)(
                                                                ((4U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & ((~ 
                                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                      >> 6U)) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x3000U 
                                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))))));
        vlSelf->md_board__DOT__m68k__DOT__w692 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w689) 
                                                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w570)) 
                                                      | (IData)(
                                                                ((4U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w690) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x79eU 
                                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))))));
        vlSelf->md_board__DOT__m68k__DOT__w835 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 7U));
        vlSelf->md_board__DOT__m68k__DOT__w935 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x12U));
        vlSelf->md_board__DOT__m68k__DOT__w937 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x13U));
        vlSelf->md_board__DOT__m68k__DOT__w940 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w477) 
                                                     | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                           >> 1U))));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c2) {
        vlSelf->md_board__DOT__m68k__DOT__w882 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                      & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_376)) 
                                                         | ((vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                             >> 0xdU) 
                                                            ^ 
                                                            (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                             >> 0xcU))))));
        vlSelf->md_board__DOT__m68k__DOT__w885 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w568)) 
                                                      | ((vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                          >> 0xcU) 
                                                         | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)))));
        vlSelf->md_board__DOT__m68k__DOT__w884 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w568)) 
                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                         | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_376)) 
                                                            | (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                               >> 0xdU))))));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__5__KET____DOT__clkgen_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_reset_and) 
                        | (0U != (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v2) 
                                   << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2) 
                                              << 3U) 
                                             | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v2) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2)))))))));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w269__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w269
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w269__v0 = 1U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff66__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff66__DOT__l1;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w298
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w298__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w298
            [2U];
        vlSelf->md_board__DOT__m68k__DOT__w303 = (1U 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__w298
                                                     [3U]));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w297
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w297__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w297
            [2U];
        vlSelf->md_board__DOT__m68k__DOT__w301 = (1U 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__w297
                                                     [3U]));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w296
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w296__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w296
            [2U];
        vlSelf->md_board__DOT__m68k__DOT__w299 = (1U 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__w296
                                                     [3U]));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w275__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w275
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w275__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w276__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w276
            [0U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w336;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w277
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w277
            [3U];
        vlSelf->md_board__DOT__m68k__DOT__w278 = ((
                                                   vlSelf->md_board__DOT__m68k__DOT__w275
                                                   [2U] 
                                                   & vlSelf->md_board__DOT__m68k__DOT__w276
                                                   [2U]) 
                                                  | ((vlSelf->md_board__DOT__m68k__DOT__w275
                                                      [2U] 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w395)) 
                                                     & vlSelf->md_board__DOT__m68k__DOT__w277
                                                     [5U]));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff73__DOT__l1 
            = vlSelf->md_board__DOT__AS;
    }
    vlSelf->md_board__DOT__AS = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l3)) 
                                       | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76)) 
                                           & (IData)(vlSelf->md_board__DOT__ym_AS_o)) 
                                          | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__lds_l3)) 
                                             & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__as_l2))))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff18__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff18__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff18__DOT__l1 
            = vlSelf->md_board__DOT__ym_AS_o;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__sum)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__sum)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff80__DOT__sum)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff78__DOT__sum)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff22__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff22__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff22__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff28__DOT__l2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182));
        vlSelf->md_board__DOT__m68k__DOT__w378 = (1U 
                                                  & (~ 
                                                     (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w388)) 
                                                       | (vlSelf->md_board__DOT__m68k__DOT__w389
                                                          [7U] 
                                                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w397))) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))));
        vlSelf->md_board__DOT__m68k__DOT__w379 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w397)) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_68)))));
        vlSelf->md_board__DOT__m68k__DOT__w380 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                       | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w391))) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w387)))));
        vlSelf->md_board__DOT__m68k__DOT__w398 = (1U 
                                                  & (~ 
                                                     (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w397)) 
                                                       | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_68))) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w269__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__BGACK)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w269__v1 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w269__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w269
            [1U];
        vlSelf->md_board__DOT__m68k__DOT__w274 = vlSelf->md_board__DOT__m68k__DOT__w269
            [2U];
        vlSelf->md_board__DOT__m68k__DOT__w317 = vlSelf->md_board__DOT__m68k__DOT__w305;
        vlSelf->md_board__DOT__m68k__DOT__w312 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w305)));
        vlSelf->md_board__DOT__m68k__DOT__w314 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w306)));
        vlSelf->md_board__DOT__m68k__DOT__w308 = (1U 
                                                  & (~ 
                                                     (((~ 
                                                        (vlSelf->md_board__DOT__m68k__DOT__w297
                                                         [2U] 
                                                         | vlSelf->md_board__DOT__m68k__DOT__w297
                                                         [3U])) 
                                                       | (vlSelf->md_board__DOT__m68k__DOT__w297
                                                          [2U] 
                                                          & vlSelf->md_board__DOT__m68k__DOT__w297
                                                          [3U])) 
                                                      & (((~ 
                                                           (vlSelf->md_board__DOT__m68k__DOT__w298
                                                            [2U] 
                                                            | vlSelf->md_board__DOT__m68k__DOT__w298
                                                            [3U])) 
                                                          | (vlSelf->md_board__DOT__m68k__DOT__w298
                                                             [2U] 
                                                             & vlSelf->md_board__DOT__m68k__DOT__w298
                                                             [3U])) 
                                                         & ((~ 
                                                             (vlSelf->md_board__DOT__m68k__DOT__w296
                                                              [2U] 
                                                              | vlSelf->md_board__DOT__m68k__DOT__w296
                                                              [3U])) 
                                                            | (vlSelf->md_board__DOT__m68k__DOT__w296
                                                               [2U] 
                                                               & vlSelf->md_board__DOT__m68k__DOT__w296
                                                               [3U]))))));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v2 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__IPL) 
                        >> 2U)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w298__v2 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w298__v3 
            = vlSelf->md_board__DOT__m68k__DOT__w298
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v2 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__IPL) 
                        >> 1U)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w297__v2 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v3 
            = vlSelf->md_board__DOT__m68k__DOT__w297
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v2 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__IPL)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w296__v2 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v3 
            = vlSelf->md_board__DOT__m68k__DOT__w296
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w275__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym_HALT_pull) 
                     | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w336)) 
                        | (IData)(vlSelf->ext_vres))));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w275__v1 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w276__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym_HALT_pull) 
                     | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w339)) 
                        | (IData)(vlSelf->ext_vres))));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w275__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w275
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w276__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w276
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v3 
            = vlSelf->md_board__DOT__m68k__DOT__w277
            [0U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v4 
            = vlSelf->md_board__DOT__m68k__DOT__w277
            [2U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v5 
            = vlSelf->md_board__DOT__m68k__DOT__w277
            [4U];
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l1 
            = (1U & (~ (IData)(vlSelf->ext_reset)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__w401 = vlSelf->md_board__DOT__m68k__DOT__w377;
        vlSelf->md_board__DOT__m68k__DOT__w367 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w387)));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff66__DOT__l1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff75__DOT__l2)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_3))));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff75__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff75__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff28__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff28__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff28__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_294 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v2)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w388));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_327));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_327));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_327));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff51__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l1 
                = vlSelf->cart_dma;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff61__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff49__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_294)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v2) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v2) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v2)))));
    if (((IData)(vlSelf->md_board__DOT__m68k__DOT__as_l1) 
         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__as_l2 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__as_l1)))) {
        vlSelf->md_board__DOT__m68k__DOT__as_l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__w388 = vlSelf->md_board__DOT__m68k__DOT__w377;
        vlSelf->md_board__DOT__m68k__DOT__data_l = vlSelf->md_board__DOT__VD;
        vlSelf->md_board__DOT__m68k__DOT__lds_l3 = vlSelf->md_board__DOT__FC_z;
        vlSelf->md_board__DOT__m68k__DOT__w267 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff75__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_3)));
        vlSelf->md_board__DOT__m68k__DOT__as_l1 = vlSelf->md_board__DOT__m68k__DOT__w376;
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_193 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w320)) 
                 | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__14(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__14\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w256;
    md_board__DOT__ym__DOT__vdp__DOT__w256 = 0;
    CData/*6:0*/ md_board__DOT__ym__DOT__vdp__DOT__w526;
    md_board__DOT__ym__DOT__vdp__DOT__w526 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w1101;
    md_board__DOT__ym__DOT__vdp__DOT__w1101 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_34;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_34 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_423;
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_423 = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t15;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t15 = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t18;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t18 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t27 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t27;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t15 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t18 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
            << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                       << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                  << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                             << 5U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                << 4U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))));
    vlSelf->vdp_intfield = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1fffdU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffffffeU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 1U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1fff7U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffffff8U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 3U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1ffdfU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0x20U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                << 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                          << 3U)) | 
                              (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                << 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                          << 2U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1ffbfU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xffffffc0U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 6U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                               << 1U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1fbffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffffc00U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xaU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                 << 8U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1f7ffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0x800U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                 << 0xbU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                             << 7U)) 
                               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                   << 0xbU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                               << 6U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1dfffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xffffe000U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xdU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                 << 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x17fffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xffff8000U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xfU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                 << 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1fffdU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffffffeU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 1U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1fff7U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffffff8U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 3U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1ffdfU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0x20U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                << 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                          << 3U)) | 
                              (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                << 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                          << 2U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1ffbfU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xffffffc0U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 6U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                               << 1U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1fbffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffffc00U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xaU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                 << 8U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1f7ffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0x800U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                 << 0xbU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                             << 7U)) 
                               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                   << 0xbU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                               << 6U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1dfffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xffffe000U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xdU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                 << 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x17fffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xffff8000U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xfU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                 << 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1fffdU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffffffeU & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 1U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1fff7U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffffff8U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 3U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1ffdfU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0x20U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                << 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                          << 3U)) | 
                              (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                << 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                          << 2U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1ffbfU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xffffffc0U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                     << 6U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                               << 1U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1fbffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffffc00U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xaU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                 << 8U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1f7ffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0x800U & ((((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                 << 0xbU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                             << 7U)) 
                               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                   << 0xbU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                               << 6U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1dfffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xffffe000U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xdU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                 << 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x17fffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xffff8000U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0xfU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                 << 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1feffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | ((0xffffff00U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                      << 8U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                << 1U))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col)) 
                        << 8U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1feffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | ((0xffffff00U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                      << 8U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                << 1U))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col)) 
                        << 8U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1feffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | ((0xffffff00U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                      << 8U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                << 1U))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col)) 
                        << 8U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w356 
        = ((1U == (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                         >> 4U))) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v2) 
                                     & (0U == (0x70U 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w385 
        = ((3U == (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                         >> 4U))) | (IData)(((0U == 
                                              (0x70U 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w419 
        = ((5U == (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                         >> 4U))) | (IData)(((0U == 
                                              (0x70U 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w422 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
                  ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2) 
                     >> 7U) : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)
             ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2)
             : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w394 
        = ((4U == (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                         >> 4U))) | (IData)(((0U == 
                                              (0x70U 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w415 
        = (IData)(((0U == (0x70U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w424 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v2) 
           & (0U == (0x70U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))));
    md_board__DOT__ym__DOT__vdp__DOT__w1101 = (1U & 
                                               (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t1 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs1__set) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs1__rst)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t1)));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t27 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w198) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w197)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t27)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t24 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w143) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w176)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t24)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t23 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w176)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t23)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t25 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w176)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t25)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t21 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w183)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t21)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl26__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl26__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_addr_3__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl20__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl20__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w204) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l1 = 0U;
    } else if (vlSelf->__VdfgRegularize_hd87f99a1_0_8) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l1 
            = (7U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_mux 
                     >> 0xeU));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t18 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w145) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w144)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18_n 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w144) 
                 | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w145)) 
                    & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t15 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w173) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w172)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15_n 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w172) 
                 | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w173)) 
                    & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl18__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl222__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr218__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl194__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl194__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w784;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w480;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w972) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w972) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w972) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w972));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr431__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr367__DOT__v2) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr315__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr352__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr411__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1fffbU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffffffcU & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 2U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                << 1U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 2U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1ffefU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffffff0U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 4U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                << 2U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 4U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1ff7fU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xffffff80U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 7U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                << 4U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 7U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                  << 1U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1fdffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffffe00U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 9U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                << 5U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 9U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                  << 8U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1efffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xfffff000U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 0xcU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                  << 7U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 0xcU) & 
                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                        << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1bfffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0xffffc000U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 0xeU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                  << 8U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 0xeU) & 
                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                        << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1fffbU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffffffcU & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 2U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                << 1U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 2U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1ffefU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffffff0U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 4U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                << 2U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 4U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1ff7fU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xffffff80U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 7U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                << 4U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 7U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                  << 1U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1fdffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffffe00U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 9U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                << 5U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 9U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                  << 8U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1efffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xfffff000U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 0xcU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                  << 7U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 0xcU) & 
                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                        << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1bfffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0xffffc000U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 0xeU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                  << 8U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 0xeU) & 
                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                        << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1fffbU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffffffcU & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 2U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                << 1U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 2U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1ffefU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffffff0U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 4U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                << 2U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 4U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1ff7fU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xffffff80U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 7U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                << 4U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                        << 7U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                  << 1U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1fdffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffffe00U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 9U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                << 5U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 9U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                  << 8U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1efffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xfffff000U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 0xcU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                  << 7U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 0xcU) & 
                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                        << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1bfffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0xffffc000U & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                      << 0xeU) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                  << 8U)) 
                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                        << 0xeU) & 
                                       ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                        << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0x1fffeU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (1U & (((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                              | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col)) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                  >> 1U))) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[0U] 
        = ((0xffffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [0U]) | (0x10000U & ((((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                     << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                  << 9U)) 
                                   | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                       << 0xaU))) | 
                                  (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                    << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                 << 9U))) 
                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col) 
                                                  << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0x1fffeU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (1U & (((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                              | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col)) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                  >> 1U))) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[1U] 
        = ((0xffffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [1U]) | (0x10000U & ((((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                     << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                  << 9U)) 
                                   | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                       << 0xaU))) | 
                                  (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                    << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                 << 9U))) 
                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col) 
                                                  << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0x1fffeU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (1U & (((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                              | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col)) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                  >> 1U))) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103[2U] 
        = ((0xffffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
            [2U]) | (0x10000U & ((((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w1101) 
                                     << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                  << 9U)) 
                                   | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                       << 0xaU))) | 
                                  (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                    << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                 << 9U))) 
                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2) 
                                     << 0x10U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col) 
                                                  << 9U)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t18 = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t18;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t15 = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t15;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105) 
                << 1U) | (IData)(vlSelf->vdp_intfield))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w522 
        = (0x7ffU & ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                       & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v2)))
                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl185__DOT__mem)
                       : ((0x700U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl184__DOT__mem)) 
                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v2)
                              ? (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl184__DOT__mem))
                              : 0U))) + (0x1ffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w355))));
    md_board__DOT__ym__DOT__vdp__DOT__w526 = (0x7fU 
                                              & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106)
                                                  ? 
                                                 ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w522) 
                                                  >> 4U)
                                                  : 
                                                 ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w522) 
                                                  >> 3U)));
    vlSelf->V_R = (((2U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                     [0U]) ? 0x1bU : 0U) | (((4U & 
                                              vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                              [0U])
                                              ? 0x31U
                                              : 0U) 
                                            | (((8U 
                                                 & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                 [0U])
                                                 ? 0x43U
                                                 : 0U) 
                                               | (((0x10U 
                                                    & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                    [0U])
                                                    ? 0x54U
                                                    : 0U) 
                                                  | (((0x20U 
                                                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                       [0U])
                                                       ? 0x5fU
                                                       : 0U) 
                                                     | (((0x40U 
                                                          & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                          [0U])
                                                          ? 0x64U
                                                          : 0U) 
                                                        | (((0x80U 
                                                             & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                             [0U])
                                                             ? 0x72U
                                                             : 0U) 
                                                           | (((0x100U 
                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                [0U])
                                                                ? 0x80U
                                                                : 0U) 
                                                              | (((0x200U 
                                                                   & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                   [0U])
                                                                   ? 0x8eU
                                                                   : 0U) 
                                                                 | (((0x400U 
                                                                      & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                      [0U])
                                                                      ? 0x9cU
                                                                      : 0U) 
                                                                    | (((0x800U 
                                                                         & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                         [0U])
                                                                         ? 0xa1U
                                                                         : 0U) 
                                                                       | (((0x1000U 
                                                                            & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                            [0U])
                                                                            ? 0xacU
                                                                            : 0U) 
                                                                          | (((0x2000U 
                                                                               & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                               [0U])
                                                                               ? 0xbcU
                                                                               : 0U) 
                                                                             | (((0x4000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [0U])
                                                                                 ? 0xceU
                                                                                 : 0U) 
                                                                                | (((0x8000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [0U])
                                                                                 ? 0xe4U
                                                                                 : 0U) 
                                                                                | ((0x10000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [0U])
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))))))));
    vlSelf->V_G = (((2U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                     [1U]) ? 0x1bU : 0U) | (((4U & 
                                              vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                              [1U])
                                              ? 0x31U
                                              : 0U) 
                                            | (((8U 
                                                 & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                 [1U])
                                                 ? 0x43U
                                                 : 0U) 
                                               | (((0x10U 
                                                    & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                    [1U])
                                                    ? 0x54U
                                                    : 0U) 
                                                  | (((0x20U 
                                                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                       [1U])
                                                       ? 0x5fU
                                                       : 0U) 
                                                     | (((0x40U 
                                                          & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                          [1U])
                                                          ? 0x64U
                                                          : 0U) 
                                                        | (((0x80U 
                                                             & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                             [1U])
                                                             ? 0x72U
                                                             : 0U) 
                                                           | (((0x100U 
                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                [1U])
                                                                ? 0x80U
                                                                : 0U) 
                                                              | (((0x200U 
                                                                   & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                   [1U])
                                                                   ? 0x8eU
                                                                   : 0U) 
                                                                 | (((0x400U 
                                                                      & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                      [1U])
                                                                      ? 0x9cU
                                                                      : 0U) 
                                                                    | (((0x800U 
                                                                         & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                         [1U])
                                                                         ? 0xa1U
                                                                         : 0U) 
                                                                       | (((0x1000U 
                                                                            & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                            [1U])
                                                                            ? 0xacU
                                                                            : 0U) 
                                                                          | (((0x2000U 
                                                                               & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                               [1U])
                                                                               ? 0xbcU
                                                                               : 0U) 
                                                                             | (((0x4000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [1U])
                                                                                 ? 0xceU
                                                                                 : 0U) 
                                                                                | (((0x8000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [1U])
                                                                                 ? 0xe4U
                                                                                 : 0U) 
                                                                                | ((0x10000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [1U])
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))))))));
    vlSelf->V_B = (((2U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                     [2U]) ? 0x1bU : 0U) | (((4U & 
                                              vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                              [2U])
                                              ? 0x31U
                                              : 0U) 
                                            | (((8U 
                                                 & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                 [2U])
                                                 ? 0x43U
                                                 : 0U) 
                                               | (((0x10U 
                                                    & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                    [2U])
                                                    ? 0x54U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                       [2U])
                                                       ? 0x64U
                                                       : 0U) 
                                                     | (((0x20U 
                                                          & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                          [2U])
                                                          ? 0x6dU
                                                          : 0U) 
                                                        | (((0x80U 
                                                             & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                             [2U])
                                                             ? 0x72U
                                                             : 0U) 
                                                           | (((0x100U 
                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                [2U])
                                                                ? 0x80U
                                                                : 0U) 
                                                              | (((0x200U 
                                                                   & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                   [2U])
                                                                   ? 0x8eU
                                                                   : 0U) 
                                                                 | (((0x400U 
                                                                      & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                      [2U])
                                                                      ? 0x9cU
                                                                      : 0U) 
                                                                    | (((0x800U 
                                                                         & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                         [2U])
                                                                         ? 0xa1U
                                                                         : 0U) 
                                                                       | (((0x1000U 
                                                                            & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                            [2U])
                                                                            ? 0xacU
                                                                            : 0U) 
                                                                          | (((0x2000U 
                                                                               & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                               [2U])
                                                                               ? 0xbcU
                                                                               : 0U) 
                                                                             | (((0x4000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [2U])
                                                                                 ? 0xceU
                                                                                 : 0U) 
                                                                                | (((0x8000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [2U])
                                                                                 ? 0xe4U
                                                                                 : 0U) 
                                                                                | ((0x10000U 
                                                                                & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1103
                                                                                [2U])
                                                                                 ? 0xffU
                                                                                 : 0U))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt371__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr365__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w568 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w149 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t21) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w561 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w568)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_237 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vsz__DOT__mem) 
           & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w526) 
              >> 5U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_323 
        = ((0x1cU & ((((IData)(md_board__DOT__ym__DOT__vdp__DOT__w526) 
                       >> 2U) + (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                                       & ((7U == (7U 
                                                  & ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w526) 
                                                     >> 2U))) 
                                          | ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w526) 
                                             >> 5U))))) 
                     << 2U)) | (3U & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w526)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w643 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 7U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w684 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr353__DOT__v2));
    vlSelf->__VdfgRegularize_hd87f99a1_0_96 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                << 5U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))));
    md_board__DOT__ym__DOT__vdp__DOT__w256 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2)) 
                                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v2));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_34 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w256) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2));
    md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_423 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2)) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT__w256));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w257 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2)) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_34));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w259 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_34) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w258 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2)) 
           & (IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_423));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w260 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_423) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__15(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__15\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__m68k__DOT__w41;
    md_board__DOT__m68k__DOT__w41 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT__w42;
    md_board__DOT__m68k__DOT__w42 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_11;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_11 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_406;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_406 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_411;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_411 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w31;
    md_board__DOT__z80__DOT__w31 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w44_n;
    md_board__DOT__z80__DOT__w44_n = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs114__DOT__q;
    md_board__DOT__z80__DOT__rs114__DOT__q = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v0;
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v1;
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v2;
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v3;
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v3 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v0;
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v1;
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v2;
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v3;
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v3 = 0;
    SData/*15:0*/ __Vdly__md_board__DOT__m68k__DOT__r3;
    __Vdly__md_board__DOT__m68k__DOT__r3 = 0;
    SData/*15:0*/ __Vdly__md_board__DOT__m68k__DOT__r2;
    __Vdly__md_board__DOT__m68k__DOT__r2 = 0;
    // Body
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v2 = 0U;
    __Vdly__md_board__DOT__m68k__DOT__r3 = vlSelf->md_board__DOT__m68k__DOT__r3;
    __Vdly__md_board__DOT__m68k__DOT__r2 = vlSelf->md_board__DOT__m68k__DOT__r2;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w40 = vlSelf->md_board__DOT__z80__DOT__w40;
    vlSelf->md_board__DOT__z80__DOT__w58 = (1U & (~ 
                                                  ((IData)(vlSelf->md_board__DOT__z80__DOT__w58_i) 
                                                   & ((IData)(vlSelf->md_board__DOT__ZBR) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w58_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w58) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__ZBR)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    md_board__DOT__z80__DOT__rs114__DOT__q = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w114_i) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_239)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w114_i = (1U & 
                                               (~ ((IData)(md_board__DOT__z80__DOT__rs114__DOT__q) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_239) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w1_i = (1U & (~ 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     & ((IData)(vlSelf->md_board__DOT__z80__DOT__w3) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w41))) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__rs1__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs1__DOT__nq = 
        (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                      & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                         | (IData)(vlSelf->md_board__DOT__z80__DOT__w201)))) 
                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w1_i))));
    md_board__DOT__z80__DOT__w31 = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs22__rst) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w31_i))));
    vlSelf->md_board__DOT__z80__DOT__w31_i = (1U & 
                                              (~ ((
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w24) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs22__set)) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__l8)) 
                                                  | (IData)(md_board__DOT__z80__DOT__w31))));
    md_board__DOT__z80__DOT__w44_n = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l15))) 
                                               | (IData)(vlSelf->md_board__DOT__z80__DOT__w44_i))));
    vlSelf->md_board__DOT__z80__DOT__w44_i = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__z80__DOT__l14) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0))) 
                                                  | (IData)(md_board__DOT__z80__DOT__w44_n))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w372 
        = ((2U == (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                         >> 4U))) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v2) 
                                     & (0U == (0x70U 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w393 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v2) 
           & (0U == (0x70U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w402 
        = (IData)(((0U == (0x70U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v2)));
    if (vlSelf->md_board__DOT__m68k__DOT__w450) {
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v0 = 1U;
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v0 = 1U;
        vlSelf->md_board__DOT__m68k__DOT__w458 = vlSelf->md_board__DOT__m68k__DOT__w989;
    } else if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v1 = 1U;
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v1 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)))) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w442__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w442
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v2 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w443__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w443
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v2 = 1U;
        vlSelf->md_board__DOT__m68k__DOT__w756 = vlSelf->md_board__DOT__m68k__DOT__w755;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w101) {
        __Vdly__md_board__DOT__m68k__DOT__r3 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r3) 
                                                 & (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                    [2U])) 
                                                | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                [3U]);
    } else if (vlSelf->md_board__DOT__m68k__DOT__w102) {
        __Vdly__md_board__DOT__m68k__DOT__r3 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r3) 
                                                 & (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                    [0U])) 
                                                | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                [1U]);
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w92) {
        __Vdly__md_board__DOT__m68k__DOT__r2 = vlSelf->md_board__DOT__m68k__DOT__w109;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w87) {
        __Vdly__md_board__DOT__m68k__DOT__r2 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r2) 
                                                 & (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                    [2U])) 
                                                | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                [3U]);
    } else if (vlSelf->md_board__DOT__m68k__DOT__w86) {
        __Vdly__md_board__DOT__m68k__DOT__r2 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r2) 
                                                 & (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                    [0U])) 
                                                | vlSelf->md_board__DOT__m68k__DOT__b1_s_pulldown_comb
                                                [1U]);
    }
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v0 
        = vlSelf->md_board__DOT__m68k__DOT__b1[0U];
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v1 
        = vlSelf->md_board__DOT__m68k__DOT__b1[1U];
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v2 
        = vlSelf->md_board__DOT__m68k__DOT__b1[2U];
    __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v3 
        = vlSelf->md_board__DOT__m68k__DOT__b1[3U];
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v0 
        = vlSelf->md_board__DOT__m68k__DOT__b3[0U];
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v1 
        = vlSelf->md_board__DOT__m68k__DOT__b3[1U];
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v2 
        = vlSelf->md_board__DOT__m68k__DOT__b3[2U];
    __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v3 
        = vlSelf->md_board__DOT__m68k__DOT__b3[3U];
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w40 = 
        (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w202) 
                  | ((IData)(vlSelf->md_board__DOT__z80__DOT__w40_i) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w39))))));
    if (vlSelf->md_board__DOT__m68k__DOT__c4) {
        vlSelf->md_board__DOT__m68k__DOT__w545 = (1U 
                                                  & (IData)(
                                                            (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                             >> 0x2bU)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w903) {
        vlSelf->md_board__DOT__m68k__DOT__w971 = (1U 
                                                  & VL_REDXOR_16(
                                                                 (0x180U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w954)));
        vlSelf->md_board__DOT__m68k__DOT__w977 = (1U 
                                                  & VL_REDXOR_32(
                                                                 (0x60000U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w954)));
        vlSelf->md_board__DOT__m68k__DOT__w978 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                      >> 0x12U)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__17__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__16__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__codebus_mem = vlSelf->md_board__DOT__m68k__DOT__codebus;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl93__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl93__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl90__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl90__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl416__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl413__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr409__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr406__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr405__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr404__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__w539) {
        vlSelf->md_board__DOT__m68k__DOT__w549 = vlSelf->md_board__DOT__m68k__DOT__w468;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w449) {
        vlSelf->md_board__DOT__m68k__DOT__w451 = vlSelf->md_board__DOT__m68k__DOT__w403;
    }
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr408__DOT__sr_in);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__18__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0x12U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr407__DOT__sr_in);
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t28) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w263) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__sum) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr373__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2)) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w875) {
        vlSelf->md_board__DOT__m68k__DOT__w944 = (0x1fU 
                                                  & vlSelf->md_board__DOT__m68k__DOT__b3
                                                  [2U]);
        vlSelf->md_board__DOT__m68k__DOT__w945 = vlSelf->md_board__DOT__m68k__DOT__w846;
    }
    vlSelf->md_board__DOT__z80__DOT__w392 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w391) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_220))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__l34 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)));
        vlSelf->md_board__DOT__z80__DOT__l58 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_152) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193))));
        vlSelf->md_board__DOT__z80__DOT__l13 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl13__inp;
        vlSelf->md_board__DOT__z80__DOT__l8 = (1U & 
                                               (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w202) 
                                                   | ((IData)(vlSelf->md_board__DOT__z80__DOT__w201) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                         & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
                                                            | (IData)(vlSelf->md_board__DOT__z80__DOT__w41)))))));
        vlSelf->md_board__DOT__z80__DOT__l15 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl13__inp)));
        vlSelf->md_board__DOT__z80__DOT__l14 = vlSelf->md_board__DOT__z80__DOT__w113;
        vlSelf->md_board__DOT__z80__DOT__w391 = (1U 
                                                 & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                     & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                                                         & (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                            >> 5U)) 
                                                        | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                           & (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_222))))) 
                                                    | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95) 
                                                        & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_128)) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_141))));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c5) {
        vlSelf->md_board__DOT__m68k__DOT__w357_0 = vlSelf->md_board__DOT__m68k__DOT__w354;
        vlSelf->md_board__DOT__m68k__DOT__w358_0 = 
            (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w354)) 
                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w463))));
    } else if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w357_0 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w358_0 = 0U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w355) {
        vlSelf->md_board__DOT__m68k__DOT__w357_0 = vlSelf->md_board__DOT__m68k__DOT__w357_1;
        vlSelf->md_board__DOT__m68k__DOT__w358_0 = vlSelf->md_board__DOT__m68k__DOT__w358_1;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w768 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w702)));
        vlSelf->md_board__DOT__m68k__DOT__w770 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w704)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w448 = vlSelf->md_board__DOT__m68k__DOT__w475;
        vlSelf->md_board__DOT__m68k__DOT__w577 = vlSelf->md_board__DOT__m68k__DOT__w576;
        vlSelf->md_board__DOT__m68k__DOT__w446 = vlSelf->md_board__DOT__m68k__DOT__w477;
        vlSelf->md_board__DOT__m68k__DOT__w504 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       >> 9U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w503 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       >> 8U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w501 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       >> 5U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w502 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       >> 4U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w500 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       >> 2U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w495 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       >> 3U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w716 = (1U 
                                                  & (~ (IData)(
                                                               (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                >> 0x2fU))));
        vlSelf->md_board__DOT__m68k__DOT__w715 = (1U 
                                                  & (~ (IData)(
                                                               (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                >> 0x30U))));
        vlSelf->md_board__DOT__m68k__DOT__w714 = (1U 
                                                  & (~ (IData)(
                                                               (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                >> 0x31U))));
        vlSelf->md_board__DOT__m68k__DOT__w598 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0xe0000000U 
                                                           & vlSelf->md_board__DOT__m68k__DOT__ird_pla2)));
        vlSelf->md_board__DOT__m68k__DOT__w929 = (1U 
                                                  & (~ (IData)(
                                                               (vlSelf->md_board__DOT__m68k__DOT__ird_pla1 
                                                                >> 0x2fU))));
        vlSelf->md_board__DOT__m68k__DOT__w710 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w569) 
                                                      >> 8U)));
        vlSelf->md_board__DOT__m68k__DOT__w618 = vlSelf->md_board__DOT__m68k__DOT__w568;
        vlSelf->md_board__DOT__m68k__DOT__w846 = vlSelf->md_board__DOT__m68k__DOT__w849;
        vlSelf->md_board__DOT__m68k__DOT__w702 = vlSelf->md_board__DOT__m68k__DOT__w690;
        vlSelf->md_board__DOT__m68k__DOT__w704 = vlSelf->md_board__DOT__m68k__DOT__w576;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        if ((8U & vlSelf->md_board__DOT__m68k__DOT__w597)) {
            vlSelf->md_board__DOT__m68k__DOT__w605 = 0U;
        } else if ((4U & vlSelf->md_board__DOT__m68k__DOT__w597)) {
            vlSelf->md_board__DOT__m68k__DOT__w605 
                = vlSelf->md_board__DOT__m68k__DOT__w606;
        }
        vlSelf->md_board__DOT__m68k__DOT__w812 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w755 = 1U;
    } else {
        if (vlSelf->md_board__DOT__m68k__DOT__c2) {
            vlSelf->md_board__DOT__m68k__DOT__w812 = 1U;
        }
        if (vlSelf->md_board__DOT__m68k__DOT__c1) {
            vlSelf->md_board__DOT__m68k__DOT__w755 = 0U;
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c2) {
        vlSelf->md_board__DOT__m68k__DOT__w741 = (1U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__r8));
        vlSelf->md_board__DOT__m68k__DOT__w740 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__r8) 
                                                     >> 0xfU));
        vlSelf->md_board__DOT__m68k__DOT__c6 = 1U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__c6 = 0U;
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_396 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w480)) 
                 & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w481))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_399 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w481)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w480));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w460)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w461));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_406 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w454)) 
                 & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w455))));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_11 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w69) 
                    | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w70) 
                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w75)))));
    vlSelf->md_board__DOT__m68k__DOT__r3 = __Vdly__md_board__DOT__m68k__DOT__r3;
    vlSelf->md_board__DOT__m68k__DOT__r2 = __Vdly__md_board__DOT__m68k__DOT__r2;
    vlSelf->md_board__DOT__m68k__DOT__b1_mem[0U] = __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v0;
    vlSelf->md_board__DOT__m68k__DOT__b1_mem[1U] = __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v1;
    vlSelf->md_board__DOT__m68k__DOT__b1_mem[2U] = __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v2;
    vlSelf->md_board__DOT__m68k__DOT__b1_mem[3U] = __VdlyVal__md_board__DOT__m68k__DOT__b1_mem__v3;
    vlSelf->md_board__DOT__m68k__DOT__b3_mem[0U] = __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v0;
    vlSelf->md_board__DOT__m68k__DOT__b3_mem[1U] = __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v1;
    vlSelf->md_board__DOT__m68k__DOT__b3_mem[2U] = __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v2;
    vlSelf->md_board__DOT__m68k__DOT__b3_mem[3U] = __VdlyVal__md_board__DOT__m68k__DOT__b3_mem__v3;
    vlSelf->md_board__DOT__m68k__DOT__r8 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__r8;
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_397 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w479) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_396));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_400 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w479) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_399));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_398 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w479)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_399));
    md_board__DOT__m68k__DOT__w42 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w68)) 
                                     & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_11));
    md_board__DOT__m68k__DOT__w41 = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_11) 
                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w68));
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm5__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm5__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm5__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm5__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
                        & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2)) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2)))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite0) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3e__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3e__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite0)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3e__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus) 
                         >> 4U));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_2) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_5) 
                      | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_1)));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3e__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3e__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__z80__DOT__w40_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w40) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__w39_i)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_80 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w451)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w452));
    vlSelf->md_board__DOT__m68k__DOT__w463 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w451)) 
                                              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_406));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_250 
        = (0xffffU & ((1U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w944) 
                                 >> 3U)) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w945)))
                       ? ((IData)(1U) << (7U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w944)))
                       : ((IData)(0x100U) << (7U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w944)))));
    vlSelf->md_board__DOT__m68k__DOT__w106 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__c6) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w105));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_444 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w67)) 
           & (IData)(md_board__DOT__m68k__DOT__w42));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_5 
        = ((IData)(md_board__DOT__m68k__DOT__w42) & (IData)(vlSelf->md_board__DOT__m68k__DOT__w67));
    vlSelf->md_board__DOT__m68k__DOT__v1_5 = ((IData)(md_board__DOT__m68k__DOT__w41) 
                                              & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w67)) 
                                                 & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w66))));
    vlSelf->md_board__DOT__m68k__DOT__v1_6 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w67)) 
                                              & ((IData)(md_board__DOT__m68k__DOT__w41) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w66)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_7 
        = ((IData)(md_board__DOT__m68k__DOT__w41) & (IData)(vlSelf->md_board__DOT__m68k__DOT__w67));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_80) 
           & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w453) 
              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_406)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_82 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w463) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w460));
    vlSelf->md_board__DOT__m68k__DOT__v1_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w66)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_444));
    vlSelf->md_board__DOT__m68k__DOT__v1_2 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_444) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w66));
    vlSelf->md_board__DOT__m68k__DOT__v1_3 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w66)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_5));
    vlSelf->md_board__DOT__m68k__DOT__v1_4 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_5) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w66));
    vlSelf->md_board__DOT__m68k__DOT__v1_7 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w66)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_7));
    vlSelf->md_board__DOT__m68k__DOT__v1_8 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_7) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w66));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_412 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w457)) 
              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w456) 
                 & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_413 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414) 
           & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w457) 
              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_407 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w460)) 
              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w461))));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_411 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_414) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w456)) 
              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w457))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w379 
        = (IData)(((0U == (0x70U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))) 
                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem)
                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr124__DOT__v2)
                       : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2)))));
    vlSelf->md_board__DOT__m68k__DOT__w857 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w846)) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__c6));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_9 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__v1_8) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w65));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_402 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_407) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_82));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_410 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w458)) 
           & ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_411) 
              & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_409 
        = ((IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_411) 
           & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w458) 
              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w459) 
                 & (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_408))));
    vlSelf->md_board__DOT__m68k__DOT__w468 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_413) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_412) 
                                                 | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_410) 
                                                    | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_409))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_403 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w468) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_402));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__16(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__16\n"); );
    // Init
    SData/*15:0*/ __Vdly__md_board__DOT__m68k__DOT__r4;
    __Vdly__md_board__DOT__m68k__DOT__r4 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time;
    __Vdly__md_board__DOT__m68k__DOT__r4 = vlSelf->md_board__DOT__m68k__DOT__r4;
    vlSelf->md_board__DOT__z80__DOT__w361_n = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__l49) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w362)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w361_i))));
    vlSelf->md_board__DOT__z80__DOT__w361_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__l49_i) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w362)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w361_n))));
    vlSelf->md_board__DOT__m68k__DOT__r5 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__r5;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel1 
        = ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0 
        = ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_6 
        = ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
           & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o 
        = ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2)) 
           | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr2__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                    >> 1U)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_toggle 
        = (IData)(((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2) 
                       >> 1U)) & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2) 
                                  >> 1U)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_433 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                 | ((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address 
                     >> 1U) | (IData)(vlSelf->md_board__DOT___M3))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_m1 
        = ((~ (IData)(vlSelf->md_board__DOT___M3)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__m1));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_lds 
        = ((~ (IData)(vlSelf->md_board__DOT__LDS)) 
           & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_rd 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ZRD)) 
                 & (~ (IData)(vlSelf->md_board__DOT___M3))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130 
        = (1U & ((IData)(vlSelf->md_board__DOT___M3)
                  ? (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address 
                     >> 1U) : vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address));
    if (((~ (IData)((0x4800U != (0x4800U & vlSelf->md_board__DOT__m68k__DOT__w529[0U])))) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->md_board__DOT__m68k__DOT__w964 = vlSelf->md_board__DOT__m68k__DOT__w962;
    } else if (((~ (IData)((0x800U != (0x4800U & vlSelf->md_board__DOT__m68k__DOT__w529[0U])))) 
                & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->md_board__DOT__m68k__DOT__w964 = (0xffffU 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__b3
                                                     [3U]));
    } else if (((~ (IData)((0x4000U != (0x4800U & vlSelf->md_board__DOT__m68k__DOT__w529[0U])))) 
                & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->md_board__DOT__m68k__DOT__w964 = (0xffffU 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__b3
                                                     [1U]));
    }
    vlSelf->md_board__DOT__VD = vlSelf->__Vdly__md_board__DOT__VD;
    if (vlSelf->md_board__DOT__m68k__DOT__w92) {
        __Vdly__md_board__DOT__m68k__DOT__r4 = vlSelf->md_board__DOT__m68k__DOT__w147;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w155) {
        __Vdly__md_board__DOT__m68k__DOT__r4 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r4) 
                                                 & (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                                                    [2U])) 
                                                | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                                                [3U]);
    } else if (vlSelf->md_board__DOT__m68k__DOT__w156) {
        __Vdly__md_board__DOT__m68k__DOT__r4 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r4) 
                                                 & (~ 
                                                    vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                                                    [0U])) 
                                                | vlSelf->md_board__DOT__m68k__DOT__b2_s_pulldown_comb
                                                [1U]);
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_not_max_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_not_max_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45_mem 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_rst)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__sum) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__s_5__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_4__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_4__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_4__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_3__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_3__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_3__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_2__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_1__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_2__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_fb__DOT__sr_1__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__19__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 0x13U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__freq_multi_sum);
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_not_max_sr__DOT__v1 
            = (0x1fU != (0x1fU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__rate_sum_clamp) 
                                  >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_a_sl__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2) 
                      << 1U)) | (1U & (~ (((3U == (7U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg))) 
                                           | (5U == 
                                              (7U & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg)))) 
                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__kon) 
                                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg) 
                                                >> 3U))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v2) 
                      << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__ssgeg) 
                                       >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_25_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x25U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_25_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x2aU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x21U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__0__KET____DOT__mem)) 
                         & ((0x2cU == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus)) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                           & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en))))));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_cnt__DOT__sum) 
                  >> 4U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_ac__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_20));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_a4__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_19) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 7U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 5U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ZRES) 
               & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_63));
    }
    vlSelf->md_board__DOT__IORQ = (((IData)(vlSelf->md_board__DOT__z80__DOT__w22_i) 
                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w62)) 
                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w22_i));
    if (vlSelf->md_board__DOT__m68k__DOT__w80) {
        vlSelf->md_board__DOT__m68k__DOT__w107 = (0xffffU 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__b1
                                                     [3U]));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w82) {
        vlSelf->md_board__DOT__m68k__DOT__w107 = (0xffffU 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__b1
                                                     [1U]));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w84) {
        vlSelf->md_board__DOT__m68k__DOT__w107 = vlSelf->md_board__DOT__m68k__DOT__w109;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_status) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_o_r 
            = ((0x80U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__busy_sr__DOT__v2)) 
                         << 7U)) | ((2U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem)))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_debug) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_o_r 
            = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2)
                         ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__pg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                             << 7U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)
                                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__dbg_read__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2)
                                          : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__inc_test_sr__DOT__v2)) 
                                        << 6U) | (0x3fU 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT____VdfgRegularize_h5bb4bc08_0_5) 
                                                     >> 8U))))
                         : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT____VdfgRegularize_h5bb4bc08_0_5)));
    }
    if (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_status) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_debug))) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time = 0x2625a00U;
    } else if ((0U != vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time)) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time 
            = (0x3ffffffU & (vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__status_time 
                             - (IData)(1U)));
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_o_r = 0U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w613 = vlSelf->md_board__DOT__m68k__DOT__w637;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_33 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT____VdfgRegularize_he2ef29e7_0_6) 
           | ((1U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_high_out)) 
              & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm__DOT__cnt_low_out))));
    vlSelf->md_board__DOT__BGACK = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                    & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t3)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_toggle) 
                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2)) 
                       >> 1U))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w328 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l2)) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff60__DOT__l2))) 
                    | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff58__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_uds 
        = ((~ (IData)(vlSelf->md_board__DOT__UDS)) 
           & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as 
        = ((~ (IData)(vlSelf->md_board__DOT__AS)) & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__m68k__DOT__r4 = __Vdly__md_board__DOT__m68k__DOT__r4;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w147 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_uds) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_lds));
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode_out_m[0U];
        vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode_out_m[1U];
        vlSelf->md_board__DOT__m68k__DOT__w529[2U] 
            = vlSelf->md_board__DOT__m68k__DOT__ncode_out_m[2U];
    } else if (vlSelf->md_board__DOT__m68k__DOT__c5) {
        vlSelf->md_board__DOT__m68k__DOT__i = 0U;
        while (VL_GTS_III(32, 0x44U, vlSelf->md_board__DOT__m68k__DOT__i)) {
            vlSelf->md_board__DOT__m68k__DOT____Vlvbound_h832f7f4b__0 = 0U;
            if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->md_board__DOT__m68k__DOT__i)))) {
                vlSelf->md_board__DOT__m68k__DOT__w529[(3U 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__i 
                                                           >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->md_board__DOT__m68k__DOT__i))) 
                        & vlSelf->md_board__DOT__m68k__DOT__w529[
                        (3U & (vlSelf->md_board__DOT__m68k__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->md_board__DOT__m68k__DOT____Vlvbound_h832f7f4b__0) 
                                            << (0x1fU 
                                                & vlSelf->md_board__DOT__m68k__DOT__i)));
            }
            vlSelf->md_board__DOT__m68k__DOT__i = ((IData)(1U) 
                                                   + vlSelf->md_board__DOT__m68k__DOT__i);
        }
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w124 
        = ((IData)(vlSelf->md_board__DOT___M3) & ((0x600000U 
                                                   == 
                                                   (0x738070U 
                                                    & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as) 
                                                     & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem)) 
                                                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t13)))));
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l2 = 1U;
    } else if (vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w10) {
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w10) {
        if (vlSelf->ext_reset) {
            vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff1__DOT__l2;
    }
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff1__DOT__l1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_3)))) {
            vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff1__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_3) {
            vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff1__DOT__l1 
                = ((0x5345U == (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl1__DOT__mem)) 
                   & (0x4741U == (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl2__DOT__mem)));
        }
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_iorq 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__IORQ)) 
                 & (~ (IData)(vlSelf->md_board__DOT___M3))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c2_sr__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__okon_sr2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_toggle_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__fsm_sel12_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_enable_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_ctrl__DOT__reg_addr_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2c_ctrl__DOT__reg_addr_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_430 
        = (IData)(((0U == (0xcU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w147)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_431 
        = ((IData)(vlSelf->md_board__DOT__RW) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w124));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w47 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_m1) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_iorq));
    vlSelf->md_board__DOT__m68k__DOT__irdbus = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w267)
                                                  ? 0U
                                                  : 
                                                 (((~ 
                                                    ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                     >> 0xfU)) 
                                                   << 0x1fU) 
                                                  | ((0x40000000U 
                                                      & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                         << 0xfU)) 
                                                     | ((0x20000000U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                              >> 0xeU)) 
                                                            << 0x1dU)) 
                                                        | ((0x10000000U 
                                                            & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                               << 0xeU)) 
                                                           | ((0x8000000U 
                                                               & ((~ 
                                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                    >> 0xdU)) 
                                                                  << 0x1bU)) 
                                                              | ((0x4000000U 
                                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                     << 0xdU)) 
                                                                 | ((0x2000000U 
                                                                     & ((~ 
                                                                         ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                          >> 0xcU)) 
                                                                        << 0x19U)) 
                                                                    | ((0x1000000U 
                                                                        & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                           << 0xcU)) 
                                                                       | ((0x800000U 
                                                                           & ((~ 
                                                                               ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 0xbU)) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 0xbU)) 
                                                                             | ((0x200000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 0xaU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 0xaU)) 
                                                                                | ((0x80000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 9U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 9U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 8U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 8U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 7U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 6U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 5U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 4U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 2U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                >> 1U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w538) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w538)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w538)))))))))))))))))))))))))))))))))) 
                                                | (((1U 
                                                     & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w321)) 
                                                        | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_193)))
                                                     ? 0U
                                                     : 
                                                    ((0x80000000U 
                                                      & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                         << 6U)) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                            << 2U)) 
                                                        | ((0x20000000U 
                                                            & ((~ 
                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                 >> 0x1fU)) 
                                                               << 0x1dU)) 
                                                           | ((0x10000000U 
                                                               & ((~ 
                                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                    >> 2U)) 
                                                                  << 0x1cU)) 
                                                              | ((0x8000000U 
                                                                  & ((~ 
                                                                      (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                       >> 5U)) 
                                                                     << 0x1bU)) 
                                                                 | ((0x4000000U 
                                                                     & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                        << 0x12U)) 
                                                                    | ((0x2000000U 
                                                                        & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                           << 0xeU)) 
                                                                       | ((0x1000000U 
                                                                           & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                              << 0xaU)) 
                                                                          | ((0x800000U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 0x16U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 5U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 0x11U)) 
                                                                                | ((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__w529[1U]) 
                                                                                | ((0x80000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 7U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 2U)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x1dU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[2U] 
                                                                                << 7U)) 
                                                                                | (0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0xdU))))))))))))))))))))))))) 
                                                   | (((1U 
                                                        & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w320) 
                                                           | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                              | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w321)))))
                                                        ? 0U
                                                        : 
                                                       ((0x80000000U 
                                                         & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                            << 7U)) 
                                                        | ((0x40000000U 
                                                            & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                               << 3U)) 
                                                           | ((0x20000000U 
                                                               & ((~ 
                                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                    >> 0x1eU)) 
                                                                  << 0x1dU)) 
                                                              | ((0x10000000U 
                                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                     << 0x1bU)) 
                                                                 | ((0x8000000U 
                                                                     & ((~ 
                                                                         (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                          >> 4U)) 
                                                                        << 0x1bU)) 
                                                                    | ((0x4000000U 
                                                                        & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                           << 0x13U)) 
                                                                       | ((0x2000000U 
                                                                           & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x1000000U 
                                                                              & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 0xbU)) 
                                                                             | ((0x800000U 
                                                                                & ((~ 
                                                                                vlSelf->md_board__DOT__m68k__DOT__w529[0U]) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x10U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 1U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 9U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x1cU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[2U] 
                                                                                << 8U)) 
                                                                                | (0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0xcU))))))))))))))))))))))))) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_193) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT__w321))
                                                          ? 0U
                                                          : 
                                                         ((0x80000000U 
                                                           & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                              << 8U)) 
                                                          | ((0x40000000U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                 << 4U)) 
                                                             | ((0x20000000U 
                                                                 & ((~ 
                                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                      >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x10000000U 
                                                                    & ((~ 
                                                                        vlSelf->md_board__DOT__m68k__DOT__w529[1U]) 
                                                                       << 0x1cU)) 
                                                                   | ((0x8000000U 
                                                                       & ((~ 
                                                                           (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                            >> 3U)) 
                                                                          << 0x1bU)) 
                                                                      | ((0x4000000U 
                                                                          & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                             << 0x14U)) 
                                                                         | ((0x2000000U 
                                                                             & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 0x10U)) 
                                                                            | ((0x1000000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 0xcU)) 
                                                                               | ((0x800000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 7U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                << 2U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x18U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                << 4U)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x1bU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                                >> 0x1eU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[2U] 
                                                                                << 9U)) 
                                                                                | (0x200U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0xbU))))))))))))))))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w113 
        = ((IData)((((0x80U == (0xc0U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_iorq)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_rd))) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_431) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_430)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w134 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_431) 
           & (4U == (0xcU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_431) 
           & (0xcU == (0xcU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w113));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w114 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w113) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w130));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w142 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_iorq) 
            & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_rd) 
               & (0x40U == (0xc0U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)))) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w134));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w71 = 
        ((~ (IData)(vlSelf->md_board__DOT___M3)) & 
         (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
           >> 2U) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w142)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w152 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w113) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w135) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w142)));
    vlSelf->md_board__DOT__ym__DOT__vdp_cd_d = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w152) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w47))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__17(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__17\n"); );
    // Init
    SData/*15:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_251;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_251 = 0;
    CData/*0:0*/ md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_372;
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_372 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w21;
    md_board__DOT__z80__DOT__w21 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w22;
    md_board__DOT__z80__DOT__w22 = 0;
    // Body
    md_board__DOT__z80__DOT__w22 = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs22__rst) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w22_i))));
    vlSelf->md_board__DOT__z80__DOT__w22_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__rs22__set) 
                                                  | (IData)(md_board__DOT__z80__DOT__w22))));
    md_board__DOT__z80__DOT__w21 = (1U & (~ (((IData)(vlSelf->md_board__DOT__z80__DOT__w32) 
                                              | (IData)(vlSelf->md_board__DOT__z80__DOT__w26)) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w21_i))));
    vlSelf->md_board__DOT__z80__DOT__w21_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w24) 
                                                  | (IData)(md_board__DOT__z80__DOT__w21))));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w442[0U] = 1U;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w442[0U] = 0U;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w442__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w442[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w442__v2;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w443[0U] = 0U;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w443[0U] = 0U;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w443__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w443[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w443__v2;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w359__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w359[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v0;
        vlSelf->md_board__DOT__m68k__DOT__w359[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v1;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w359__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w359[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v2;
        vlSelf->md_board__DOT__m68k__DOT__w359[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v3;
    }
    vlSelf->md_board__DOT__m68k__DOT__w751 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w751;
    vlSelf->md_board__DOT__m68k__DOT__w750 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w750;
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w439__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w439[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w439__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w439__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w439[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w439__v1;
    }
    vlSelf->md_board__DOT__m68k__DOT__w752 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w752;
    vlSelf->md_board__DOT__m68k__DOT__w754 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w754;
    vlSelf->md_board__DOT__m68k__DOT__w753 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w753;
    if (vlSelf->md_board__DOT__m68k__DOT__c6) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_342 
            = vlSelf->md_board__DOT__m68k__DOT__b2_mem
            [1U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_343 
            = vlSelf->md_board__DOT__m68k__DOT__b2_mem
            [0U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_344 
            = vlSelf->md_board__DOT__m68k__DOT__b2_mem
            [3U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_345 
            = vlSelf->md_board__DOT__m68k__DOT__b2_mem
            [2U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_346 
            = vlSelf->md_board__DOT__m68k__DOT__b3_mem
            [1U];
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_347 
            = vlSelf->md_board__DOT__m68k__DOT__b3_mem
            [0U];
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_342 = 0U;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_343 = 0U;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_344 = 0U;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_345 = 0U;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_346 = 0U;
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_347 = 0U;
    }
    vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown[2U] 
        = ((0xff00U & vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
            [2U]) | ((IData)(vlSelf->md_board__DOT__m68k__DOT__c6)
                      ? (0xffU & vlSelf->md_board__DOT__m68k__DOT__b3_mem
                         [3U]) : 0U));
    vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown[3U] 
        = ((0xff00U & vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
            [3U]) | ((IData)(vlSelf->md_board__DOT__m68k__DOT__c6)
                      ? (0xffU & vlSelf->md_board__DOT__m68k__DOT__b3_mem
                         [2U]) : 0U));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_372 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w650)) 
                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w667)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1149 
        = ((1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                      >> 9U)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt645__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))
            ? 0xfU : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl655__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1150 
        = ((1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                      >> 9U)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt646__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))
            ? 0xfU : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl656__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1151 
        = ((1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                      >> 9U)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt647__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))
            ? 0xfU : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl657__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1152 
        = ((1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                      >> 9U)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2))))
            ? 0xfU : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl658__DOT__mem));
    vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown[2U] 
        = ((0xffU & vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
            [2U]) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w857)
                       ? (0xffU & (vlSelf->md_board__DOT__m68k__DOT__b3_mem
                                   [3U] >> 8U)) : 0U) 
                     << 8U));
    vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown[3U] 
        = ((0xffU & vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
            [3U]) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w857)
                       ? (0xffU & (vlSelf->md_board__DOT__m68k__DOT__b3_mem
                                   [2U] >> 8U)) : 0U) 
                     << 8U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817 
        = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v2) 
                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w814) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v2)) 
                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                          >> 0xdU)))));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w297__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w297[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v0;
        vlSelf->md_board__DOT__m68k__DOT__w297[3U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v1;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w297__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w297[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v2;
        vlSelf->md_board__DOT__m68k__DOT__w297[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w297__v3;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w296__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w296[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v0;
        vlSelf->md_board__DOT__m68k__DOT__w296[3U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v1;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w296__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w296[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v2;
        vlSelf->md_board__DOT__m68k__DOT__w296[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w296__v3;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w275__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w275[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w275__v0;
        vlSelf->md_board__DOT__m68k__DOT__w277[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v0;
        vlSelf->md_board__DOT__m68k__DOT__w277[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v1;
        vlSelf->md_board__DOT__m68k__DOT__w277[4U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v2;
        vlSelf->md_board__DOT__m68k__DOT__w276[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w276__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w275__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w275[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w275__v1;
        vlSelf->md_board__DOT__m68k__DOT__w275[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w275__v2;
        vlSelf->md_board__DOT__m68k__DOT__w277[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v3;
        vlSelf->md_board__DOT__m68k__DOT__w277[3U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v4;
        vlSelf->md_board__DOT__m68k__DOT__w277[5U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w277__v5;
        vlSelf->md_board__DOT__m68k__DOT__w276[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w276__v1;
        vlSelf->md_board__DOT__m68k__DOT__w276[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w276__v2;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w343[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w343__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w343__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w343[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w343__v1;
        vlSelf->md_board__DOT__m68k__DOT__w343[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w343__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t39 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w465) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w461)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t39)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t43 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w111)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t43)));
    vlSelf->md_board__DOT__m68k__DOT__w282_n_mem = vlSelf->md_board__DOT__m68k__DOT__w282_n;
    vlSelf->md_board__DOT__m68k__DOT__w282_mem = vlSelf->md_board__DOT__m68k__DOT__w282;
    vlSelf->md_board__DOT__m68k__DOT__w444_mem = vlSelf->md_board__DOT__m68k__DOT__w444;
    vlSelf->md_board__DOT__m68k__DOT__w418_mem = vlSelf->md_board__DOT__m68k__DOT__w418_1;
    vlSelf->md_board__DOT__m68k__DOT__w746_mem = vlSelf->md_board__DOT__m68k__DOT__w746;
    vlSelf->md_board__DOT__m68k__DOT__w733_mem = vlSelf->md_board__DOT__m68k__DOT__w733;
    if (vlSelf->md_board__DOT__m68k__DOT__w167) {
        vlSelf->md_board__DOT__m68k__DOT__w620 = ((
                                                   (0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w173))) 
                                                   << 3U) 
                                                  | (((0U 
                                                       == 
                                                       (0xf0fU 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w173))) 
                                                      << 2U) 
                                                     | (((0U 
                                                          == 
                                                          (0x3333U 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w173))) 
                                                         << 1U) 
                                                        | (0U 
                                                           == 
                                                           (0x5555U 
                                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__w173))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr482__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl480__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl480__DOT__mem_assign;
    vlSelf->md_board__DOT__m68k__DOT__w744_mem = vlSelf->md_board__DOT__m68k__DOT__w744;
    vlSelf->md_board__DOT__SD_mem = vlSelf->md_board__DOT__SD;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w280_mem = vlSelf->md_board__DOT__m68k__DOT__w280;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl519__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l519;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl518__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l518;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl517__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l517;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl516__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l516;
    vlSelf->md_board__DOT__m68k__DOT__w742_mem = vlSelf->md_board__DOT__m68k__DOT__w742;
    if (vlSelf->md_board__DOT__m68k__DOT__w778) {
        vlSelf->md_board__DOT__m68k__DOT__w782 = vlSelf->md_board__DOT__m68k__DOT__w744;
        vlSelf->md_board__DOT__m68k__DOT__w781 = vlSelf->md_board__DOT__m68k__DOT__w746;
    }
    vlSelf->md_board__DOT__m68k__DOT__w784_mem = vlSelf->md_board__DOT__m68k__DOT__w784;
    vlSelf->md_board__DOT__m68k__DOT__w421_mem = vlSelf->md_board__DOT__m68k__DOT__w421_1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr650_3__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl659_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl660_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl661_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w739_mem = vlSelf->md_board__DOT__m68k__DOT__w739;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_pal__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_pal__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_index__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_col_index__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w738_mem = vlSelf->md_board__DOT__m68k__DOT__w738;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl662__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus_mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus;
    if (vlSelf->vdp_psg_clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr638__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t44;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr639__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1111;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1127;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1117));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__15__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 0xcU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__sr_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_3__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_2__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_1__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr652_0__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem_assign;
    vlSelf->md_board__DOT__m68k__DOT__w737_mem = vlSelf->md_board__DOT__m68k__DOT__w737;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem_assign;
    vlSelf->md_board__DOT__AD_mem = vlSelf->md_board__DOT__AD;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__w539) {
        vlSelf->md_board__DOT__m68k__DOT__w552 = vlSelf->md_board__DOT__m68k__DOT__w471;
        vlSelf->md_board__DOT__m68k__DOT__w551 = vlSelf->md_board__DOT__m68k__DOT__w470;
        vlSelf->md_board__DOT__m68k__DOT__w550 = vlSelf->md_board__DOT__m68k__DOT__w469;
    }
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v2;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w903) {
        vlSelf->md_board__DOT__m68k__DOT__w970 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w961) 
                                                     >> 0xfU));
        vlSelf->md_board__DOT__m68k__DOT__w967 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                     >> 3U));
        vlSelf->md_board__DOT__m68k__DOT__w972 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                      >> 8U)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w643 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w641)) 
                                              & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w639)) 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w638)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem_assign;
    vlSelf->md_board__DOT__m68k__DOT__w736 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w708)
                                               ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w793)
                                               : (IData)(vlSelf->md_board__DOT__m68k__DOT__w750));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_393 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w752)) 
                 & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w753))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_394 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w752) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w753));
    vlSelf->md_board__DOT__m68k__DOT__w949 = (0xffffU 
                                              & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w718)
                                                  ? 
                                                 (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w980))
                                                  : (IData)(vlSelf->md_board__DOT__m68k__DOT__w980)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_324 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w128) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w850));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_327 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w127) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w848));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2_assign;
    vlSelf->md_board__DOT__m68k__DOT__w104 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__c6) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w103));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_352 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_342) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_346));
    vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown[0U] 
        = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_346;
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_353 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_343) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_347));
    vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown[1U] 
        = vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_347;
    vlSelf->md_board__DOT__m68k__DOT__w209 = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w656) 
                                                  | (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_372))));
    vlSelf->md_board__DOT__m68k__DOT__w210 = (1U & 
                                              (~ ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w656)) 
                                                  | (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_372))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_347 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_345 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 7U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_343 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0xeU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_341 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x15U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_339 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x1cU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_337 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x23U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_335 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x2aU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_333 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x31U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_348 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x32U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_356 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x2bU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_350 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x24U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_358 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x1dU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_352 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x16U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_360 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0xfU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_354 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 8U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_362 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 1U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_349 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x33U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_357 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x2cU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_351 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x25U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_359 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x1eU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_353 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x17U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_361 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x10U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_355 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 9U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_363 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 2U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_367 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x37U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_371 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x30U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_375 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x29U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_379 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x22U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_383 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x1bU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_387 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0x14U))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_391 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 0xdU))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_395 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817)) 
                 | (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                            >> 6U))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_63 
        = (vlSelf->md_board__DOT__m68k__DOT__w276[2U] 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w438));
    vlSelf->md_board__DOT__m68k__DOT__w359_3 = ((~ 
                                                 vlSelf->md_board__DOT__m68k__DOT__w343
                                                 [2U]) 
                                                & vlSelf->md_board__DOT__m68k__DOT__w359
                                                [2U]);
    vlSelf->md_board__DOT__m68k__DOT__w173 = (0xffffU 
                                              & (~ 
                                                 (VL_SHIFTL_III(16,16,32, 
                                                                (((0xffffU 
                                                                   != (IData)(vlSelf->md_board__DOT__m68k__DOT__w171)) 
                                                                  << 0xfU) 
                                                                 | (((0x7fffU 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                     << 0xeU) 
                                                                    | (((0x3fffU 
                                                                         != 
                                                                         (0x3fffU 
                                                                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                        << 0xdU) 
                                                                       | (((0x1fffU 
                                                                            != 
                                                                            (0x1fffU 
                                                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                           << 0xcU) 
                                                                          | (((0xfffU 
                                                                               != 
                                                                               (0xfffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                              << 0xbU) 
                                                                             | (((0x7ffU 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 0xaU) 
                                                                                | (((0x3ffU 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 9U) 
                                                                                | (((0x1ffU 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 8U) 
                                                                                | (((0xffU 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 7U) 
                                                                                | (((0x7fU 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 6U) 
                                                                                | (((0x3fU 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 5U) 
                                                                                | (((0x1fU 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 4U) 
                                                                                | (((0xfU 
                                                                                != 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 3U) 
                                                                                | (((7U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 2U) 
                                                                                | (((3U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w171)))))))))))))))))), 1U) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w171))));
    md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_251 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w949) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w950));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_354 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_344) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
           [2U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_355 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_345) 
           | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown
           [3U]);
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_44 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w209) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w660));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_43 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w209) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w660)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_45 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w210) 
           & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w660)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_49 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w210) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w660));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_28 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w638) 
           & ((1U & ((~ (((IData)(vlSelf->md_board__DOT__m68k__DOT__w660) 
                          & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w210) 
                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w659))) 
                         | (IData)(vlSelf->md_board__DOT__m68k__DOT__w704))) 
                     | (IData)(vlSelf->md_board__DOT__m68k__DOT__w644)))
               ? (IData)(vlSelf->md_board__DOT__m68k__DOT__w641)
               : (IData)(vlSelf->md_board__DOT__m68k__DOT__w639)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v2_assign;
    vlSelf->__VdfgRegularize_hd87f99a1_0_109 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__14__KET____DOT__sr__DOT__v2) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__13__KET____DOT__sr__DOT__v2) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__12__KET____DOT__sr__DOT__v2) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__11__KET____DOT__sr__DOT__v2) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr640__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)))))))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l644 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2) 
            << 9U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                       << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                  << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                             << 6U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                << 5U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr644__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr643__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr642__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr641__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1138 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
              & (2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1140 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr636__DOT__v2) 
              & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl654__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_326 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr651__DOT__v2)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl653__DOT__mem) 
              >> 7U));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_366 
        = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w550) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w551) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w552)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr375__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr313__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr268__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr377__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1104 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2));
    vlSelf->md_board__DOT__m68k__DOT__w953 = (0xffffU 
                                              & (~ 
                                                 (((IData)(vlSelf->md_board__DOT__m68k__DOT__w711)
                                                    ? 0U
                                                    : 0xffffU) 
                                                  | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w913)
                                                      ? 0U
                                                      : (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_251)))));
    vlSelf->md_board__DOT__m68k__DOT__w951 = (0xffffU 
                                              & (~ 
                                                 (((IData)(vlSelf->md_board__DOT__m68k__DOT__w725)
                                                    ? 0xffffU
                                                    : 0U) 
                                                  | ((~ 
                                                      (((IData)(vlSelf->md_board__DOT__m68k__DOT__w711)
                                                         ? 0U
                                                         : 0xffffU) 
                                                       | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w949) 
                                                          | (IData)(vlSelf->md_board__DOT__m68k__DOT__w950)))) 
                                                     | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w915)
                                                         ? 0U
                                                         : (IData)(md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_251))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__psg_hclk2 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl634__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_50 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_49) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w659));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1144 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_326) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v2));
    vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i = 
        (((IData)(vlSelf->md_board__DOT__m68k__DOT__w549) 
          << 3U) | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_366));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_202 
        = ((6U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w609));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_201 
        = ((6U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w610));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_200 
        = ((6U == (IData)(vlSelf->md_board__DOT__m68k__DOT__ird_pla3_i)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w611));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__1(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((0xdU == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                  << 0x11U) | (((1U == (3U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w596))) 
                                << 0x10U) | (((9U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                              << 0xfU) 
                                             | (((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w596))) 
                                                 << 0xeU) 
                                                | (((5U 
                                                     == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                    << 0xdU) 
                                                   | ((((2U 
                                                         == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                        & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w598))) 
                                                       << 0xcU) 
                                                      | (((7U 
                                                           == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                          << 0xbU) 
                                                         | (((0xfU 
                                                              == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                             << 0xaU) 
                                                            | (((6U 
                                                                 == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                                << 9U) 
                                                               | ((0x100U 
                                                                   & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w596) 
                                                                       & (~ 
                                                                          (vlSelf->md_board__DOT__m68k__DOT__w597 
                                                                           >> 0xaU))) 
                                                                      << 8U)) 
                                                                  | (((2U 
                                                                       == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                                      << 7U) 
                                                                     | (((8U 
                                                                          == 
                                                                          (0xbU 
                                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w596))) 
                                                                         << 6U) 
                                                                        | (((4U 
                                                                             == 
                                                                             (0xdU 
                                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w596))) 
                                                                            << 5U) 
                                                                           | (((0xcU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                                               << 4U) 
                                                                              | (((0xeU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                                                << 2U) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)) 
                                                                                << 1U) 
                                                                                | (0xaU 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w596)))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w597 = __Vtemp_1;
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__2(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w959 = (1U & 
                                              (~ ((vlSelf->md_board__DOT__m68k__DOT__w954 
                                                   >> 4U) 
                                                  | (0xff0U 
                                                     != 
                                                     (0xff0U 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w951))))));
    vlSelf->md_board__DOT__m68k__DOT__w960 = (1U & 
                                              (~ ((vlSelf->md_board__DOT__m68k__DOT__w954 
                                                   >> 9U) 
                                                  | (0xf00U 
                                                     != 
                                                     (0xf00U 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w951))))));
    vlSelf->md_board__DOT__m68k__DOT__w957 = (1U & 
                                              (~ ((vlSelf->md_board__DOT__m68k__DOT__w954 
                                                   >> 4U) 
                                                  | (0xf0U 
                                                     != 
                                                     (0xf0U 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w951))))));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__18(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__18\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__z80__DOT__rs120__DOT__q;
    md_board__DOT__z80__DOT__rs120__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs121__DOT__q;
    md_board__DOT__z80__DOT__rs121__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs123__DOT__q;
    md_board__DOT__z80__DOT__rs123__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs127__DOT__q;
    md_board__DOT__z80__DOT__rs127__DOT__q = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1;
    vlSelf->md_board__DOT__z80__DOT__w54 = (1U & (~ 
                                                  (((IData)(vlSelf->md_board__DOT__z80__DOT__w52) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w51)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__rs54__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs54__DOT__nq 
        = (1U & (~ (((IData)(vlSelf->md_board__DOT__z80__DOT__w52) 
                     & (IData)(vlSelf->md_board__DOT__z80__DOT__w51_i)) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w54))));
    md_board__DOT__z80__DOT__rs121__DOT__q = (1U & 
                                              (~ ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w122)) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w132)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i))));
    vlSelf->md_board__DOT__z80__DOT__w121_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w132) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w122)) 
                                                   | (IData)(md_board__DOT__z80__DOT__rs121__DOT__q))));
    md_board__DOT__z80__DOT__rs120__DOT__q = (1U & 
                                              (~ ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w119)) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w132)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i))));
    vlSelf->md_board__DOT__z80__DOT__w120_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w132) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w119)) 
                                                   | (IData)(md_board__DOT__z80__DOT__rs120__DOT__q))));
    md_board__DOT__z80__DOT__rs123__DOT__q = (1U & 
                                              (~ ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w124)) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w132)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i))));
    vlSelf->md_board__DOT__z80__DOT__w123_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w132) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w124)) 
                                                   | (IData)(md_board__DOT__z80__DOT__rs123__DOT__q))));
    md_board__DOT__z80__DOT__rs127__DOT__q = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_235) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w132)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))));
    vlSelf->md_board__DOT__z80__DOT__w127_i = (1U & 
                                               (~ (
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_235)) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w132)) 
                                                   | (IData)(md_board__DOT__z80__DOT__rs127__DOT__q))));
    vlSelf->md_board__DOT__z80__DOT__w66 = (1U & (~ 
                                                  (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_247)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w67)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w66_i))));
    vlSelf->md_board__DOT__z80__DOT__w66_i = (1U & 
                                              (~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_246)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w66))));
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w414__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w414[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w414__v0;
        vlSelf->md_board__DOT__m68k__DOT__w414[2U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w414__v1;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w414__v2) {
        vlSelf->md_board__DOT__m68k__DOT__w414[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w414__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__io_data;
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w364__v0) {
        vlSelf->md_board__DOT__m68k__DOT__w364[0U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w364__v0;
    }
    if (vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w364__v1) {
        vlSelf->md_board__DOT__m68k__DOT__w364[1U] 
            = vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w364__v1;
    }
    vlSelf->md_board__DOT__m68k__DOT__w356_0 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w356_0;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w532 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sb__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w246 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2) 
           & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem)));
    vlSelf->md_board__DOT__m68k__DOT__w374 = vlSelf->__Vdly__md_board__DOT__m68k__DOT__w374;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__z80bank__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))));
    vlSelf->md_board__DOT__z80__DOT__w145 = vlSelf->__Vdly__md_board__DOT__z80__DOT__w145;
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_401 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w479)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_396));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w195 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem) 
                     >> 1U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w318 
            = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl71__DOT__mem)) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl72__DOT__mem)) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl73__DOT__mem)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl74__DOT__mem))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316 
            = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl67__DOT__mem)) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl68__DOT__mem)) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl69__DOT__mem)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl70__DOT__mem))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w713 
        = ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
               >> 0xcU)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr374__DOT__v2));
    vlSelf->md_board__DOT__m68k__DOT__w476 = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_398) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_397) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_400)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w772 
        = ((0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l420)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w531 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w558));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w566 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b7__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1;
    vlSelf->md_board__DOT__ZA = vlSelf->__Vdly__md_board__DOT__ZA;
    vlSelf->md_board__DOT__VA = vlSelf->__Vdly__md_board__DOT__VA;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1;
    vlSelf->PC_d = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l2)) 
                     & ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))
                         ? 0x6fU : 0x7fU)) | ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))
                                               ? 0x20U
                                               : 0U));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t4 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w62) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs4__rst)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t4)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t14 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w138) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w143)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t14)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t17 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w175) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w155)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t17)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t22 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w161) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr82__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t22)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t5 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w46) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t5)));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l2) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2)))) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr136__DOT__v2)) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2)));
    }
    vlSelf->md_board__DOT__m68k__DOT__w361_mem = vlSelf->md_board__DOT__m68k__DOT__w361;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl19__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl19__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl450__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl450__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl452__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl452__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b3__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl567__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl567__DOT__mem_assign;
    vlSelf->md_board__DOT__m68k__DOT__codebus2_mem 
        = vlSelf->md_board__DOT__m68k__DOT__codebus2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__c4) {
        vlSelf->md_board__DOT__m68k__DOT__w490 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_83) 
                                                       >> 1U) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
        vlSelf->md_board__DOT__m68k__DOT__w489 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_83) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl453__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl453__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl451__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl451__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__w330) {
        vlSelf->md_board__DOT__m68k__DOT__w420 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w546) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w568))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl499__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl578__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl502__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl502__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl566__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl386__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl386__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b4__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b4__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem_assign;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem_assign;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_118 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_116 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                 | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_140 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_119 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                 | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_109 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)) 
                 | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_120 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                 | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__dclk_prescaler_dff1__rst) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l1 = 0U;
    } else if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l1 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr449__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl448__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l2__DOT__v2)) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr40__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w18;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr587__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1008;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr383__DOT__v1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w676)) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t40))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr86__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w189;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w201) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w202))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr87__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr86__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr29__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr136__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr135__DOT__v1 
            = ((0x7eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr135__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w421));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl441_1__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v1 
            = (0xfU == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr124__DOT__v1 
            = (0U == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_91));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr381__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2_assign;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_19 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w78_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i))));
    vlSelf->md_board__DOT__m68k__DOT__w382 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w363) 
                                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w366));
    vlSelf->PC_o = ((0x60U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l2)) 
                    | ((0x10U & (((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))
                                   ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_bit__DOT__l2)
                                   : ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l2) 
                                      >> 4U)) << 4U)) 
                       | (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l2))));
    vlSelf->md_board__DOT__m68k__DOT__w357_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w356_0)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w357_0));
    vlSelf->md_board__DOT__m68k__DOT__w358_1 = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w356_0)) 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w358_0));
    vlSelf->md_board__DOT__m68k__DOT__ncode_addr = 
        (0xffU & ((IData)(vlSelf->md_board__DOT__m68k__DOT__code_addr) 
                  >> 2U));
    vlSelf->md_board__DOT__m68k__DOT__ucode_addr = 
        (0x3fU & ((IData)(vlSelf->md_board__DOT__m68k__DOT__code_addr) 
                  >> 4U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff18__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__rx_error__reset) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_clk2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_clk2)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_data__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter_q_delay;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_c)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff9__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l2_assign;
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_156 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l61)) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT__w430) 
              | (IData)(vlSelf->md_board__DOT__z80__DOT__w431)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff16__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2_assign;
    if (((IData)(vlSelf->md_board__DOT__vram1__DOT__o_RAS) 
         & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_140))) {
        vlSelf->md_board__DOT__vram1__DOT__dt = (1U 
                                                 & (~ (IData)(vlSelf->md_board__DOT__OE1)));
        vlSelf->md_board__DOT__vram1__DOT__addr = (
                                                   (0xffU 
                                                    & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr)) 
                                                   | ((IData)(vlSelf->md_board__DOT__AD) 
                                                      << 8U));
    }
    if (((~ (IData)(vlSelf->md_board__DOT__vram1__DOT__o_cas)) 
         & (IData)(vlSelf->md_board__DOT__vram1__DOT__cas))) {
        vlSelf->md_board__DOT__vram1__DOT__addr = (
                                                   (0xff00U 
                                                    & (IData)(vlSelf->md_board__DOT__vram1__DOT__addr)) 
                                                   | (IData)(vlSelf->md_board__DOT__AD));
    }
    vlSelf->md_board__DOT__z80__DOT__w122 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w130)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__l33));
    vlSelf->md_board__DOT__z80__DOT__w119 = ((IData)(vlSelf->md_board__DOT__z80__DOT__l32) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w134)) 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w130))));
    vlSelf->md_board__DOT__z80__DOT__w124 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w130)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__l34) 
                                                | (IData)(vlSelf->md_board__DOT__z80__DOT__w134)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_235 
        = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w134) 
                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l35)) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w130))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_8 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__l12) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w112));
    vlSelf->md_board__DOT__z80__DOT__w60 = ((IData)(vlSelf->md_board__DOT__z80__DOT__l21) 
                                            & (IData)(vlSelf->md_board__DOT__z80__DOT__w112));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_16 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__l25) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w112));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_240 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__l30) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w112));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_239 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__l31) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w112));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_1 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_3 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l2))));
    vlSelf->md_board__DOT__z80__DOT__bus1_pulld = (0xffU 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w145)) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w1_i)))))));
    vlSelf->md_board__DOT__z80__DOT__bus1_pullu = (0xffU 
                                                   & (((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w1_i))))) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w145)) 
                                                      | (- (IData)(
                                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w1_i) 
                                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w2))))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_3 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l2));
    vlSelf->ram_z80_data = vlSelf->md_board__DOT__ZD;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa_high__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w191 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2)) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_429 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w383) 
           & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w384) 
              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w386)));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_70 
        = ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w383)) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w384));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_426 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w383) 
           & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w384)) 
              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w386)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_0 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_8 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2))));
    vlSelf->ram_z80_address = (0x1fffU & (IData)(vlSelf->md_board__DOT__ZA));
    vlSelf->md_board__DOT__m68k__DOT__w377 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w380) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w378) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w379)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address 
        = (0xffU & ((IData)(vlSelf->md_board__DOT___M3)
                     ? (0x7fU & vlSelf->md_board__DOT__VA)
                     : (IData)(vlSelf->md_board__DOT__ZA)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__w387 = vlSelf->md_board__DOT__m68k__DOT__w376;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l1;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w84) {
        vlSelf->md_board__DOT__m68k__DOT__w158 = vlSelf->md_board__DOT__m68k__DOT__w147;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w82) {
        vlSelf->md_board__DOT__m68k__DOT__w158 = (0xffffU 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__b2
                                                     [1U]));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w80) {
        vlSelf->md_board__DOT__m68k__DOT__w158 = (0xffffU 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__b2
                                                     [3U]));
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_i2 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2) 
            << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l2) 
                       << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l2) 
                                  << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_6 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2)) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2_l__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_1 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_5 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w189 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w188));
    vlSelf->md_board__DOT__m68k__DOT__w508 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w356_0) 
                                              | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w357_1) 
                                                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w358_1)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_clk2 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_5__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_2 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_1));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_4 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2_l__DOT__l2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_2 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l2)) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_5 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_4));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_71 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_70) 
           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w386));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r1_j 
        = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l2)) 
                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_0)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l2)))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r2_j 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_0) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l2)) 
              & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_10 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_3) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_8));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_9 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2) 
           & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_8)));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_21 
        = ((IData)(vlSelf->md_board__DOT___M3) & (0U 
                                                  == 
                                                  (0xf0U 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address))));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_0 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_6) 
           | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_5) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr82__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr82__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t5));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr9__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w155 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl23__DOT__mem))));
    vlSelf->md_board__DOT__m68k__DOT__code_addr = (
                                                   ((IData)(vlSelf->md_board__DOT__m68k__DOT__w504) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w503) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w490) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w489) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w501) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w502) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w495) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w500) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w505) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w506))))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w812 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_294)
            ? 0U : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl453__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w811 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_294)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl451__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w845 
        = ((0x2000U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))
            ? ((0xf0U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                         >> 7U)) | (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data) 
                                            >> 3U)))
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl502__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w731 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl387__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl386__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w742 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr401__DOT__v2) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v2)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w106) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w673 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w674 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem) 
                     >> 5U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w673 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w674 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl341_1__DOT__mem) 
                     >> 4U));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_wr 
        = ((~ (IData)(vlSelf->md_board__DOT__RW)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl448__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl448__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_l1__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w202 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w189) 
           & (2U == (3U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr136__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr136__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl441_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl441_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl441_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl441_1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt241__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr141__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr378__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl441_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl415__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr441__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl440_1__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl414__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr440__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v2_assign 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w759 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr426__DOT__v2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
              >> 0xcU));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter_q_delay 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w26 = 
        (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2)) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff8__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w416 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b4__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w27 = 
        ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2)) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff17__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_6 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r2_j) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_9));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_23 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT____VdfgRegularize_h00fb0a57_0_21) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__address) 
              >> 3U));
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l1 
            = (1U & (~ (IData)(vlSelf->ext_reset)));
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2 
        = vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_7 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_6) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_10));
    vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2)) 
                                                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_clk3_l))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1008 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr588__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr589__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp_clk0 = ((1U 
                                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem))
                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)
                                                 : 
                                                ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff16__DOT__l2) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l2)));
    vlSelf->md_board__DOT__z80__DOT__w147 = (0xffU 
                                             & ((1U 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w48) 
                                                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l16)))))
                                                 ? 
                                                (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w146))
                                                 : (IData)(vlSelf->md_board__DOT__z80__DOT__w147_prev)));
    vlSelf->md_board__DOT__z80__DOT__w103 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l29)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0))));
    vlSelf->md_board__DOT__z80__DOT__w96 = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w95_i)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w103)));
}
