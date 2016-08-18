#include <stdint.h>

void delay(uint32_t delay){
	volatile uint32_t i;
	for(i = 0; i < delay; i++)__asm__("nop");
}

int main(){
	*(volatile uint32_t *)0x4000021C |= (((uint32_t)1) << 8); // REG_SOC_PERI_FUNC1_EN |= BIT_PERI_GPIO_EN; (enable gpio peripheral)

	*(volatile uint32_t *)0x40001004 |= (((uint32_t)1) << 8); // GPIO_PORTA_DDR |= ...???; (set gpio to output, GC4 on B&T RTL-00)

	while(1){
		*(volatile uint32_t *)0x40001000 |= (((uint32_t)1) << 8); // GPIO_PORTA_DR |= ...???;   (pin high)
		delay(1000000);
		*(volatile uint32_t *)0x40001000 &= ~(((uint32_t)1) << 8); // GPIO_PORTA_DR &= ~...???; (pin low)
		delay(1000000);
	}
}

