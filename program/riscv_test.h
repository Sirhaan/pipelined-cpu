//=============================================================================
// test_env.h
// Minimal test environment for riscv-tests on custom RV32I CPU
// Replaces the default riscv-tests/env/p/riscv_test.h
//
// Pass/Fail convention:
//   PASS: x28 (t3) = 1  then EBREAK
//   FAIL: x28 (t3) = test_number (which test failed) then EBREAK
//=============================================================================

#ifndef _TEST_ENV_H
#define _TEST_ENV_H

//-----------------------------------------------------------------------------
// Required by riscv-tests but not used in bare metal environment
//-----------------------------------------------------------------------------
#define RVTEST_RV32U
#define RVTEST_RV32UF

//-----------------------------------------------------------------------------
// Code begin — entry point
//-----------------------------------------------------------------------------
#define RVTEST_CODE_BEGIN   \
    .section .text;         \
    .global _start;         \
    _start:

//-----------------------------------------------------------------------------
// Pass — write 1 to x28, then EBREAK
//-----------------------------------------------------------------------------
#define RVTEST_PASS         \
    fence;                  \
    li x28, 1;              \
    .word 0x00100073;       \
    /* EBREAK */

//-----------------------------------------------------------------------------
// Fail — x28 already holds failing test number from RVTEST_CHECK
// Just hit EBREAK
//-----------------------------------------------------------------------------
#define RVTEST_FAIL         \
    fence;                  \
    .word 0x00100073;       \
    /* EBREAK — x28 holds failing test number */

//-----------------------------------------------------------------------------
// Code end — not needed but required by riscv-tests macros
//-----------------------------------------------------------------------------
#define RVTEST_CODE_END

//-----------------------------------------------------------------------------
// Data section markers
//-----------------------------------------------------------------------------
#define RVTEST_DATA_BEGIN   \
    .section .data;         \
    .align 2;

#define RVTEST_DATA_END

//-----------------------------------------------------------------------------
// Internal test check macro used by riscv-tests
// gp (x3) tracks current test number
// If result != expected → store test number in x28 and jump to fail
//-----------------------------------------------------------------------------
#define TESTNUM x28

#endif // _TEST_ENV_H