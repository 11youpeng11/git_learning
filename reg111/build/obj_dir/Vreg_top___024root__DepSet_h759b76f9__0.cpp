// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_top.h for the primary calling header

#include "Vreg_top__pch.h"
#include "Vreg_top___024root.h"

void Vreg_top___024root___eval_act(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 256> Vreg_top__ConstPool__TABLE_h7707449f_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vreg_top__ConstPool__TABLE_h1aba171b_0;

VL_INLINE_OPT void Vreg_top___024root___nba_sequent__TOP__0(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx1 = vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr;
    vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr 
        = Vreg_top__ConstPool__TABLE_h7707449f_0[__Vtableidx1];
    vlSelf->seg_data = vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr;
    __Vtableidx2 = (0xfU & (IData)(vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr));
    vlSelf->o_seg_0 = Vreg_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->reg_top__DOT__u_lfsr_random__DOT__lfsr) 
                            >> 4U));
    vlSelf->o_seg_1 = Vreg_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx3];
}

void Vreg_top___024root___eval_nba(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreg_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vreg_top___024root___eval_triggers__act(Vreg_top___024root* vlSelf);

bool Vreg_top___024root___eval_phase__act(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vreg_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vreg_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreg_top___024root___eval_phase__nba(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vreg_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__nba(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_top___024root___dump_triggers__act(Vreg_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vreg_top___024root___eval(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vreg_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/reg111/vsrc/reg_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vreg_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/reg111/vsrc/reg_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vreg_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vreg_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vreg_top___024root___eval_debug_assertions(Vreg_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->i_seg & 0xfe00U))) {
        Verilated::overWidthError("i_seg");}
}
#endif  // VL_DEBUG
