
#!/bin/bash
# run_tests.sh — build and simulate a list of tests, report pass/fail

TESTS=$@
PASS=0
FAIL=0
FAILED_TESTS=""

for TEST in $TESTS; do
    echo "----------------------------------------"
    echo "Running: $TEST"

    # Build hex
    cd program/
    ./buildTest.sh $TEST > /dev/null 2>&1
    cd ..

    # Update config.svh
    python3 -c "
import re
content = open('rtl/include/config.svh').read()
content = re.sub(r'\`define PROG_FILE_PERF.*', '\`define PROG_FILE_PERF \"program/hex/$TEST.hex\"', content)
open('rtl/include/config.svh', 'w').write(content)
"

    # Recompile and run
    verilator --sv --binary --timing \
        +incdir+./rtl/include/ \
        ./rtl/core/pipelinedCpu.sv \
        ./rtl/core/ALU.sv \
        ./rtl/core/Decoder.sv \
        ./rtl/core/RF.sv \
        ./rtl/core/FU.sv \
        ./rtl/core/HDU.sv \
        ./rtl/core/ControlUnit.sv \
        ./rtl/core/PC.sv \
        ./rtl/core/ImmGen.sv \
        ./rtl/cache/dcache/dcache.sv \
        ./rtl/cache/dcache/dcacheController.sv \
        ./rtl/cache/icache/icache.sv \
        ./rtl/cache/icache/icacheController.sv \
        ./rtl/cache/replacement/TPLRU.sv \
        ./rtl/cache/replacement/BPLRU.sv \
        ./rtl/memory/UMEM.sv \
        ./rtl/memory/MemoryArbitrator.sv \
        ./tb/performanceCounter.sv \
        ./tb/performanceTB.sv \
        --top-module performanceTB \
        --Wno-UNUSEDPARAM --Wno-UNDRIVEN --Wno-UNUSEDSIGNAL \
        --Wno-BLKSEQ --Wno-EOFNEWLINE --Wno-PINCONNECTEMPTY \
        --Wno-GENUNNAMED --Wno-MODDUP \
        2>/dev/null

    # Run and capture result
    RESULT=$(./obj_dir/VperformanceTB 2>&1 | grep "RESULT:")

    if echo "$RESULT" | grep -q "PASS"; then
        echo "  ✓ PASS"
        PASS=$((PASS + 1))
    else
        echo "  ✗ FAIL — $RESULT"
        FAIL=$((FAIL + 1))
        FAILED_TESTS="$FAILED_TESTS $TEST"
    fi
done

echo "========================================"
echo "  RESULTS: $PASS passed, $FAIL failed"
if [ -n "$FAILED_TESTS" ]; then
    echo "  Failed:$FAILED_TESTS"
fi
echo "========================================"