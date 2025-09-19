// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"i_Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"top_ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"top_WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"top_ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"top_top_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"expected_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"expected_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"top_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"top_Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"top_ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"top_WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"top_ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"top_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("im", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"top_Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"top_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"top_ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"top_MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"top_ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"top_WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"ALUControl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"ResultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"ImmSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"LSType",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+85,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+86,0,"funct7b5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"funct12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+458,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"PCSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"Flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+85,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+86,0,"funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"funct12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+444,0,"Flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"ImmSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"LSType",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+443,0,"PCSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"Jumplr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ad", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"opb5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+86,0,"funct7b5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"RtypeSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+87,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"Jumplr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"Flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+443,0,"PCSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+288,0,"cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"Ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("eu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"funct12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"LSType",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("md", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+78,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"Jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"Jumplr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"ResultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"ImmSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"LSType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+85,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+86,0,"funct7b5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"funct12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+443,0,"PCSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"Flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+446,0,"pc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"PCPlus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"ImmExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"SrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"Read2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"PCTarget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"ScrA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"SrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"ReadData_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"PCplus4cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"PCplusbranchcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"rslt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+97,0,"isAddSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"Ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+448,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+295+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+448,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+46,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+48,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+54,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+59,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+62,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+74,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"d4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"d5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"d6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"d7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"d8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"d9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"d10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"d11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"d12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"d13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"d14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"d15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("or1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sll1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+413,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+426,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sra1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+415,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srl1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+414,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("xor1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Freg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+446,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCplus4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+105,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+111,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+114,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+132,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+136,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+139,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+151,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+154,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+160,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+179,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PCplusbranch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+105,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+111,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+114,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+132,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+136,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+139,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+151,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+154,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+160,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+179,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+82,0,"immsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"immext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mrwu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+437,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"WriteData_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"LSType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+438,0,"ReadData_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"i_rd_addr_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"i_rd_addr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"i_wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+78,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+447,0,"i_wr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"o_rd_dat_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"o_rd_dat_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("REGFILE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+78,0,"we3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+447,0,"wd3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rsltmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+447,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+450,(vlSelf->top_tb__DOT__pc),32);
    bufp->fullIData(oldp+451,(vlSelf->top_tb__DOT__i_Instr),32);
    bufp->fullIData(oldp+452,(vlSelf->top_tb__DOT__top_ReadData),32);
    bufp->fullIData(oldp+453,(vlSelf->top_tb__DOT__top_WriteData),32);
    bufp->fullIData(oldp+454,(vlSelf->top_tb__DOT__top_ALUResult),32);
    bufp->fullBit(oldp+455,(vlSelf->top_tb__DOT__top_top_MemWrite));
    bufp->fullIData(oldp+456,(vlSelf->top_tb__DOT__expected_data),32);
    bufp->fullIData(oldp+457,(vlSelf->top_tb__DOT__expected_addr),32);
    bufp->fullBit(oldp+458,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ResultSrcEb0));
    bufp->fullIData(oldp+459,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ScrA),32);
    bufp->fullIData(oldp+460,(0x20U),32);
    bufp->fullBit(oldp+461,(1U));
    bufp->fullBit(oldp+462,(0U));
    bufp->fullIData(oldp+463,(0U),32);
    bufp->fullIData(oldp+464,(4U),32);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((0x73U == (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op)) 
                           & (0U == (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                     [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                >> 2U))] 
                                     >> 0x14U)))));
    bufp->fullBit(oldp+2,(((0x73U == (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op)) 
                           & (1U == (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                     [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                >> 2U))] 
                                     >> 0x14U)))));
    bufp->fullIData(oldp+3,(vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                            [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                       >> 2U))]),32);
    bufp->fullSData(oldp+4,((vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                             [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                        >> 2U))] >> 0x14U)),12);
    bufp->fullBit(oldp+5,((1U & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                 [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                            >> 2U))] 
                                 >> 5U))));
    bufp->fullBit(oldp+6,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5) 
                           & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                              [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                         >> 2U))] >> 5U))));
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                      [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                 >> 2U))] 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                      [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                 >> 2U))] 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__im__DOT__IMEM
                                      [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                 >> 2U))] 
                                      >> 7U))),5);
    bufp->fullIData(oldp+10,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[3]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[4]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[5]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[6]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[7]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[8]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[9]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[10]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[11]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[12]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[13]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[14]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[15]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[16]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[17]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[18]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[19]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[20]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[21]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[22]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[23]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[24]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[25]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[26]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[27]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[28]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[29]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[30]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__REGFILE[31]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1),32);
    bufp->fullIData(oldp+43,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd2),32);
    bufp->fullBit(oldp+44,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1)));
    bufp->fullBit(oldp+45,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 9U))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0xaU))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0xbU))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0xcU))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0xdU))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0xeU))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0xfU))));
    bufp->fullBit(oldp+52,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x10U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x11U))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x12U))));
    bufp->fullBit(oldp+55,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 1U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x13U))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x14U))));
    bufp->fullBit(oldp+58,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x15U))));
    bufp->fullBit(oldp+59,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x16U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x17U))));
    bufp->fullBit(oldp+61,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x18U))));
    bufp->fullBit(oldp+62,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x19U))));
    bufp->fullBit(oldp+63,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+64,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+65,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+66,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 2U))));
    bufp->fullBit(oldp+67,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+68,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+69,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                            >> 0x1fU)));
    bufp->fullBit(oldp+70,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 3U))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 4U))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 5U))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 6U))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 7U))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                  >> 8U))));
    bufp->fullIData(oldp+76,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc),32);
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+80,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl),4);
    bufp->fullCData(oldp+81,((3U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+82,((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullCData(oldp+83,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__LSType),5);
    bufp->fullCData(oldp+84,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__op),7);
    bufp->fullCData(oldp+85,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct3),3);
    bufp->fullBit(oldp+86,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__funct7b5));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U))));
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 1U))));
    bufp->fullBit(oldp+89,((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))));
    bufp->fullCData(oldp+90,((3U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 2U))),2);
    bufp->fullSData(oldp+91,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls),13);
    bufp->fullIData(oldp+92,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4),32);
    bufp->fullIData(oldp+93,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt),32);
    bufp->fullIData(oldp+94,(((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                               << 0x1fU) | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                              ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                             << 0x1eU) 
                                            | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                 ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                                << 0x1dU) 
                                               | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                    ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                                   << 0x1cU) 
                                                  | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                       ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                                      << 0x1bU) 
                                                     | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                          ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                                         << 0x1aU) 
                                                        | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                                            << 0x19U) 
                                                           | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                               << 0x18U) 
                                                              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                                                  << 0x17U) 
                                                                 | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                      ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                                                     << 0x16U) 
                                                                    | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                                                        << 0x15U) 
                                                                       | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                                           << 0x14U) 
                                                                          | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                               ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                                                              << 0x13U) 
                                                                             | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                                                ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)))))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+95,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                            & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                               >> 0x1fU))));
    bufp->fullBit(oldp+96,((1U & (((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt) 
                                   >> 0x1fU) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
    bufp->fullBit(oldp+97,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub));
    bufp->fullBit(oldp+98,((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl))));
    bufp->fullIData(oldp+99,(((0x80000000U & (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                               << 0x1fU) 
                                              & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)) 
                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                  << 0x1eU) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                                                                << 3U) 
                                                                                | (4U 
                                                                                & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+100,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 9U))));
    bufp->fullBit(oldp+102,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+103,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 9U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
    bufp->fullBit(oldp+104,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+105,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0xaU))));
    bufp->fullBit(oldp+106,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0xaU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
    bufp->fullBit(oldp+107,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+108,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0xbU))));
    bufp->fullBit(oldp+109,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0xbU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
    bufp->fullBit(oldp+110,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0xcU))));
    bufp->fullBit(oldp+112,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0xcU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
    bufp->fullBit(oldp+113,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+114,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0xdU))));
    bufp->fullBit(oldp+115,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0xdU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
    bufp->fullBit(oldp+116,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0xeU))));
    bufp->fullBit(oldp+118,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0xeU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
    bufp->fullBit(oldp+119,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+120,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0xfU))));
    bufp->fullBit(oldp+121,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0xfU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
    bufp->fullBit(oldp+122,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+123,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x10U))));
    bufp->fullBit(oldp+124,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x10U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
    bufp->fullBit(oldp+125,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+126,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x11U))));
    bufp->fullBit(oldp+127,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x11U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
    bufp->fullBit(oldp+128,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+129,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x12U))));
    bufp->fullBit(oldp+130,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x12U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
    bufp->fullBit(oldp+131,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+132,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 1U))));
    bufp->fullBit(oldp+133,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x13U))));
    bufp->fullBit(oldp+134,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x13U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
    bufp->fullBit(oldp+135,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+136,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x14U))));
    bufp->fullBit(oldp+137,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x14U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
    bufp->fullBit(oldp+138,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+139,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x15U))));
    bufp->fullBit(oldp+140,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x15U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
    bufp->fullBit(oldp+141,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+142,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x16U))));
    bufp->fullBit(oldp+143,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x16U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
    bufp->fullBit(oldp+144,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+145,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x17U))));
    bufp->fullBit(oldp+146,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x17U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
    bufp->fullBit(oldp+147,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+148,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x18U))));
    bufp->fullBit(oldp+149,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x18U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
    bufp->fullBit(oldp+150,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+151,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x19U))));
    bufp->fullBit(oldp+152,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x19U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
    bufp->fullBit(oldp+153,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+154,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+155,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x1aU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
    bufp->fullBit(oldp+156,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+157,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+158,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x1bU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
    bufp->fullBit(oldp+159,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+160,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+161,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x1cU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
    bufp->fullBit(oldp+162,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+163,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 2U))));
    bufp->fullBit(oldp+164,((1U & (~ (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                      >> 2U)))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+166,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x1dU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
    bufp->fullBit(oldp+167,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+168,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+169,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 0x1eU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
    bufp->fullBit(oldp+170,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+171,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                             >> 0x1fU)));
    bufp->fullBit(oldp+172,(((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                              >> 0x1fU) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+173,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 3U))));
    bufp->fullBit(oldp+174,((1U & VL_REDXOR_4((0xcU 
                                               & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc)))));
    bufp->fullBit(oldp+175,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 4U))));
    bufp->fullBit(oldp+177,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 4U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
    bufp->fullBit(oldp+178,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+179,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 5U))));
    bufp->fullBit(oldp+180,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 5U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
    bufp->fullBit(oldp+181,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+182,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 6U))));
    bufp->fullBit(oldp+183,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 6U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
    bufp->fullBit(oldp+184,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+185,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 7U))));
    bufp->fullBit(oldp+186,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 7U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
    bufp->fullBit(oldp+187,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+188,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   >> 8U))));
    bufp->fullBit(oldp+189,((1U & ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                    >> 8U) ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
    bufp->fullIData(oldp+190,(((0x80000000U & ((0x80000000U 
                                                & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                   & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)) 
                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                                  << 0x1fU))) 
                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                   << 0x1eU) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout))))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+191,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)));
    bufp->fullBit(oldp+192,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                   ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt))));
    bufp->fullBit(oldp+193,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout));
    bufp->fullBit(oldp+194,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 9U))));
    bufp->fullBit(oldp+195,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+196,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+197,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+198,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0xaU))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+200,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0xbU))));
    bufp->fullBit(oldp+202,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+203,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+204,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0xcU))));
    bufp->fullBit(oldp+205,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+206,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+207,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0xdU))));
    bufp->fullBit(oldp+208,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+209,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+210,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0xeU))));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+212,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+213,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0xfU))));
    bufp->fullBit(oldp+214,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+215,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+216,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x10U))));
    bufp->fullBit(oldp+217,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+218,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+219,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x11U))));
    bufp->fullBit(oldp+220,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+221,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+222,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x12U))));
    bufp->fullBit(oldp+223,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+224,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+225,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 1U))));
    bufp->fullBit(oldp+226,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout))));
    bufp->fullBit(oldp+227,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+228,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x13U))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+230,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+231,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x14U))));
    bufp->fullBit(oldp+232,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+233,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+234,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x15U))));
    bufp->fullBit(oldp+235,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+236,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x16U))));
    bufp->fullBit(oldp+238,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+239,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+240,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x17U))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+242,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+243,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x18U))));
    bufp->fullBit(oldp+244,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+245,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+246,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x19U))));
    bufp->fullBit(oldp+247,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+248,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+249,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+251,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+252,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+254,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+255,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+257,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 2U))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+260,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+261,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+263,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+264,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+266,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+267,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                             >> 0x1fU)));
    bufp->fullBit(oldp+268,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+269,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 3U))));
    bufp->fullBit(oldp+270,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+271,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+272,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 4U))));
    bufp->fullBit(oldp+273,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+274,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+275,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 5U))));
    bufp->fullBit(oldp+276,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+277,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+278,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 6U))));
    bufp->fullBit(oldp+279,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+280,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+281,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 7U))));
    bufp->fullBit(oldp+282,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+283,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+284,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt 
                                   >> 8U))));
    bufp->fullBit(oldp+285,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+286,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT____Vcellinp__ext__instr),25);
    bufp->fullIData(oldp+287,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult),32);
    bufp->fullBit(oldp+288,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__cond));
    bufp->fullBit(oldp+289,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry));
    bufp->fullBit(oldp+290,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg));
    bufp->fullBit(oldp+291,((0xffffffffU == (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult))));
    bufp->fullIData(oldp+292,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB),32);
    bufp->fullIData(oldp+293,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b),32);
    bufp->fullIData(oldp+294,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sum),32);
    bufp->fullIData(oldp+295,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[0]),32);
    bufp->fullIData(oldp+296,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[1]),32);
    bufp->fullIData(oldp+297,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[2]),32);
    bufp->fullIData(oldp+298,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[3]),32);
    bufp->fullIData(oldp+299,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[4]),32);
    bufp->fullIData(oldp+300,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[5]),32);
    bufp->fullIData(oldp+301,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[6]),32);
    bufp->fullIData(oldp+302,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[7]),32);
    bufp->fullIData(oldp+303,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[8]),32);
    bufp->fullIData(oldp+304,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[9]),32);
    bufp->fullIData(oldp+305,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[10]),32);
    bufp->fullIData(oldp+306,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[11]),32);
    bufp->fullIData(oldp+307,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[12]),32);
    bufp->fullIData(oldp+308,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[13]),32);
    bufp->fullIData(oldp+309,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[14]),32);
    bufp->fullIData(oldp+310,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry[15]),32);
    bufp->fullIData(oldp+311,((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                << 0x1fU) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout))))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+312,((1U & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b)));
    bufp->fullBit(oldp+313,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout));
    bufp->fullBit(oldp+314,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 9U))));
    bufp->fullBit(oldp+315,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+316,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+317,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+318,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+319,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+320,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+321,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+322,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+323,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+324,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+325,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+326,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+327,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+328,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+329,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+330,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+331,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+332,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+333,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+334,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+335,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+336,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+337,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+338,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+339,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+340,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+341,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+342,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+343,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+344,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+345,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 1U))));
    bufp->fullBit(oldp+346,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a1__cout))));
    bufp->fullBit(oldp+347,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+348,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+349,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+350,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+351,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+352,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+353,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+354,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+355,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+356,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+357,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+358,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+359,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+360,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+361,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+362,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+363,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+364,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+365,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+366,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+367,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+368,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+369,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+370,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+371,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+372,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+373,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+374,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+375,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+376,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+377,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+378,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 2U))));
    bufp->fullBit(oldp+379,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+380,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+381,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+382,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+383,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+384,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+385,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+386,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+387,((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+388,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout));
    bufp->fullBit(oldp+389,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 3U))));
    bufp->fullBit(oldp+390,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+391,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+392,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 4U))));
    bufp->fullBit(oldp+393,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+394,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+395,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 5U))));
    bufp->fullBit(oldp+396,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+397,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+398,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 6U))));
    bufp->fullBit(oldp+399,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+400,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+401,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 7U))));
    bufp->fullBit(oldp+402,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+403,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 8U))));
    bufp->fullBit(oldp+405,(((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+406,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y),32);
    bufp->fullIData(oldp+407,((~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)),32);
    bufp->fullIData(oldp+408,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0U]),32);
    bufp->fullIData(oldp+409,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [1U]),32);
    bufp->fullIData(oldp+410,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y),32);
    bufp->fullIData(oldp+411,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y),32);
    bufp->fullIData(oldp+412,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [5U]),32);
    bufp->fullIData(oldp+413,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5),32);
    bufp->fullIData(oldp+414,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5),32);
    bufp->fullIData(oldp+415,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5),32);
    bufp->fullIData(oldp+416,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [9U]),32);
    bufp->fullIData(oldp+417,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xaU]),32);
    bufp->fullIData(oldp+418,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xbU]),32);
    bufp->fullIData(oldp+419,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xcU]),32);
    bufp->fullIData(oldp+420,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xdU]),32);
    bufp->fullIData(oldp+421,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xeU]),32);
    bufp->fullIData(oldp+422,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__entry
                              [0xfU]),32);
    bufp->fullCData(oldp+423,((0x1fU & vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB)),5);
    bufp->fullIData(oldp+424,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1),32);
    bufp->fullIData(oldp+425,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2),32);
    bufp->fullIData(oldp+426,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3),32);
    bufp->fullIData(oldp+427,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4),32);
    bufp->fullIData(oldp+428,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1),32);
    bufp->fullIData(oldp+429,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2),32);
    bufp->fullIData(oldp+430,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3),32);
    bufp->fullIData(oldp+431,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4),32);
    bufp->fullIData(oldp+432,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1),32);
    bufp->fullIData(oldp+433,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2),32);
    bufp->fullIData(oldp+434,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3),32);
    bufp->fullIData(oldp+435,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4),32);
    bufp->fullIData(oldp+436,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__WriteData),32);
    bufp->fullIData(oldp+437,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ReadData),32);
    bufp->fullIData(oldp+438,(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result),32);
    bufp->fullBit(oldp+439,(vlSelf->top_tb__DOT__clk));
    bufp->fullBit(oldp+440,(vlSelf->top_tb__DOT__rst));
    bufp->fullIData(oldp+441,(vlSelf->top_tb__DOT__cycle_count),32);
    bufp->fullIData(oldp+442,(vlSelf->top_tb__DOT__dut__DOT__dm__DOT__RAM
                              [(0x3fU & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult 
                                         >> 2U))]),32);
    bufp->fullCData(oldp+443,(((2U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls) 
                                      << 1U)) | (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0))),2);
    bufp->fullCData(oldp+444,(((((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                                     ^ ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                         ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB) 
                                        >> 0x1fU))) 
                                 << 3U) & (((8U & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                                   >> 0x1cU)) 
                                            ^ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                               << 3U)) 
                                           & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub) 
                                              << 3U))) 
                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__bru__DOT__Carry) 
                                   << 2U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg) 
                                              << 1U) 
                                             | (0xffffffffU 
                                                == 
                                                (~ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult)))))),4);
    bufp->fullBit(oldp+445,(((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl) 
                                 ^ ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                     ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__SrcB) 
                                    >> 0x1fU))) & (
                                                   ((vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__rf__DOT__rd1 
                                                     >> 0x1fU) 
                                                    ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__Neg)) 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__isAddSub)))));
    bufp->fullIData(oldp+446,(((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                    ? 0U : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult)
                                : ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCmux__DOT____VdfgRegularize_hae03c8cc_0_0)
                                    ? ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout)) 
                                        << 0x1fU) | 
                                       ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                          ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout)) 
                                         << 0x1eU) 
                                        | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                             ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout)) 
                                            << 0x1dU) 
                                           | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout)) 
                                               << 0x1cU) 
                                              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout)) 
                                                  << 0x1bU) 
                                                 | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                      ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout)) 
                                                     << 0x1aU) 
                                                    | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                         ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout)) 
                                                        << 0x19U) 
                                                       | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                            ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout)) 
                                                           << 0x18U) 
                                                          | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                               ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout)) 
                                                              << 0x17U) 
                                                             | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                  ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout)) 
                                                                 << 0x16U) 
                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                     ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout)) 
                                                                    << 0x15U) 
                                                                   | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                        ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout)) 
                                                                       << 0x14U) 
                                                                      | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                           ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout)) 
                                                                          << 0x13U) 
                                                                         | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                              ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout)) 
                                                                             << 0x12U) 
                                                                            | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout)) 
                                                                                << 0x11U) 
                                                                               | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                                                                ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a1__cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top_tb__DOT__dut__DOT__proc__DOT__pc 
                                                                                ^ vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ImmExt)))))))))))))))))))))))))))))))))
                                    : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4))),32);
    bufp->fullIData(oldp+447,(((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                ? ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                    ? 0U : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__PCPlus4)
                                : ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ctrl__DOT__md__DOT__controls))
                                    ? vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ReadData_result
                                    : vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUResult))),32);
    bufp->fullBit(oldp+448,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))));
    bufp->fullBit(oldp+449,((1U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                   ^ (IData)(vlSelf->top_tb__DOT__dut__DOT__proc__DOT__ALUControl)))));
}
