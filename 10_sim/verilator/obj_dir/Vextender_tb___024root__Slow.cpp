// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextender_tb.h for the primary calling header

#include "Vextender_tb__pch.h"
#include "Vextender_tb__Syms.h"
#include "Vextender_tb___024root.h"

void Vextender_tb___024root___ctor_var_reset(Vextender_tb___024root* vlSelf);

Vextender_tb___024root::Vextender_tb___024root(Vextender_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vextender_tb___024root___ctor_var_reset(this);
}

void Vextender_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vextender_tb___024root::~Vextender_tb___024root() {
}
