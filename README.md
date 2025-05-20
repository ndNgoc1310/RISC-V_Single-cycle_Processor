# CapstoneProject1 – Dual-Issue RV32I CPU (Aqua Architecture) & TileLink Integration

## 📌 Project Overview

This project is a personal exploration and extension beyond the completed group CPU design. It consists of two parallel tracks:

1. **Redesign a RISC-V RV32I CPU with Dual-Issue support**, based on the Aqua v0.2 architecture, with out-of-order execution using a centralized scheduler and multiple functional units.
2. **Study and implement TileLink (TL-UL and TL-UH)** protocol, and integrate a TileLink slave interface into the previously completed team CPU, enabling peripheral or memory-mapped device communication.

---

## 🧱 Architecture Summary (Track 1 – CPU Aqua v0.2 Inspired)

- **ISA**: RV32I  
  (Minimal RISC-V instruction set: arithmetic, logic, load/store, branches, jumps)
- **Execution**: Dual-Issue, pipelined, with out-of-order issue and execution

### 🧠 Key Architectural Units:
- **Frontend**
  - G-share Branch Predictor
  - 3-entry Fetch Buffer
  - Dual Instruction Decoders
- **Mid-stage**
  - 32-entry Decode Queue
  - Central Scheduler
  - Instruction Arbitrator
- **Backend**
  - ALU (Arithmetic/Logic Unit)
  - BRU (Branch Unit)
  - AGU (Address Generation Unit)
  - LSU (Load/Store Unit)
- **Others**
  - Register File with multiple write ports
  - Forwarding Unit to minimize stalls

---

## 🔌 TileLink Study & Integration (Track 2)

- **Objective**: Design a minimal TileLink slave interface to interact with external components (e.g., memory, peripherals)
- **Protocol**: TileLink UL (Uncached Lightweight) and UH (Uncached Heavyweight)
- **Integration**: Connect TileLink slave interface to group-designed CPU's bus system, enabling memory-mapped control

---

## 📂 Directory Structure

```bash
CapstoneProject1/
├── 00_src/              # Aqua dual-issue CPU RTL (SystemVerilog)
├── 01_bench/            # Testbenches for simulation
├── 02_include/          # Shared definitions: ISA opcodes, TL signals, structs
├── 03_tilelink/         # TileLink modules (slave interface, bus fabric)
├── 10_sim/
│   ├── verilator/       # Verilator scripts and C++ test integration
│   ├── vcs/             # VCS simulation setup
│   └── xcelium/         # Xcelium simulation setup
├── 90_docs/             # Design notes, block diagrams, protocol docs
├── 91_scripts/          # Automation scripts (build/run/report)
├── README.md            # Project description (this file)
├── TODO.md              # Task breakdown & timeline
└── .gitignore
