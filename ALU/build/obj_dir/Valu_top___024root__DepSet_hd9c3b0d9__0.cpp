// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_top.h for the primary calling header

#include "Valu_top__pch.h"
#include "Valu_top___024root.h"

VL_INLINE_OPT void Valu_top___024root___ico_sequent__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ alu_top__DOT__i_a_2;
    alu_top__DOT__i_a_2 = 0;
    CData/*3:0*/ alu_top__DOT__i_b_2;
    alu_top__DOT__i_b_2 = 0;
    CData/*3:0*/ alu_top__DOT__sub_i_b_2;
    alu_top__DOT__sub_i_b_2 = 0;
    CData/*3:0*/ alu_top__DOT__o_led_0;
    alu_top__DOT__o_led_0 = 0;
    CData/*0:0*/ alu_top__DOT__max_0;
    alu_top__DOT__max_0 = 0;
    CData/*3:0*/ alu_top__DOT__u0_adder__DOT__led;
    alu_top__DOT__u0_adder__DOT__led = 0;
    CData/*3:0*/ alu_top__DOT__u1_adder__DOT__led;
    alu_top__DOT__u1_adder__DOT__led = 0;
    CData/*3:0*/ alu_top__DOT__i0__DOT__i0__DOT__lut_out;
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ alu_top__DOT__i2__DOT__i0__DOT__lut_out;
    alu_top__DOT__i2__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ alu_top__DOT__i3__DOT__i0__DOT__lut_out;
    alu_top__DOT__i3__DOT__i0__DOT__lut_out = 0;
    // Body
    vlSelf->o_equ = ((7U == (IData)(vlSelf->i_op)) 
                     & ((IData)(vlSelf->i_a) == (IData)(vlSelf->i_b)));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->i_a;
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0xfU & (~ (IData)(vlSelf->i_a)));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = ((IData)(vlSelf->i_a) ^ (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = ((IData)(vlSelf->i_a) | (IData)(vlSelf->i_b));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = ((IData)(vlSelf->i_a) & (IData)(vlSelf->i_b));
    alu_top__DOT__max_0 = ((IData)(vlSelf->i_a) > (IData)(vlSelf->i_b));
    if ((8U & (IData)(vlSelf->i_b))) {
        alu_top__DOT__i_b_2 = (0xfU & ((IData)(1U) 
                                       + ((8U & (IData)(vlSelf->i_b)) 
                                          | (7U & (~ (IData)(vlSelf->i_b))))));
        alu_top__DOT__sub_i_b_2 = (0xfU & ((8U & ((~ 
                                                   ((IData)(vlSelf->i_b) 
                                                    >> 3U)) 
                                                  << 3U)) 
                                           | (7U & (IData)(vlSelf->i_b))));
    } else {
        alu_top__DOT__i_b_2 = (0xfU & (IData)(vlSelf->i_b));
        alu_top__DOT__sub_i_b_2 = (0xfU & ((IData)(1U) 
                                           + ((8U & 
                                               ((~ 
                                                 ((IData)(vlSelf->i_b) 
                                                  >> 3U)) 
                                                << 3U)) 
                                              | (7U 
                                                 & (~ (IData)(vlSelf->i_b))))));
    }
    alu_top__DOT__i_a_2 = (0xfU & ((8U & (IData)(vlSelf->i_a))
                                    ? ((IData)(1U) 
                                       + ((8U & (IData)(vlSelf->i_a)) 
                                          | (7U & (~ (IData)(vlSelf->i_a)))))
                                    : (IData)(vlSelf->i_a)));
    if (alu_top__DOT__max_0) {
        vlSelf->o_max = (6U == (IData)(vlSelf->i_op));
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1U] 
            = vlSelf->i_a;
    } else {
        vlSelf->o_max = 0U;
        vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1U] 
            = vlSelf->i_b;
    }
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = (1U & (((IData)(alu_top__DOT__i_a_2) + (IData)(alu_top__DOT__sub_i_b_2)) 
                 >> 4U));
    vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = (1U & (((IData)(alu_top__DOT__i_a_2) + (IData)(alu_top__DOT__i_b_2)) 
                 >> 4U));
    alu_top__DOT__u0_adder__DOT__led = (0xfU & ((IData)(alu_top__DOT__i_a_2) 
                                                + (IData)(alu_top__DOT__i_b_2)));
    alu_top__DOT__u1_adder__DOT__led = (0xfU & ((IData)(alu_top__DOT__i_a_2) 
                                                + (IData)(alu_top__DOT__sub_i_b_2)));
    alu_top__DOT__i2__DOT__i0__DOT__lut_out = (((IData)(vlSelf->i_op) 
                                                == 
                                                vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list
                                                [0U]) 
                                               & vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list
                                               [0U]);
    alu_top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i2__DOT__i0__DOT__lut_out) 
                                               | (((IData)(vlSelf->i_op) 
                                                   == 
                                                   vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list
                                                   [1U]) 
                                                  & vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list
                                                  [1U]));
    vlSelf->o_carry = alu_top__DOT__i2__DOT__i0__DOT__lut_out;
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = (((1U & ((IData)(alu_top__DOT__i_a_2) >> 3U)) 
            == (1U & ((IData)(alu_top__DOT__i_b_2) 
                      >> 3U))) & ((1U & ((IData)(alu_top__DOT__u0_adder__DOT__led) 
                                         >> 3U)) != 
                                  (1U & ((IData)(alu_top__DOT__i_a_2) 
                                         >> 3U))));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = ((8U & (IData)(alu_top__DOT__u0_adder__DOT__led))
            ? ((8U & (IData)(alu_top__DOT__u0_adder__DOT__led)) 
               | (7U & (~ (IData)(alu_top__DOT__u0_adder__DOT__led))))
            : (IData)(alu_top__DOT__u0_adder__DOT__led));
    vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = (((1U & ((IData)(alu_top__DOT__i_a_2) >> 3U)) 
            == (1U & ((IData)(alu_top__DOT__sub_i_b_2) 
                      >> 3U))) & ((1U & ((IData)(alu_top__DOT__u1_adder__DOT__led) 
                                         >> 3U)) != 
                                  (1U & ((IData)(alu_top__DOT__i_a_2) 
                                         >> 3U))));
    vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = ((8U & (IData)(alu_top__DOT__u1_adder__DOT__led))
            ? ((8U & (IData)(alu_top__DOT__u1_adder__DOT__led)) 
               | (7U & (~ (IData)(alu_top__DOT__u1_adder__DOT__led))))
            : (IData)(alu_top__DOT__u1_adder__DOT__led));
    alu_top__DOT__i3__DOT__i0__DOT__lut_out = (((IData)(vlSelf->i_op) 
                                                == 
                                                vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list
                                                [0U]) 
                                               & vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list
                                               [0U]);
    alu_top__DOT__i3__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i3__DOT__i0__DOT__lut_out) 
                                               | (((IData)(vlSelf->i_op) 
                                                   == 
                                                   vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list
                                                   [1U]) 
                                                  & vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list
                                                  [1U]));
    vlSelf->o_overflow = alu_top__DOT__i3__DOT__i0__DOT__lut_out;
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((- (IData)(
                                                          ((IData)(vlSelf->i_op) 
                                                           == 
                                                           vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                           [0U]))) 
                                               & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                               [0U]);
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [1U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [1U]));
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [2U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [2U]));
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [3U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [3U]));
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [4U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [4U]));
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [5U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [5U]));
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [6U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [6U]));
    alu_top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(alu_top__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->i_op) 
                                                              == 
                                                              vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list
                                                              [7U]))) 
                                                  & vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list
                                                  [7U]));
    alu_top__DOT__o_led_0 = alu_top__DOT__i0__DOT__i0__DOT__lut_out;
    if (vlSelf->o_overflow) {
        vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg = 0U;
        vlSelf->o_led = 0U;
    } else {
        vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg 
            = (7U & (IData)(alu_top__DOT__o_led_0));
        vlSelf->o_led = alu_top__DOT__o_led_0;
    }
    vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus 
        = ((~ (IData)(vlSelf->o_overflow)) & ((IData)(alu_top__DOT__o_led_0) 
                                              >> 3U));
    vlSelf->o_minus = ((IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus)
                        ? 0xfdU : 0xffU);
}

void Valu_top___024root___eval_ico(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu_top___024root___eval_triggers__ico(Valu_top___024root* vlSelf);

bool Valu_top___024root___eval_phase__ico(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu_top___024root___eval_act(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 16> Valu_top__ConstPool__TABLE_h1d523280_0;

VL_INLINE_OPT void Valu_top___024root___nba_sequent__TOP__0(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg) 
                     << 1U) | (IData)(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_minus));
    vlSelf->o_seg = Valu_top__ConstPool__TABLE_h1d523280_0
        [__Vtableidx1];
}

void Valu_top___024root___eval_nba(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Valu_top___024root___eval_triggers__act(Valu_top___024root* vlSelf);

bool Valu_top___024root___eval_phase__act(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_top___024root___eval_phase__nba(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__ico(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__nba(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_top___024root___dump_triggers__act(Valu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_top___024root___eval(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval\n"); );
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
            Valu_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/ALU/vsrc/alu_top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/ALU/vsrc/alu_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/ALU/vsrc/alu_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_top___024root___eval_debug_assertions(Valu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_a & 0xf0U))) {
        Verilated::overWidthError("i_a");}
    if (VL_UNLIKELY((vlSelf->i_b & 0xf0U))) {
        Verilated::overWidthError("i_b");}
    if (VL_UNLIKELY((vlSelf->i_op & 0xf8U))) {
        Verilated::overWidthError("i_op");}
}
#endif  // VL_DEBUG
