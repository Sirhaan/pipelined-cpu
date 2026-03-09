#!/bin/bash
#=============================================================================
# build_test.sh
# Compiles a single riscv-tests .S file and produces word-addressed hex
#
# Usage:
#   ./build_test.sh add          # compiles rv32ui/add.S
#   ./build_test.sh lw           # compiles rv32ui/lw.S
#   ./build_test.sh all          # compiles all rv32ui tests
#=============================================================================
if [ -f "$1.S" ]; then
    riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -nostdlib \
        -T link.ld -I . \
        $1.S -o $1.elf
    riscv64-unknown-elf-objcopy -O verilog $1.elf $1.hex.raw
    python3 convert_hex.py $1.hex.raw hex/$1.hex
    exit 0
fi

set -e

# ---- Configuration ----------------------------------------------------------
RISCV_PREFIX="riscv64-unknown-elf"
RISCV_TESTS="./riscv-tests/isa/rv32ui"   # path to riscv-tests repo
ENV_HEADER="./testBasics.h"                 # our custom environment header
LINKER="./link.ld"
OUTPUT_DIR="./hex"
# -----------------------------------------------------------------------------

mkdir -p "$OUTPUT_DIR"

compile_test() {
    local TEST=$1
    local SRC="$RISCV_TESTS/$TEST.S"

    if [ ! -f "$SRC" ]; then
        echo "ERROR: $SRC not found"
        echo "Make sure riscv-tests is cloned: git clone https://github.com/riscv/riscv-tests"
        exit 1
    fi

    echo "Building $TEST..."

    # Assemble
    ${RISCV_PREFIX}-gcc \
        -march=rv32i \
        -mabi=ilp32 \
        -nostdlib \
        -nostartfiles \
        -I. \
        -I./riscv-tests/isa/macros/scalar \
        -T "$LINKER" \
        -DTEST_FUNC_NAME=${TEST} \
        -DTEST_FUNC_TXT='"'${TEST}'"' \
        -DTEST_FUNC_RET=${TEST}_ret \
        -include "$ENV_HEADER" \
        -o "$OUTPUT_DIR/$TEST.elf" \
        "$SRC"

    # Extract to verilog hex (byte-addressed)
    ${RISCV_PREFIX}-objcopy \
        -O verilog \
        "$OUTPUT_DIR/$TEST.elf" \
        "$OUTPUT_DIR/${TEST}_raw.hex"

    # Convert to word-addressed for $readmemh
    python3 convert_hex.py \
        "$OUTPUT_DIR/${TEST}_raw.hex" \
        "$OUTPUT_DIR/$TEST.hex"

    echo "  → $OUTPUT_DIR/$TEST.hex"

    # Optional: show disassembly for inspection
    ${RISCV_PREFIX}-objdump -d "$OUTPUT_DIR/$TEST.elf" \
        > "$OUTPUT_DIR/$TEST.dis"
    echo "  → $OUTPUT_DIR/$TEST.dis (disassembly)"
}

if [ "$1" == "all" ]; then
    # Recommended test order — simple to complex
    TESTS="add addi sub and andi or ori xor xori \
           sll slli srl srli sra srai \
           slt slti sltu sltiu \
           lw sw lb lbu lh lhu sb sh \
           beq bne blt bge bltu bgeu \
           jal jalr \
           lui auipc"
    for t in $TESTS; do
        compile_test "$t"
    done
    echo ""
    echo "All tests built in $OUTPUT_DIR/"
else
    if [ -z "$1" ]; then
        echo "Usage: $0 <test_name> | all"
        echo "Example: $0 add"
        exit 1
    fi
    compile_test "$1"
fi

echo "Done."