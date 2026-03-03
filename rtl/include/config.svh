// =============================================================================
// config.svh — Central configuration for Pipelined MIPS CPU
// Include at the top of every module: `include "config.svh"
// =============================================================================

`ifndef CONFIG_SVH
`define CONFIG_SVH

// -----------------------------------------------------------------------------
// Cache Parameters
// -----------------------------------------------------------------------------
`define ICACHE_SIZE      256        // Total icache size in bytes
`define ICACHE_WAYS      2          // Set-associativity (number of ways)
`define ICACHE_LATENCY   20       // Miss penalty in cycles
`define ICACHE_BLOCK_SIZE  16

`define DCACHE_SIZE      256        // Total dcache size in bytes
`define DCACHE_WAYS      2          // Set-associativity
`define DCACHE_LATENCY   20         // Miss penalty in cycles
`define DCACHE_BLOCK_SIZE  16
// Unified memory backing store latency (should equal cache latencies above)
`define MEM_LATENCY      `ICACHE_LATENCY
`define MEM_DEPTH        10       // 2^10 words in  MEM array


// -----------------------------------------------------------------------------
// Pipeline Parameters
// -----------------------------------------------------------------------------
`define DATA_WIDTH       32         // CPU data/address width in bits
`define ADDR_WIDTH       32         // Address width in bits (for memory interface)
`define REG_COUNT        32         // Number of architectural registers
`define RESET_CYCLES     2          // Cycles CPU is held in reset

// Branch resolution stage (ID=2, EX=3, MEM=4 — affects flush penalty)
`define BRANCH_STAGE     3          // Currently resolved in ID stage

// -----------------------------------------------------------------------------
// Simulation Parameters
// -----------------------------------------------------------------------------
`define CLK_PERIOD       10         // Clock period in ns  (100 MHz)
`define CLK_HALF         (`CLK_PERIOD / 2)
`define RESET_TIME       (`CLK_PERIOD * (`RESET_CYCLES + 1))

// Functional testbench: tight timeout — program must finish in this many ns
`define SIM_TIMEOUT_FUNC 50000

// Performance testbench: generous timeout — program ends via BREAK/SYSCALL
`define SIM_TIMEOUT_PERF 500000



// BREAK instruction opcode (MIPS: 000000_?????_?????_?????_?????_001101)
// We detect it by watching instID in MEM stage
`define OPCODE_SPECIAL   6'b000000
`define FUNCT_BREAK      6'b001101
`define FUNCT_SYSCALL    6'b001100

// -----------------------------------------------------------------------------
// Debug Verbosity

// -----------------------------------------------------------------------------
`define DEBUG_PIPELINE   1    // Per-cycle pipeline state in testbench
`define DEBUG_CACHE    1    // Cache FSM transitions (very verbose)
`define DEBUG_HDU      1    // HDU hazard decisions each cycle
// define tb file
// -----------------
// Performance counter module — included in performance testbench
// -----------------
`define PERF_TB 1   // Define to run performance testbench instead of functional
   `define PROG_FILE_FUNC   "programs/program.hex"       // Functional validation program
`define PROG_FILE_PERF   "programs/program_perf.hex"  // Functional validation program
`endif // CPU_CONFIG_SVH
