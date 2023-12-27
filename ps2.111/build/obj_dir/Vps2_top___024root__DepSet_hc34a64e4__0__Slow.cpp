// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "Vps2_top__pch.h"
#include "Vps2_top___024root.h"

VL_ATTR_COLD void Vps2_top___024root___eval_static(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vps2_top___024root___eval_initial__TOP(Vps2_top___024root* vlSelf);

VL_ATTR_COLD void Vps2_top___024root___eval_initial(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_initial\n"); );
    // Body
    Vps2_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vps2_top___024root___eval_initial__TOP(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->seg6 = 3U;
    vlSelf->seg7 = 3U;
}

VL_ATTR_COLD void Vps2_top___024root___eval_final(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__stl(Vps2_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vps2_top___024root___eval_phase__stl(Vps2_top___024root* vlSelf);

VL_ATTR_COLD void Vps2_top___024root___eval_settle(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vps2_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/ps2.111/vsrc/ps2_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vps2_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__stl(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vps2_top__ConstPool__TABLE_h1aba171b_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vps2_top__ConstPool__TABLE_hfdf71d3b_0;

VL_ATTR_COLD void Vps2_top___024root___stl_sequent__TOP__0(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx1 = (0xfU & (IData)(vlSelf->ps2_top__DOT__key_value));
    vlSelf->seg0 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->ps2_top__DOT__key_value) 
                            >> 4U));
    vlSelf->seg1 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx2];
    __Vtableidx5 = (0xfU & (IData)(vlSelf->ps2_top__DOT__key_count));
    vlSelf->seg4 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->ps2_top__DOT__key_count) 
                            >> 4U));
    vlSelf->seg5 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx6];
    vlSelf->ps2_top__DOT__data = vlSelf->ps2_top__DOT__ps2_inst1__DOT__fifo
        [vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr];
    __Vtableidx7 = vlSelf->ps2_top__DOT__data;
    vlSelf->ps2_top__DOT__seg_data_1 = Vps2_top__ConstPool__TABLE_hfdf71d3b_0
        [__Vtableidx7];
    __Vtableidx3 = (0xfU & (IData)(vlSelf->ps2_top__DOT__seg_data_1));
    vlSelf->seg2 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->ps2_top__DOT__seg_data_1) 
                            >> 4U));
    vlSelf->seg3 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx4];
}

VL_ATTR_COLD void Vps2_top___024root___eval_stl(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vps2_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vps2_top___024root___eval_triggers__stl(Vps2_top___024root* vlSelf);

VL_ATTR_COLD bool Vps2_top___024root___eval_phase__stl(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vps2_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vps2_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__act(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or posedge rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__nba(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or posedge rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_top___024root___ctor_var_reset(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    vlSelf->seg3 = 0;
    vlSelf->seg4 = 0;
    vlSelf->seg5 = 0;
    vlSelf->seg6 = 0;
    vlSelf->seg7 = 0;
    vlSelf->overflow = 0;
    vlSelf->ps2_top__DOT__ready = 0;
    vlSelf->ps2_top__DOT__nextdata_n = 0;
    vlSelf->ps2_top__DOT__data = 0;
    vlSelf->ps2_top__DOT__seg_data_1 = 0;
    vlSelf->ps2_top__DOT__key_value = 0;
    vlSelf->ps2_top__DOT__ascii_value = 0;
    vlSelf->ps2_top__DOT__key_count = 0;
    vlSelf->ps2_top__DOT__key_current = 0;
    vlSelf->ps2_top__DOT__key_next = 0;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ps2_top__DOT__ps2_inst1__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr = 0;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr = 0;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__count = 0;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync = 0;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT____Vlvbound_hae012186__0 = 0;
    vlSelf->__Vdly__ps2_top__DOT__key_next = 0;
    vlSelf->__Vdly__ps2_top__DOT__ready = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
}
