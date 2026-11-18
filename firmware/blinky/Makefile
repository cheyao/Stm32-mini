CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy

CFLAGS = -mcpu=cortex-m0plus -mthumb -Os -nostdlib -T link.ld

blinky.bin: blinky.elf
	$(OBJCOPY) -O binary $< $@

blinky.elf: main.c link.ld
	$(CC) $(CFLAGS) main.c -o $@

flash: blinky.bin
	dfu-util -a 0 -s 0x08000000:leave -D $<

clean:
	rm -f blinky.elf blinky.bin

.PHONY: flash clean
