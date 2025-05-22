// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*2:0*/ testbench__DOT__dut__DOT__proc__DOT__ALUControlD;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__PCSrcE;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__StallF;
        CData/*1:0*/ testbench__DOT__dut__DOT__proc__DOT__ForwardAE;
        CData/*1:0*/ testbench__DOT__dut__DOT__proc__DOT__ForwardBE;
        CData/*2:0*/ testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__ad__DOT____Vxrand_h87975763__0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout;
    };
    struct {
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a1__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a2__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a3__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a4__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a5__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a6__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a7__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a8__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a9__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a10__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a11__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a12__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a13__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a14__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a15__b;
    };
    struct {
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a16__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a17__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a18__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a19__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a20__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a21__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a22__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a23__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a24__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a25__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a26__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a27__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a28__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a29__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a30__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a31__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellinp__a32__b;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__sum;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0;
    };
    struct {
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*0:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0;
        CData/*5:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dm__DOT__RAM__v0;
        CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__dm__DOT__RAM__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793d66c__0;
        SData/*10:0*/ testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT____Vxrand_h8793946e__0;
        SData/*10:0*/ testbench__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__pcF;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4F;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read1D;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__Read2D;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__SrcBE;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALUResultE;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__WriteDataE;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ResultW;
        VlWide<3>/*95:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Dreg__q;
        VlWide<6>/*184:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Ereg__q;
        VlWide<4>/*104:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q;
        VlWide<4>/*103:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Wreg__q;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_a;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x01;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x02;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x03;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x04;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x05;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x06;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x07;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x08;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x09;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x10;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x11;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x12;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x13;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x14;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x15;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x16;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x17;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x18;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x19;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x20;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x21;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x22;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x23;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x24;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x25;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x26;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x27;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x28;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x29;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x30;
        IData/*31:0*/ testbench__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__x31;
        VlWide<4>/*104:0*/ __Vdly__testbench__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellout__Mreg__q;
        IData/*31:0*/ __VdlyVal__testbench__DOT__dut__DOT__dm__DOT__RAM__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 9> testbench__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry;
        VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__dm__DOT__RAM;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__im__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
