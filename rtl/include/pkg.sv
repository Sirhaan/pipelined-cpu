package pkg;
    // Cache parameters
    parameter int ICACHE_SIZE       = 256;
    parameter int ICACHE_WAYS       = 2;
    parameter int ICACHE_LATENCY    = 20;
    parameter int ICACHE_BLOCK_SIZE = 16;

    parameter int DCACHE_SIZE       = 256;
    parameter int DCACHE_WAYS       = 2;
    parameter int DCACHE_LATENCY    = 20;
    parameter int DCACHE_BLOCK_SIZE = 16;

    parameter int MEM_LATENCY = ICACHE_LATENCY;
    parameter int MEM_DEPTH   = 10;

    // Pipeline parameters
    parameter int DATA_WIDTH   = 32;
    parameter int ADDR_WIDTH   = 32;
    parameter int REG_COUNT    = 32;
    parameter int RESET_CYCLES = 2;

    // Branch resolution stage: ID=2, EX=3, MEM=4
    parameter int BRANCH_STAGE = 3;

    // Simulation parameters
    parameter int CLK_PERIOD       = 10;
    parameter int CLK_HALF         = CLK_PERIOD / 2;
    parameter int RESET_TIME       = CLK_PERIOD * (RESET_CYCLES + 1);
    parameter int SIM_TIMEOUT_PERF = 500000;
    parameter int SIM_TIMEOUT_FUNC = 500000;

    parameter logic [5:0] OPCODE_SPECIAL = 6'b000000;
    parameter logic [5:0] FUNCT_BREAK    = 6'b001101;
    parameter logic [5:0] FUNCT_SYSCALL  = 6'b001100;

    parameter int BHT_ENTRIES = 64;
    parameter int BTB_ENTRIES = 64;

    parameter string PROG_FILE_PERF = "program/hex/and.hex";
endpackage

`define DEBUG_PIPELINE 1
`define DEBUG_CACHE 1
`define DEBUG_HDU 1
`define PERF_TB 1
