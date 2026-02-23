#!/bin/bash
set -e

echo "Running Verilator simulation..."

# Optional: Clean previous build (uncomment if needed)
# rm -rf obj_dir

verilator --binary -j 4 pipelinedCpuTest.sv pipelinedCpu.sv BrainModule.sv mipsModules.sv cache/*.sv \
          --top-module pipelinedCpuTest \
          -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-CASEINCOMPLETE -Wno-MULTITOP

echo "Verilation successful!"
echo "Running simulation..."
./obj_dir/VpipelinedCpuTest
echo "Simulation completed!"