#include "riscv_test.h"

.section .text
.global _start
_start:
   li t0, 0
    li t1, 0
    li t2, 100
loop:
    addi t1, t1, 1
    add  t0, t0, t1   # gap after addi ✓
    addi t1, t1, 1
    add  t0, t0, t1   # gap after addi ✓
    blt  t1, t2, loop # branch now 2x less frequent
    li   t3, 1          # x28 = 1 = PASS
    ebreak