// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vps2_top.h for the primary calling header

#ifndef VERILATED_VPS2_TOP___024ROOT_H_
#define VERILATED_VPS2_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vps2_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vps2_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(seg0,7,0);
    VL_OUT8(seg1,7,0);
    VL_OUT8(seg2,7,0);
    VL_OUT8(seg3,7,0);
    VL_OUT8(seg4,7,0);
    VL_OUT8(seg5,7,0);
    VL_OUT8(seg6,7,0);
    VL_OUT8(seg7,7,0);
    VL_OUT8(overflow,0,0);
    CData/*0:0*/ ps2_top__DOT__ready;
    CData/*0:0*/ ps2_top__DOT__nextdata_n;
    CData/*7:0*/ ps2_top__DOT__data;
    CData/*7:0*/ ps2_top__DOT__seg_data_1;
    CData/*7:0*/ ps2_top__DOT__key_value;
    CData/*7:0*/ ps2_top__DOT__ascii_value;
    CData/*7:0*/ ps2_top__DOT__key_count;
    CData/*2:0*/ ps2_top__DOT__key_current;
    CData/*2:0*/ ps2_top__DOT__key_next;
    CData/*2:0*/ ps2_top__DOT__ps2_inst1__DOT__w_ptr;
    CData/*2:0*/ ps2_top__DOT__ps2_inst1__DOT__r_ptr;
    CData/*3:0*/ ps2_top__DOT__ps2_inst1__DOT__count;
    CData/*2:0*/ ps2_top__DOT__ps2_inst1__DOT__ps2_clk_sync;
    CData/*0:0*/ ps2_top__DOT__ps2_inst1__DOT____Vlvbound_hae012186__0;
    CData/*2:0*/ __Vdly__ps2_top__DOT__key_next;
    CData/*0:0*/ __Vdly__ps2_top__DOT__ready;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ ps2_top__DOT__ps2_inst1__DOT__buffer;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> ps2_top__DOT__ps2_inst1__DOT__fifo;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vps2_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vps2_top___024root(Vps2_top__Syms* symsp, const char* v__name);
    ~Vps2_top___024root();
    VL_UNCOPYABLE(Vps2_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
