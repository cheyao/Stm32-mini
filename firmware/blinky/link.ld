MEMORY {
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 64K
	RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 40K
}

_estack = ORIGIN(RAM) + LENGTH(RAM);

SECTIONS {
	.text : {
		KEEP(*(.vectors))
		*(.text*)
		*(.rodata*)
	} > FLASH
}
