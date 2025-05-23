// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller_tb.h for the primary calling header

#include "Vcontroller_tb__pch.h"
#include "Vcontroller_tb__Syms.h"
#include "Vcontroller_tb___024root.h"

void Vcontroller_tb___024root___ctor_var_reset(Vcontroller_tb___024root* vlSelf);

Vcontroller_tb___024root::Vcontroller_tb___024root(Vcontroller_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcontroller_tb___024root___ctor_var_reset(this);
}

void Vcontroller_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcontroller_tb___024root::~Vcontroller_tb___024root() {
}
