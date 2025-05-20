# ✅ TODO – Aqua CPU Dual-Issue Design + TileLink Integration

## 📌 Goal
Redesign a dual-issue RISC-V CPU based on Aqua v0.2 architecture (RV32I) and integrate a TileLink slave interface to support memory-mapped communication in a team-designed CPU.

---

## ⏱️ Timeline (35 days remaining)

### Week 1: [🧠 System Setup & Frontend]
- [ ] Implement G-share Branch Predictor (with 2-bit saturating counter)
- [ ] Implement PC & 3-entry Fetch Buffer
- [ ] Implement dual instruction fetch logic
- [ ] Build dual decoders and instruction parsing logic
- [ ] Test fetch → decode path with basic NOP/ADD/BEQ instructions

### Week 2: [🎯 Decode Queue & Scheduling]
- [ ] Implement 32-entry Decode Queue (with status flags: ready, valid, stalled)
- [ ] Design issue logic: issue max 2 instructions per cycle
- [ ] Create Register Status Table to track register readiness (RAW dependency)
- [ ] Add instruction dependency checking
- [ ] Write scheduler: dispatch to available functional units (ALU, BRU, AGU)

### Week 3: [⚙️ Functional Units & Writeback]
- [ ] Build ALU (ADD, SUB, AND, OR, SLT, etc.)
- [ ] Build BRU (branch comparator, PC redirection support)
- [ ] Build AGU & LSU for load/store instructions
- [ ] Design common forwarding network
- [ ] Write result arbitration + register writeback logic
- [ ] Support dual-write in RegFile
- [ ] Run dual-issue simulation: ADD + BEQ, ADD + STORE, etc.

### Week 4: [🔌 TileLink Interface & Testing]
- [ ] Study TileLink UL protocol (TL-A, TL-D channel)
- [ ] Define TileLink struct/interface in `02_include/`
- [ ] Implement TileLink slave interface module with register map
- [ ] Integrate TileLink into existing group CPU for test
- [ ] Write testbench: send TileLink requests, observe CPU responses

### Week 5: [📋 Verification & Reporting]
- [ ] Write assertions to check dual-issue validity
- [ ] Run instruction trace log: show issued/executed/written back order
- [ ] Test pipeline flush/recovery on branch misprediction
- [ ] Evaluate CPI with dual vs single issue
- [ ] Finalize documentation, performance charts, and block diagrams

---

## 📂 Task Breakdown (by Module)

### ✅ Frontend
- [ ] `pc.sv`: program counter logic
- [ ] `branch_predictor.sv`: g-share predictor
- [ ] `fetch_buffer.sv`: holds up to 3 instructions
- [ ] `dual_fetch.sv`: fetch 2 instructions per cycle
- [ ] `decoder.sv`: instruction parser

### ✅ Mid-stage
- [ ] `decode_queue.sv`: queue with metadata for scheduling
- [ ] `scheduler.sv`: selects 2 ready instructions per cycle
- [ ] `register_status_table.sv`: RAW/WAR dependency tracking

### ✅ Execution
- [ ] `alu.sv`, `bru.sv`, `agu.sv`: arithmetic, branch, address units
- [ ] `lsu.sv`: load/store + memory interface
- [ ] `writeback_mux.sv`: select results to write back

### ✅ TileLink
- [ ] `tilelink_if.sv`: implements TL-UL slave (A/D channel)
- [ ] `tilelink_regs.sv`: memory-mapped config/status registers

---

## ⚙️ Simulation Tools

| Tool       | Use                                   |
|------------|----------------------------------------|
| Verilator  | Fast logic simulation, debug           |
| VCS        | Functional coverage, waveform          |
| Xcelium    | Optional UVM support                   |
| GTKWave    | View VCD waveform                      |

---

## 📎 Notes
- Prioritize dual-issue pipeline correctness over performance
- Keep TileLink integration simple (e.g. basic read/write register set)
- Run small programs to stress check dual-path scheduling

---

> ✨ Stay disciplined: validate early, commit frequently, document clearly!
