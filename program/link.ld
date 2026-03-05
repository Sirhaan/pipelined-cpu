/* link.ld
 * Linker script for bare-metal RV32I tests on custom CPU
 * Code starts at 0x00000000 — matches PC reset value
 */

ENTRY(_start)

MEMORY {
    RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 4K
}

SECTIONS {
    . = 0x00000000;

    .text : {
        *(.text.init)   /* startup code first */
        *(.text)
        *(.text.*)
    } > RAM

    .data : {
        *(.data)
        *(.data.*)
        *(.rodata)
        *(.rodata.*)
    } > RAM

    .bss : {
        *(.bss)
        *(.bss.*)
        *(COMMON)
    } > RAM

    /* Discard everything else */
    /DISCARD/ : {
        *(.eh_frame)
        *(.riscv.attributes)
        *(.comment)
    }
}
