// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_tb__DOT__clk;
        CData/*0:0*/ top_tb__DOT__rst;
        CData/*0:0*/ top_tb__DOT__top_top_MemWrite;
        CData/*3:0*/ top_tb__DOT__dut__DOT__proc__DOT__ALUControl;
        CData/*4:0*/ top_tb__DOT__dut__DOT__proc__DOT__LSType;
        CData/*6:0*/ top_tb__DOT__dut__DOT__proc__DOT__op;
        CData/*2:0*/ top_tb__DOT__dut__DOT__proc__DOT__funct3;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__funct7b5;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__ResultSrcEb0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__sum;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout;
    };
    struct {
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout;
    };
    struct {
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ __Vdlyvset__top_tb__DOT__clk__v0;
        CData/*0:0*/ __Vdlyvset__top_tb__DOT__clk__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df35725__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df36935__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8defbd8d__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df14fac__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df4b0c7__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8df49580__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8def22da__0;
        SData/*12:0*/ top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls;
        IData/*31:0*/ top_tb__DOT__pc;
        IData/*31:0*/ top_tb__DOT__i_Instr;
        IData/*31:0*/ top_tb__DOT__top_ReadData;
        IData/*31:0*/ top_tb__DOT__top_WriteData;
        IData/*31:0*/ top_tb__DOT__top_ALUResult;
        IData/*31:0*/ top_tb__DOT__expected_data;
        IData/*31:0*/ top_tb__DOT__expected_addr;
        IData/*31:0*/ top_tb__DOT__cycle_count;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__pc;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__ReadData;
    };
    struct {
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__ALUResult;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__WriteData;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ScrA;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result;
        IData/*24:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ext__DOT____Vxrand_h8df4a42a__0;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1;
        IData/*31:0*/ top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2;
        IData/*31:0*/ __Vdly__top_tb__DOT__cycle_count;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16> top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry;
        VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE;
        VlUnpacked<IData/*31:0*/, 64> top_tb__DOT__dut__DOT__dm__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 256> top_tb__DOT__dut__DOT__im__DOT__IMEM;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
