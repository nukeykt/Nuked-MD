// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

void Vmd_board___024root___ico_sequent__TOP__0(Vmd_board___024root* vlSelf);

void Vmd_board___024root___eval_ico(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmd_board___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmd_board___024root___ico_sequent__TOP__0(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__NOE;
    md_board__DOT__NOE = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__arb_ce0;
    md_board__DOT__ym__DOT__arb_ce0 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2;
    md_board__DOT__ym__DOT____VdfgRegularize_hbeeb384a_1_2 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w21;
    md_board__DOT__ym__DOT__vdp__DOT__w21 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w213;
    md_board__DOT__ym__DOT__vdp__DOT__w213 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w215;
    md_board__DOT__ym__DOT__vdp__DOT__w215 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w216;
    md_board__DOT__ym__DOT__vdp__DOT__w216 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w217;
    md_board__DOT__ym__DOT__vdp__DOT__w217 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w218;
    md_board__DOT__ym__DOT__vdp__DOT__w218 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w221;
    md_board__DOT__ym__DOT__vdp__DOT__w221 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w222;
    md_board__DOT__ym__DOT__vdp__DOT__w222 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w223;
    md_board__DOT__ym__DOT__vdp__DOT__w223 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w224;
    md_board__DOT__ym__DOT__vdp__DOT__w224 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w225;
    md_board__DOT__ym__DOT__vdp__DOT__w225 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w227;
    md_board__DOT__ym__DOT__vdp__DOT__w227 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w232;
    md_board__DOT__ym__DOT__vdp__DOT__w232 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w361;
    md_board__DOT__ym__DOT__vdp__DOT__w361 = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__vdp__DOT__w437;
    md_board__DOT__ym__DOT__vdp__DOT__w437 = 0;
    CData/*3:0*/ md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data;
    md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute;
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__ioc__DOT__vread;
    md_board__DOT__ym__DOT__ioc__DOT__vread = 0;
    CData/*0:0*/ md_board__DOT__ym__DOT__ioc__DOT__vread_high;
    md_board__DOT__ym__DOT__ioc__DOT__vread_high = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    __VdfgRegularize_hd87f99a1_0_3 = 0;
    // Body
    vlSelf->md_board__DOT__cart_VD_d = (0xffffU & ((IData)(vlSelf->md_board__DOT___M3)
                                                    ? 
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->cart_data_en)))))
                                                    : 
                                                   (0xff00U 
                                                    | (0xffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->cart_data_en)))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_94 
        = (1U & ((~ (IData)(vlSelf->pal)) & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))));
    vlSelf->md_board__DOT__ZBR = (1U & ((~ (IData)(vlSelf->dma_z80_req)) 
                                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in 
        = ((IData)(vlSelf->vdp_cramdot_dis) ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out_dp)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w299 
        = (1U & ((~ (IData)(vlSelf->ext_reset)) & (
                                                   (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff50__DOT__l2)) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff62__DOT__l2))));
    if (vlSelf->ext_reset) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem_assign = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem_assign = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem_assign = 0U;
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem_assign 
            = (0xfffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w128)
                          ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)
                          : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem)));
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
    vlSelf->md_board__DOT__ym_HALT_pull = (1U & (~ 
                                                 (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w328) 
                                                   & (IData)(vlSelf->md_board__DOT___M3)) 
                                                  & ((~ (IData)(vlSelf->tmss_enable)) 
                                                     | (~ 
                                                        ((~ (IData)(vlSelf->jap)) 
                                                         & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__dff2__DOT__l2))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_417 
        = ((IData)(vlSelf->pal) & (IData)(vlSelf->vdp_intfield));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_68 
        = (1U & ((~ (IData)(vlSelf->vdp_intfield)) 
                 & (~ (IData)(vlSelf->pal))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_412 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem) 
           & (IData)(vlSelf->pal));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_100 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem)) 
           & (IData)(vlSelf->pal));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_15 
        = ((IData)(vlSelf->ext_reset) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w431 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->pal));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w432 
        = ((IData)(vlSelf->pal) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430 
        = ((~ (IData)(vlSelf->pal)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434 
        = ((~ (IData)(vlSelf->vdp_intfield)) & (IData)(vlSelf->pal));
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
    vlSelf->md_board__DOT__ZRES = ((~ (IData)(vlSelf->ext_zres)) 
                                   & (IData)(vlSelf->md_board__DOT__ZRES_o));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in 
        = (1U & ((~ (IData)(((0xf00U == (0xf00U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test_18__DOT__mem))) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129)))) 
                 & (~ (IData)(vlSelf->ext_reset))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76 = 
        ((IData)(vlSelf->ext_reset) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_57 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_417) 
           & (IData)(vlSelf->vdp_m2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_59 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_417) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_69 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_68) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_414 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_68));
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
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l2) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_15));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_416 
        = ((IData)(vlSelf->vdp_intfield) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_62 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434) 
           & (IData)(vlSelf->vdp_m2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_65 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_415 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w434));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w549 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w372) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 8U) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w612 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w393) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 9U) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w638 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w402) 
           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
               >> 0xaU) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_data 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l_en) 
           & ((IData)(vlSelf->md_board__DOT__ZA) & (IData)(vlSelf->md_board__DOT__ZRES)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__kon_ch_match 
        = ((IData)(vlSelf->md_board__DOT__ZRES) & (
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high_out) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low_out)) 
                                                   == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_28_ch_o)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_en 
        = ((~ (IData)(vlSelf->md_board__DOT__ZRD)) 
           & ((IData)(vlSelf->md_board__DOT__ZRES) 
              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_sound)) 
                 & ((~ (IData)(vlSelf->ym2612_status_enable)) 
                    | (0U == (3U & (IData)(vlSelf->md_board__DOT__ZA)))))));
    vlSelf->res_z80 = (1U & (~ (IData)(vlSelf->md_board__DOT__ZRES)));
    vlSelf->md_board__DOT__ym__DOT__fm_data_d = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__ZRES) 
                                                     & ((~ (IData)(vlSelf->md_board__DOT__ZRD)) 
                                                        & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_sound))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__rs1__set 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__o_bg)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w50 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w114)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w121 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w159 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl24__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w138 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr82__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w161 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154)));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w458 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w172 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t16_n) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w144 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t17) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w154))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w183 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl21__DOT__mem)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl22__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w408 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w440 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v2) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w445 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v2) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w449))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w461 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w460) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr171__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w175 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_429)))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem_assign 
            = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207) 
                                  & (0x200U == (0x700U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                         ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))
                         : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2_assign 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l1));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem_assign = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2_assign = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem_assign 
        = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                              & (0x700U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_inc__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem_assign 
        = (0xffU & ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w207) 
                              & (0x100U == (0x700U 
                                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))))
                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2)
                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl179__DOT__mem)));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w174 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164) 
                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w160) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_429))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w38 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff12__DOT__l2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w31 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l2))));
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
    md_board__DOT__ym__DOT__vdp__DOT__w227 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w208) 
                                                  & (0x700U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w204 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                 | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl10__DOT__mem)) 
                  & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl11__DOT__mem)))));
    md_board__DOT__ym__DOT__vdp__DOT__w437 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v2)) 
                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w86) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w460)))));
    md_board__DOT__ym__DOT__vdp__DOT__w221 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w206) 
                                                  & (0x700U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4 = 
        (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT__w361 = (1U & 
                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v2) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w88) 
                                                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr113__DOT__v2)) 
                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem) 
                                                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2)))))));
    md_board__DOT__ym__DOT__vdp__DOT__w213 = (1U & 
                                              ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w209) 
                                                  & (0x300U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2))))));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w295)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr43__DOT__v2) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr42__DOT__v2)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem_assign 
            = (1U & (~ ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2))) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem_assign 
            = (1U & (~ ((~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v2) 
                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v2))) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252))) 
                        & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v2) 
                              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267))))));
    }
    vlSelf->md_board__DOT__ym__DOT__arb_zv = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76) 
                                              & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__arb_wait_o = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->md_board__DOT__DTACK) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79))) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w612))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem_assign 
            = (1U & (~ ((IData)(vlSelf->vdp_hclk1) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w638))));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem));
    }
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_en) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_status 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_debug 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem;
    } else {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_status = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__read_debug = 0U;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_a_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_a_status_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__timer_b_status_sl__DOT__mem_assign 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__timer_b_status_sr__DOT__v2;
    }
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__fsm_reset_and 
        = ((IData)(vlSelf->res_z80) & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2) 
                                          >> 0xbU)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_7 
        = (1U & (~ ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____VdfgRegularize_h159e5c94_0_8 
        = (1U & (~ ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_reset__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_18 
        = ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT__lfo_subcnt_of));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__write_addr 
        = ((IData)(vlSelf->res_z80) | ((~ (IData)(vlSelf->md_board__DOT__ZA)) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l_en)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt_rst 
        = ((IData)(vlSelf->res_z80) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__subcnt__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__fsm_sel0)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_timer_i 
        = (1U & ((~ ((IData)(vlSelf->res_z80) | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_21_data__DOT__reg_sr__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2))) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__timer_ha)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset 
        = ((IData)(vlSelf->res_z80) | (IData)(vlSelf->fm_sel23));
    md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute 
        = ((IData)(vlSelf->res_z80) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_quiet_ssg) 
                                       & ((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o)) 
                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__ssg_holdup_sr__DOT__v2) 
                                                >> 1U)))));
    vlSelf->__VdfgRegularize_hd87f99a1_0_15 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm_data_d) 
                                               & (IData)(vlSelf->md_board__DOT__ZRES));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w31)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l2)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2)));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l2)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l1)));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w410 
        = ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w361) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w416));
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
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem_assign 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2) 
                     >> 7U));
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b4__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b5__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem_assign 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b7__DOT__mem));
    }
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
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45 = 
        (((IData)(vlSelf->md_board__DOT__BGACK) | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45_mem)) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv));
    vlSelf->md_board__DOT__ym__DOT__arb_intak = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv) 
                                                     & ((IData)(vlSelf->md_board__DOT__FC0) 
                                                        & (IData)(vlSelf->md_board__DOT__FC1)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_248 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_wait_o) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w38));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reset_low_cnt 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_reset) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_low__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2));
    vlSelf->__VdfgRegularize_hd87f99a1_0_127 = (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                                 & (3U 
                                                    == (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__state_sr_o))) 
                                                | ((IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute) 
                                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_event_n) 
                                                      & (~ 
                                                         ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__kon_sr__DOT__v2) 
                                                          >> 1U)))));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem_assign 
        = (0x3ffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__c1_sr__DOT__v2)
                      ? ((- (IData)((IData)(md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_mute))) 
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
                                                          << 3U))))))))))
                      : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__eg__DOT__eg_level_comb_l__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_2b_dac_en__data 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem));
    vlSelf->__VdfgRegularize_hd87f99a1_0_72 = ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_2a_wr)
                                                ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_113)
                                                    : 0U)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_2a_dac__data_o));
    vlSelf->__VdfgRegularize_hd87f99a1_0_66 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_25_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_110)
                                                    : 0U)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellout__reg_25_data__data_o));
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
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
            ? (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_112)
            : 0U);
    if (vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_wr) {
        vlSelf->__VdfgRegularize_hd87f99a1_0_69 = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
                                                    ? 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__2__KET____DOT__mem))
                                                    : 0U);
        vlSelf->__VdfgRegularize_hd87f99a1_0_68 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data;
    } else {
        vlSelf->__VdfgRegularize_hd87f99a1_0_69 = vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_mode_o;
        vlSelf->__VdfgRegularize_hd87f99a1_0_68 = (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_27_timer_ctrl__DOT__reg_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))));
    }
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
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__data_bus 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_15)
            ? (((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__io__DOT__data_l__BRA__1__KET____DOT__mem) 
                << 7U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_113))
            : 0U);
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w403 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w410));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w45)) 
                 | ((~ (IData)(vlSelf->md_board__DOT___M3)) 
                    | (IData)(vlSelf->md_board__DOT__BGACK))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w46 = 
        (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak)) 
          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_as)) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w47));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w2 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak) 
         & (0x700000U == (0x700000U & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_64 = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_ctrl__DOT__reg_addr_sr__DOT__v2)) 
                                                & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_62))
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_22_data__data)
                                                : (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_22_data__DOT__reg_sr__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__lfo__DOT____VdfgRegularize_h8146628b_0_0)));
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__fm_addr_write 
        = ((0U != (IData)(md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT____Vcellinp__reg_28_slot__data)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__write_addr_en));
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
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w298 
        = (IData)(((vlSelf->md_board__DOT__VA >> 0x16U) 
                   & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__d7__DOT__dl) 
                            >> 5U)))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w254 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223) 
           | (vlSelf->md_board__DOT__VA >> 0x16U));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_325 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w25) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w2) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36));
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
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2_assign 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w38)) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34)
               ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l1)
               : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)));
    md_board__DOT__ym__DOT__vdp__DOT__w21 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w26) 
                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w24 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34) 
         & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff6__DOT__l2) 
            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w30 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l2));
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
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem) {
        __VdfgRegularize_hd87f99a1_0_3 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s4) 
                                          | ((IData)(md_board__DOT__ym__DOT__vdp__DOT__w21) 
                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem) 
                                                | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem)) 
                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w13)) 
                                                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w27)))));
        vlSelf->vdp_dma_oe_early = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_434;
    } else {
        __VdfgRegularize_hd87f99a1_0_3 = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_s2) 
                                          | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)
                                               ? ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34) 
                                                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff7__DOT__l2))
                                               : (IData)(md_board__DOT__ym__DOT__vdp__DOT__w21)) 
                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w16)));
        vlSelf->vdp_dma_oe_early = ((IData)(vlSelf->vdp_dma) 
                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_325));
    }
    vlSelf->ram_68k_wren = ((IData)(__VdfgRegularize_hd87f99a1_0_3) 
                            & ((IData)(vlSelf->cart_lwr) 
                               | (IData)(vlSelf->cart_uwr)));
    vlSelf->md_board__DOT__ym__DOT__vdp_cas0 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8b_b6__DOT__mem)
                                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_434)
                                                     : 
                                                    ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl8__DOT__mem)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_325)))));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__w238 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223));
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
    md_board__DOT__ym__DOT__ioc__DOT__vread = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_io));
    vlSelf->cart_oe = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0)));
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
    vlSelf->md_board__DOT__ym__DOT__ioc_bc4 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cas0) 
                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv)) 
                                               & ((IData)(vlSelf->cart_oe) 
                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)));
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
    vlSelf->md_board__DOT__ym_ZD_d = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc_bc4) 
                                       & (IData)(vlSelf->md_board__DOT__ym__DOT__fm_data_d))
                                       ? 0xffU : 0U);
    vlSelf->cart_cs = (1U & (~ ((IData)(vlSelf->tmss_enable)
                                 ? ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_4)) 
                                    | (IData)(md_board__DOT__ym__DOT__arb_ce0))
                                 : (IData)(md_board__DOT__ym__DOT__arb_ce0))));
    vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w28 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT____VdfgRegularize_he4f5cbef_1_4) 
           | (IData)(md_board__DOT__ym__DOT__arb_ce0));
    vlSelf->md_board__DOT__ym__DOT__ioc_bc3 = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__arb_w1) 
                                               & (IData)(vlSelf->md_board__DOT___M3));
    vlSelf->md_board__DOT__ym__DOT__tmss_data_out_en 
        = (1U & ((~ (IData)(vlSelf->tmss_enable)) | 
                 ((~ ((IData)(vlSelf->md_board__DOT__RW) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w15))) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w28))));
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

void Vmd_board___024root___eval_triggers__ico(Vmd_board___024root* vlSelf);

bool Vmd_board___024root___eval_phase__ico(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmd_board___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmd_board___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmd_board___024root___act_sequent__TOP__0(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__1(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__2(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__3(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__4(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__5(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__6(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__7(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__8(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_sequent__TOP__9(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__0(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__1(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__2(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__3(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__4(Vmd_board___024root* vlSelf);
void Vmd_board___024root___act_comb__TOP__5(Vmd_board___024root* vlSelf);

void Vmd_board___024root___eval_act(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___eval_act\n"); );
    // Body
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__1(vlSelf);
    }
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0xcULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x481ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x49ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmd_board___024root___act_comb__TOP__5(vlSelf);
    }
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__0(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<5>/*159:0*/ __Vtemp_70;
    VlWide<5>/*159:0*/ __Vtemp_75;
    VlWide<5>/*159:0*/ __Vtemp_80;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_90;
    VlWide<5>/*159:0*/ __Vtemp_95;
    VlWide<6>/*191:0*/ __Vtemp_102;
    SData/*31:0*/ __Vdeeptemp_h8cd65c5f__0;
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w532 = (1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fffU 
                                                           & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])))));
    vlSelf->md_board__DOT__m68k__DOT__w533 = (1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xfe000U 
                                                           & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                >> 0xbU) 
                                               & (0x4ee8U 
                                                  == 
                                                  (0xfff8U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                              >> 0xaU) 
                                                             & (0x4ed0U 
                                                                == 
                                                                (0xfff8U 
                                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                 >> 9U) 
                                                                & (0x4ef8U 
                                                                   == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                    >> 8U) 
                                                                   & (0x4ef9U 
                                                                      == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                        >> 7U) 
                                                                       & (0x3cU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                      & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                           >> 6U) 
                                                                          & (0x3cU 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                         & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                             >> 5U) 
                                                                            & (0x48c0U 
                                                                               == 
                                                                               (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 4U) 
                                                                               & (0xc188U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 3U) 
                                                                                & (0xc140U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 2U) 
                                                                                & (0x80c0U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 1U) 
                                                                                & (0x81c0U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                & (0x50c8U 
                                                                                == 
                                                                                (0xf0f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1fU) 
                                                                                & (0xb000U 
                                                                                == 
                                                                                (0xf1b0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1eU) 
                                                                                & (0xb0c0U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1dU) 
                                                                                & (0xb1c0U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1cU) 
                                                                                & (0xb080U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1bU) 
                                                                                & (0xb188U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1aU) 
                                                                                & (0xb108U 
                                                                                == 
                                                                                (0xf1b8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x19U) 
                                                                                & (0x4180U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x18U) 
                                                                                & (0x100U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x17U) 
                                                                                & (0x4a80U 
                                                                                == 
                                                                                (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x16U) 
                                                                                & (0x140U 
                                                                                == 
                                                                                (0xf178U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x15U) 
                                                                                & (0x180U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x14U) 
                                                                                & (0x4e76U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x13U) 
                                                                                & (0x4e40U 
                                                                                == 
                                                                                (0xfff0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x12U) 
                                                                                & (0x4ac0U 
                                                                                == 
                                                                                (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x11U) 
                                                                                & (0x4e71U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x10U) 
                                                                                & (0x9108U 
                                                                                == 
                                                                                (0xb1b8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xfU) 
                                                                                & (0x9188U 
                                                                                == 
                                                                                (0xb1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xeU) 
                                                                                & (0x8108U 
                                                                                == 
                                                                                (0xb1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xdU) 
                                                                                & (0x3bU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xcU) 
                                                                                & (0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x3bU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1fU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1fU))) 
                                                                                | ((0xc0000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1eU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1eU))) 
                                                                                | ((0xe0000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x3aU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1dU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x1dU))) 
                                                                                | ((0xf0000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1cU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x1cU))) 
                                                                                | ((0xf8000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x3aU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1bU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1bU))) 
                                                                                | ((0xfc000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1aU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1aU))) 
                                                                                | ((0xfe000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x19U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x19U))) 
                                                                                | ((0xff000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x18U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x18U))) 
                                                                                | ((0xff800000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x17U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x17U))) 
                                                                                | ((0xffc00000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x16U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x16U))) 
                                                                                | ((0xffe00000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x15U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x15U))) 
                                                                                | ((((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                & (0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533))) 
                                                                                << 0x14U) 
                                                                                | (((0x9180U 
                                                                                == 
                                                                                (0x9180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x13U) 
                                                                                | (((0x9080U 
                                                                                == 
                                                                                (0x90c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x12U) 
                                                                                | (((0x8080U 
                                                                                == 
                                                                                (0xa0c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x11U) 
                                                                                | (((0x5080U 
                                                                                == 
                                                                                (0xf0c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x10U) 
                                                                                | (((0x4a80U 
                                                                                == 
                                                                                (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xfU) 
                                                                                | (((0x4080U 
                                                                                == 
                                                                                (0xf9c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xeU) 
                                                                                | (((0x2000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xdU) 
                                                                                | (((0xe0c0U 
                                                                                == 
                                                                                (0xf8c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xcU) 
                                                                                | (((0x5040U 
                                                                                == 
                                                                                (0xf040U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xbU) 
                                                                                | (((0x5000U 
                                                                                == 
                                                                                (0xf080U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xaU) 
                                                                                | (((0x9040U 
                                                                                == 
                                                                                (0x9140U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 9U) 
                                                                                | (((0x9000U 
                                                                                == 
                                                                                (0x9080U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 8U) 
                                                                                | (((0x8040U 
                                                                                == 
                                                                                (0xb040U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 7U) 
                                                                                | (((0x8000U 
                                                                                == 
                                                                                (0xb080U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 6U) 
                                                                                | (((0x4a40U 
                                                                                == 
                                                                                (0xff40U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 5U) 
                                                                                | (((0x4040U 
                                                                                == 
                                                                                (0xf940U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 4U) 
                                                                                | (((0x4000U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 3U) 
                                                                                | (((0x4180U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 2U) 
                                                                                | (((0x1000U 
                                                                                == 
                                                                                (0xd000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 1U) 
                                                                                | (0x100U 
                                                                                == 
                                                                                (0xf100U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                 >> 0xbU) 
                                                & (0x4ee8U 
                                                   == 
                                                   (0xfff8U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                               >> 0xaU) 
                                                              & (0x4ed0U 
                                                                 == 
                                                                 (0xfff8U 
                                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                  >> 9U) 
                                                                 & (0x4ef8U 
                                                                    == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                     >> 8U) 
                                                                    & (0x4ef9U 
                                                                       == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                         >> 7U) 
                                                                        & (0x3cU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                       & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                            >> 6U) 
                                                                           & (0x3cU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                          & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                              >> 5U) 
                                                                             & (0x48c0U 
                                                                                == 
                                                                                (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 4U) 
                                                                                & (0xc188U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 3U) 
                                                                                & (0xc140U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 2U) 
                                                                                & (0x80c0U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                >> 1U) 
                                                                                & (0x81c0U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                                                & (0x50c8U 
                                                                                == 
                                                                                (0xf0f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1fU) 
                                                                                & (0xb000U 
                                                                                == 
                                                                                (0xf1b0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1eU) 
                                                                                & (0xb0c0U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1dU) 
                                                                                & (0xb1c0U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1cU) 
                                                                                & (0xb080U 
                                                                                == 
                                                                                (0xf1f0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1bU) 
                                                                                & (0xb188U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x1aU) 
                                                                                & (0xb108U 
                                                                                == 
                                                                                (0xf1b8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x19U) 
                                                                                & (0x4180U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x18U) 
                                                                                & (0x100U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x17U) 
                                                                                & (0x4a80U 
                                                                                == 
                                                                                (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x16U) 
                                                                                & (0x140U 
                                                                                == 
                                                                                (0xf178U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x15U) 
                                                                                & (0x180U 
                                                                                == 
                                                                                (0xf1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x14U) 
                                                                                & (0x4e76U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x13U) 
                                                                                & (0x4e40U 
                                                                                == 
                                                                                (0xfff0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x12U) 
                                                                                & (0x4ac0U 
                                                                                == 
                                                                                (0xfff8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x11U) 
                                                                                & (0x4e71U 
                                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0x10U) 
                                                                                & (0x9108U 
                                                                                == 
                                                                                (0xb1b8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xfU) 
                                                                                & (0x9188U 
                                                                                == 
                                                                                (0xb1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xeU) 
                                                                                & (0x8108U 
                                                                                == 
                                                                                (0xb1f8U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xdU) 
                                                                                & (0x3bU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                >> 0xcU) 
                                                                                & (0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x3bU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1fU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1fU))) 
                                                                                | ((0xc0000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x30U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1eU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1eU))) 
                                                                                | ((0xe0000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x3aU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1dU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x1dU))) 
                                                                                | ((0xf0000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1cU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x1cU))) 
                                                                                | ((0xf8000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x3aU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1bU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1bU))) 
                                                                                | ((0xfc000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x28U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x1aU)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x1aU))) 
                                                                                | ((0xfe000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x19U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x19U))) 
                                                                                | ((0xff000000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x18U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x18U))) 
                                                                                | ((0xff800000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x17U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x17U))) 
                                                                                | ((0xffc00000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x16U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                                                << 0x16U))) 
                                                                                | ((0xffe00000U 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                << 0x14U) 
                                                                                & ((0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x15U)) 
                                                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                                                                << 0x15U))) 
                                                                                | ((((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[0U] 
                                                                                & (0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533))) 
                                                                                << 0x14U) 
                                                                                | (((0x9180U 
                                                                                == 
                                                                                (0x9180U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x13U) 
                                                                                | (((0x9080U 
                                                                                == 
                                                                                (0x90c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x12U) 
                                                                                | (((0x8080U 
                                                                                == 
                                                                                (0xa0c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x11U) 
                                                                                | (((0x5080U 
                                                                                == 
                                                                                (0xf0c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0x10U) 
                                                                                | (((0x4a80U 
                                                                                == 
                                                                                (0xffc0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xfU) 
                                                                                | (((0x4080U 
                                                                                == 
                                                                                (0xf9c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xeU) 
                                                                                | (((0x2000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xdU) 
                                                                                | (((0xe0c0U 
                                                                                == 
                                                                                (0xf8c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xcU) 
                                                                                | (((0x5040U 
                                                                                == 
                                                                                (0xf040U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xbU) 
                                                                                | (((0x5000U 
                                                                                == 
                                                                                (0xf080U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 0xaU) 
                                                                                | (((0x9040U 
                                                                                == 
                                                                                (0x9140U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 9U) 
                                                                                | (((0x9000U 
                                                                                == 
                                                                                (0x9080U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 8U) 
                                                                                | (((0x8040U 
                                                                                == 
                                                                                (0xb040U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 7U) 
                                                                                | (((0x8000U 
                                                                                == 
                                                                                (0xb080U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 6U) 
                                                                                | (((0x4a40U 
                                                                                == 
                                                                                (0xff40U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 5U) 
                                                                                | (((0x4040U 
                                                                                == 
                                                                                (0xf940U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 4U) 
                                                                                | (((0x4000U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 3U) 
                                                                                | (((0x4180U 
                                                                                == 
                                                                                (0xf1c0U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 2U) 
                                                                                | (((0x1000U 
                                                                                == 
                                                                                (0xd000U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                                << 1U) 
                                                                                | (0x100U 
                                                                                == 
                                                                                (0xf100U 
                                                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_7[2U] = ((0xfffe0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                   >> 0xcU) & ((0x4e90U 
                                                == 
                                                (0xfff8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 5U))) 
                     | ((0xffff0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                      >> 0xcU) & ((0x4eb8U 
                                                   == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                  << 4U))) 
                        | ((0xffff8U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                         >> 0xcU) & 
                                        ((0x4eb9U == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                         << 3U))) | 
                           ((0xffffcU & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                          >> 0xcU) 
                                         & ((0x4efbU 
                                             == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                            << 2U))) 
                            | ((0xffffeU & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                             >> 0xcU) 
                                            & ((0x4ef0U 
                                                == 
                                                (0xfff8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 1U))) 
                               | ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                   >> 0xcU) & (0x4efaU 
                                               == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))))));
    __Vtemp_12[2U] = ((0xffc00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                    >> 0xcU) & ((0x41f9U 
                                                 == 
                                                 (0xf1ffU 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 0xaU))) 
                      | ((0xffe00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                       >> 0xcU) & (
                                                   (0x4ebbU 
                                                    == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                   << 9U))) 
                         | ((0xfff00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                          >> 0xcU) 
                                         & ((0x4eb0U 
                                             == (0xfff8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 8U))) 
                            | ((0xfff80U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                             >> 0xcU) 
                                            & ((0x4ebaU 
                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                               << 7U))) 
                               | ((0xfffc0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                >> 0xcU) 
                                               & ((0x4ea8U 
                                                   == 
                                                   (0xfff8U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 6U))) 
                                  | __Vtemp_7[2U])))));
    __Vtemp_17[2U] = ((0xf8000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                    >> 0xcU) & ((0x4cb0U 
                                                 == 
                                                 (0xffb8U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 0xfU))) 
                      | ((0xfc000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                       >> 0xcU) & (
                                                   (0x4c90U 
                                                    == 
                                                    (0xffb8U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0xeU))) 
                         | ((0xfe000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                          >> 0xcU) 
                                         & ((0x4cbaU 
                                             == (0xffbfU 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0xdU))) 
                            | ((0xff000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                             >> 0xcU) 
                                            & ((0x4ca8U 
                                                == 
                                                (0xffb8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0xcU))) 
                               | ((0xff800U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                >> 0xcU) 
                                               & ((0x41f8U 
                                                   == 
                                                   (0xf1ffU 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0xbU))) 
                                  | __Vtemp_12[2U])))));
    __Vtemp_22[2U] = (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                        & (0x41f0U == (0xf1f8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                       << 0x14U) | ((0x80000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                  >> 0xcU) 
                                                 & ((0x41faU 
                                                     == 
                                                     (0xf1ffU 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                    << 0x13U))) 
                                    | ((0xc0000U & 
                                        ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                          >> 0xcU) 
                                         & ((0x41e8U 
                                             == (0xf1f8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x12U))) 
                                       | ((0xe0000U 
                                           & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                               >> 0xcU) 
                                              & ((0x41d0U 
                                                  == 
                                                  (0xf1f8U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                 << 0x11U))) 
                                          | ((0xf0000U 
                                              & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[1U] 
                                                  >> 0xcU) 
                                                 & ((0x4cbbU 
                                                     == 
                                                     (0xffbfU 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                    << 0x10U))) 
                                             | __Vtemp_17[2U])))));
    __Vtemp_27[2U] = ((0xfe000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                       << 0x14U) & 
                                      ((0x4e60U == 
                                        (0xfff8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x19U))) 
                      | ((0xff000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                          << 0x14U) 
                                         & ((0x4cb8U 
                                             == (0xffbfU 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x18U))) 
                         | ((0xff800000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                             << 0x14U) 
                                            & ((0x4cb9U 
                                                == 
                                                (0xffbfU 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x17U))) 
                            | ((0xffc00000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                << 0x14U) 
                                               & ((0x4e50U 
                                                   == 
                                                   (0xfff8U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0x16U))) 
                               | ((0xffe00000U & ((
                                                   vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                   << 0x14U) 
                                                  & ((0x41fbU 
                                                      == 
                                                      (0xf1ffU 
                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                     << 0x15U))) 
                                  | __Vtemp_22[2U])))));
    __Vtemp_32[2U] = ((0xc0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                       << 0x14U) & 
                                      ((0xc0c0U == 
                                        (0xf0f8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x1eU))) 
                      | ((0xe0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                          << 0x14U) 
                                         & ((0x188U 
                                             == (0xf1f8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x1dU))) 
                         | ((0xf0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                             << 0x14U) 
                                            & ((0x1c8U 
                                                == 
                                                (0xf1f8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x1cU))) 
                            | ((0xf8000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                << 0x14U) 
                                               & ((0x108U 
                                                   == 
                                                   (0xf1f8U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0x1bU))) 
                               | ((0xfc000000U & ((
                                                   vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                   << 0x14U) 
                                                  & ((0x148U 
                                                      == 
                                                      (0xf1f8U 
                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                     << 0x1aU))) 
                                  | __Vtemp_27[2U])))));
    __Vtemp_38[3U] = ((0xffff0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                    >> 0xcU) & ((0U 
                                                 == 
                                                 (0xf180U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 4U))) 
                      | ((0xffff8U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                       >> 0xcU) & (
                                                   (0x4a00U 
                                                    == 
                                                    (0xffb8U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 3U))) 
                         | ((0xffffcU & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                          >> 0xcU) 
                                         & ((0x4880U 
                                             == (0xfff8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 2U))) 
                            | ((0xffffeU & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                             >> 0xcU) 
                                            & ((0x4000U 
                                                == 
                                                (0xf9b8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 1U))) 
                               | ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                   >> 0xcU) & (0x4080U 
                                               == (0xf9f8U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))))));
    __Vtemp_43[3U] = ((0xffe00U & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                     >> 0xcU) & ((0x20U 
                                                  == 
                                                  (0x38U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                 << 9U)) 
                                   & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                      << 9U))) | ((0xfff00U 
                                                   & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                        >> 0xcU) 
                                                       & ((0x20U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                          << 8U)) 
                                                      & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                                         << 8U))) 
                                                  | ((0xfff80U 
                                                      & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                          >> 0xcU) 
                                                         & ((0x4878U 
                                                             == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                            << 7U))) 
                                                     | ((0xfffc0U 
                                                         & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                             >> 0xcU) 
                                                            & ((0x4879U 
                                                                == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                               << 6U))) 
                                                        | ((0xfffe0U 
                                                            & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                                >> 0xcU) 
                                                               & ((0x4e58U 
                                                                   == 
                                                                   (0xfff8U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                                  << 5U))) 
                                                           | __Vtemp_38[3U])))));
    __Vtemp_48[3U] = ((0xfc000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                    >> 0xcU) & ((0x487bU 
                                                 == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                << 0xeU))) 
                      | ((0xfe000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                       >> 0xcU) & (
                                                   (0x4870U 
                                                    == 
                                                    (0xfff8U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0xdU))) 
                         | ((0xff000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                          >> 0xcU) 
                                         & ((0x487aU 
                                             == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                            << 0xcU))) 
                            | ((0xff800U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                             >> 0xcU) 
                                            & ((0x4868U 
                                                == 
                                                (0xfff8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0xbU))) 
                               | ((0xffc00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                >> 0xcU) 
                                               & ((0x4850U 
                                                   == 
                                                   (0xfff8U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0xaU))) 
                                  | __Vtemp_43[3U])))));
    __Vtemp_52[3U] = ((0xc0000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                    >> 0xcU) & ((0x48a0U 
                                                 == 
                                                 (0xffb8U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 0x12U))) 
                      | ((0xe0000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                       >> 0xcU) & (
                                                   (0x4c98U 
                                                    == 
                                                    (0xffb8U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0x11U))) 
                         | ((0xf0000U & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                           >> 0xcU) 
                                          & ((0x18U 
                                              == (0x38U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                             << 0x10U)) 
                                         & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w532)) 
                                            << 0x10U))) 
                            | ((0xf8000U & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                              >> 0xcU) 
                                             & ((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 0xfU)) 
                                            & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w533)) 
                                               << 0xfU))) 
                               | __Vtemp_48[3U]))));
    __Vtemp_57[3U] = ((0xff800000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                       << 0x14U) & 
                                      ((0x5000U == 
                                        (0xf0b8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x17U))) 
                      | ((0xffc00000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                          << 0x14U) 
                                         & ((0x5048U 
                                             == (0xf0f8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x16U))) 
                         | ((0xffe00000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                             << 0x14U) 
                                            & ((0x5080U 
                                                == 
                                                (0xf0f0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x15U))) 
                            | (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                 & (0x13c0U == (0xdff0U 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                << 0x14U) | ((0x80000U 
                                              & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                                                  >> 0xcU) 
                                                 & ((0x23c0U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                    << 0x13U))) 
                                             | __Vtemp_52[3U])))));
    __Vtemp_62[3U] = ((0xf0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                       << 0x14U) & 
                                      ((0x2140U == 
                                        (0xf1f0U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x1cU))) 
                      | ((0xf8000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                          << 0x14U) 
                                         & ((0x7000U 
                                             == (0xf100U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x1bU))) 
                         | ((0xfc000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                             << 0x14U) 
                                            & ((0x8100U 
                                                == 
                                                (0xb1f8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x1aU))) 
                            | ((0xfe000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                                << 0x14U) 
                                               & ((0x11c0U 
                                                   == 
                                                   (0xdff0U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0x19U))) 
                               | ((0xff000000U & ((
                                                   vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                                   << 0x14U) 
                                                  & ((0x21c0U 
                                                      == 
                                                      (0xfff0U 
                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                     << 0x18U))) 
                                  | __Vtemp_57[3U])))));
    __Vtemp_70[4U] = ((0xffff0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                    >> 0xcU) & ((0x2180U 
                                                 == 
                                                 (0xf1f0U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 4U))) 
                      | ((0xffff8U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                       >> 0xcU) & (
                                                   (0x1080U 
                                                    == 
                                                    (0xd1f0U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 3U))) 
                         | ((0xffffcU & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                          >> 0xcU) 
                                         & ((0x2080U 
                                             == (0xf1f0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 2U))) 
                            | ((0xffffeU & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                             >> 0xcU) 
                                            & ((0x1100U 
                                                == 
                                                (0xd1f0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 1U))) 
                               | ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                   >> 0xcU) & (0x2100U 
                                               == (0xf1f0U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))))));
    __Vtemp_75[4U] = ((0xffe00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                    >> 0xcU) & ((0x9180U 
                                                 == 
                                                 (0xb1b8U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 9U))) 
                      | ((0xfff00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                       >> 0xcU) & (
                                                   (0x8080U 
                                                    == 
                                                    (0xa1f0U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 8U))) 
                         | ((0xfff80U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                          >> 0xcU) 
                                         & ((0xb100U 
                                             == (0xf1b8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 7U))) 
                            | ((0xfffc0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                             >> 0xcU) 
                                            & ((0xb180U 
                                                == 
                                                (0xf1f8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 6U))) 
                               | ((0xfffe0U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                                >> 0xcU) 
                                               & ((0x1180U 
                                                   == 
                                                   (0xd1f0U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 5U))) 
                                  | __Vtemp_70[4U])))));
    __Vtemp_80[4U] = ((0xfc000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                    >> 0xcU) & ((0x2000U 
                                                 == 
                                                 (0xf1b0U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                << 0xeU))) 
                      | ((0xfe000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                       >> 0xcU) & (
                                                   (0x9100U 
                                                    == 
                                                    (0xb1b8U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0xdU))) 
                         | ((0xff000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                          >> 0xcU) 
                                         & ((0x8000U 
                                             == (0xa1b0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0xcU))) 
                            | ((0xff800U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                             >> 0xcU) 
                                            & ((0x90c0U 
                                                == 
                                                (0xb1f0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0xbU))) 
                               | ((0xffc00U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                                >> 0xcU) 
                                               & ((0x91c0U 
                                                   == 
                                                   (0xb1f0U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0xaU))) 
                                  | __Vtemp_75[4U])))));
    __Vtemp_85[4U] = ((0x80000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                    >> 0xcU) & ((0x4e75U 
                                                 == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                << 0x13U))) 
                      | ((0xc0000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                       >> 0xcU) & (
                                                   (0x4e73U 
                                                    == 
                                                    (0xfffbU 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 0x12U))) 
                         | ((0xe0000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                          >> 0xcU) 
                                         & ((0x44c0U 
                                             == (0xfdf8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x11U))) 
                            | ((0xf0000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                             >> 0xcU) 
                                            & ((0x1000U 
                                                == 
                                                (0xd1f0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x10U))) 
                               | ((0xf8000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                                >> 0xcU) 
                                               & ((0x3040U 
                                                   == 
                                                   (0xf1f0U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0xfU))) 
                                  | __Vtemp_80[4U])))));
    __Vtemp_90[4U] = ((0xff000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                       << 0x14U) & 
                                      ((0xe000U == 
                                        (0xf0a0U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x18U))) 
                      | ((0xff800000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                          << 0x14U) 
                                         & ((0xe080U 
                                             == (0xf0e0U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x17U))) 
                         | ((0xffc00000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                             << 0x14U) 
                                            & ((0x48b8U 
                                                == 
                                                (0xffbfU 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x16U))) 
                            | ((0xffe00000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                                << 0x14U) 
                                               & ((0x48b9U 
                                                   == 
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0x15U))) 
                               | (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                    & (0x50c0U == (0xf0f8U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                   << 0x14U) | __Vtemp_85[4U])))));
    __Vtemp_95[4U] = ((0xe0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                       << 0x14U) & 
                                      ((0x48b0U == 
                                        (0xffb8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x1dU))) 
                      | ((0xf0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                          << 0x14U) 
                                         & ((0x4890U 
                                             == (0xffb8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                            << 0x1cU))) 
                         | ((0xf8000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                             << 0x14U) 
                                            & ((0x48a8U 
                                                == 
                                                (0xffb8U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                               << 0x1bU))) 
                            | ((0xfc000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                                << 0x14U) 
                                               & ((0xe020U 
                                                   == 
                                                   (0xf0a0U 
                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                  << 0x1aU))) 
                               | ((0xfe000000U & ((
                                                   vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                                   << 0x14U) 
                                                  & ((0xe0a0U 
                                                      == 
                                                      (0xf0e0U 
                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                     << 0x19U))) 
                                  | __Vtemp_90[4U])))));
    __Vtemp_102[5U] = (((IData)((((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                   >> 0x10U) & (0x6000U 
                                                == 
                                                (0xf000U 
                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)))) 
                                 & (0U == (0xe0U & 
                                           vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])))) 
                        << 4U) | ((0xffff8U & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                                 >> 0xcU) 
                                                & ((0x80U 
                                                    == 
                                                    (0xf1c0U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                   << 3U)) 
                                               & ((~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                                    >> 8U)) 
                                                  << 3U))) 
                                  | ((0xffffcU & ((
                                                   vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                                   >> 0xcU) 
                                                  & ((0x4e70U 
                                                      == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                     << 2U))) 
                                     | ((0xffffeU & 
                                         ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                           >> 0xcU) 
                                          & ((0x4840U 
                                              == (0xfff8U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                             << 1U))) 
                                        | ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                                            >> 0xcU) 
                                           & (0x4e68U 
                                              == (0xfff8U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))))))));
    __Vtemp_1[5U] = (((0xa000U == (0xf000U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                      << 0xaU) | (((0xf000U == (0xf000U 
                                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                   << 9U) | (((0x880U 
                                               == (0xff80U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                              << 8U) 
                                             | (((0x6100U 
                                                  == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                                 << 7U) 
                                                | ((((0x6100U 
                                                      == 
                                                      (0xff00U 
                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                     & (~ 
                                                        (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                                         >> 7U))) 
                                                    << 6U) 
                                                   | ((((0x6000U 
                                                         == 
                                                         (0xf0ffU 
                                                          & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                                        & (~ 
                                                           (vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] 
                                                            >> 7U))) 
                                                       << 5U) 
                                                      | __Vtemp_102[5U]))))));
    vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U] = 
        __Vtemp_2[0U];
    vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U] = 
        __Vtemp_2[1U];
    vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U] = 
        ((0x80000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[2U] 
                          << 0x14U) & ((0x4800U == 
                                        (0xfff8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x1fU))) 
         | __Vtemp_32[2U]);
    vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U] = 
        ((0x80000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                          << 0x14U) & ((0x10c0U == 
                                        (0xd1f0U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x1fU))) 
         | ((0xc0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                             << 0x14U) & ((0x20c0U 
                                           == (0xf1f0U 
                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                          << 0x1eU))) 
            | ((0xe0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[3U] 
                                << 0x14U) & ((0x1140U 
                                              == (0xd1f0U 
                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                             << 0x1dU))) 
               | __Vtemp_62[3U])));
    vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U] = 
        ((0x80000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                          << 0x14U) & ((0x40c0U == 
                                        (0xfff8U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w530))) 
                                       << 0x1fU))) 
         | ((0xc0000000U & ((vlSelf->md_board__DOT__m68k__DOT__a0_pla_mem[4U] 
                             << 0x14U) & ((0x4e72U 
                                           == (IData)(vlSelf->md_board__DOT__m68k__DOT__w530)) 
                                          << 0x1eU))) 
            | __Vtemp_95[4U]));
    vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U] = 
        __Vtemp_1[5U];
    __Vdeeptemp_h8cd65c5f__0 = (((0x80000U & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                  ? 0x1d1U : 0x3ffU) 
                                & (((0x100000U & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                     ? 0x6cU : 0x3ffU) 
                                   & (((0x200000U & 
                                        vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                        ? 0xaeU : 0x3ffU) 
                                      & (((0x400000U 
                                           & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                           ? 0xa6U : 0x3ffU) 
                                         & (((0x800000U 
                                              & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                              ? 0x3e3U
                                              : 0x3ffU) 
                                            & (((0x1000000U 
                                                 & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                 ? 0x3e3U
                                                 : 0x3ffU) 
                                               & (((0x2000000U 
                                                    & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                    ? 0x232U
                                                    : 0x3ffU) 
                                                  & (((0x4000000U 
                                                       & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                       ? 0xa7U
                                                       : 0x3ffU) 
                                                     & (((0x8000000U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                          ? 0xeaU
                                                          : 0x3ffU) 
                                                        & (((0x10000000U 
                                                             & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                             ? 0x1f6U
                                                             : 0x3ffU) 
                                                           & (((0x20000000U 
                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                ? 0x297U
                                                                : 0x3ffU) 
                                                              & (((0x40000000U 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                   ? 0x255U
                                                                   : 0x3ffU) 
                                                                 & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U] 
                                                                      >> 0x1fU)
                                                                      ? 0x2b4U
                                                                      : 0x3ffU) 
                                                                    & (((1U 
                                                                         & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                         ? 0x2b4U
                                                                         : 0x3ffU) 
                                                                       & (((2U 
                                                                            & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                            ? 0x1f7U
                                                                            : 0x3ffU) 
                                                                          & (((4U 
                                                                               & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                               ? 0x1f7U
                                                                               : 0x3ffU) 
                                                                             & (((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1f2U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x293U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x273U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x2b0U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x2b0U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1f3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1f3U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x3e4U
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x275U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1fdU
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1fdU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x127U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1f5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1f5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x2f1U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x2f2U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x2f2U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1fbU
                                                                                 : 0x3ffU) 
                                                                                & (((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1fbU
                                                                                 : 0x3ffU) 
                                                                                & (((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x30bU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1e9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1f9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x2f5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1d6U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1d2U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1ceU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x1caU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U])
                                                                                 ? 0x15bU
                                                                                 : 0x3ffU) 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla[2U] 
                                                                                >> 0x1fU)
                                                                                 ? 0x13bU
                                                                                 : 0x3ffU) 
                                                                                & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x137U
                                                                                 : 0x3ffU) 
                                                                                & (((2U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x133U
                                                                                 : 0x3ffU) 
                                                                                & (((4U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x133U
                                                                                 : 0x3ffU) 
                                                                                & (((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x12dU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2b9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x119U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x1faU
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x178U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x179U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x103U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x17cU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x17dU
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x17dU
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x1ffU
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x1ffU
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0xfU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x21cU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x123U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x3a4U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x1eeU
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x1eaU
                                                                                 : 0x3ffU) 
                                                                                & (((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2dcU
                                                                                 : 0x3ffU) 
                                                                                & (((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2dcU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2d8U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2ddU
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2d9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x1cdU
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x23bU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2deU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2daU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U])
                                                                                 ? 0x2fdU
                                                                                 : 0x3ffU) 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla[3U] 
                                                                                >> 0x1fU)
                                                                                 ? 0x2feU
                                                                                 : 0x3ffU) 
                                                                                & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x2fcU
                                                                                 : 0x3ffU) 
                                                                                & (((2U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x2f8U
                                                                                 : 0x3ffU) 
                                                                                & (((4U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x2f9U
                                                                                 : 0x3ffU) 
                                                                                & (((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x2faU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1efU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1ebU
                                                                                 : 0x3ffU) 
                                                                                & (((0x40U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x10cU
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x100U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1c5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1c5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1c5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1c9U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1c1U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1c1U
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x129U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x279U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x121U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x301U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x12aU
                                                                                 : 0x3ffU) 
                                                                                & (((0x80000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x126U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x384U
                                                                                 : 0x3ffU) 
                                                                                & (((0x200000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1e5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x400000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1edU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x385U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x381U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x386U
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x382U
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x1f1U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x3a0U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x325U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U])
                                                                                 ? 0x3a2U
                                                                                 : 0x3ffU) 
                                                                                & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla[4U] 
                                                                                >> 0x1fU)
                                                                                 ? 0x3a5U
                                                                                 : 0x3ffU) 
                                                                                & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x230U
                                                                                 : 0x3ffU) 
                                                                                & (((2U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x341U
                                                                                 : 0x3ffU) 
                                                                                & (((4U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x3a6U
                                                                                 : 0x3ffU) 
                                                                                & (((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x3e0U
                                                                                 : 0x3ffU) 
                                                                                & (((0x10U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x308U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x68U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x89U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0xa9U
                                                                                 : 0x3ffU) 
                                                                                & ((0x100U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[5U])
                                                                                 ? 0x2b9U
                                                                                 : 0x3ffU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__w531 = (((0x100000U 
                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                ? 0x1e6U
                                                : 0x3ffU) 
                                              & (((0x200000U 
                                                   & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                   ? 0x1e2U
                                                   : 0x3ffU) 
                                                 & (((0x400000U 
                                                      & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                      ? 0xeU
                                                      : 0x3ffU) 
                                                    & (((0x800000U 
                                                         & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                         ? 0xaU
                                                         : 0x3ffU) 
                                                       & (((0x1000000U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                            ? 0xbU
                                                            : 0x3ffU) 
                                                          & (((0x2000000U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                               ? 6U
                                                               : 0x3ffU) 
                                                             & (((0x4000000U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                                  ? 0x1c6U
                                                                  : 0x3ffU) 
                                                                & (((0x8000000U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                                     ? 0x1c6U
                                                                     : 0x3ffU) 
                                                                   & (((0x10000000U 
                                                                        & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                                        ? 0x1c2U
                                                                        : 0x3ffU) 
                                                                      & (((0x20000000U 
                                                                           & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                                           ? 0x1c2U
                                                                           : 0x3ffU) 
                                                                         & (((0x40000000U 
                                                                              & vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U])
                                                                              ? 0x1e7U
                                                                              : 0x3ffU) 
                                                                            & (((vlSelf->md_board__DOT__m68k__DOT__a0_pla[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 0x1e7U
                                                                                 : 0x3ffU) 
                                                                               & (((1U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x1e3U
                                                                                 : 0x3ffU) 
                                                                                & (((2U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x1e3U
                                                                                 : 0x3ffU) 
                                                                                & (((4U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x107U
                                                                                 : 0x3ffU) 
                                                                                & (((8U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x10bU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x10fU
                                                                                 : 0x3ffU) 
                                                                                & (((0x20U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x363U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x345U
                                                                                 : 0x3ffU) 
                                                                                & (((0x80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x1d0U
                                                                                 : 0x3ffU) 
                                                                                & (((0x100U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x6dU
                                                                                 : 0x3ffU) 
                                                                                & (((0x200U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x3ebU
                                                                                 : 0x3ffU) 
                                                                                & (((0x400U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x3efU
                                                                                 : 0x3ffU) 
                                                                                & (((0x800U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x125U
                                                                                 : 0x3ffU) 
                                                                                & (((0x1000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x3e7U
                                                                                 : 0x3ffU) 
                                                                                & (((0x2000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x152U
                                                                                 : 0x3ffU) 
                                                                                & (((0x4000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x6bU
                                                                                 : 0x3ffU) 
                                                                                & (((0x8000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x6fU
                                                                                 : 0x3ffU) 
                                                                                & (((0x10000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x1d5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x20000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x1d5U
                                                                                 : 0x3ffU) 
                                                                                & (((0x40000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__a0_pla[1U])
                                                                                 ? 0x1d9U
                                                                                 : 0x3ffU) 
                                                                                & __Vdeeptemp_h8cd65c5f__0)))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__1(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->md_board__DOT__m68k__DOT__w955 = (1U & 
                                              (~ (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                  >> 3U)));
    vlSelf->md_board__DOT__m68k__DOT__w956 = (1U & 
                                              (~ (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                  >> 8U)));
    vlSelf->md_board__DOT__m68k__DOT__w958 = (1U & 
                                              (~ (vlSelf->md_board__DOT__m68k__DOT__w954 
                                                  >> 0xdU)));
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

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__2(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__2\n"); );
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
    vlSelf->md_board__DOT__m68k__DOT__a2_pla_g2 = (1U 
                                                   & (~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                       >> 6U)));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla_g1 = (1U 
                                                   & (~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                       >> 7U)));
    vlSelf->md_board__DOT__m68k__DOT__a2_pla_g3 = (1U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__a2_pla[2U] 
                                                      >> 9U));
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

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__3(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__z80__DOT__rs115__DOT__q;
    md_board__DOT__z80__DOT__rs115__DOT__q = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__rs210__DOT__q;
    md_board__DOT__z80__DOT__rs210__DOT__q = 0;
    // Body
    vlSelf->md_board__DOT__z80__DOT__halt_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w11) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w16)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__haltrs__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__haltrs__DOT__nq 
        = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)) 
                     | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
                        | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                           | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w57))))) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__halt_i))));
    vlSelf->md_board__DOT__z80__DOT__w19_i = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__z80__DOT__w16) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w9)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__rs19__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs19__DOT__nq 
        = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                     | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w9)) 
                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w16))) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i))));
    vlSelf->md_board__DOT__z80__DOT__w18_i = (1U & 
                                              (~ ((
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_251)) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w16)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__rs18__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs18__DOT__nq 
        = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                     | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_251) 
                        & (IData)(vlSelf->md_board__DOT__z80__DOT__w16))) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i))));
    vlSelf->md_board__DOT__z80__DOT__w321 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__rs321__DOT__nq) 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT__w305)))));
    vlSelf->md_board__DOT__z80__DOT__rs321__DOT__nq 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w321) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w305)) 
                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w293))))));
    md_board__DOT__z80__DOT__rs210__DOT__q = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w210_i) 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l40)) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w210_i = (1U & 
                                               (~ ((IData)(md_board__DOT__z80__DOT__rs210__DOT__q) 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__l40)))));
    vlSelf->md_board__DOT__z80__DOT__w205 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__rs205__DOT__nq) 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT__l39)))));
    vlSelf->md_board__DOT__z80__DOT__rs205__DOT__nq 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w205) 
                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l39)) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__w144 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__rs144__DOT__nq) 
                                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT__l37)))));
    vlSelf->md_board__DOT__z80__DOT__rs144__DOT__nq 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w144) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                       | (IData)(vlSelf->md_board__DOT__z80__DOT__l38)))));
    vlSelf->md_board__DOT__z80__DOT__w5 = (1U & (~ 
                                                 (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w4_i)) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__rs5__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs5__DOT__nq = 
        (1U & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w4)) 
                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w5))));
    vlSelf->md_board__DOT__z80__DOT__w442 = (1U & (~ 
                                                   (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                     & (~ 
                                                        ((IData)(vlSelf->md_board__DOT__z80__DOT__l58) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__l59)))) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w442_i))));
    vlSelf->md_board__DOT__z80__DOT__w442_i = (1U & 
                                               (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w433) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT__w442))));
    md_board__DOT__z80__DOT__rs115__DOT__q = (1U & 
                                              (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w123_i)))) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i))));
    vlSelf->md_board__DOT__z80__DOT__w115_i = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w126))) 
                                                   | (IData)(md_board__DOT__z80__DOT__rs115__DOT__q))));
    vlSelf->md_board__DOT__z80__DOT__w48 = (1U & (~ 
                                                  ((IData)(vlSelf->md_board__DOT__z80__DOT__w48_i) 
                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__l17)))));
    vlSelf->md_board__DOT__z80__DOT__w48_i = (1U & 
                                              (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w48) 
                                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                     | (IData)(vlSelf->md_board__DOT__z80__DOT__l18)))));
    if (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__c1)) 
         & ((IData)(vlSelf->md_board__DOT__m68k__DOT__l5) 
            & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3)))) {
        vlSelf->md_board__DOT__m68k__DOT__w109 = (0xffffU 
                                                  & ((~ 
                                                      ((IData)(vlSelf->md_board__DOT__m68k__DOT__w643)
                                                        ? 
                                                       (~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_329))
                                                        : 
                                                       ((IData)(vlSelf->md_board__DOT__m68k__DOT__w639)
                                                         ? 0xffffU
                                                         : 0U))) 
                                                     + 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_326) 
                                                      + 
                                                      (1U 
                                                       & (((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_27) 
                                                           + 
                                                           ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331) 
                                                            + (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_28))) 
                                                          >> 0x10U)))));
        vlSelf->md_board__DOT__m68k__DOT__w147 = (0xffffU 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_27) 
                                                     + 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_331) 
                                                      + (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_28))));
    }
    vlSelf->md_board__DOT__z80__DOT__w77 = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                                                  & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_249 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
           & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
              & (IData)(vlSelf->md_board__DOT__z80__DOT__l82)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_19 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w78_i)) 
                 & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244 
        = (1U & ((~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w78_i)) 
                     | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w80)))) 
                 & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                    & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)))));
    vlSelf->md_board__DOT__z80__DOT__w525 = (0x7fffU 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w210_i)
                                                 ? 
                                                (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w522))
                                                 : (IData)(vlSelf->md_board__DOT__z80__DOT__w522)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_251 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w5) 
           | ((IData)(vlSelf->md_board__DOT__z80__DOT__l3) 
              | (IData)(vlSelf->md_board__DOT__z80__DOT__w9)));
    vlSelf->md_board__DOT__z80__DOT__w446 = (1U & (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w442)) 
                                                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w433))));
    vlSelf->md_board__DOT__z80__DOT__w467 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w115_i) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w464))));
    vlSelf->md_board__DOT__z80__DOT__w481 = ((~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)) 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__l72))) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w464));
    vlSelf->md_board__DOT__z80__DOT__w147 = (0xffU 
                                             & ((1U 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w48) 
                                                    | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l16)))))
                                                 ? 
                                                (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w146))
                                                 : (IData)(vlSelf->md_board__DOT__z80__DOT__w147_prev)));
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
    if (vlSelf->md_board__DOT__m68k__DOT__w106) {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b1_mem
               [2U]);
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_279 
            = (0xffffU & vlSelf->md_board__DOT__m68k__DOT__b1_mem
               [3U]);
    } else {
        vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_281 
            = (0xffffU & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w38)
                            ? vlSelf->md_board__DOT__m68k__DOT__r1
                           [0U] : 0U) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w35)
                                           ? vlSelf->md_board__DOT__m68k__DOT__r1
                                          [1U] : 0U) 
                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w34)
                                              ? vlSelf->md_board__DOT__m68k__DOT__r1
                                             [2U] : 0U) 
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
                                                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_280))))))))))))))))))))))));
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
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_183 
        = (IData)(((0x20U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (0U == (0x3fU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w147)))));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_190 
        = (IData)(((4U == (0x3cU & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                   & (0U == (0x3fU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w147)))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_142 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_111) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT__w80) 
              & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_243)) 
                 & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_19))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_106 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_1 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_251)) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT__w9)));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl75__en 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w446));
    vlSelf->md_board__DOT__z80__DOT__w511_xor = (0xffU 
                                                 & ((IData)(vlSelf->md_board__DOT__z80__DOT__w481)
                                                     ? 
                                                    (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w511))
                                                     : (IData)(vlSelf->md_board__DOT__z80__DOT__w511)));
    if (vlSelf->md_board__DOT__z80__DOT__w446) {
        vlSelf->md_board__DOT__z80__DOT__o2 = (0xfU 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w498));
        vlSelf->md_board__DOT__z80__DOT__o1 = (0xfU 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w511_xor));
    } else {
        vlSelf->md_board__DOT__z80__DOT__o2 = (0xfU 
                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT__w498) 
                                                  >> 4U));
        vlSelf->md_board__DOT__z80__DOT__o1 = (0xfU 
                                               & ((IData)(vlSelf->md_board__DOT__z80__DOT__w511_xor) 
                                                  >> 4U));
    }
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
    vlSelf->md_board__DOT__z80__DOT__w471 = ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                 >> 3U)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w470));
    vlSelf->md_board__DOT__z80__DOT__w472 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w470) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                >> 3U));
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
    vlSelf->md_board__DOT__z80__DOT__w424 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT__w472));
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__4(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__4\n"); );
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
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_30 
        = ((0x10U & vlSelf->md_board__DOT__m68k__DOT__w597)
            ? (IData)(vlSelf->md_board__DOT__m68k__DOT__c3)
            : (IData)(vlSelf->md_board__DOT__m68k__DOT__c2));
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
    vlSelf->md_board__DOT__m68k__DOT__w179 = ((vlSelf->md_board__DOT__m68k__DOT__w597 
                                               >> 6U) 
                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_30));
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__5(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->md_board__DOT__z80__DOT__w82 = (1U & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & vlSelf->md_board__DOT__z80__DOT__pla[1U])))));
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__6(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__6\n"); );
    // Body
    vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl 
        = (((0xfU == (0xfU & (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_sl))) 
            << 4U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__cnt_high__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2)
                       ? (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr2_out)
                       : (IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__reg_ctrl__DOT__reg_sl__DOT__sr1_out)));
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__7(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__7\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((0U == (0x65958940U & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                  << 0x15U) | (((0U == (0x65858000U 
                                        & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                << 0x14U) | (((0U == 
                                               (0x15000U 
                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                              << 0x13U) 
                                             | ((((0U 
                                                   == 
                                                   (0x58000000U 
                                                    & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                      >> 0x13U))) 
                                                 << 0x12U) 
                                                | ((((0U 
                                                      == 
                                                      (0x52000000U 
                                                       & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                     & (~ 
                                                        (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                         >> 0x13U))) 
                                                    << 0x11U) 
                                                   | (((0U 
                                                        == 
                                                        (0x6502a000U 
                                                         & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                       << 0x10U) 
                                                      | (((0U 
                                                           == 
                                                           (0x8200a000U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                          << 0xfU) 
                                                         | (((0U 
                                                              == 
                                                              (0x90020580U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                             << 0xeU) 
                                                            | ((((0U 
                                                                  == 
                                                                  (0x84020580U 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                 & (~ 
                                                                    (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                                     >> 0xcU))) 
                                                                << 0xdU) 
                                                               | (((0U 
                                                                    == 
                                                                    (0xa5029580U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                   << 0xcU) 
                                                                  | (((0U 
                                                                       == 
                                                                       (0x800000U 
                                                                        & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                      << 0xbU) 
                                                                     | (((0U 
                                                                          == 
                                                                          (0x200000U 
                                                                           & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                         << 0xaU) 
                                                                        | (((0U 
                                                                             == 
                                                                             (0x80000U 
                                                                              & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                            << 9U) 
                                                                           | (((0U 
                                                                                == 
                                                                                (0x65956000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                               << 8U) 
                                                                              | (((0U 
                                                                                == 
                                                                                (0x65a90000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x69560000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x55010000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x66000000U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x65a96900U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa9000a80U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == 
                                                                                (0xa98U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                                                >> 2U))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0x18U))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xa84U 
                                                                                & vlSelf->md_board__DOT__m68k__DOT__irdbus)) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                                                >> 2U))) 
                                                                                & (~ 
                                                                                (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                                >> 0x18U))))))))))))))))))))))));
    vlSelf->md_board__DOT__m68k__DOT__ird_pla4 = __Vtemp_1;
    vlSelf->md_board__DOT__m68k__DOT__w629 = (1U & 
                                              (~ ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x30U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__ird_pla4)))) 
                                                  | (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 0xbU))));
    vlSelf->md_board__DOT__m68k__DOT__w626 = ((1U & 
                                               ((vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                 >> 0xbU) 
                                                | (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1c0U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__ird_pla4)))))
                                               ? 0xfU
                                               : (0xfU 
                                                  & ((0x100000U 
                                                      & vlSelf->md_board__DOT__m68k__DOT__ird_pla4)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->md_board__DOT__m68k__DOT__ird_pla4)
                                                       ? 
                                                      (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w620))
                                                       : (IData)(vlSelf->md_board__DOT__m68k__DOT__w620))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x7e000U 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__ird_pla4))) 
                                                       << 3U) 
                                                      | (7U 
                                                         & (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                            >> 9U))))));
}

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__8(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__8\n"); );
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
    vlSelf->md_board__DOT__m68k__DOT__w570 = (IData)(
                                                     (0ULL 
                                                      != 
                                                      (0x700000000000ULL 
                                                       & vlSelf->md_board__DOT__m68k__DOT__ird_pla1)));
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

VL_INLINE_OPT void Vmd_board___024root___act_sequent__TOP__9(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_sequent__TOP__9\n"); );
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

VL_INLINE_OPT void Vmd_board___024root___act_comb__TOP__0(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ md_board__DOT__z80__DOT__w224;
    md_board__DOT__z80__DOT__w224 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w406;
    md_board__DOT__z80__DOT__w406 = 0;
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
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_98 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_202 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212;
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_29;
    // Body
    vlSelf->md_board__DOT__z80__DOT__w11 = (1U & (~ 
                                                  ((~ 
                                                    (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                     >> 3U)) 
                                                   | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_1))));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_252 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w11) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_1));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_241 
        = (IData)((0U != (0x2408000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_79 
        = (IData)((0U != (0x1400U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_229 
        = (IData)((0U != (0x2f0U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_223 
        = (IData)((0U != (0x14000U & vlSelf->md_board__DOT__z80__DOT__pla[0U])));
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
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw378_2__inp 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
            & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
               >> 9U)) | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244)) 
                          & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_22)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_186 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_129) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_116) 
              & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                 >> 0xbU)));
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
    vlSelf->md_board__DOT__z80__DOT__w324 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w326) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w302)));
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
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_1__inp 
        = ((IData)((((0U != (0x98200800U & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                     | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_217)) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_209))) 
           & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184) 
              | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114)));
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
    md_board__DOT__z80__DOT__bcd_val = (0x99U | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_169) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_169) 
                                                     << 5U) 
                                                    | (((IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168) 
                                                        << 2U) 
                                                       | ((IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_168) 
                                                          << 1U)))));
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
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212 
        = (1U & (IData)((((0U != (0x14021000U & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                          | (0U != (0x8000438U & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
                         | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_99))));
    vlSelf->md_board__DOT__z80__DOT__w235 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123)) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                       >> 3U))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230 
        = ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_244) 
             | (0U != (0x10800000U & vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
            | (0U != (0x8006020U & vlSelf->md_board__DOT__z80__DOT__pla[2U]))) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_123));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_153 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95) 
            | (1U & ((0U != (0x4022000U & vlSelf->md_board__DOT__z80__DOT__pla[0U])) 
                     | vlSelf->md_board__DOT__z80__DOT__pla[1U]))) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w390));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_222 
        = (1U & ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                  >> 5U) | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95)));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_170 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_233) 
            | ((IData)(vlSelf->md_board__DOT__z80__DOT__w271) 
               | ((vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                   >> 0x1fU) | (IData)(((0U != (0x28U 
                                                & vlSelf->md_board__DOT__z80__DOT__pla[1U])) 
                                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w86)))))) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w390));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_176 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w100));
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
    vlSelf->md_board__DOT__z80__DOT__w225 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w100)) 
                                             & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_183 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w247) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130) 
            & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_218) 
               | (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                  >> 7U))) | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                              & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236)) 
                                 & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_218))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw470__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw379_1__inp) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w271));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_210) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12));
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
    vlSelf->md_board__DOT__z80__DOT__w316 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w315) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w317))));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_220 
        = (1U & ((((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_222) 
                   | (0U != (0xd4210800U & vlSelf->md_board__DOT__z80__DOT__pla[0U]))) 
                  | vlSelf->md_board__DOT__z80__DOT__pla[1U]) 
                 | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_86)));
    vlSelf->md_board__DOT__z80__DOT__w209 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                >> 3U));
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
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_190 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w121_i)) 
           & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
              & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_208)));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_124 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193) 
            | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w225));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_139 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w225) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w271));
    md_board__DOT__z80__DOT__w224 = ((IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212) 
                                     | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_237) 
                                        | (IData)(vlSelf->md_board__DOT__z80__DOT__w225)));
    vlSelf->md_board__DOT__z80__DOT__w255 = (1U & (
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_95) 
                                                    | (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                       | ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                           >> 4U) 
                                                          | (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_206)))) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w115_i)) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT__w225))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_182 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203) 
            & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130)) 
           | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_184) 
               & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
                  & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203))) 
              | (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114) 
                  & (vlSelf->md_board__DOT__z80__DOT__pla[2U] 
                     >> 9U)) | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_183))));
    vlSelf->md_board__DOT__z80__DOT__w365 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w249) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT__w317)))));
    vlSelf->md_board__DOT__z80__DOT__w366 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w249) 
                                                       | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w317))))));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_173 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w316) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w318));
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
    vlSelf->md_board__DOT__z80__DOT__w436 = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_220) 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w390)));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_172 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw372__inp) 
           | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_142) 
              | (IData)(vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw470__inp)));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl52__inp 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_140) 
            & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_139)) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_5));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_192 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                 | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i)) 
                       | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                           & (IData)(md_board__DOT__z80__DOT__w224)) 
                          | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w127_i)) 
                             & (IData)(md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_212)))))));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl53__inp 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_191) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_136 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_154 
        = (((IData)(vlSelf->md_board__DOT__z80__DOT__w390) 
            & ((~ (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                   >> 4U)) & (IData)(vlSelf->md_board__DOT__z80__DOT__w255))) 
           | (IData)(vlSelf->md_board__DOT__z80__DOT__w400));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_150 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_126) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
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
    vlSelf->md_board__DOT__z80__DOT__w126 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w225) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT__w255));
    vlSelf->md_board__DOT__z80__DOT__w140 = ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_225) 
                                             & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_230)) 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w255))));
    vlSelf->md_board__DOT__z80__DOT__w254 = (1U & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w255)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_204))));
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
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174 
        = ((IData)(vlSelf->md_board__DOT__z80__DOT__w310) 
           | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_186) 
              | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_181) 
                 | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_131))));
    vlSelf->md_board__DOT__z80__DOT__w253 = ((IData)(vlSelf->md_board__DOT__z80__DOT__w235) 
                                             | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185));
    vlSelf->md_board__DOT__z80__DOT__w252 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_203)) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w86) 
                                                | ((IData)(vlSelf->md_board__DOT__z80__DOT__w234) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_213)) 
                                                      & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_185)))));
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
    vlSelf->md_board__DOT__z80__DOT__w343 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_188) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_189) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w315)) 
                                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT__w317) 
                                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w310) 
                                                                | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_174))))))));
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
    vlSelf->md_board__DOT__z80__DOT__w3 = (1U & (~ 
                                                 ((IData)(vlSelf->md_board__DOT__z80__DOT__w201) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w202))));
    vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_7 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w201));
    vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl13__inp 
        = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
           & (IData)(vlSelf->md_board__DOT__z80__DOT__w201));
}
