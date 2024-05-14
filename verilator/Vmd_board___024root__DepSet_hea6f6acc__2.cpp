// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmd_board.h for the primary calling header

#include "Vmd_board__pch.h"
#include "Vmd_board___024root.h"

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__5(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__5\n"); );
    // Init
    QData/*55:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t33;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t33 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t31 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t31;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t32 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t32;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t33 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t33;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t6 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t6;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vram_data 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_0 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_0;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_1 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_1;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t31 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w407) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w408)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t31)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t12 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w120) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w121)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t12)));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t32 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w408) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t32)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t34 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w444) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w440)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t34)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t36 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w452) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w445)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t36)));
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t33 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w423) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v2)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t33)));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t6 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w50) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t6)));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vram_data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data_pull) 
            & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w328)
                 ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem) 
                     << 8U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w331)
                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl96__DOT__mem)
                                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl97__DOT__mem)))
                 : 0xffffU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w327)
                                 ? (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem) 
                                     << 8U) | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w331)
                                                ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl98__DOT__mem)
                                                : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl99__DOT__mem)))
                                 : 0xffffU) & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w329)
                                                 ? 
                                                (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w331)
                                                     ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl100__DOT__mem)
                                                     : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl101__DOT__mem)))
                                                 : 0xffffU) 
                                               & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w326)
                                                    ? 
                                                   (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem) 
                                                     << 8U) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w331)
                                                        ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl102__DOT__mem)
                                                        : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl103__DOT__mem)))
                                                    : 0xffffU) 
                                                  & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr183__DOT__v2)
                                                       ? 
                                                      (0xf800U 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl180__DOT__mem))
                                                       : 0xffffU) 
                                                     & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v2)
                                                          ? 
                                                         (0xf800U 
                                                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl324__DOT__mem))
                                                          : 0xffffU) 
                                                        & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v2)
                                                             ? 
                                                            (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl598__DOT__mem) 
                                                              << 8U) 
                                                             | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl599__DOT__mem))
                                                             : 0xffffU) 
                                                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_3__DOT__v2)
                                                               ? 
                                                              (0xf111U 
                                                               | ((0xe00U 
                                                                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem) 
                                                                      << 3U)) 
                                                                  | ((0xe0U 
                                                                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem) 
                                                                         << 2U)) 
                                                                     | (0xeU 
                                                                        & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl621__DOT__mem) 
                                                                           << 1U)))))
                                                               : 0xffffU))))))))) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data_pull)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data)));
    if (vlSelf->vdp_hclk1) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v2) {
            vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0 
                = (0x3fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_data_in));
            vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l617;
            vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v0 = 1U;
        }
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v2) {
            vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1 
                = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_data_in) 
                         >> 6U));
            vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l617;
            vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__color_ram__v1 = 1U;
        }
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr611__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1070;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr609__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1069;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr423__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t42;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t30;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t6;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr428__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w781;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr361__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w179;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w162;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w179;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w201;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w550)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w497;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w489;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr132__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w403;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w497;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr603__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1044;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w488;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr139__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w410;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w479;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w478;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w476;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr312__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w638;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr267__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w612;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr134__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w481;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr623_1__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w178;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w454) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t39));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr602__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w303;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr601__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w302;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr469__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr242__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w614;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__sr622__data_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__unk_data) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w405) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_418) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t32)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr549__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr330__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr173__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__ioc_hl;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 0xbU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr366__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v1 
            = ((2U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2) 
                      << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t33));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr350__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr329__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr326__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w405) 
               | ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w441) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w450)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t32)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t31) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w443))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__sum) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr372__DOT__v2)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt420__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr455__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr81__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr79__DOT__v2)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr80__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v1 
            = ((0x7eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2) 
                                          >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr607__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1064) 
               & ((0xeU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1045)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr553__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr553__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_1__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr325__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v1 
            = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v1 
            = (0x1fbU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr110__DOT__v1 
            = (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v1 
            = ((0x12U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lcb__DOT__mem)) 
                  & (0xaU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v1 
            = (3U == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr608__DOT__v1 
            = ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1045) 
                 & (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558))) 
                | (((0xeU != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1027)) 
                   | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1064)) 
                      & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1044)) 
                         & (0xeU != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l558)))))) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr618__DOT__v2) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr5__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_403) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_145) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_146) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_406) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_149) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w488) 
                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_150) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_151) 
                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_153) 
                                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_155) 
                                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_168) 
                                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_169) 
                                                | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_170) 
                                                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_174) 
                                                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_234) 
                                                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_175) 
                                                            | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_177)))))))))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
    }
    if ((0x28U > (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w817) {
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl538__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a80c5af__0 
                    = (0x7fU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a80c5af__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v0 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl539__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a81fb2b__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 7U)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a81fb2b__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v1 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl540__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a8226c2__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 0xeU)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a8226c2__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v2 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl541__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a81da49__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 0x15U)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a81da49__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v3 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl542__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a6e3182__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 0x1cU)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a6e3182__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v4 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl543__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a765fb8__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 0x23U)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a765fb8__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v5 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl544__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a7731e2__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 0x2aU)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a7731e2__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v6 = 1U;
                }
            }
            if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl545__DOT__mem)) 
                 & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1))) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a6804f4__0 
                    = (0x7fU & (IData)((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_data_in 
                                        >> 0x31U)));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_h8a6804f4__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__linebuffer__v7 = 1U;
                }
            }
        }
        __Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
            = ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))
                ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
               [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index]
                : 0ULL);
        if ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_1 
                = ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))
                    ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                   [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index]
                    : 0ULL);
        } else {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_0 
                = ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))
                    ? vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer
                   [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index]
                    : 0ULL);
        }
    } else {
        __Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
            = ((1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_index))
                ? (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                   & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_1)
                : (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
                   & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out_0));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr153__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr151__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl256__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl256__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl255__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl255__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl235__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl235__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl234__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl234__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr157__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl479__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl479__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl297__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl297__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl278__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl278__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl277__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl277__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl276__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl276__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl246__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl246__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl244__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl244__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl226__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl226__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl225__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl225__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl224__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl224__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl34__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl34__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b6__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b6__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl515__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l515;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__10__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr620__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl500__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl500__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram
        [vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l617];
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr111__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr321__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr321__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr319__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr274__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr274__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr272__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b5__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b5__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_86_b2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr198__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_nt__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_nt__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hscr__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lscr__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl39__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl39__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl38__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl38__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl37__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl37__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl36__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl36__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl221__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl221__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl219__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl219__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b4__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b4__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl563__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl563__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram_out_dp 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_ram
        [(((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
           << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                      << 4U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                 << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                               << 1U) 
                                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))];
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl504__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr495__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w846)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w809) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 1U));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr490__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr286__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr254__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr250__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr216__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr392__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl394__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr299__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr248__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr231__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr562__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w877;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v1 
            = (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_346)) 
                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w894) 
                   & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem)))) 
               | (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_344)) 
                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w895) 
                      & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem)))) 
                  | (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_342)) 
                      & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w896) 
                         & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem)))) 
                     | (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_340)) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w897) 
                            & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem)))) 
                        | (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_338)) 
                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w898) 
                               & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem)))) 
                           | (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_336)) 
                               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w899) 
                                  & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem)))) 
                              | (((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_334)) 
                                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w900) 
                                     & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem)))) 
                                 | ((0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_331)) 
                                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w901) 
                                       & (0U != (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem)))))))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out 
        = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__linebuffer_out;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t33 = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t33;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l503 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l457 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt457__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w581 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v2)
            ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b4__DOT__mem)
            : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8e_b0__DOT__mem));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_sa_low_2__val 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 4U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_sa_low_1__val 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
            << 7U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                       << 6U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                  << 5U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                             << 4U) 
                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                << 3U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr489__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr285__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr284__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr253__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr252__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr249__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr229__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr228__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr215__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr214__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl484__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl298__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl283__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl251__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl247__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl227__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl213__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr230__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr485__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl523__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl524__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl525__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl526__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl527__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl528__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl529__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl530__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr150__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr349__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr438__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr348__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr546__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr318__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr107__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr663__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr558__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l3;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w804 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr456__DOT__v2) 
           & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l457)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_sa_low 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_sa_low_2__val) 
            << 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_sa_low_1__val));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l3 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l4;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_l4 
        = vlSelf->md_board__DOT__ym__DOT__vdp_edclk_o;
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__6(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w476 = vlSelf->md_board__DOT__z80__DOT__w476;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w754 
        = vlSelf->md_board__DOT__m68k__DOT__w754;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 = vlSelf->md_board__DOT__z80__DOT__w473;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w270__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w270__v3 = 0U;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w753 
        = vlSelf->md_board__DOT__m68k__DOT__w753;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__r8 = vlSelf->md_board__DOT__m68k__DOT__r8;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w356_0 
        = vlSelf->md_board__DOT__m68k__DOT__w356_0;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w439__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w439__v1 = 0U;
    vlSelf->__Vdly__md_board__DOT__VA = vlSelf->md_board__DOT__VA;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w263 
        = vlSelf->md_board__DOT__m68k__DOT__w263;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w343__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v0 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__VD = vlSelf->md_board__DOT__VD;
    vlSelf->md_board__DOT__z80__DOT__m1 = (1U & (~ 
                                                 (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                                                   & ((IData)(vlSelf->md_board__DOT__z80__DOT__w41) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__w113))) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__m1rs__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__m1rs__DOT__nq 
        = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_27)) 
                     & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_253)) 
                    | (IData)(vlSelf->md_board__DOT__z80__DOT__m1))));
    vlSelf->md_board__DOT__z80__DOT__w111 = (1U & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__rs111__DOT__nq) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w112)) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))));
    vlSelf->md_board__DOT__z80__DOT__rs111__DOT__nq 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w111) 
                    & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0) 
                       | (IData)(vlSelf->md_board__DOT__z80__DOT__w112)))));
    if (vlSelf->md_board__DOT__m68k__DOT__w749) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w754 
            = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                     >> 2U));
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w753 
            = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                     >> 3U));
    } else {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w754 
            = (1U & (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w762)) 
                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w757))
                      ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w800))
                      : (IData)(vlSelf->md_board__DOT__m68k__DOT__w754)));
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w753 
            = (1U & (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w761)) 
                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w757))
                      ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w770)
                          ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__w962) 
                             >> 7U) : (IData)(vlSelf->md_board__DOT__m68k__DOT__w970))
                      : (IData)(vlSelf->md_board__DOT__m68k__DOT__w753)));
    }
    if ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w724) 
          | (IData)(vlSelf->md_board__DOT__m68k__DOT__w725)) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__r8 
            = (0xffffU & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w963)));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w895) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__r8 
            = (((IData)(vlSelf->md_board__DOT__m68k__DOT__r8) 
                & (~ vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
                   [0U])) | vlSelf->md_board__DOT__m68k__DOT__b3_s_pulldown_comb
               [1U]);
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c5) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w356_0 
            = vlSelf->md_board__DOT__m68k__DOT__w350;
    } else if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w356_0 = 0U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w355) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w356_0 
            = vlSelf->md_board__DOT__m68k__DOT__w356_0;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r1_j) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2))));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r2_j) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_10) 
                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_5) 
                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2)))));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1 
                = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2)) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_0));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1 
                = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2)) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_0));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1 
                = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2)) 
                    & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2)) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_0));
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1 = 1U;
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1 = 1U;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r1_j) 
               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l2)) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_1)));
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r1_j) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l2)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_2) 
                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l2)))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1 = 1U;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r1_j) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l2)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_2) 
                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l2)))));
    }
    vlSelf->__Vdly__md_board__DOT__VA = (0x7fffffU 
                                         & (((((~ vlSelf->md_board__DOT__ym_VA_d) 
                                               & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w267)
                                                    ? 
                                                   ((0x400000U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v2) 
                                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w247) 
                                                             & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl6__DOT__mem)) 
                                                                | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl7__DOT__mem))))) 
                                                        << 0x16U)) 
                                                    | (0x3fffffU 
                                                       & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_address))
                                                    : 0U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv)
                                                       ? 0U
                                                       : 
                                                      (0xfff80U 
                                                       & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_va_o) 
                                                          << 7U))) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w76)
                                                          ? 0U
                                                          : 
                                                         (0x700000U 
                                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_va_o) 
                                                             << 7U))) 
                                                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_zv)
                                                            ? 0U
                                                            : 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->md_board__DOT___M3)
                                                                ? 
                                                               ((IData)(vlSelf->md_board__DOT__ZA) 
                                                                >> 1U)
                                                                : (IData)(vlSelf->md_board__DOT__ZA)))))))) 
                                              | ((~ 
                                                  (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w400)))))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267)
                                                      ? 
                                                     ((0x400000U 
                                                       & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                          >> 1U)) 
                                                      | ((0x200000U 
                                                          & vlSelf->md_board__DOT__m68k__DOT__irdbus) 
                                                         | ((0x100000U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                << 1U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                   << 2U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                      << 3U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                         << 4U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                            << 5U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                               << 6U)) 
                                                                           | ((0x7f80U 
                                                                               & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x11U)) 
                                                                              | ((0x40U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->md_board__DOT__m68k__DOT__irdbus 
                                                                                >> 0xaU)))))))))))))))))
                                                      : 
                                                     ((0x7f8000U 
                                                       & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w107)) 
                                                          << 0xfU)) 
                                                      | (0x7fffU 
                                                         & (~ 
                                                            ((IData)(vlSelf->md_board__DOT__m68k__DOT__w158) 
                                                             >> 1U)))))))) 
                                             | ((~ 
                                                 (0xfffffU 
                                                  | (0x700000U 
                                                     & ((- (IData)((IData)(vlSelf->md_board__DOT___M3))) 
                                                        << 0x14U)))) 
                                                & (0x100000U 
                                                   | (0x400000U 
                                                      & ((~ (IData)(vlSelf->cart_m3_pause)) 
                                                         << 0x16U))))) 
                                            | (((vlSelf->md_board__DOT__ym_VA_d 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w400)))))) 
                                                & (0xfffffU 
                                                   | (0x700000U 
                                                      & ((- (IData)((IData)(vlSelf->md_board__DOT___M3))) 
                                                         << 0x14U)))) 
                                               & vlSelf->md_board__DOT__VA)));
    vlSelf->__Vdly__md_board__DOT__VD = (0xffffU & 
                                         ((((((~ (IData)(vlSelf->md_board__DOT__ym_VD_d)) 
                                              & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_cd_d)
                                                   ? 0U
                                                   : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)) 
                                                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__arb_w12)
                                                      ? 0U
                                                      : 
                                                     (0x100U 
                                                      & ((~ (IData)(vlSelf->dma_z80_ack)) 
                                                         << 8U))) 
                                                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__arb_w1)
                                                         ? 0U
                                                         : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_vdata)) 
                                                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc_bc3)
                                                            ? 0U
                                                            : 
                                                           ((0xfe00U 
                                                             & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc_vdata) 
                                                                << 8U)) 
                                                            | (0x100U 
                                                               & (((IData)(vlSelf->md_board__DOT___M3)
                                                                    ? (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_vdata)
                                                                    : (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3e__DOT__l2)) 
                                                                  << 8U)))) 
                                                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss_data_out_en)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->tmss_enable)
                                                               ? 
                                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w28)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->md_board__DOT__VA)
                                                                 ? (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl2__DOT__mem)
                                                                 : (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__sl1__DOT__mem))
                                                                : (IData)(vlSelf->tmss_data))
                                                               : 0U))))))) 
                                             | ((~ 
                                                 (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w361)))))) 
                                                & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)))) 
                                            | ((~ (IData)(vlSelf->md_board__DOT__ram_VD_d)) 
                                               & (IData)(vlSelf->ram_68k_o))) 
                                           | ((~ (IData)(vlSelf->md_board__DOT__cart_VD_d)) 
                                              & (IData)(vlSelf->cart_data))) 
                                          | (((((IData)(vlSelf->md_board__DOT__ym_VD_d) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w361)))))) 
                                               & (IData)(vlSelf->md_board__DOT__ram_VD_d)) 
                                              & (IData)(vlSelf->md_board__DOT__cart_VD_d)) 
                                             & (IData)(vlSelf->md_board__DOT__VD))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr148__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr125__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr119__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr154__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr124__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr124__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr140__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr159__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) {
        if (vlSelf->__VdfgRegularize_hd87f99a1_0_8) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l1 
                = (0x3fffU & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_mux);
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vscr__DOT__mem_assign;
    if (vlSelf->vdp_psg_clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr637__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reset_l1__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w295)) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w295) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2) 
                              & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v2)) 
                                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v2))))))));
    }
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr507__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w781));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr574__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt160__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                  + ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr161__DOT__v2)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w420))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v2) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt421__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                  + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr419__DOT__v2)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v2)) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr355__DOT__v2)) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr356__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr49__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr46__DOT__v2)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr109__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr314__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w419) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                   >> 7U) & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc_hl)));
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_265) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v2));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem) 
                            >> 8U)));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay2_sr__DOT__v2) 
                         >> 6U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr509__DOT__v2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr554__DOT__v2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w417;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl332__DOT__mem) 
                            >> 7U)));
        } else {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr369__DOT__v1 = 0U;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr338__DOT__v1 = 0U;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay3_sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_hsync2_delay1_sr__DOT__v2) 
                         >> 1U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr511__DOT__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr510__DOT__v2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr557__DOT__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr548__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr396__DOT__v1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr397__DOT__v2;
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr339__DOT__v1 
                = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b1__DOT__mem));
        }
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_194) 
                & (0x10dU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_129))) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
                  & (0xdU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_131))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr133__DOT__v1 
            = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                & (0xfU == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92))) 
               | (7U == (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr115__DOT__v1 
            = (1U & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_194) 
                         & (0x148U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_404) 
                            & (0x108U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                              & (0x1e8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr170__DOT__v1 
            = (1U & (~ (((IData)(vlSelf->vdp_m2) & 
                         (0xf0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w107) 
                            & (0xe0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem)) 
                              & (0xc0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105)))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_m5__DOT__mem) 
               & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem) 
                      >> 8U)) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w549)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w476 
            = vlSelf->md_board__DOT__z80__DOT__w476;
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 
            = vlSelf->md_board__DOT__z80__DOT__w473;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr632__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v2;
        vlSelf->md_board__DOT__z80__DOT__l61 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w442_i)));
        vlSelf->md_board__DOT__z80__DOT__l76 = (1U 
                                                & (~ 
                                                   ((~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w86)) 
                                                      | (IData)(vlSelf->md_board__DOT__z80__DOT__w77))) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_140))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr631__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1104) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1104)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt649__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                        + (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr633__DOT__v2))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff3__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff34__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff34__DOT__l1;
        vlSelf->md_board__DOT__z80__DOT__w112 = ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w113)) 
                                                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w133));
        vlSelf->md_board__DOT__z80__DOT__l68 = vlSelf->md_board__DOT__z80__DOT__w394;
        vlSelf->md_board__DOT__z80__DOT__l67 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_153)) 
                                                    & ((IData)(vlSelf->md_board__DOT__z80__DOT__w394) 
                                                       & ((IData)(vlSelf->md_board__DOT__z80__DOT__l53) 
                                                          | (IData)(vlSelf->md_board__DOT__z80__DOT__w390))))));
        vlSelf->md_board__DOT__z80__DOT__w470 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw470__inp;
        vlSelf->md_board__DOT__z80__DOT__w370 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dw370__inp;
        vlSelf->md_board__DOT__z80__DOT__l70 = (1U 
                                                & (~ 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x2240U 
                                                              & vlSelf->md_board__DOT__z80__DOT__pla[0U]))) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_12))));
    } else {
        if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l68))))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w476 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l73)));
        } else if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l67))))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w476 = 0U;
        } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_153))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w476 = 1U;
        } else if (vlSelf->md_board__DOT__z80__DOT__w433) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w476 
                = vlSelf->md_board__DOT__z80__DOT__l75;
        }
        if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
             & (IData)(vlSelf->md_board__DOT__z80__DOT__w470))) {
            if (vlSelf->md_board__DOT__z80__DOT__w472) {
                vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 
                    = (1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w484)));
            }
            if (vlSelf->md_board__DOT__z80__DOT__w471) {
                vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 
                    = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                >> 7U)));
            }
        } else if (vlSelf->md_board__DOT__z80__DOT__w382) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w484)));
        } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_169)) 
                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w370)))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l66))))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 
                = vlSelf->md_board__DOT__z80__DOT__w477;
        } else if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l70))))) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w473 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w476)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff2__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_m1_dff1__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_m1;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff44__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff44__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff44__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff30__DOT__l2;
        vlSelf->md_board__DOT__z80__DOT__l53 = vlSelf->md_board__DOT__z80__DOT____Vcellinp__dl53__inp;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff30__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff30__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff34__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__d2__DOT__dl;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff30__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff27__DOT__l2;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff27__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff27__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff27__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__d1__DOT__dl;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[0U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][0U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[1U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][1U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[2U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][2U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[3U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][3U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[4U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][4U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[5U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][5U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[6U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][6U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[7U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][7U];
        vlSelf->md_board__DOT__m68k__DOT__ucode_out[8U] 
            = vlSelf->md_board__DOT__m68k__DOT__ucode
            [vlSelf->md_board__DOT__m68k__DOT__ucode_addr][8U];
        vlSelf->md_board__DOT__m68k__DOT__w773 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w705)));
        vlSelf->md_board__DOT__m68k__DOT__w766 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w700)));
        vlSelf->md_board__DOT__m68k__DOT__w775 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w706)));
        vlSelf->md_board__DOT__m68k__DOT__w777 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w707)));
        vlSelf->md_board__DOT__m68k__DOT__w776 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w706)) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w707)))));
        vlSelf->md_board__DOT__m68k__DOT__w762 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w697)));
        vlSelf->md_board__DOT__m68k__DOT__w761 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w696)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w477) {
        if (vlSelf->md_board__DOT__m68k__DOT__w477) {
            vlSelf->md_board__DOT__m68k__DOT__w480 
                = vlSelf->md_board__DOT__m68k__DOT__w359_3;
        }
    } else {
        vlSelf->md_board__DOT__m68k__DOT__w480 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w522 
                                                     >> 3U));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w449) {
        vlSelf->md_board__DOT__m68k__DOT__w454 = vlSelf->md_board__DOT__m68k__DOT__w351;
        vlSelf->md_board__DOT__m68k__DOT__w453 = vlSelf->md_board__DOT__m68k__DOT__w342;
        vlSelf->md_board__DOT__m68k__DOT__w455 = vlSelf->md_board__DOT__m68k__DOT__w350;
    }
    if ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w917)) 
               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w807)))) {
        if (vlSelf->md_board__DOT__m68k__DOT__w807) {
            vlSelf->md_board__DOT__m68k__DOT__w950 
                = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w917)
                    ? 0U : 0xffffU);
        } else if (((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w807) 
                        | (IData)(vlSelf->md_board__DOT__m68k__DOT__w917))) 
                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
            vlSelf->md_board__DOT__m68k__DOT__w950 
                = ((0x80U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                             << 7U)) | (((((IData)(vlSelf->md_board__DOT__m68k__DOT__w710) 
                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w974)) 
                                          | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w972))) 
                                         << 6U) | (
                                                   ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w710) 
                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w974)) 
                                                     | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w972))) 
                                                    << 5U) 
                                                   | ((0x10U 
                                                       & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w710) 
                                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w968)) 
                                                                 | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                                                                    & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w967)))) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w710) 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w968)) 
                                                                    | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710)) 
                                                                       & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w967)))) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w710))))))))));
        }
    } else {
        vlSelf->md_board__DOT__m68k__DOT__w950 = vlSelf->md_board__DOT__m68k__DOT__b3
            [0U];
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c2) {
        vlSelf->md_board__DOT__m68k__DOT__w338 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w333) 
                                                  | (0x10000U 
                                                     != 
                                                     (0x18000U 
                                                      & vlSelf->md_board__DOT__m68k__DOT__w522)));
        vlSelf->md_board__DOT__m68k__DOT__w335 = (1U 
                                                  & (IData)(
                                                            ((0x8000U 
                                                              != 
                                                              (0x18000U 
                                                               & vlSelf->md_board__DOT__m68k__DOT__w522)) 
                                                             | (IData)(vlSelf->md_board__DOT__m68k__DOT__w333))));
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__w338 = vlSelf->md_board__DOT__m68k__DOT__w339;
        vlSelf->md_board__DOT__m68k__DOT__w335 = vlSelf->md_board__DOT__m68k__DOT__w336;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w927) {
        if (vlSelf->md_board__DOT__m68k__DOT__w924) {
            if (vlSelf->md_board__DOT__m68k__DOT__w724) {
                vlSelf->md_board__DOT__m68k__DOT__w980 
                    = ((0xff80U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w980)) 
                       | (0x7fU & (vlSelf->md_board__DOT__m68k__DOT__b3
                                   [2U] >> 1U)));
                vlSelf->md_board__DOT__m68k__DOT__w980 
                    = ((0xff7fU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w980)) 
                       | (0x80U & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w929)
                                     ? (vlSelf->md_board__DOT__m68k__DOT__b3
                                        [2U] >> 8U)
                                     : (IData)(vlSelf->md_board__DOT__m68k__DOT__w739)) 
                                   << 7U)));
                vlSelf->md_board__DOT__m68k__DOT__w980 
                    = ((0xffU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w980)) 
                       | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w742) 
                           << 0xfU) | (0x7f00U & (vlSelf->md_board__DOT__m68k__DOT__b3
                                                  [2U] 
                                                  >> 1U))));
            }
        } else {
            vlSelf->md_board__DOT__m68k__DOT__w980 
                = vlSelf->md_board__DOT__m68k__DOT__w981;
        }
    } else {
        vlSelf->md_board__DOT__m68k__DOT__w980 = ((0xff00U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w980)) 
                                                  | (0xffU 
                                                     & vlSelf->md_board__DOT__m68k__DOT__b3
                                                     [2U]));
        vlSelf->md_board__DOT__m68k__DOT__w980 = ((0xffU 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w980)) 
                                                  | (0xff00U 
                                                     & (((IData)(vlSelf->md_board__DOT__m68k__DOT__w717)
                                                          ? 
                                                         (vlSelf->md_board__DOT__m68k__DOT__b3
                                                          [2U] 
                                                          >> 8U)
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_336))
                                                           ? 0U
                                                           : 0xffU)) 
                                                        << 8U)));
    }
    vlSelf->md_board__DOT__MREQ = (1U & (((IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz) 
                                          & (IData)(vlSelf->md_board__DOT__z80_MREQ_d)) 
                                         | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb_vz)) 
                                             & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w257) 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff66__DOT__l2)) 
                                                      & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff59__DOT__l2))))) 
                                            | ((~ (IData)(vlSelf->md_board__DOT__z80_MREQ_d)) 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w21_i)))));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w439__v1 
            = (1U & (~ vlSelf->md_board__DOT__m68k__DOT__w439
                     [0U]));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w439__v1 = 1U;
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1 = 1U;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l1 
            = (1U & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l2)) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff12__DOT__l2))) 
                     & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l2)) 
                        | (vlSelf->md_board__DOT__VA 
                           >> 0x16U))));
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1 
            = (1U & (~ ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l2) 
                            | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2) 
                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w356) 
                                  | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w223)))))) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_14))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff19__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff19__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff19__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff19__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w71;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff59__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff59__DOT__l1;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff19__DOT__l1 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w439__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w400;
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w439__v0 = 1U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff2__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__o_bg)));
        vlSelf->md_board__DOT__m68k__DOT__w366 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w367) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w365))));
        vlSelf->md_board__DOT__m68k__DOT__w368 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w367) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w395))));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l1;
        vlSelf->md_board__DOT__m68k__DOT__w290 = (1U 
                                                  & (~ 
                                                     (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_63)) 
                                                       & (vlSelf->md_board__DOT__m68k__DOT__w294
                                                          [1U] 
                                                          & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w325) 
                                                             & (IData)(vlSelf->md_board__DOT__m68k__DOT__w351)))) 
                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w278) 
                                                         | (IData)(vlSelf->md_board__DOT__m68k__DOT__w292)))));
        vlSelf->md_board__DOT__m68k__DOT__w417 = (1U 
                                                  & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w264)) 
                                                     | ((~ 
                                                         vlSelf->md_board__DOT__m68k__DOT__w343
                                                         [2U]) 
                                                        & (vlSelf->md_board__DOT__m68k__DOT__w435
                                                           [2U] 
                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w292)))));
        vlSelf->md_board__DOT__m68k__DOT__w350 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w348)));
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w346) 
                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w347))))) {
            if (vlSelf->md_board__DOT__m68k__DOT__w346) {
                vlSelf->md_board__DOT__m68k__DOT__w351 = 1U;
            } else if (vlSelf->md_board__DOT__m68k__DOT__w347) {
                vlSelf->md_board__DOT__m68k__DOT__w351 = 0U;
            }
        }
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w259__v0 
            = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w260)
                ? 0xfU : ((0xeU & (vlSelf->md_board__DOT__m68k__DOT__w259
                                   [1U] << 1U)) | (IData)(vlSelf->md_board__DOT__m68k__DOT__w262)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w261__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w261
            [0U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w343__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w343
            [0U];
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff25__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff25__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff25__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff12__DOT__l2)));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff25__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff25__DOT__l1 = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff12__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff12__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff59__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w257;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v0 
            = (1U & (~ (IData)((0U != (0x3fU & (IData)(vlSelf->md_board__DOT__m68k__DOT__br_fsm_cases))))));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w270__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v1 
            = (1U & (~ (IData)((0U != (0x1ff2U & (IData)(vlSelf->md_board__DOT__m68k__DOT__br_fsm_cases))))));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v2 
            = (1U & (~ (IData)((0U != (0x11fcU & (IData)(vlSelf->md_board__DOT__m68k__DOT__br_fsm_cases))))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff21__DOT__l1 
            = (((~ (IData)(vlSelf->md_board__DOT__AS)) 
                | ((IData)(vlSelf->cart_dma) | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w182) 
                                                | (IData)(vlSelf->md_board__DOT__m68k__DOT__o_bg)))) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l2;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff20__DOT__l1 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w259__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w259
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w259__v1 = 1U;
        vlSelf->md_board__DOT__m68k__DOT__w260 = ((
                                                   vlSelf->md_board__DOT__m68k__DOT__w261
                                                   [1U] 
                                                   | (6U 
                                                      == 
                                                      vlSelf->md_board__DOT__m68k__DOT__w259
                                                      [0U])) 
                                                  | (0U 
                                                     == 
                                                     vlSelf->md_board__DOT__m68k__DOT__w259
                                                     [0U]));
        vlSelf->md_board__DOT__m68k__DOT__w262 = ((8U 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->md_board__DOT__m68k__DOT__w259
                                                    [0U])) 
                                                  | (4U 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->md_board__DOT__m68k__DOT__w259
                                                      [0U])));
        if ((8U == vlSelf->md_board__DOT__m68k__DOT__w259
             [0U])) {
            vlSelf->__Vdly__md_board__DOT__m68k__DOT__w263 = 1U;
            vlSelf->md_board__DOT__m68k__DOT__w264 = 1U;
        } else {
            if ((((9U == vlSelf->md_board__DOT__m68k__DOT__w259
                   [0U]) & vlSelf->md_board__DOT__m68k__DOT__w343
                  [2U]) & (IData)(vlSelf->md_board__DOT__m68k__DOT__w400))) {
                vlSelf->__Vdly__md_board__DOT__m68k__DOT__w263 = 0U;
            }
            if (((0xcU == vlSelf->md_board__DOT__m68k__DOT__w259
                  [0U]) & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w263)))) {
                vlSelf->md_board__DOT__m68k__DOT__w264 = 0U;
            }
        }
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w343__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak) 
                        | (IData)(vlSelf->md_board__DOT__AS))));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w343__v1 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w343__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w343
            [1U];
        if (vlSelf->md_board__DOT__m68k__DOT__w278) {
            vlSelf->md_board__DOT__m68k__DOT__w348 = 0U;
        } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w349)))) {
            vlSelf->md_board__DOT__m68k__DOT__w348 = 1U;
        }
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w270__v3 
            = vlSelf->md_board__DOT__m68k__DOT__w270
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w270__v3 = 1U;
        vlSelf->md_board__DOT__m68k__DOT__o_bg = (1U 
                                                  & vlSelf->md_board__DOT__m68k__DOT__w270
                                                  [0U]);
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff12__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w27) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l2));
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w73)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff17__DOT__l1 
            = (1U & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l2) 
                         & (vlSelf->md_board__DOT__VA 
                            >> 0x16U)) | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l2)) 
                                          & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w356) 
                                             & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2)))))));
    }
    if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
         & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w838) 
            & (IData)(vlSelf->md_board__DOT__m68k__DOT__w839)))) {
        vlSelf->md_board__DOT__m68k__DOT__w948 = ((0xff00U 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w948)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)));
    }
    if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
         & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w838) 
            & (IData)(vlSelf->md_board__DOT__m68k__DOT__w841)))) {
        vlSelf->md_board__DOT__m68k__DOT__w948 = ((0xffU 
                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w948)) 
                                                  | (0xff00U 
                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__data_io)));
    }
    if (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w725)) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->md_board__DOT__m68k__DOT__w963 = ((0x8000U 
                                                   & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w739)) 
                                                      << 0xfU)) 
                                                  | (0x7fffU 
                                                     & (~ 
                                                        ((IData)(vlSelf->md_board__DOT__m68k__DOT__r8) 
                                                         >> 1U))));
    } else {
        if (((IData)(vlSelf->md_board__DOT__m68k__DOT__w725) 
             & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
            vlSelf->md_board__DOT__m68k__DOT__w963 
                = ((1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w963)) 
                   | (0xfffeU & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__r8)) 
                                 << 1U)));
        }
        if (vlSelf->md_board__DOT__m68k__DOT__w725) {
            vlSelf->md_board__DOT__m68k__DOT__w963 
                = ((0xfffeU & (IData)(vlSelf->md_board__DOT__m68k__DOT__w963)) 
                   | (IData)(vlSelf->md_board__DOT__m68k__DOT__w898));
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w505 = (1U 
                                                  & (~ 
                                                     ((((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w358_1))));
        vlSelf->md_board__DOT__m68k__DOT__w506 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__codebus2) 
                                                       & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w508))) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w356_0))));
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_11 
        = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w505) 
           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w506));
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_10 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w505)) 
                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w506)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test1__DOT__mem_assign;
    if ((1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w403)) 
               | ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w400)) 
                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)) 
                     | (IData)(vlSelf->md_board__DOT__m68k__DOT__c2)))))) {
        if (((IData)(vlSelf->md_board__DOT__m68k__DOT__c5) 
             & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w400)))) {
            vlSelf->md_board__DOT__m68k__DOT__w292 = 0U;
        }
    } else {
        vlSelf->md_board__DOT__m68k__DOT__w292 = 1U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w447 = (1U 
                                                  & (~ 
                                                     ((~ vlSelf->md_board__DOT__m68k__DOT__w522) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w475))));
        vlSelf->md_board__DOT__m68k__DOT__w904 = (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 2U)));
        vlSelf->md_board__DOT__m68k__DOT__w639 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 0x12U)));
        vlSelf->md_board__DOT__m68k__DOT__w719 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x40U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w913 = ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                       >> 2U))) 
                                                  | ((IData)(
                                                             ((0x10U 
                                                               == 
                                                               (0x14U 
                                                                & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x2000U 
                                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                     | ((IData)(
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                        | (IData)(
                                                                  ((8U 
                                                                    == 
                                                                    (0x1cU 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7080U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w723 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x10U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w721 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (2U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w720 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x240U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w708 = (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 2U)));
        vlSelf->md_board__DOT__m68k__DOT__w731 = (1U 
                                                  & (~ 
                                                     ((((1U 
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
                                                                      (0x79U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                       | (IData)(
                                                                 ((0x10U 
                                                                   == 
                                                                   (0x14U 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x2d2U 
                                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                      | (IData)(
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x188U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w727 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x100U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w729 = (1U 
                                                  & (~ 
                                                     ((IData)(
                                                              ((0xcU 
                                                                == 
                                                                (0x1cU 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                               & (0U 
                                                                  != 
                                                                  (0x231U 
                                                                   & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                      | (IData)(
                                                                ((8U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x300U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w730 = (1U 
                                                  & (~ 
                                                     (((((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                              >> 2U))) 
                                                         | (0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                >> 2U)))) 
                                                        | (IData)(
                                                                  ((8U 
                                                                    == 
                                                                    (0x1cU 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7482U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                       | (IData)(
                                                                 ((0x10U 
                                                                   == 
                                                                   (0x14U 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x200cU 
                                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                      | (IData)(
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x7444U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w726 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (1U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w232 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 5U)));
        vlSelf->md_board__DOT__m68k__DOT__w238 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 4U)));
        vlSelf->md_board__DOT__m68k__DOT__w231 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 6U));
        vlSelf->md_board__DOT__m68k__DOT__w105 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 0x16U)));
        vlSelf->md_board__DOT__m68k__DOT__w891 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x17U));
        vlSelf->md_board__DOT__m68k__DOT__w893 = (1U 
                                                  & (~ (IData)(
                                                               (0x100U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__w529[0U])))));
        vlSelf->md_board__DOT__m68k__DOT__w834 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 9U)));
        vlSelf->md_board__DOT__m68k__DOT__w634 = (1U 
                                                  & (~ 
                                                     ((vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                       >> 0xbU) 
                                                      | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w607) 
                                                         & ((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x18000000U 
                                                                      & vlSelf->md_board__DOT__m68k__DOT__w529[1U]))) 
                                                            | ((~ 
                                                                (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                                 >> 3U)) 
                                                               | (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                                  >> 0xdU)))))));
        vlSelf->md_board__DOT__m68k__DOT__w70 = (1U 
                                                 & ((0x2000U 
                                                     & vlSelf->md_board__DOT__m68k__DOT__w529[1U])
                                                     ? vlSelf->md_board__DOT__m68k__DOT__ird_pla4
                                                     : (IData)(vlSelf->md_board__DOT__m68k__DOT__w629)));
        vlSelf->md_board__DOT__m68k__DOT__w852 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 3U)));
        vlSelf->md_board__DOT__m68k__DOT__w851 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 2U)));
        vlSelf->md_board__DOT__m68k__DOT__w705 = (1U 
                                                  & (~ 
                                                     ((((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                             >> 2U))) 
                                                        | (IData)(
                                                                  ((0x10U 
                                                                    == 
                                                                    (0x14U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x40U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                       | (IData)(
                                                                 ((0xcU 
                                                                   == 
                                                                   (0x1cU 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x3b9U 
                                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                      | (IData)(
                                                                ((8U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x379U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w700 = (1U 
                                                  & (~ 
                                                     (((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                            >> 2U))) 
                                                       | (0U 
                                                          != 
                                                          (0x3089U 
                                                           & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))) 
                                                      | (IData)(
                                                                ((0x10U 
                                                                  == 
                                                                  (0x14U 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x7ceU 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w342 = (1U 
                                                  & (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6)) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                     | (~ 
                                                        vlSelf->md_board__DOT__m68k__DOT__w343
                                                        [2U])));
    }
    vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_9_6 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w506)) 
                 | (IData)(vlSelf->md_board__DOT__m68k__DOT__w505)));
    if (vlSelf->md_board__DOT__m68k__DOT__w725) {
        vlSelf->md_board__DOT__m68k__DOT__w898 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w733)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w707 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7bfU 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w706 = (1U 
                                                  & (~ (IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0x1cU 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x480U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w917 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0xfU)));
        vlSelf->md_board__DOT__m68k__DOT__w807 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x10U));
        vlSelf->md_board__DOT__m68k__DOT__w924 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0x11U)));
        vlSelf->md_board__DOT__m68k__DOT__w927 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w724)) 
                                                      & (~ 
                                                         (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                          >> 0x11U)))));
        vlSelf->md_board__DOT__m68k__DOT__w697 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w689) 
                                                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w570)) 
                                                      | (IData)(
                                                                ((8U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x104U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w696 = (1U 
                                                  & (~ 
                                                     (((IData)(vlSelf->md_board__DOT__m68k__DOT__w689) 
                                                       | (IData)(vlSelf->md_board__DOT__m68k__DOT__w570)) 
                                                      | (IData)(
                                                                ((4U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w724 = (IData)(
                                                         ((0x10U 
                                                           == 
                                                           (0x14U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                          & (0U 
                                                             != 
                                                             (0x2d2U 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))));
        vlSelf->md_board__DOT__m68k__DOT__w725 = (IData)(
                                                         ((0x10U 
                                                           == 
                                                           (0x14U 
                                                            & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                          & (0U 
                                                             != 
                                                             (0x50dU 
                                                              & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w59)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w59) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff23__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2)));
        }
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff33__DOT__l2 = 1U;
    }
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__7(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t29;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t29 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__io_data 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data;
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t29 = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t38 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w74 = vlSelf->md_board__DOT__z80__DOT__w74;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w73 = vlSelf->md_board__DOT__z80__DOT__w73;
    vlSelf->__Vdly__md_board__DOT__z80__DOT__w445 = vlSelf->md_board__DOT__z80__DOT__w445;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t8 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w59) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w54)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t8)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t10 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w66) 
         | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t10)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t11 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr600__DOT__v2) 
         | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t11)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t7 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v2) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w55)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t7)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t19 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_uds) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w183)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t19)));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__io_data 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data_pull) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data_val)) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data_pull)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__io_data)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t20 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cpu_lds) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w183)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t20)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t9 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w120) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w56)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t9)));
    __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t29 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr130__DOT__v2) 
         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w392)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29)));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__t38 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v2) 
           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w458)) 
              & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38)));
    if ((1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
               | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54))))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w74 = 0U;
    } else if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w74 
            = vlSelf->md_board__DOT__z80__DOT__w74;
    } else if (vlSelf->md_board__DOT__z80__DOT__w71) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w74 
            = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                     >> 3U));
    }
    if ((1U & (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)) 
                | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i))) 
               | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54))))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w73 = 0U;
    } else if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w73 
            = vlSelf->md_board__DOT__z80__DOT__w73;
    } else if (vlSelf->md_board__DOT__z80__DOT__w71) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w73 
            = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                     >> 3U));
    } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l27)) 
                   & (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)))) {
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w73 
            = vlSelf->md_board__DOT__z80__DOT__w74;
    }
    if (vlSelf->md_board__DOT__z80__DOT__w54) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
            vlSelf->md_board__DOT__z80__DOT__w30 = vlSelf->md_board__DOT__z80__DOT__w30;
            vlSelf->md_board__DOT__z80__DOT__w92 = vlSelf->md_board__DOT__z80__DOT__w92;
            vlSelf->md_board__DOT__z80__DOT__w95_i 
                = vlSelf->md_board__DOT__z80__DOT__w95_i;
            vlSelf->md_board__DOT__z80__DOT__w100 = vlSelf->md_board__DOT__z80__DOT__w100;
        } else {
            if (vlSelf->md_board__DOT__z80__DOT__w103) {
                vlSelf->md_board__DOT__z80__DOT__w30 
                    = (1U & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__halt_i)) 
                             | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                | (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
                                    & (IData)(vlSelf->md_board__DOT__z80__DOT__w80)) 
                                   | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)) 
                                      | (~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w18_i)) 
                                            | (IData)(vlSelf->md_board__DOT__z80__DOT__l7))))))));
                vlSelf->md_board__DOT__z80__DOT__w92 
                    = (1U & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l43)));
                vlSelf->md_board__DOT__z80__DOT__w95_i 
                    = vlSelf->md_board__DOT__z80__DOT__w98;
            }
            if (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w98)) 
                 & (IData)(vlSelf->md_board__DOT__z80__DOT__w103))) {
                vlSelf->md_board__DOT__z80__DOT__w100 
                    = vlSelf->md_board__DOT__z80__DOT__w99;
            }
        }
    } else {
        vlSelf->md_board__DOT__z80__DOT__w30 = 1U;
        vlSelf->md_board__DOT__z80__DOT__w92 = 0U;
        vlSelf->md_board__DOT__z80__DOT__w95_i = 0U;
        vlSelf->md_board__DOT__z80__DOT__w100 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__w450 = vlSelf->md_board__DOT__z80__DOT__w450;
        vlSelf->__Vdly__md_board__DOT__z80__DOT__w445 
            = vlSelf->md_board__DOT__z80__DOT__w445;
        vlSelf->md_board__DOT__z80__DOT__w420 = vlSelf->md_board__DOT__z80__DOT__w420;
        vlSelf->md_board__DOT__z80__DOT__w464 = vlSelf->md_board__DOT__z80__DOT__w464;
        vlSelf->md_board__DOT__z80__DOT__l21 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w68_i)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr635__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t43) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w111))));
        vlSelf->md_board__DOT__z80__DOT__l36 = (1U 
                                                & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w133)));
        vlSelf->md_board__DOT__z80__DOT__l59 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_130) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_29) 
                                                       | (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_114)))));
        vlSelf->md_board__DOT__z80__DOT__l30 = vlSelf->md_board__DOT__z80__DOT__w41;
        vlSelf->md_board__DOT__z80__DOT__l12 = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w41)) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w34_i)) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)))));
        vlSelf->md_board__DOT__z80__DOT__w134 = (1U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->md_board__DOT__z80__DOT__w225) 
                                                      | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_236)) 
                                                         & (IData)(vlSelf->md_board__DOT__z80__DOT__w161)))) 
                                                    & ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w120_i)) 
                                                       | ((~ (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_237)) 
                                                          & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w131_i))))));
        vlSelf->md_board__DOT__z80__DOT__l63 = (1U 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1001000U 
                                                               & vlSelf->md_board__DOT__z80__DOT__pla[0U])))));
        vlSelf->md_board__DOT__z80__DOT__l65 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_79) 
                                                    | (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                                       >> 0x18U))));
        vlSelf->md_board__DOT__z80__DOT__l64 = (1U 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x6002000U 
                                                               & vlSelf->md_board__DOT__z80__DOT__pla[0U])))));
        vlSelf->md_board__DOT__z80__DOT__l77 = (1U 
                                                & (~ 
                                                   (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__w114_i)) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                                          >> 3U)) 
                                                        & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w109_i)))) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_137))));
        vlSelf->md_board__DOT__z80__DOT__l16 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT__w107) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_193))));
        vlSelf->md_board__DOT__z80__DOT__l29 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14) 
                                                    | ((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_22) 
                                                       & (IData)(vlSelf->md_board__DOT__z80__DOT__w107)))));
        vlSelf->md_board__DOT__z80__DOT__l27 = (1U 
                                                & (~ 
                                                   ((vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                     >> 0x14U) 
                                                    & (IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_14))));
        vlSelf->md_board__DOT__z80__DOT__l7 = vlSelf->md_board__DOT__z80__DOT__w57;
        vlSelf->md_board__DOT__z80__DOT__l43 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                    >> 0xfU)));
        vlSelf->md_board__DOT__z80__DOT__w98 = (1U 
                                                & (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                   >> 0x16U));
        vlSelf->md_board__DOT__z80__DOT__w99 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__z80__DOT__pla[1U] 
                                                    >> 0x19U)));
    } else {
        if (vlSelf->md_board__DOT__z80__DOT__w382) {
            vlSelf->md_board__DOT__z80__DOT__w450 = 
                (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                          >> 7U)));
            vlSelf->md_board__DOT__z80__DOT__w464 = 
                (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                          >> 1U)));
        } else {
            if (vlSelf->md_board__DOT__z80__DOT__w440) {
                vlSelf->md_board__DOT__z80__DOT__w450 
                    = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w504) 
                             >> 3U));
            }
            if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                       & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__l71))))) {
                vlSelf->md_board__DOT__z80__DOT__w464 
                    = (1U & (~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                >> 7U)));
            } else if (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                        & ((~ (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                               >> 0x15U)) & (IData)(vlSelf->md_board__DOT__z80__DOT__w390)))) {
                vlSelf->md_board__DOT__z80__DOT__w464 
                    = (1U & (((IData)(vlSelf->md_board__DOT__z80__DOT____VdfgRegularize_h4100c37c_0_222) 
                              | (IData)((0U != (0x2db0000U 
                                                & vlSelf->md_board__DOT__z80__DOT__pla[0U])))) 
                             | ((~ ((IData)(vlSelf->md_board__DOT__z80__DOT__w147) 
                                    >> 3U)) & (vlSelf->md_board__DOT__z80__DOT__pla[0U] 
                                               >> 0x1eU))));
            }
        }
        if (vlSelf->md_board__DOT__z80__DOT__w436) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w445 = 0U;
        } else if (vlSelf->md_board__DOT__z80__DOT__w382) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w445 
                = (1U & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                         >> 6U));
        } else if (vlSelf->md_board__DOT__z80__DOT__w440) {
            vlSelf->__Vdly__md_board__DOT__z80__DOT__w445 
                = (((IData)(vlSelf->md_board__DOT__z80__DOT__w445) 
                    | (0U != (IData)(vlSelf->md_board__DOT__z80__DOT__w503))) 
                   | (0U != (IData)(vlSelf->md_board__DOT__z80__DOT__w504)));
        }
        if ((1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk0)) 
                   & (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w419))))) {
            vlSelf->md_board__DOT__z80__DOT__w420 = 
                (1U & (~ (((IData)(vlSelf->md_board__DOT__z80__DOT__w409) 
                           & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                              >> 6U)) | (((IData)(vlSelf->md_board__DOT__z80__DOT__w408) 
                                          & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                             >> 2U)) 
                                         | (((IData)(vlSelf->md_board__DOT__z80__DOT__w407) 
                                             & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                                >> 7U)) 
                                            | ((IData)(vlSelf->md_board__DOT__z80__DOT__w405) 
                                               & (IData)(vlSelf->md_board__DOT__z80__DOT__w484)))))));
        }
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l1;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__l1;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__l1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w49) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l1 = 0U;
    } else if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w48) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff30__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w58;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff31__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w57;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff32__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w60;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr118__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl92__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl92__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr126__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl425__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl91__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl91__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b7__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_81_b7__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl74__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl74__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl73__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl73__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl72__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl72__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl69__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl69__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w38) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w44;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr403__DOT__mem__DOT__l1__BRA__19__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr391__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr390__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr389__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr388__DOT__mem__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr28__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl185__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl185__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr145__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl184__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl184__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_01__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie1__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie1__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_code_234__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2_assign;
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff1__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr586__DOT__v1 
            = ((IData)(vlSelf->vdp_hclk1) & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v1 
            = (1U & (~ ((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                          >> 5U) & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                                    & (IData)((0U != 
                                               (0x18U 
                                                & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802)))))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                              >> 5U)))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b2__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b2__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt105__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr582__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w195;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr360_83__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__0__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr382__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w418;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__2__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w550) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w385));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr203__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w356) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w549));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr208__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w301) 
               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316)) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w319) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_421))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr196__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w394) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w385));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr202__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w356) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w541));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w541)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w356));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr402__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr364__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w741) 
               & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187) 
                   & ((~ vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address) 
                      | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109))) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w289) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w319))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr363__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w741) 
               & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w187) 
                   & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w109) 
                      | vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w289) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w317))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr4__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr1__DOT__v2) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr108__DOT__v2) 
                           | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr2__DOT__v2) 
                              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr3__DOT__v2))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr172__DOT__v1 
            = (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v1 
            = (0x1ffU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr174__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_96) 
                & (0x109U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_98) 
                   & (0x101U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_101) 
                      & (0x10aU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_103) 
                         & (0x102U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_411) 
                            & (0xf2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430) 
                               & (0xeaU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_94) 
                                 & (0xdaU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105)))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr169__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_96) 
                & (0x107U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_98) 
                   & (0xffU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_101) 
                      & (0x108U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_103) 
                         & (0x100U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_411) 
                            & (0xf0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430) 
                               & (0xe8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                              | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_94) 
                                 & (0xd8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105)))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr165__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_57) 
                & (0x1d1U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_59) 
                   & (0x1c9U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_416) 
                      & (0x1e4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_62) 
                         & (0x1d2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_65) 
                            & (0x1caU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_415) 
                               & (0x1baU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_69) 
                                  & (0x1e5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_414) 
                                    & (0x1d5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr164__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_57) 
                & (0x1d4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_59) 
                   & (0x1ccU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_416) 
                      & (0x1e7U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_62) 
                         & (0x1d5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_65) 
                            & (0x1cdU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_415) 
                               & (0x1bdU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_69) 
                                  & (0x1e8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_414) 
                                    & (0x1d8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v1 
            = (((IData)(vlSelf->pal) & ((IData)(vlSelf->vdp_m2) 
                                        & (0x1e2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105)))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w432) 
                   & (0x1daU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w431) 
                      & (0x1caU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w430) 
                         & (0x1f5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_94) 
                           & (0x1e5U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105)))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                         | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_lsm0__DOT__mem)) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t39)) 
                               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w454))))) 
                     & ((IData)(vlSelf->vdp_intfield) 
                        + ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b0__DOT__mem)) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w459)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr362__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
               & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address 
                  >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr152__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (1U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr144__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x94U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x79U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr138__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0xa4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                   & (0x1d2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                  | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                     & ((0x86U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
                        | (0x1dbU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr131__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x166U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x124U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr117__DOT__v1 
            = (1U & (~ (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                         & (0x142U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                           & (0x102U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0xfdU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0xceU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr112__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x16bU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x126U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w820)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr471__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w388;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vdp_de_delay_m5_sr__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t38));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr357__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr147__DOT__v2) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_55));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr155__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_164) 
               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_165) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_166) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_167) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w466)) 
                           & (0U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                      << 8U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_90))))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr168__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt166__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w4) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l1 = 0U;
    } else if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t2) 
               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t3));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l2;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff2__DOT__l2)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem)) 
               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                  >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem)) 
                     & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr434__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl432__DOT__mem)) 
                     & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr468__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr467__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr470__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_disp__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr162__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff17__DOT__l2_assign;
    if (vlSelf->md_board__DOT__z80__DOT__w432) {
        vlSelf->md_board__DOT__z80__DOT__l84 = (1U 
                                                & ((IData)(vlSelf->md_board__DOT__z80__DOT__w484) 
                                                   >> 4U));
        vlSelf->md_board__DOT__z80__DOT__l83 = (1U 
                                                & (IData)(vlSelf->md_board__DOT__z80__DOT__w484));
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w36) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__w97) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff60__clk) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff60__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff60__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w36)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__VD) 
                         >> 8U));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w97)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__VD) 
                         >> 8U));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff58__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff58__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff60__clk)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff60__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l2;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff58__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff57__DOT__l2;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff57__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff57__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff57__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l1 
                = vlSelf->reset_button;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff58__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff60__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__zbr__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff26__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff58__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff60__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff57__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff57__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff69__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t29 = __Vdly__md_board__DOT__ym__DOT__vdp__DOT__t29;
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff77__DOT__l2) 
                         + ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff79__DOT__sum) 
                            >> 1U))));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289)
                      ? ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff55__DOT__l2) 
                         + ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff53__DOT__sum) 
                            >> 1U)) : (IData)(vlSelf->md_board__DOT___M3)));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff54__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w289) 
               && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff48__DOT__sum)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w60 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie0__DOT__mem) 
         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t9));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr610__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr142__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_328 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b2__DOT__mem) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff3__DOT__l2) 
           & (3U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_dmd__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w306 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w307 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w308 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w309 
        = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v2)) 
                 & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff4__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w57 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t7) 
         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w60)) 
            & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie1__DOT__mem)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w188 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w245)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w12 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w57) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w60));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w58 = 
        ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w57)) 
         & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w60)) 
            & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_ie2__DOT__mem) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t8))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w11 = 
        ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w58) 
         | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w60));
}

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__8(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1 = 0;
    CData/*0:0*/ __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1;
    if ((0x28U > (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))) {
        if (vlSelf->vdp_hclk1) {
            if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr211__DOT__v2) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_he0bd9329__0 
                    = (0xffU & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l181));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_he0bd9329__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__vsram__v0 = 1U;
                }
            }
            if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v2) {
                vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_hef926c32__0 
                    = (7U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l181) 
                             >> 8U));
                if ((0x27U >= (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212))) {
                    vlSelf->__VdlyVal__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vlvbound_hef926c32__0;
                    vlSelf->__VdlyDim0__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1 
                        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l212;
                    vlSelf->__VdlySet__md_board__DOT__ym__DOT__vdp__DOT__vsram__v1 = 1U;
                }
            }
        }
    }
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2) {
        if (vlSelf->ext_reset) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1 = 1U;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff8__DOT__l1 
            = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l2)) 
                        | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l2)) 
                           | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l2)) 
                              | (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l2)))))));
    }
    if (vlSelf->ext_reset) {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1 = 0U;
        __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1 = 0U;
        __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w1) 
                   && (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2) 
                             + (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l2))));
            __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1 
                = ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w1))) 
                   || (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l2) 
                             + ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l2) 
                                & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2)))));
            __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w1)
                          ? ((IData)(1U) + (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l2))
                          : (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2))));
        }
        if (vlSelf->md_board__DOT__MCLK_e) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff3__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2) 
                   && (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff7__DOT__l2) 
                             + ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__sum) 
                                >> 1U))));
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2) 
                   && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff6__DOT__sum)));
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2) 
                   && (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff5__DOT__sum)));
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__l1 
                = ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff9__DOT__l2))) 
                   || (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff4__DOT__sum)));
        }
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl429__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl429__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr368__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr430__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl306__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl306__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl258__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl258__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl257__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl257__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl232__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl232__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl223__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl223__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr553__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr553__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr553__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr553__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr89__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl343__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl343__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr590__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl310__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl310__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl309__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl309__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl308__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl308__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl307__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl307__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl290__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl290__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl289__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl289__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl288__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl288__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl287__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl287__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl572__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl572__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__9__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl264__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl264__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl263__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl263__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl262__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl262__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl261__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl261__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl240__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl240__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl239__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl239__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl238__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl238__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl237__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl237__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr293__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hit__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl575__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl575__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr475__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl573__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl346__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl346__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr561__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr559__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl317__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl317__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl266__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl266__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl41__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl41__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl_vs__DOT__mem_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt503__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr446__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w800));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w805;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr506__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl505__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr45__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr44__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr474__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr447__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w802));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr472__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl473__DOT__mem));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr33__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl31__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl31__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dclk_prescaler_dff1__DOT__l2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr370__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_265)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w970) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w970));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr27__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t26) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_428));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1076));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w696) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_2__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr212__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w626));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_sa_low_1__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt_lg_1__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr552__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 7U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 6U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr547__DOT__data_in));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr400__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr399__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr323__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__9__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus) 
                     >> 5U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus) 
                     >> 4U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus) 
                     >> 3U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus) 
                     >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus) 
                     >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr617_dp__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__color_bus));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 9U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr182__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_data) 
                     >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr15__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_9) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt1__DOT__sum) 
                  >> 8U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr13__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0x10U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0xfU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0xeU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr345__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0xdU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr327__DOT__l1__BRA__10__KET____DOT__sr__DOT__v1 
            = (1U & (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sat_out 
                     >> 0xaU));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum) 
                        >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum) 
                        >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum) 
                        >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum) 
                        >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum) 
                        >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum) 
                        >> 1U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr354__DOT__v2)) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt351__DOT__sum)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr210__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr209__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr48__DOT__v1 
            = ((0xfffeU == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_lg_2__val) 
                             << 8U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellout__cnt_lg_1__val))) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w250));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr270__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w599) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem) 
                         >> 6U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr271__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem) 
                         >> 4U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr271__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem) 
                         >> 2U));
        } else {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr273__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem) 
                         >> 7U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr271__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem) 
                         >> 5U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr271__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem) 
                         >> 3U));
        }
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 8U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 7U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 6U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 5U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 4U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 3U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem) 
                                          >> 2U)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
            = ((0x1eU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2) 
                         << 1U)) | (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl443_1__DOT__mem)));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr181__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2;
        if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                         >> 4U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                         >> 2U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                         >> 6U));
        } else {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                         >> 5U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr322__DOT__l1__BRA__0__KET____DOT__sr__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                         >> 3U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr320__DOT__v1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                         >> 7U));
        }
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl14__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w789 
        = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr444__DOT__v2) 
                    | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v2))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w632_t 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
            << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                       << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl32__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr398__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr12__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr206__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr269__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl265__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr443__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr104__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l556 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
            << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr556__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1 
        = __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff1__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1 
        = __Vdly__md_board__DOT__ym__DOT__arb__DOT__dff2__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w632 
        = (7U & ((1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt311__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2)
                         ? (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem)
                         : ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl292__DOT__mem) 
                            >> 1U))) ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w632_t))
                  : (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w632_t)));
}

VL_INLINE_OPT void Vmd_board___024root___nba_comb__TOP__0(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_comb__TOP__0\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 16> Vmd_board__ConstPool__TABLE_h40e67f99_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vmd_board__ConstPool__TABLE_hb4a9574c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vmd_board__ConstPool__TABLE_h08e21c28_0;

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__9(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__9\n"); );
    // Init
    CData/*2:0*/ md_board__DOT__ym__DOT__vdp__DOT__l626;
    md_board__DOT__ym__DOT__vdp__DOT__l626 = 0;
    CData/*2:0*/ md_board__DOT__ym__DOT__vdp__DOT__l627;
    md_board__DOT__ym__DOT__vdp__DOT__l627 = 0;
    CData/*2:0*/ md_board__DOT__ym__DOT__vdp__DOT__l628;
    md_board__DOT__ym__DOT__vdp__DOT__l628 = 0;
    CData/*0:0*/ md_board__DOT__z80__DOT__w7;
    md_board__DOT__z80__DOT__w7 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vram_address 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w750 
        = vlSelf->md_board__DOT__m68k__DOT__w750;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w297__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w297__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w296__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w296__v2 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w294__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w294__v1 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w315__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w315__v1 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w364__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w364__v1 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w374 
        = vlSelf->md_board__DOT__m68k__DOT__w374;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w268__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w268__v1 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io 
        = vlSelf->md_board__DOT__m68k__DOT__alu_io;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w359__v0 = 0U;
    vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w359__v2 = 0U;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2;
    md_board__DOT__z80__DOT__w7 = (1U & (~ ((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l2)) 
                                            | (IData)(vlSelf->md_board__DOT__z80__DOT__rs7__DOT__nq))));
    vlSelf->md_board__DOT__z80__DOT__rs7__DOT__nq = 
        (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l2) 
                  | (IData)(md_board__DOT__z80__DOT__w7))));
    vlSelf->md_board__DOT__z80__DOT__w6 = (1U & (~ 
                                                 (((~ (IData)(vlSelf->md_board__DOT__z80__DOT__l2)) 
                                                   | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l2)) 
                                                      & (~ (IData)(md_board__DOT__z80__DOT__w7)))) 
                                                  | (IData)(vlSelf->md_board__DOT__z80__DOT__w6_i))));
    vlSelf->md_board__DOT__z80__DOT__w6_i = (1U & (~ 
                                                   (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__nmi__DOT__l2)) 
                                                     & (IData)(md_board__DOT__z80__DOT__w7)) 
                                                    | (IData)(vlSelf->md_board__DOT__z80__DOT__w6))));
    vlSelf->__Vdly__md_board__DOT__ym__DOT__vdp__DOT__vram_address 
        = ((vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address_pull 
            & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address_val) 
           | ((~ vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address_pull) 
              & vlSelf->md_board__DOT__ym__DOT__vdp__DOT__vram_address));
    vlSelf->__Vdly__md_board__DOT__m68k__DOT__w750 
        = (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w749)
                  ? ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                     >> 4U) : (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w758)) 
                                & (IData)(vlSelf->md_board__DOT__m68k__DOT__w757))
                                ? (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w791))
                                : (IData)(vlSelf->md_board__DOT__m68k__DOT__w750))));
    if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__sres_syncv__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff63__clk)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff60__clk)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff60__clk) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__arb__DOT____Vcellinp__dff63__clk) {
            vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l2 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff76__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff74__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff72__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff67__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff71__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff65__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff68__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff52__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff63__DOT__l2 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r1_j) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2))));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_7) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_3) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l2)));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r1_j) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l2)) 
                               & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2)))));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r1_j) 
                            | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2))));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r1_j) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l2)) 
                               & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2)))));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r2_j) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_10) 
                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_5) 
                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2)))));
        }
        if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l2))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r1_j) 
                            | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l2)) 
                               & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2)))));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_0) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_1) 
                       & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2)) 
                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm1__DOT__l2) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2)))));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_0) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_1) 
                       & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2)) 
                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm1__DOT__l2) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2)))));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_0) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_1) 
                       & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2)) 
                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm4__DOT__l2) 
                         & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l2)))));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm3__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_1__DOT__l2 = 0U;
    }
    if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l1 
                = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2) 
                             << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l2));
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_shifter__DOT__l1 = 0U;
    }
    if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l1 
                = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2) 
                             << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l2));
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_shifter__DOT__l1 = 0U;
    }
    if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l1 
                = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2) 
                             << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l2));
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_shifter__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1 = 1U;
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1 = 1U;
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1 = 1U;
        }
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2_l__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2_l__DOT__l1;
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r1_j) 
               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l2)) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_1)));
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r1_j) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l2)) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_2) 
                     | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2)) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l2)))));
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l1 
            = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2)) 
                & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_2)) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_3__DOT__l2)) 
                  | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_5__DOT__l2)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2)) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r1_j) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_2__DOT__l2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm1_4__DOT__l2))))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1 = 1U;
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1 = 1U;
        }
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2_l__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2_l__DOT__l1;
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r1_j) 
               | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l2)) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_1)));
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l1 
            = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2)) 
                & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_2)) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_3__DOT__l2)) 
                  | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_5__DOT__l2)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2)) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__r1_j) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_2__DOT__l2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm1_4__DOT__l2))))));
    }
    if (((vlSelf->md_board__DOT__m68k__DOT__w597 >> 0x10U) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c2))) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io = 0xffffU;
    } else if ((0x800U & vlSelf->md_board__DOT__m68k__DOT__w597)) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io 
            = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w606) 
                << 0xfU) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w607) 
                             << 0xdU) | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w609) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w610) 
                                             << 9U) 
                                            | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w611) 
                                                << 8U) 
                                               | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w750) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w753) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w754) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w752) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w751))))))))));
    } else if ((0x80U & vlSelf->md_board__DOT__m68k__DOT__w597)) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io 
            = vlSelf->md_board__DOT__m68k__DOT__r5;
    } else if (((vlSelf->md_board__DOT__m68k__DOT__w597 
                 >> 0x10U) & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io 
            = ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
               & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w591)));
    } else if ((2U & vlSelf->md_board__DOT__m68k__DOT__w597)) {
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io 
            = ((0xffe0U & (IData)(vlSelf->__Vdly__md_board__DOT__m68k__DOT__alu_io)) 
               | (IData)(vlSelf->md_board__DOT__m68k__DOT__w616));
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1 = 1U;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1 
            = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2)) 
                & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_2)) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l2)) 
                  | (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2)) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__r1_j) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l2))))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sa__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sb__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_sb__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vsz__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_vsz__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl71__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl71__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl70__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl70__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl68__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl68__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl67__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl67__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl193__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl193__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b6__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b6__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl195__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl195__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl192__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl192__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl191__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl191__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl220__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr199__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl190__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl190__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl189__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl189__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl188__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl188__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl187__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl187__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_hsz__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr622__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2_assign;
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__clk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__mem__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt2__DOT__sum) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w814;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr459__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr445__DOT__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem)));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr50__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2_assign;
    if (vlSelf->vdp_hclk1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT____Vcellinp__l1__BRA__1__KET____DOT__sr__bit_in;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr624__DOT__v1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w422) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t37))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr217__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w541;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr207__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w301) 
               & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w316)) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w317) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_421))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr54__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_42) 
                  >> 2U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr53__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_42) 
                  >> 1U));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr52__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_42));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v1 
            = ((0xfeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2) 
                         << 1U)) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr583__DOT__v1 
            = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr30__DOT__v2));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v1 
            = ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2))) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr121__DOT__v2) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2) 
                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_8c_b5__DOT__mem) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr149__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v1 
            = ((~ ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____Vcellinp__reset_l1__bit_in)) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr167__DOT__v2))) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr175__DOT__v2) 
                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr120__DOT__v2) 
                     & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr114__DOT__v2) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v2)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr163__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_57) 
                & (0x1d7U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_59) 
                   & (0x1cfU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_416) 
                      & (0x1eaU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_62) 
                         & (0x1d8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_65) 
                            & (0x1d0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_415) 
                               & (0x1c0U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_69) 
                                  & (0x1ebU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))) 
                                 | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_414) 
                                    & (0x1dbU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l105))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr197__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr178__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr143__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x15cU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x11cU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr137__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x14aU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x10aU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr123__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x1e2U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x1e8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr122__DOT__v1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem) 
                & (0x2bU == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))) 
               | ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_rs1__DOT__mem)) 
                  & (0x24U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr186__DOT__v1 
            = (1U & (~ ((3U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                 << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2))) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_80_b7__DOT__mem))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr156__DOT__v1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_419) 
               & ((0x1e8U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
                  | ((0x1e4U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__l106)) 
                     | ((0x1d8U == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                     << 8U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                                << 7U) 
                                               | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__3__KET____DOT__sr__DOT__v2) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_90)))))))) 
                        | ((0x110U == (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_124)) 
                           | (0x10cU == (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__8__KET____DOT__sr__DOT__v2) 
                                          << 8U) | 
                                         (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__7__KET____DOT__sr__DOT__v2) 
                                           << 7U) | 
                                          (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__6__KET____DOT__sr__DOT__v2) 
                                            << 6U) 
                                           | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2) 
                                               << 5U) 
                                              | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_92)))))))))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr606__DOT__v1 
            = (IData)(((0U == (0x180U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem))) 
                       & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1062)) 
                          | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_308) 
                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1033)))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr604__DOT__v1 
            = (((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_307) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1025)) 
                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_307) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1023)) 
                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1031) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1022)) 
                       | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1026) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1024))))) 
                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1032)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1062))) 
               | (2U == (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                               >> 7U))));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr605__DOT__v1 
            = (((((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_308) 
                  & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1024)) 
                 | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1032) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1026)) 
                    | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1031) 
                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1023)) 
                       | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT____VdfgRegularize_h6853b583_1_308) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1022)) 
                          | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1025))))) 
                & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1033)) 
                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1062))) 
               | (3U == (3U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem) 
                               >> 7U))));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr464__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr463__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w767 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w701)));
        vlSelf->md_board__DOT__m68k__DOT__w769 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w703)));
        vlSelf->md_board__DOT__m68k__DOT__w765 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w699)));
    }
    if (((IData)(vlSelf->md_board__DOT__m68k__DOT__w763) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__w757))) {
        vlSelf->md_board__DOT__m68k__DOT__w793 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w791)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c3) {
        vlSelf->md_board__DOT__m68k__DOT__w758 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w691)));
        vlSelf->md_board__DOT__m68k__DOT__w763 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w698)));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_7) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff28__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum) 
                         >> 5U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff27__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum) 
                         >> 4U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum) 
                         >> 3U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum) 
                         >> 2U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l1 
                = (1U & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum) 
                         >> 1U));
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff23__DOT__l1 
                = (1U & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__i_sum));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff28__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff27__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff23__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w36) {
        if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff11__DOT__l2;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff10__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff15__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
            vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l1 
                = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff19__DOT__l2;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w450) {
        vlSelf->md_board__DOT__m68k__DOT__w460 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w605)) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267))));
        vlSelf->md_board__DOT__m68k__DOT__w461 = vlSelf->md_board__DOT__m68k__DOT__w991;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w449) {
        vlSelf->md_board__DOT__m68k__DOT__w452 = vlSelf->md_board__DOT__m68k__DOT__w344;
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w267) {
        vlSelf->md_board__DOT__m68k__DOT__w819 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w818 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w473 = vlSelf->md_board__DOT__m68k__DOT__w273;
    } else {
        if (((IData)(vlSelf->md_board__DOT__m68k__DOT__c2) 
             | (IData)(vlSelf->md_board__DOT__m68k__DOT__w812))) {
            vlSelf->md_board__DOT__m68k__DOT__w819 
                = (1U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_376) 
                             | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w158)))) 
                         | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_247)));
            vlSelf->md_board__DOT__m68k__DOT__w818 
                = (1U & ((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w158) 
                             | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_376))) 
                         | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_247)));
        }
        if (vlSelf->md_board__DOT__m68k__DOT__w561) {
            vlSelf->md_board__DOT__m68k__DOT__w473 
                = vlSelf->md_board__DOT__m68k__DOT__w555;
        } else if (vlSelf->md_board__DOT__m68k__DOT__w562) {
            vlSelf->md_board__DOT__m68k__DOT__w473 
                = (1U & (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_179) 
                            | (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_190))));
        }
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__l5 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x10U)));
        vlSelf->md_board__DOT__m68k__DOT__w748 = (1U 
                                                  & (~ (IData)(
                                                               (0x60U 
                                                                != 
                                                                (0x60U 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__w529[0U])))));
        vlSelf->md_board__DOT__m68k__DOT__w709 = (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 2U)));
        vlSelf->md_board__DOT__m68k__DOT__w833 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0xaU)));
        vlSelf->md_board__DOT__m68k__DOT__w644 = (1U 
                                                  & (~ (IData)(
                                                               (0xcU 
                                                                != 
                                                                (0xcU 
                                                                 & vlSelf->md_board__DOT__m68k__DOT__w529[2U])))));
        vlSelf->md_board__DOT__m68k__DOT__w641 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 0x11U));
        vlSelf->md_board__DOT__m68k__DOT__w722 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x80U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w728 = (1U 
                                                  & (~ 
                                                     (((IData)(
                                                               ((8U 
                                                                 == 
                                                                 (0x1cU 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x804U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                       | (IData)(
                                                                 ((0x10U 
                                                                   == 
                                                                   (0x14U 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x400U 
                                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                      | (IData)(
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x802U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w915 = ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                       >> 2U))) 
                                                  | ((IData)(
                                                             ((0xcU 
                                                               == 
                                                               (0x1cU 
                                                                & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                              & (0U 
                                                                 != 
                                                                 (0x2000U 
                                                                  & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                     | (IData)(
                                                               ((8U 
                                                                 == 
                                                                 (0x1cU 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x6080U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w711 = (1U 
                                                  & (~ 
                                                     ((((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                             >> 2U))) 
                                                        | (IData)(
                                                                  ((0x10U 
                                                                    == 
                                                                    (0x14U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x2d2U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                       | (IData)(
                                                                 ((0xcU 
                                                                   == 
                                                                   (0x1cU 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x88U 
                                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                      | (IData)(
                                                                ((8U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (8U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w718 = ((IData)(
                                                          ((8U 
                                                            == 
                                                            (0x1cU 
                                                             & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                           & (0U 
                                                              != 
                                                              (0x771U 
                                                               & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))) 
                                                  | (IData)(
                                                            ((0xcU 
                                                              == 
                                                              (0x1cU 
                                                               & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                             & (0U 
                                                                != 
                                                                (0x631U 
                                                                 & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))));
        vlSelf->md_board__DOT__m68k__DOT__w850 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 1U));
        vlSelf->md_board__DOT__m68k__DOT__w128 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 0x14U));
        vlSelf->md_board__DOT__m68k__DOT__w596 = (0xfU 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 7U));
        vlSelf->md_board__DOT__m68k__DOT__l7 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x1aU)));
        vlSelf->md_board__DOT__m68k__DOT__w127 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 0x15U));
        vlSelf->md_board__DOT__m68k__DOT__w848 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->md_board__DOT__m68k__DOT__w849) 
                                                      | (~ 
                                                         vlSelf->md_board__DOT__m68k__DOT__w529[1U]))));
        vlSelf->md_board__DOT__m68k__DOT__l8 = (1U 
                                                & (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                   >> 0x19U));
        vlSelf->md_board__DOT__m68k__DOT__l9 = (1U 
                                                & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w637)) 
                                                   | (~ 
                                                      (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                       >> 0x18U))));
        vlSelf->md_board__DOT__m68k__DOT__w103 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 0x17U)));
        vlSelf->md_board__DOT__m68k__DOT__w889 = (1U 
                                                  & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                     >> 0x16U));
        if ((0x2000U & vlSelf->md_board__DOT__m68k__DOT__w529[1U])) {
            vlSelf->md_board__DOT__m68k__DOT__w64 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w626));
            vlSelf->md_board__DOT__m68k__DOT__w73 = 
                (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                       >> 3U));
            vlSelf->md_board__DOT__m68k__DOT__w62 = 
                (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                       >> 2U));
            vlSelf->md_board__DOT__m68k__DOT__w63 = 
                (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                       >> 1U));
            vlSelf->md_board__DOT__m68k__DOT__w72 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w629));
            vlSelf->md_board__DOT__m68k__DOT__w65 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w653));
            vlSelf->md_board__DOT__m68k__DOT__w66 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w654));
            vlSelf->md_board__DOT__m68k__DOT__w67 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w655));
            vlSelf->md_board__DOT__m68k__DOT__w68 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w651));
        } else {
            vlSelf->md_board__DOT__m68k__DOT__w64 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w653));
            vlSelf->md_board__DOT__m68k__DOT__w73 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w651));
            vlSelf->md_board__DOT__m68k__DOT__w62 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w655));
            vlSelf->md_board__DOT__m68k__DOT__w63 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w654));
            vlSelf->md_board__DOT__m68k__DOT__w72 = 
                (1U & vlSelf->md_board__DOT__m68k__DOT__ird_pla4);
            vlSelf->md_board__DOT__m68k__DOT__w65 = 
                (1U & (IData)(vlSelf->md_board__DOT__m68k__DOT__w626));
            vlSelf->md_board__DOT__m68k__DOT__w66 = 
                (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                       >> 1U));
            vlSelf->md_board__DOT__m68k__DOT__w67 = 
                (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                       >> 2U));
            vlSelf->md_board__DOT__m68k__DOT__w68 = 
                (1U & ((IData)(vlSelf->md_board__DOT__m68k__DOT__w626) 
                       >> 3U));
        }
        vlSelf->md_board__DOT__m68k__DOT__w71 = (1U 
                                                 & ((~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                      >> 0xdU)) 
                                                    & (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                       >> 1U)));
        vlSelf->md_board__DOT__m68k__DOT__l4 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x1dU)));
        vlSelf->md_board__DOT__m68k__DOT__l3 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x1eU)));
        vlSelf->md_board__DOT__m68k__DOT__w77 = (1U 
                                                 & (~ (IData)(
                                                              (8U 
                                                               != 
                                                               (0xcU 
                                                                & vlSelf->md_board__DOT__m68k__DOT__w529[2U])))));
        vlSelf->md_board__DOT__m68k__DOT__w69 = (1U 
                                                 & ((vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                     >> 0xdU) 
                                                    & (vlSelf->md_board__DOT__m68k__DOT__ird_pla4 
                                                       >> 1U)));
        vlSelf->md_board__DOT__m68k__DOT__l2 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x1bU)));
        vlSelf->md_board__DOT__m68k__DOT__l1 = (1U 
                                                & (~ 
                                                   (vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                    >> 0x1cU)));
        vlSelf->md_board__DOT__m68k__DOT__w75 = (1U 
                                                 & (~ (IData)(
                                                              (4U 
                                                               != 
                                                               (0xcU 
                                                                & vlSelf->md_board__DOT__m68k__DOT__w529[2U])))));
        vlSelf->md_board__DOT__m68k__DOT__w845 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0x1eU)));
        vlSelf->md_board__DOT__m68k__DOT__w844 = (1U 
                                                  & (~ 
                                                     (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 0x1fU)));
        vlSelf->md_board__DOT__m68k__DOT__w701 = (IData)(
                                                         (0x54U 
                                                          != 
                                                          (0x5cU 
                                                           & vlSelf->md_board__DOT__m68k__DOT__w529[0U])));
        vlSelf->md_board__DOT__m68k__DOT__w703 = (1U 
                                                  & (~ (IData)(
                                                               ((0xcU 
                                                                 == 
                                                                 (0x1cU 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0x104U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w699 = (1U 
                                                  & (~ (IData)(
                                                               ((0x10U 
                                                                 == 
                                                                 (0x14U 
                                                                  & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                & (0U 
                                                                   != 
                                                                   (4U 
                                                                    & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))));
        vlSelf->md_board__DOT__m68k__DOT__w344 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w345) 
                                                   | (IData)(vlSelf->md_board__DOT__m68k__DOT__w267)) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w325));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_and1) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->md_board__DOT__MCLK_e)))) {
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff8__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__mclk_clk3_l 
        = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk0) {
        vlSelf->md_board__DOT__z80__DOT__l2 = (1U & 
                                               (~ (
                                                   (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w54)) 
                                                   | (~ (IData)(vlSelf->md_board__DOT__z80__DOT__w19_i)))));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w600) {
        vlSelf->md_board__DOT__m68k__DOT__w611 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w319)));
        vlSelf->md_board__DOT__m68k__DOT__w609 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w321)));
        vlSelf->md_board__DOT__m68k__DOT__w610 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w320)));
    } else if (vlSelf->md_board__DOT__m68k__DOT__w604) {
        vlSelf->md_board__DOT__m68k__DOT__w611 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                                                     >> 8U));
        vlSelf->md_board__DOT__m68k__DOT__w609 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                                                     >> 0xaU));
        vlSelf->md_board__DOT__m68k__DOT__w610 = (1U 
                                                  & ((IData)(vlSelf->md_board__DOT__m68k__DOT__alu_io) 
                                                     >> 9U));
    }
    if (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w613)) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->md_board__DOT__m68k__DOT__w616 = (((IData)(vlSelf->md_board__DOT__m68k__DOT__w617) 
                                                   << 4U) 
                                                  | (((0U 
                                                       != (IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_366)) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->md_board__DOT__m68k__DOT__w607) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w323)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w322)))))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w294__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w294
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w294__v1 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w436__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w436
            [0U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w435__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w435
            [1U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w315__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w315
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w315__v1 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v2 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__DTACK)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w359__v2 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v3 
            = vlSelf->md_board__DOT__m68k__DOT__w359
            [1U];
    }
    vlSelf->md_board__DOT__DTACK = (1U & (((~ ((~ (
                                                   ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff15__DOT__l2)) 
                                                    | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w43) 
                                                       | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w211))) 
                                                   & (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_10)) 
                                                       | (IData)(vlSelf->md_board__DOT__AS)) 
                                                      & ((IData)(vlSelf->md_board__DOT__FDC) 
                                                         & ((IData)(vlSelf->md_board__DOT__TIME) 
                                                            & ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w94) 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff64__DOT__l2)) 
                                                                    & (IData)(vlSelf->md_board__DOT__ym__DOT__arb_wait_o))) 
                                                                  | ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w119) 
                                                                     | (IData)(vlSelf->md_board__DOT__AS))))))))) 
                                               & (IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak))) 
                                           & (((~ (IData)(vlSelf->tmss_enable)) 
                                               | (~ 
                                                  (((IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w15) 
                                                    | (IData)(vlSelf->md_board__DOT__ym__DOT__tmss___DOT__w23)) 
                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__arb_intak)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w24) 
                                                  | (((IData)(vlSelf->md_board__DOT___M3) 
                                                      & (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w162) 
                                                          & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w152)) 
                                                         | (((~ 
                                                              ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w150) 
                                                               | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w252))) 
                                                             & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w169)) 
                                                            | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t1) 
                                                                & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t14) 
                                                                   & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w168))) 
                                                               | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w164) 
                                                                  | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w165)))))) 
                                                     | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w128) 
                                                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w129) 
                                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w133)))))))) 
                                          & (~ (IData)(vlSelf->ext_dtack))));
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w294__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w435
            [2U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w294__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w435__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w435
            [0U];
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w436__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w435
            [2U];
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__load) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1 
                = (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l2) 
                           + (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__load)));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1 
                = (0xfU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l2) 
                           + ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__load) 
                              & (0xfU == (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l2)))));
        } else {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1 
                = (0xfU & ((IData)(vlSelf->pal) ? 0xdU
                            : 0xcU));
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1 = 9U;
        }
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w315__v0 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w314)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w315__v0 = 1U;
        vlSelf->__Vdly__md_board__DOT__m68k__DOT__w374 
            = (1U & (~ (vlSelf->md_board__DOT__m68k__DOT__w389
                        [2U] | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w384)))));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w359
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w359__v0 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w359__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w359_3;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__t4;
        vlSelf->md_board__DOT__m68k__DOT___w284_0 = vlSelf->md_board__DOT__m68k__DOT___w284_1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT___w284_0 = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__c5_l = vlSelf->md_board__DOT__m68k__DOT__w288;
        vlSelf->md_board__DOT__m68k__DOT___w279_0 = vlSelf->md_board__DOT__m68k__DOT___w279_1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT___w279_0 = vlSelf->md_board__DOT__m68k__DOT__w282;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT___w281_0 = vlSelf->md_board__DOT__m68k__DOT__w285;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT___w281_0 = vlSelf->md_board__DOT__m68k__DOT___w281_1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__w370 = vlSelf->md_board__DOT__m68k__DOT__w391;
        vlSelf->md_board__DOT__m68k__DOT__w369 = vlSelf->md_board__DOT__m68k__DOT__w391;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__4__KET____DOT__clkgen_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__3__KET____DOT__clkgen_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__2__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__1__KET____DOT__clkgen_sr__DOT__v1 
            = vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__l1__BRA__0__KET____DOT__clkgen_sr__DOT__v2;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff21__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff20__DOT__l2;
        vlSelf->md_board__DOT__m68k__DOT___w281_2 = vlSelf->md_board__DOT__m68k__DOT___w279_3;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT___w281_2 = vlSelf->md_board__DOT__m68k__DOT___w281_1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT___w279_2 = vlSelf->md_board__DOT__m68k__DOT___w279_1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT___w279_2 = vlSelf->md_board__DOT__m68k__DOT___w279_3;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT___w284_2 = vlSelf->md_board__DOT__m68k__DOT___w284_1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT___w284_2 = vlSelf->md_board__DOT__m68k__DOT___w284_3;
        vlSelf->md_board__DOT__m68k__DOT__w289 = vlSelf->md_board__DOT__m68k__DOT__w288;
        vlSelf->md_board__DOT__m68k__DOT__w429 = vlSelf->md_board__DOT__m68k__DOT__w396;
        vlSelf->md_board__DOT__m68k__DOT__w287 = vlSelf->md_board__DOT__m68k__DOT__w285;
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff1__DOT__l1 
            = (1U & (~ (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff13__DOT__l2)) 
                         & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w30)) 
                        | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff5__DOT__l2) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w34)))));
        vlSelf->md_board__DOT__m68k__DOT__w410 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w377)));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w364__v1 
            = vlSelf->md_board__DOT__m68k__DOT__w364
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w364__v1 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt1__DOT__l1;
        vlSelf->md_board__DOT__m68k__DOT__w384 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w374) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w373));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v1 
            = ((0xffeU & ((IData)(vlSelf->md_board__DOT__ym__DOT__fm__DOT__prescaler__DOT__ic_latch__DOT__v2) 
                          << 1U)) | (IData)(vlSelf->res_z80));
        vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff14__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff24__DOT__l2) 
               & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff25__DOT__l2) 
                  & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff26__DOT__l2) 
                     & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w44))));
        vlSelf->md_board__DOT__m68k__DOT__c3_l = vlSelf->md_board__DOT__m68k__DOT__w280;
        vlSelf->md_board__DOT__m68k__DOT__c2_l = vlSelf->md_board__DOT__m68k__DOT__w285;
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff70__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff70__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff70__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__w339;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__w415 = (1U 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w423)) 
                                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w404))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__w404 = vlSelf->md_board__DOT__m68k__DOT__w403;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__w371 = (1U 
                                                  & (~ 
                                                     ((vlSelf->md_board__DOT__m68k__DOT__w389
                                                       [1U] 
                                                       | (~ 
                                                          ((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w395)) 
                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w418_1)))) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w386)))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__w386 = vlSelf->md_board__DOT__m68k__DOT__w385;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->md_board__DOT__m68k__DOT__w363 = (1U 
                                                  & (~ 
                                                     ((((IData)(vlSelf->md_board__DOT__m68k__DOT__w395) 
                                                        & (IData)(vlSelf->md_board__DOT__m68k__DOT__w418_1)) 
                                                       | vlSelf->md_board__DOT__m68k__DOT__w364
                                                       [1U]) 
                                                      | (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w383)))));
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w364__v0 
            = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w397) 
               & vlSelf->md_board__DOT__m68k__DOT__w389
               [0U]);
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w364__v0 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__m68k__DOT__w383 = vlSelf->md_board__DOT__m68k__DOT__w382;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w268__v1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__BR)));
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w268__v1 = 1U;
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w268__v2 
            = vlSelf->md_board__DOT__m68k__DOT__w268
            [1U];
        vlSelf->md_board__DOT__m68k__DOT__w273 = vlSelf->md_board__DOT__m68k__DOT__w268
            [2U];
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff64__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff64__DOT__l1;
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w558 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr200__DOT__v2) 
           | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr201__DOT__v2));
    md_board__DOT__ym__DOT__vdp__DOT__l628 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr628__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT__l627 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr627__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    md_board__DOT__ym__DOT__vdp__DOT__l626 = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__2__KET____DOT__sr__DOT__v2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__1__KET____DOT__sr__DOT__v2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr626__DOT__l1__BRA__0__KET____DOT__sr__DOT__v2)));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_l2 
        = (((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_2__DOT__l2) 
            << 0xeU) | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__reg_data_1__DOT__l2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr612__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr158__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr129__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr116__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w1102 
        = ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr630__DOT__v2)) 
           & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr629__DOT__v2));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__5__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__cnt106__DOT__mem__DOT__l1__BRA__4__KET____DOT__sr__DOT__v2_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sl_test0__DOT__mem_assign;
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__vdp__DOT__prescaler_dff11__DOT__l2_assign;
    if (vlSelf->md_board__DOT__m68k__DOT__c4) {
        vlSelf->md_board__DOT__m68k__DOT__w991 = ((IData)(vlSelf->md_board__DOT__m68k__DOT__w267) 
                                                  | (IData)(vlSelf->md_board__DOT__m68k__DOT__w310));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2_l__DOT__l1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) 
                | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1_nq)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2__DOT__l2));
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2_l__DOT__l1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) 
                | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1_nq)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2__DOT__l2));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__b_col 
        = (((7U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
            << 7U) | (((6U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
                       << 6U) | (((5U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
                                  << 5U) | (((4U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l628)))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__g_col 
        = (((7U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
            << 7U) | (((6U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
                       << 6U) | (((5U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
                                  << 5U) | (((4U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l627)))))))));
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__r_col 
        = (((7U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
            << 7U) | (((6U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
                       << 6U) | (((5U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
                                  << 5U) | (((4U == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(md_board__DOT__ym__DOT__vdp__DOT__l626)))))))));
    if (((~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w615)) 
         & (IData)(vlSelf->md_board__DOT__m68k__DOT__c3))) {
        vlSelf->md_board__DOT__m68k__DOT__w617 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w618)));
    }
    if (vlSelf->md_board__DOT__m68k__DOT__c1) {
        vlSelf->md_board__DOT__m68k__DOT__w691 = (1U 
                                                  & (~ 
                                                     (((((((IData)(vlSelf->md_board__DOT__m68k__DOT__w689) 
                                                           | (IData)(vlSelf->md_board__DOT__m68k__DOT__w570)) 
                                                          | (5U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                 >> 2U)))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                                >> 2U)))) 
                                                        | (IData)(
                                                                  ((0x10U 
                                                                    == 
                                                                    (0x14U 
                                                                     & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x341U 
                                                                       & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                       | (IData)(
                                                                 ((8U 
                                                                   == 
                                                                   (0x1cU 
                                                                    & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x34e9U 
                                                                      & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569)))))) 
                                                      | (IData)(
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->md_board__DOT__m68k__DOT__w529[0U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x34e9U 
                                                                     & (IData)(vlSelf->md_board__DOT__m68k__DOT__w569))))))));
        vlSelf->md_board__DOT__m68k__DOT__w698 = (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->md_board__DOT__m68k__DOT__w529[0U] 
                                                      >> 2U)));
        vlSelf->md_board__DOT__m68k__DOT__w615 = (1U 
                                                  & (~ 
                                                     ((vlSelf->md_board__DOT__m68k__DOT__w529[1U] 
                                                       >> 0x1fU) 
                                                      | vlSelf->md_board__DOT__m68k__DOT__w529[2U])));
    }
    vlSelf->md_board__DOT__ym__DOT__vdp__DOT__w814 
        = ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr458__DOT__v2) 
           & ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dl454__DOT__mem) 
              | (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__sr460__DOT__v2)));
    vlSelf->md_board__DOT__BR = (((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff10__DOT__l2) 
                                  & (~ ((IData)(vlSelf->md_board__DOT___M3) 
                                        & (IData)(vlSelf->md_board__DOT__ym__DOT__vdp__DOT__dff22__DOT__l2)))) 
                                 & (~ (IData)(vlSelf->dma_68k_req)));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff10__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff10__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o)))) {
        vlSelf->__VdlyVal__md_board__DOT__m68k__DOT__w268__v0 
            = vlSelf->md_board__DOT__m68k__DOT__w268
            [0U];
        vlSelf->__VdlySet__md_board__DOT__m68k__DOT__w268__v0 = 1U;
        vlSelf->md_board__DOT__m68k__DOT__w373 = (1U 
                                                  & (~ (IData)(vlSelf->md_board__DOT__m68k__DOT__w365)));
        vlSelf->md_board__DOT__m68k__DOT__w345 = (1U 
                                                  & (~ 
                                                     vlSelf->md_board__DOT__m68k__DOT__w294
                                                     [1U]));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff64__DOT__l1 
            = ((IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff66__DOT__l2) 
               | ((IData)(vlSelf->md_board__DOT__AS) 
                  | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff73__DOT__l2)));
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff10__DOT__l1 
            = (1U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT__w79)) 
                     | (IData)(vlSelf->md_board__DOT__ym__DOT__arb__DOT____VdfgRegularize_h319f8385_2_15)));
    }
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff73__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__arb__DOT__dff73__DOT__l1;
    }
    if ((1U & ((~ ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                   | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w314) 
                      | (vlSelf->md_board__DOT__m68k__DOT__w315
                         [1U] | (IData)(vlSelf->md_board__DOT__m68k__DOT__w308))))) 
               | (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_431) 
                     | (IData)(vlSelf->md_board__DOT__m68k__DOT__w317)))))) {
        vlSelf->md_board__DOT__m68k__DOT__w310 = 0U;
    } else if ((1U & (((~ ((IData)(vlSelf->md_board__DOT__m68k__DOT____VdfgRegularize_hd846205d_0_431) 
                           | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w312) 
                              | (IData)(vlSelf->md_board__DOT__m68k__DOT__w306)))) 
                       | (~ ((IData)(vlSelf->md_board__DOT__m68k__DOT__w321) 
                             | ((IData)(vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) 
                                | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w319) 
                                   | ((IData)(vlSelf->md_board__DOT__m68k__DOT__w325) 
                                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w320))))))) 
                      | (IData)(vlSelf->md_board__DOT__m68k__DOT__w308)))) {
        vlSelf->md_board__DOT__m68k__DOT__w310 = 1U;
    }
    __Vtableidx8 = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2__DOT__l1) 
                     << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm5__DOT__l2) 
                                << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1_nq) 
                                           << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2))));
    if ((1U & Vmd_board__ConstPool__TABLE_h40e67f99_0
         [__Vtableidx8])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2__DOT__l1 
            = Vmd_board__ConstPool__TABLE_hb4a9574c_0
            [__Vtableidx8];
    }
    if ((2U & Vmd_board__ConstPool__TABLE_h40e67f99_0
         [__Vtableidx8])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state2__DOT__l2 
            = Vmd_board__ConstPool__TABLE_h08e21c28_0
            [__Vtableidx8];
    }
    __Vtableidx4 = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2__DOT__l1) 
                     << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm5__DOT__l2) 
                                << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state1_nq) 
                                           << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2))));
    if ((1U & Vmd_board__ConstPool__TABLE_h40e67f99_0
         [__Vtableidx4])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2__DOT__l1 
            = Vmd_board__ConstPool__TABLE_hb4a9574c_0
            [__Vtableidx4];
    }
    if ((2U & Vmd_board__ConstPool__TABLE_h40e67f99_0
         [__Vtableidx4])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_state2__DOT__l2 
            = Vmd_board__ConstPool__TABLE_h08e21c28_0
            [__Vtableidx4];
    }
    if (vlSelf->md_board__DOT__m68k__DOT__w278) {
        vlSelf->md_board__DOT__m68k__DOT__w319 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w321 = 0U;
        vlSelf->md_board__DOT__m68k__DOT__w320 = 0U;
    } else if (vlSelf->md_board__DOT__m68k__DOT__w328) {
        vlSelf->md_board__DOT__m68k__DOT__w319 = vlSelf->md_board__DOT__m68k__DOT__w299;
        vlSelf->md_board__DOT__m68k__DOT__w321 = vlSelf->md_board__DOT__m68k__DOT__w303;
        vlSelf->md_board__DOT__m68k__DOT__w320 = vlSelf->md_board__DOT__m68k__DOT__w301;
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vmd_board__ConstPool__TABLE_h87515ef9_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmd_board__ConstPool__TABLE_h20cc3d75_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmd_board__ConstPool__TABLE_h025fd700_0;

VL_INLINE_OPT void Vmd_board___024root___nba_sequent__TOP__10(Vmd_board___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmd_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmd_board___024root___nba_sequent__TOP__10\n"); );
    // Init
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1 = 0;
    CData/*7:0*/ __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1 = 0;
    CData/*7:0*/ __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1 = 0;
    // Body
    __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1;
    __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1;
    vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2;
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_clk2) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_data__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_data__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_clk2) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_data__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_data__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_clk2) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_data__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_data__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_c) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_data__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_b) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_data__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_data_a) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_data__DOT__l1;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__rx_error__reset) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_clk2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_error__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_error__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_clk2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_error__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l2)));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_ready__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_error__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_error__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____Vcellinp__rx_error__reset) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_clk2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_error__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_error__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_clk2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_error__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l2)));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_ready__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_error__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_error__DOT__l1 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__rx_error__reset) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_clk2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_error__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_error__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_clk2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_error__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l2)));
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_ready__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_error__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_error__DOT__l1 = 0U;
    }
    __Vtableidx7 = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT__l1) 
                     << 4U) | ((((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_4) 
                                 & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__tx_state1_q_c)) 
                                << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____Vcellinp__tx_data_sl__en)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))));
    if ((1U & Vmd_board__ConstPool__TABLE_h87515ef9_0
         [__Vtableidx7])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT__l1 
            = Vmd_board__ConstPool__TABLE_h20cc3d75_0
            [__Vtableidx7];
    }
    if ((2U & Vmd_board__ConstPool__TABLE_h87515ef9_0
         [__Vtableidx7])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_state1__DOT__l2 
            = Vmd_board__ConstPool__TABLE_h025fd700_0
            [__Vtableidx7];
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm5__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm5__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm5__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm5__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
                        & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2)) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2)))));
    }
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c)))) {
            __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1 
                = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_4)
                             ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_data_sl__DOT__mem))
                             : VL_SHIFTR_III(8,8,32, (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l2), 1U)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_bit__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_bit__DOT__l1;
        }
    } else {
        __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_bit__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2) 
                      >> 1U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_bit__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_bit__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l2) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_4))));
    }
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l2 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_data_sl__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_data_sl__DOT__mem_assign;
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b)))) {
            __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1 
                = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_4)
                             ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_data_sl__DOT__mem))
                             : VL_SHIFTR_III(8,8,32, (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l2), 1U)));
        }
    } else {
        __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_data_sl__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_data_sl__DOT__mem_assign;
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a)))) {
            __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1 
                = (0xffU & ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_4)
                             ? (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_data_sl__DOT__mem))
                             : VL_SHIFTR_III(8,8,32, (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l2), 1U)));
        }
    } else {
        __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1 = 0U;
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_data_sl__DOT__mem 
        = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_data_sl__DOT__mem_assign;
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_bit__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_bit__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_bit__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2) 
                      >> 1U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_bit__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_bit__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l2) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_4))));
    }
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l2 = 0U;
    }
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_bit__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_bit__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_bit__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2) 
                      >> 1U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_bit__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_bit__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l2) 
                        | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_4))));
    }
    if ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l2 = 0U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_7) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_3) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_7) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_3) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__r2_j) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_10) 
                      | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_5) 
                         | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2) 
                            & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2)))));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l2) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l2)))) {
            vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_5__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_5__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_5__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite1) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l1;
        }
    } else {
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1 = 0U;
        vlSelf->__Vdly__md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_5__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_5__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_5__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l2 = 0xffU;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__zwrite1) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l1 = 0xffU;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__reg_3f__DOT__l1 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__data_bus;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2_l__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2_l__DOT__l1;
    }
    if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b)))) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2_l__DOT__l1 
            = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) 
                | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1_nq)) 
               & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2__DOT__l2));
    }
    if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_5__DOT__l1 = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2) 
                      >> 2U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_5__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_9)));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_input_bit__DOT__l1 
            = (1U & ((IData)(vlSelf->PC_i) >> 5U));
    }
    if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_5__DOT__l1 = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2) 
                      >> 2U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_5__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_9)));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_input_bit__DOT__l1 
            = (1U & ((IData)(vlSelf->PB_i) >> 5U));
    }
    if ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_5__DOT__l1 = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2) 
                      >> 2U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_5__DOT__l1 
            = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_9)));
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_input_bit__DOT__l1 
            = (1U & ((IData)(vlSelf->PA_i) >> 5U));
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____Vcellinp__p_control__reset) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_p_control_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__write_s_control_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__p_control__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__s_control__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2 = 0U;
    }
    __Vtableidx6 = (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2__DOT__l1) 
                     << 3U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm5__DOT__l2) 
                                << 2U) | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state1_nq) 
                                           << 1U) | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2))));
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l2) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l1 
                = (1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l2)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_6) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_2));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_a)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_6) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_4_2));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_6) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_4) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_3)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_c)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_7) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_5_5));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_6) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_4) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_3)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_b)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_7) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_5_5));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_6) 
                   | (((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_4) 
                       | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_3)) 
                      & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk1_a)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_7) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT____VdfgRegularize_hd3fa7d5d_5_5));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_6) 
                   | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_2));
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_2) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_5) 
                      | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT____VdfgRegularize_hd3fa7d5d_4_1)));
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_c) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm5__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm5__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_3__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_5__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_4__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm1_2__DOT__l2 = 1U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_7__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm2__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm2__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_fsm2__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_2__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_2__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_2__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_6__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_fsm4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_5__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__rx_fsm2_4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__rx_fsm2_4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__rx_fsm2_4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm5__DOT__l2 = 1U;
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm5__DOT__l1 = 1U;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm5__DOT__l1 
            = (1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_3) 
                        & ((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2)) 
                           & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2)))));
    }
    if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__res_dff__DOT__l2) {
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l1;
        }
        if (vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l1;
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l1;
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk2_b)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l1 
                = ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_2) 
                   | ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_5) 
                      | (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT____VdfgRegularize_hd3fa7d5d_4_1)));
        }
        if ((1U & (~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l2)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l1;
        }
        if ((1U & (~ ((IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l2) 
                      >> 2U)))) {
            vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l2 
                = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l1;
        }
    } else {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm3__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_2__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_fsm4__DOT__l1 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_1__DOT__l2 = 0U;
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__uart_clk_div_0__DOT__l2 = 0U;
    }
    if ((1U & Vmd_board__ConstPool__TABLE_h40e67f99_0
         [__Vtableidx6])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2__DOT__l1 
            = Vmd_board__ConstPool__TABLE_hb4a9574c_0
            [__Vtableidx6];
    }
    if ((2U & Vmd_board__ConstPool__TABLE_h40e67f99_0
         [__Vtableidx6])) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_state2__DOT__l2 
            = Vmd_board__ConstPool__TABLE_h08e21c28_0
            [__Vtableidx6];
    }
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1 
        = __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_c__DOT__tx_shifter__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1 
        = __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__tx_shifter__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1 
        = __Vdly__md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__tx_shifter__DOT__l1;
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b_d 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__p_control__DOT__l2)) 
            & ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))
                ? 0x6fU : 0x7fU)) | ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_b__DOT__s_control__DOT__l2))
                                      ? 0x20U : 0U));
    vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a_d 
        = (((~ (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__p_control__DOT__l2)) 
            & ((2U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))
                ? 0x6fU : 0x7fU)) | ((4U & (IData)(vlSelf->md_board__DOT__ym__DOT__ioc__DOT__port_a__DOT__s_control__DOT__l2))
                                      ? 0x20U : 0U));
    if (vlSelf->md_board__DOT__ym__DOT__vdp_clk1_o) {
        vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l2 
            = vlSelf->md_board__DOT__ym__DOT__ioc__DOT__cnt2__DOT__l1;
    }
}
