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
    -Wall \
    -f rtl.f \
    --top-module functionalTB \
    -o simv \
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
