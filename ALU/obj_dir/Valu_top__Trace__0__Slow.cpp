// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


VL_ATTR_COLD void Valu_top___024root__trace_init_sub__TOP__0(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"i_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"o_seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+66,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_equ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"i_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"o_seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+66,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_equ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"i_a_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"i_b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"sub_i_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"sub_i_b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"led_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"led_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"led_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"led_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"led_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"led_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"led_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"led_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"o_led_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"carry_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"overflow_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"overflow_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"max_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"equ_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+72,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+72,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+81,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+46,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+48,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+51+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+53,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+54,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+86,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+15+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+55,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+56,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u0_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"led",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0_log_and", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0_log_equ", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+71,0,"o_equ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u0_log_max", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u0_log_nor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0_log_or", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0_log_xor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0_seg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+74,0,"i_minus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"i_seg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"o_seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"num0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"num1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"num2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"num3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"num4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"num5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"num6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"num7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"num8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u1_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+28,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"o_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"led",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_top___024root__trace_init_top(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_top\n"); );
    // Body
    Valu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Valu_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_top___024root__trace_register(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Valu_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Valu_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Valu_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Valu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_top___024root__trace_const_0_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_const_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_top___024root__trace_const_0_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+75,(0U));
    bufp->fullIData(oldp+76,(8U),32);
    bufp->fullIData(oldp+77,(3U),32);
    bufp->fullIData(oldp+78,(4U),32);
    bufp->fullIData(oldp+79,(0U),32);
    bufp->fullCData(oldp+80,(0U),4);
    bufp->fullIData(oldp+81,(7U),32);
    bufp->fullIData(oldp+82,(8U),32);
    bufp->fullIData(oldp+83,(2U),32);
    bufp->fullIData(oldp+84,(1U),32);
    bufp->fullIData(oldp+85,(2U),32);
    bufp->fullCData(oldp+86,(2U),8);
    bufp->fullCData(oldp+87,(0xfdU),8);
    bufp->fullCData(oldp+88,(0x60U),8);
    bufp->fullCData(oldp+89,(0xdaU),8);
    bufp->fullCData(oldp+90,(0xf2U),8);
    bufp->fullCData(oldp+91,(0x66U),8);
    bufp->fullCData(oldp+92,(0xb6U),8);
    bufp->fullCData(oldp+93,(0xbeU),8);
    bufp->fullCData(oldp+94,(0xe0U),8);
    bufp->fullCData(oldp+95,(0xffU),8);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_0_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_0_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+12,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+13,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+14,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__key_list[1]),3);
    bufp->fullBit(oldp+15,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+16,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__data_list[1]));
    bufp->fullCData(oldp+17,(vlSelf->alu_top__DOT__i_a_2),4);
    bufp->fullCData(oldp+18,(vlSelf->alu_top__DOT__i_b_2),4);
    bufp->fullCData(oldp+19,(vlSelf->alu_top__DOT__sub_i_b_2),4);
    bufp->fullCData(oldp+20,(vlSelf->alu_top__DOT__led_0),4);
    bufp->fullCData(oldp+21,(vlSelf->alu_top__DOT__led_1),4);
    bufp->fullCData(oldp+22,(vlSelf->alu_top__DOT__led_3),4);
    bufp->fullCData(oldp+23,(vlSelf->alu_top__DOT__led_4),4);
    bufp->fullCData(oldp+24,(vlSelf->alu_top__DOT__led_5),4);
    bufp->fullCData(oldp+25,(vlSelf->alu_top__DOT__led_6),4);
    bufp->fullCData(oldp+26,(vlSelf->alu_top__DOT__o_led_0),4);
    bufp->fullBit(oldp+27,(vlSelf->alu_top__DOT__carry_0));
    bufp->fullBit(oldp+28,(vlSelf->alu_top__DOT__carry_1));
    bufp->fullBit(oldp+29,(vlSelf->alu_top__DOT__max_0));
    bufp->fullCData(oldp+30,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+31,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+32,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+33,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+34,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+35,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+36,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+37,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+38,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+39,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+40,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+41,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+42,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+43,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+44,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+45,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+46,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+47,(vlSelf->alu_top__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+48,((2U | (((IData)(vlSelf->alu_top__DOT__carry_0) 
                                     << 4U) | (IData)(vlSelf->alu_top__DOT__carry_1)))),8);
    bufp->fullCData(oldp+49,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+50,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullBit(oldp+51,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+52,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+53,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+54,(vlSelf->alu_top__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+55,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+56,(vlSelf->alu_top__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+57,(vlSelf->alu_top__DOT__u0_adder__DOT__led),4);
    bufp->fullCData(oldp+58,(vlSelf->alu_top__DOT____Vcellinp__u0_seg__i_seg),3);
    bufp->fullCData(oldp+59,(vlSelf->alu_top__DOT__u1_adder__DOT__led),4);
    bufp->fullCData(oldp+60,(vlSelf->i_a),4);
    bufp->fullCData(oldp+61,(vlSelf->i_b),4);
    bufp->fullCData(oldp+62,(vlSelf->i_op),3);
    bufp->fullCData(oldp+63,(vlSelf->o_led),4);
    bufp->fullBit(oldp+64,(vlSelf->o_carry));
    bufp->fullCData(oldp+65,(vlSelf->o_seg),8);
    bufp->fullBit(oldp+66,(vlSelf->o_overflow));
    bufp->fullBit(oldp+67,(vlSelf->o_max));
    bufp->fullBit(oldp+68,(vlSelf->o_equ));
    bufp->fullCData(oldp+69,(((8U & ((~ ((IData)(vlSelf->i_b) 
                                         >> 3U)) << 3U)) 
                              | (7U & (IData)(vlSelf->i_b)))),4);
    bufp->fullCData(oldp+70,((0xfU & (~ (IData)(vlSelf->i_a)))),4);
    bufp->fullBit(oldp+71,(((IData)(vlSelf->i_a) == (IData)(vlSelf->i_b))));
    bufp->fullQData(oldp+72,((0x410300000000ULL | (
                                                   ((QData)((IData)(vlSelf->alu_top__DOT__led_0)) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(vlSelf->alu_top__DOT__led_1)) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (0xfU 
                                                                           & (~ (IData)(vlSelf->i_a))))) 
                                                          << 0x23U) 
                                                         | (QData)((IData)(
                                                                           (0x8143070U 
                                                                            | (((IData)(vlSelf->alu_top__DOT__led_3) 
                                                                                << 0x1cU) 
                                                                               | (((IData)(vlSelf->alu_top__DOT__led_4) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->alu_top__DOT__led_5) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->alu_top__DOT__led_6) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->i_a))))))))))))),56);
    bufp->fullBit(oldp+74,(((~ (IData)(vlSelf->o_overflow)) 
                            & ((IData)(vlSelf->alu_top__DOT__o_led_0) 
                               >> 3U))));
}
