// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_top.h for the primary calling header

#include "Vreg_top__pch.h"
#include "Vreg_top___024root.h"

VL_ATTR_COLD void Vreg_top___024root___eval_static(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vreg_top___024root___eval_initial(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vreg_top___024root___eval_final(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__stl(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreg_top___024root___eval_phase__stl(Vreg_top___024root* vlSelf);

VL_ATTR_COLD void Vreg_top___024root___eval_settle(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_settle\n"); );
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
            Vreg_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/reg111/vsrc/reg_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vreg_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__stl(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vreg_top__ConstPool__TABLE_h1aba171b_0;

VL_ATTR_COLD void Vreg_top___024root___stl_sequent__TOP__0(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->seg_data = vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr;
    __Vtableidx2 = (0xfU & (IData)(vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr));
    vlSelf->o_seg_0 = Vreg_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr) 
                            >> 4U));
    vlSelf->o_seg_1 = Vreg_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vreg_top___024root___eval_stl(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vreg_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vreg_top___024root___eval_triggers__stl(Vreg_top___024root* vlSelf);

VL_ATTR_COLD bool Vreg_top___024root___eval_phase__stl(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreg_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vreg_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__act(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__nba(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreg_top___024root___ctor_var_reset(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->i_seg = 0;
    vlSelf->seg_data = 0;
    vlSelf->o_seg_1 = 0;
    vlSelf->o_seg_0 = 0;
    vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
}
