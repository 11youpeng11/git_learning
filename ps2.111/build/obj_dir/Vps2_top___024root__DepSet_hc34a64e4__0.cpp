// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "Vps2_top__pch.h"
#include "Vps2_top___024root.h"

void Vps2_top___024root___eval_act(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vps2_top___024root___nba_sequent__TOP__0(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__ps2_top__DOT__ps2_inst1__DOT__count;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__count = 0;
    CData/*2:0*/ __Vdly__ps2_top__DOT__ps2_inst1__DOT__w_ptr;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__ps2_top__DOT__ps2_inst1__DOT__r_ptr;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__overflow;
    __Vdly__overflow = 0;
    CData/*2:0*/ __Vdlyvdim0__ps2_top__DOT__ps2_inst1__DOT__fifo__v0;
    __Vdlyvdim0__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ps2_top__DOT__ps2_inst1__DOT__fifo__v0;
    __Vdlyvval__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ps2_top__DOT__ps2_inst1__DOT__fifo__v0;
    __Vdlyvset__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 = 0;
    // Body
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync 
        = vlSelf->ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync;
    vlSelf->__Vdly__ps2_top__DOT__ready = vlSelf->ps2_top__DOT__ready;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__w_ptr = vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__count = vlSelf->ps2_top__DOT__ps2_inst1__DOT__count;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__r_ptr = vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr;
    __Vdlyvset__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 = 0U;
    __Vdly__ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__ps2_top__DOT__ps2_inst1__DOT__count = 0U;
        __Vdly__ps2_top__DOT__ps2_inst1__DOT__w_ptr = 0U;
        __Vdly__ps2_top__DOT__ps2_inst1__DOT__r_ptr = 0U;
        __Vdly__overflow = 0U;
        vlSelf->__Vdly__ps2_top__DOT__ready = 0U;
    } else {
        if (vlSelf->ps2_top__DOT__ready) {
            if ((1U & (~ (IData)(vlSelf->ps2_top__DOT__nextdata_n)))) {
                __Vdly__ps2_top__DOT__ps2_inst1__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr)));
                if (((IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr))))) {
                    vlSelf->__Vdly__ps2_top__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__count))) {
                if ((((~ (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__ps2_top__DOT__ps2_inst1__DOT__fifo__v0 
                        = vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr;
                    vlSelf->__Vdly__ps2_top__DOT__ready = 1U;
                    __Vdly__ps2_top__DOT__ps2_inst1__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr)))));
                }
                __Vdly__ps2_top__DOT__ps2_inst1__DOT__count = 0U;
            } else {
                vlSelf->ps2_top__DOT__ps2_inst1__DOT____Vlvbound_hae012186__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__count))) {
                    vlSelf->ps2_top__DOT__ps2_inst1__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__count))) 
                            & (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT____Vlvbound_hae012186__0) 
                                        << (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__count))));
                }
                __Vdly__ps2_top__DOT__ps2_inst1__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ps2_top__DOT__ps2_inst1__DOT__count)));
            }
        }
    }
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__count = __Vdly__ps2_top__DOT__ps2_inst1__DOT__count;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__w_ptr = __Vdly__ps2_top__DOT__ps2_inst1__DOT__w_ptr;
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync 
        = __Vdly__ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync;
    vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr = __Vdly__ps2_top__DOT__ps2_inst1__DOT__r_ptr;
    if (__Vdlyvset__ps2_top__DOT__ps2_inst1__DOT__fifo__v0) {
        vlSelf->ps2_top__DOT__ps2_inst1__DOT__fifo[__Vdlyvdim0__ps2_top__DOT__ps2_inst1__DOT__fifo__v0] 
            = __Vdlyvval__ps2_top__DOT__ps2_inst1__DOT__fifo__v0;
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vps2_top__ConstPool__TABLE_h1aba171b_0;

VL_INLINE_OPT void Vps2_top___024root___nba_sequent__TOP__1(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __Vdly__ps2_top__DOT__key_count;
    __Vdly__ps2_top__DOT__key_count = 0;
    CData/*7:0*/ __Vdly__ps2_top__DOT__key_value;
    __Vdly__ps2_top__DOT__key_value = 0;
    // Body
    vlSelf->__Vdly__ps2_top__DOT__key_next = vlSelf->ps2_top__DOT__key_next;
    __Vdly__ps2_top__DOT__key_value = vlSelf->ps2_top__DOT__key_value;
    __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
    if (vlSelf->rst) {
        __Vdly__ps2_top__DOT__key_count = 0U;
        __Vdly__ps2_top__DOT__key_value = 0U;
        vlSelf->__Vdly__ps2_top__DOT__key_next = 2U;
    } else if (vlSelf->ps2_top__DOT__ready) {
        if ((2U == (IData)(vlSelf->ps2_top__DOT__key_current))) {
            if (((IData)(vlSelf->ps2_top__DOT__data) 
                 == (IData)(vlSelf->ps2_top__DOT__key_value))) {
                __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
                __Vdly__ps2_top__DOT__key_value = 0U;
                vlSelf->ps2_top__DOT__ascii_value = 0U;
                __Vdly__ps2_top__DOT__key_value = vlSelf->ps2_top__DOT__key_value;
                vlSelf->__Vdly__ps2_top__DOT__key_next 
                    = vlSelf->ps2_top__DOT__key_current;
            } else {
                __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
                __Vdly__ps2_top__DOT__key_value = vlSelf->ps2_top__DOT__data;
                vlSelf->__Vdly__ps2_top__DOT__key_next = 4U;
            }
        } else if ((4U == (IData)(vlSelf->ps2_top__DOT__key_current))) {
            if ((0xf0U == (IData)(vlSelf->ps2_top__DOT__data))) {
                __Vdly__ps2_top__DOT__key_count = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->ps2_top__DOT__key_count)));
                __Vdly__ps2_top__DOT__key_value = vlSelf->ps2_top__DOT__key_value;
                vlSelf->ps2_top__DOT__ascii_value = 0U;
                vlSelf->__Vdly__ps2_top__DOT__key_next = 1U;
            } else if (((IData)(vlSelf->ps2_top__DOT__data) 
                        == (IData)(vlSelf->ps2_top__DOT__key_value))) {
                __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
                __Vdly__ps2_top__DOT__key_value = vlSelf->ps2_top__DOT__key_value;
                vlSelf->__Vdly__ps2_top__DOT__key_next = 4U;
            } else {
                __Vdly__ps2_top__DOT__key_value = 0U;
                vlSelf->__Vdly__ps2_top__DOT__key_next = 2U;
                __Vdly__ps2_top__DOT__key_count = 0U;
            }
        } else if ((1U == (IData)(vlSelf->ps2_top__DOT__key_current))) {
            if (((IData)(vlSelf->ps2_top__DOT__data) 
                 == (IData)(vlSelf->ps2_top__DOT__key_value))) {
                __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
                __Vdly__ps2_top__DOT__key_value = 0U;
                vlSelf->__Vdly__ps2_top__DOT__key_next = 2U;
            } else {
                __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
                __Vdly__ps2_top__DOT__key_value = 0U;
                vlSelf->__Vdly__ps2_top__DOT__key_next = 2U;
            }
        } else {
            __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
            __Vdly__ps2_top__DOT__key_value = 0U;
            vlSelf->__Vdly__ps2_top__DOT__key_next 
                = vlSelf->ps2_top__DOT__key_current;
        }
    } else {
        __Vdly__ps2_top__DOT__key_count = vlSelf->ps2_top__DOT__key_count;
        __Vdly__ps2_top__DOT__key_value = vlSelf->ps2_top__DOT__key_value;
        vlSelf->__Vdly__ps2_top__DOT__key_next = ((2U 
                                                   == (IData)(vlSelf->ps2_top__DOT__key_current))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ps2_top__DOT__key_current))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->ps2_top__DOT__key_current))
                                                     ? 1U
                                                     : 2U)));
    }
    vlSelf->ps2_top__DOT__key_count = __Vdly__ps2_top__DOT__key_count;
    vlSelf->ps2_top__DOT__key_value = __Vdly__ps2_top__DOT__key_value;
    __Vtableidx5 = (0xfU & (IData)(vlSelf->ps2_top__DOT__key_count));
    vlSelf->seg4 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->ps2_top__DOT__key_count) 
                            >> 4U));
    vlSelf->seg5 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx6];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->ps2_top__DOT__key_value));
    vlSelf->seg0 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->ps2_top__DOT__key_value) 
                            >> 4U));
    vlSelf->seg1 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx2];
    vlSelf->ps2_top__DOT__seg_data_1 = vlSelf->ps2_top__DOT__ascii_value;
}

extern const VlUnpacked<CData/*7:0*/, 256> Vps2_top__ConstPool__TABLE_hfdf71d3b_0;

VL_INLINE_OPT void Vps2_top___024root___nba_sequent__TOP__2(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->ps2_top__DOT__ready = vlSelf->__Vdly__ps2_top__DOT__ready;
    vlSelf->ps2_top__DOT__data = vlSelf->ps2_top__DOT__ps2_inst1__DOT__fifo
        [vlSelf->ps2_top__DOT__ps2_inst1__DOT__r_ptr];
    __Vtableidx7 = vlSelf->ps2_top__DOT__data;
    vlSelf->ps2_top__DOT__seg_data_1 = Vps2_top__ConstPool__TABLE_hfdf71d3b_0
        [__Vtableidx7];
}

VL_INLINE_OPT void Vps2_top___024root___nba_sequent__TOP__3(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ps2_top__DOT__key_current = ((IData)(vlSelf->rst)
                                          ? 2U : (IData)(vlSelf->ps2_top__DOT__key_next));
}

VL_INLINE_OPT void Vps2_top___024root___nba_comb__TOP__0(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx3 = (0xfU & (IData)(vlSelf->ps2_top__DOT__seg_data_1));
    vlSelf->seg2 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->ps2_top__DOT__seg_data_1) 
                            >> 4U));
    vlSelf->seg3 = Vps2_top__ConstPool__TABLE_h1aba171b_0
        [__Vtableidx4];
}

VL_INLINE_OPT void Vps2_top___024root___nba_sequent__TOP__4(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->ps2_top__DOT__key_next = vlSelf->__Vdly__ps2_top__DOT__key_next;
}

void Vps2_top___024root___eval_nba(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vps2_top___024root___nba_sequent__TOP__4(vlSelf);
    }
}

void Vps2_top___024root___eval_triggers__act(Vps2_top___024root* vlSelf);

bool Vps2_top___024root___eval_phase__act(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vps2_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vps2_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vps2_top___024root___eval_phase__nba(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vps2_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__nba(Vps2_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_top___024root___dump_triggers__act(Vps2_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vps2_top___024root___eval(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vps2_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/ps2.111/vsrc/ps2_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vps2_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/robot/ysyx-workbench/nvboard/ps2.111/vsrc/ps2_top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vps2_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vps2_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vps2_top___024root___eval_debug_assertions(Vps2_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
