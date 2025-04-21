# CapstoneProject1 – RISC-V RV32IM CPU with TileLink-I2C Bridge

## 📌 Project Overview

This project is the **first phase** of a 3-stage capstone design, focusing on the implementation of a **5-stage pipelined RISC-V CPU (RV32IM)** with basic peripheral communication through a **TileLink to I2C bridge**.

It is designed for simulation using **Verilator, VCS, and Xcelium**, and serves as the foundation for later phases including **Superscalar extension** and **high-speed USB interface integration**.

---

## 🧠 Objectives

- ✅ Implement a 5-stage pipeline CPU supporting the **RV32IM ISA**.
- ✅ Integrate a minimal **TileLink-UL interface** for memory and peripheral communication.
- ✅ Develop a functional **TileLink-to-I2C bridge** for basic external interfacing.
- ✅ Provide a testbench for verifying core CPU operations and I2C communication.
- ✅ Support simulation using **Verilator** and **industry-standard tools (VCS/Xcelium)**.

---

## 🧱 Architecture Summary

- **ISA**: RV32IM  
  (Includes integer operations and M-extension for multiplication/division)
- **Pipeline**: 5 stages – IF, ID, EX, MEM, WB
- **Bus Interface**: TileLink-UL (Uncached Lightweight)
- **Peripheral**: I2C (controlled via TileLink slave bridge)

---

## 📂 Directory Structure

```bash
CapstoneProject1/
├── 00_src/            # RTL source files (CPU core, ALU, Control, TileLink adapter)
├── 01_bench/          # Testbench files (SystemVerilog)
├── 02_include/        # Common macros, typedefs, TileLink protocol definitions
├── 10_sim/
│   ├── verilator/     # Verilator-specific build and run scripts
│   ├── vcs/           # VCS simulation environment
│   └── xcelium/       # Xcelium simulation environment
├── 90_docs/           # Design documentation and architecture diagrams
├── 91_scripts/        # Utility scripts and build automation
├── README.md          # Project description
├── TODO.md            # Work items and planning
└── .gitignore
