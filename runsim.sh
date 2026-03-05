#!/bin/bash
set -e

# Go to project root
cd "$(dirname "$0")"

echo "Cleaning previous build..."
rm -rf obj_dir

echo "Running Verilator..."

verilator \
    --sv \
    --binary \
    --trace \
    --timing \          # ← ADD THIS — needed for #delay in testbench clk gen
    -Wall  \
    -f rtl.f \
    -o simv \
    --top-module performanceTB \
    --Wno-UNUSEDPARAM \
    --Wno-UNDRIVEN \
    --Wno-UNUSEDSIGNAL \
    --Wno-BLKSEQ \
    --Wno-EOFNEWLINE \
    --Wno-PINCONNECTEMPTY \
    --Wno-GENUNNAMED  \
    --Wno-MODDUP \

echo "Compilation successful!"
echo "Running simulation..."
./obj_dir/simv

echo "Simulation completed!"
