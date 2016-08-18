FILENAME_PREFIX = blink
ADDRESS = 0x10000bc8

CC_PARAMS = -Wall -g -Os -mlittle-endian -mlong-calls -mthumb -mcpu=cortex-m3 -mfloat-abi=soft -mthumb-interwork -ffunction-sections -ffreestanding -fsingle-precision-constant -Ddouble=float -Wstrict-aliasing=0 -Wl,-T,rtl8710.ld -nostartfiles -nostdlib -u cortex_vectors -Wl,--gc-sections

BASE_PARAMS = -DCORTEX_INTERRUPT_MAX=2 -Icortex cortex/cortex.c -Wl,--section-start=.text=$(ADDRESS)

FIRMWARE_PARAMS = main.c

CC = arm-none-eabi-gcc

all: firmware

firmware:
	$(CC) $(CC_PARAMS) $(BASE_PARAMS) $(FIRMWARE_PARAMS) -lgcc -o $(FILENAME_PREFIX).elf
	arm-none-eabi-strip $(FILENAME_PREFIX).elf
	arm-none-eabi-objcopy -O binary $(FILENAME_PREFIX).elf $(FILENAME_PREFIX).bin
	chmod 755 $(FILENAME_PREFIX).bin

size:
	arm-none-eabi-size -A -x $(FILENAME_PREFIX).elf

clean:
	rm -rf $(FILENAME_PREFIX).bin $(FILENAME_PREFIX).elf

install:
	openocd -f interface/stlink-v2-1.cfg -f rtl8710.ocd -c "init" -c "reset halt" -c "load_image $(FILENAME_PREFIX).bin $(ADDRESS) bin" -c "cortex_start $(ADDRESS)"

reset:
	openocd -f interface/stlink-v2-1.cfg -f rtl8710.ocd -c "init" -c "reset halt" -c "reset run"

