# start.s
.section .text
.global _start
_start:
    # x0 is hardwired zero — no init needed
    # jump straight to main code
    # end with EBREAK
    .word 0x00100073   # EBREAK