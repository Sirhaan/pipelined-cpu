#!/bin/bash
set -e

echo "Cleaning previous build..."
rm -rf obj_dir

echo "Running Verilator simulation..."

verilator --binary -j 4 \
  rtl/core/*.sv \
  rtl/cache/*.sv \
  rtl/memory/*.sv \
  tb/pipelinedCpuTest.sv \
  --top-module pipelinedCpuTest \
  -Wno-TIMESCALEMOD \
  -Wno-WIDTHEXPAND \
  -Wno-CASEINCOMPLETE \
  -Wno-MULTITOP

echo "Verilation successful!"
echo "Running simulation..."
./obj_dir/VpipelinedCpuTest
echo "Simulation completed!"