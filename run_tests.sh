
#!/bin/bash
# run_tests.sh — build and simulate a list of tests, report pass/fail
# Add to top of buildTest.sh

# rest of existing buildTest.sh below...
TESTS=$@
PASS=0
FAIL=0
FAILED_TESTS=""

for TEST in $TESTS; do
    echo "----------------------------------------"
    echo "Running: $TEST"

    # Build hex
    ./program/buildTest.sh $TEST > /dev/null 2>&1

    # Update pkg.sv
    python3 -c "import re, sys
TEST = sys.argv[1]
content = open('rtl/include/pkg.sv').read()
content = re.sub(r'parameter string PROG_FILE_PERF = \".*\";', f'parameter string PROG_FILE_PERF = \"program/hex/{TEST}.hex\";', content)
open('rtl/include/pkg.sv', 'w').write(content)" "$TEST"

    # Recompile and run
    verilator --sv --binary --trace --timing \
         -f rtl.f \
        --top-module performanceTB \
        --Wno-UNUSEDPARAM --Wno-UNDRIVEN --Wno-UNUSEDSIGNAL \
        --Wno-BLKSEQ --Wno-EOFNEWLINE --Wno-PINCONNECTEMPTY \
        --Wno-GENUNNAMED --Wno-MODDUP \
        2>/dev/null

    # Run and capture result
      OUTPUT=$(./obj_dir/VperformanceTB 2>&1)
    RESULT=$(echo "$OUTPUT" | grep "RESULT:")
    PERF=$(echo "$OUTPUT" | grep "Cycles:")

    if echo "$RESULT" | grep -q "PASS"; then
        echo "  ✓ PASS  |  $PERF"
        PASS=$((PASS + 1))
    else
        echo "  ✗ FAIL  |  $PERF"
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