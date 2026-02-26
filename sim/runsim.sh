#!/bin/bash
set -e

echo "Cleaning previous build..."
rm -rf obj_dir

echo "Running Verilator simulation..."

verilator -sv --binary -j 4 \
 -Irtl/include \
  rtl/**/*.sv \
  rtl/cache/**/*.sv \
 
  tb/pipelinedCpuTest.sv \
  --top-module pipelinedCpuTest \
  -Wno-TIMESCALEMOD \
  -Wno-WIDTHEXPAND \
  -Wno-MULTITOP \
  -Wno-MODDED \

echo "Verilation successful!"
echo "Running simulation..."
./obj_dir/VpipelinedCpuTest
echo "Simulation completed!"