// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode83.h for the primary calling header

#include "Vencode83__pch.h"
#include "Vencode83___024root.h"

extern const VlUnpacked<CData/*2:0*/, 512> Vencode83__ConstPool__TABLE_h5afc1951_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vencode83__ConstPool__TABLE_h026eb83a_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vencode83__ConstPool__TABLE_h134579da_0;

VL_INLINE_OPT void Vencode83___024root___ico_sequent__TOP__0(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->i_code) << 1U) 
                    | (IData)(vlSelf->i_en));
    vlSelf->o_code = Vencode83__ConstPool__TABLE_h5afc1951_0
        [__Vtableidx1];
    vlSelf->o_en_flag = Vencode83__ConstPool__TABLE_h026eb83a_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->o_code;
    vlSelf->o_seg = Vencode83__ConstPool__TABLE_h134579da_0
        [__Vtableidx2];
}

void Vencode83___024root___eval_ico(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vencode83___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vencode83___024root___eval_triggers__ico(Vencode83___024root* vlSelf);

bool Vencode83___024root___eval_phase__ico(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vencode83___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vencode83___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vencode83___024root___eval_act(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_act\n"); );
}

void Vencode83___024root___eval_nba(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_nba\n"); );
}

void Vencode83___024root___eval_triggers__act(Vencode83___024root* vlSelf);

bool Vencode83___024root___eval_phase__act(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vencode83___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vencode83___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vencode83___024root___eval_phase__nba(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vencode83___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__ico(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__nba(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__act(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode83___024root___eval(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval\n"); );
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
            Vencode83___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/encode83/vsrc/encode83.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vencode83___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vencode83___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/encode83/vsrc/encode83.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vencode83___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/encode83/vsrc/encode83.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vencode83___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vencode83___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vencode83___024root___eval_debug_assertions(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_en & 0xfeU))) {
        Verilated::overWidthError("i_en");}
}
#endif  // VL_DEBUG
