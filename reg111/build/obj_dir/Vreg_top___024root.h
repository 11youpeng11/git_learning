// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg_top.h for the primary calling header

#ifndef VERILATED_VREG_TOP___024ROOT_H_
#define VERILATED_VREG_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vreg_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreg_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(seg_data,7,0);
    VL_OUT8(o_seg_1,7,0);
    VL_OUT8(o_seg_0,7,0);
    CData/*7:0*/ reg_top__DOT__u_lfsr_random__DOT__lfsr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(i_seg,8,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vreg_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreg_top___024root(Vreg_top__Syms* symsp, const char* v__name);
    ~Vreg_top___024root();
    VL_UNCOPYABLE(Vreg_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
