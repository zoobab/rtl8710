#ifndef _CORTEX_H_
#define _CORTEX_H_

#include <stdint.h>

typedef struct{
	volatile uint32_t ISER[8];
	uint32_t RESERVED1[24];
	volatile uint32_t ICER[8];
	uint32_t RESERVED2[24];
	volatile uint32_t ISPR[8];
	uint32_t RESERVED3[24];
	volatile uint32_t ICPR[8];
	uint32_t RESERVED4[24];
	volatile uint32_t IABR[8];
	uint32_t RESERVED5[56];
	volatile uint32_t IPR[32];
}NVIC_TypeDef;

typedef struct{
	uint32_t RESERVED1[2];
	volatile uint32_t ACTLR;
	uint32_t RESERVED2[829];
	volatile const uint32_t CPUID;
	volatile uint32_t ICSR;
	volatile uint32_t VTOR;
	volatile uint32_t AIRCR;
	volatile uint32_t SCR;
	volatile uint32_t CCR;
	volatile uint32_t SHPR[3];
	volatile uint32_t SHCSR;
	volatile uint32_t CFSR;
	volatile uint32_t HFSR;
	volatile uint32_t DFSR;
	volatile uint32_t MMFAR;
	volatile uint32_t BFAR;
	volatile uint32_t AFSR;
	volatile const uint32_t PFR[2];
	volatile const uint32_t DFR;
	volatile const uint32_t AFR;
	volatile const uint32_t MMFR[4];
	volatile const uint32_t ISAR[5];
	uint32_t RESERVED3[5];
	volatile uint32_t CPACR;
}SCB_TypeDef;

#define NVIC                                ((NVIC_TypeDef *)0xE000E100)
#define SCB                                 ((SCB_TypeDef *)0xE000E000)

// SCB_AIRCR
#define SCB_AIRCR_VECTRESET                 (((uint32_t)0x0001) << 0)
#define SCB_AIRCR_VECTCLRACTIVE             (((uint32_t)0x0001) << 1)
#define SCB_AIRCR_SYSRESETREQ               (((uint32_t)0x0001) << 2)
#define SCB_AIRCR_PRIGROUP                  (((uint32_t)0x0007) << 8)
#define SCB_AIRCR_VECTKEY                   (((uint32_t)0xFFFF) << 16)
#define SCB_AIRCR_VECTKEYSTAT               (((uint32_t)0xFFFF) << 16)

// SCB_CPACR
#define SCB_CPACR_CP10                      (((uint32_t)0x03) << 20)
#define SCB_CPACR_CP11                      (((uint32_t)0x03) << 22)

#define cortex_interrupt_set_priority(i, p) (NVIC->IPR[(i) >> 2] = ((NVIC->IPR[(i) >> 2] & ~(((uint32_t)0xFF) << (((i) & 0x03) << 3))) | (((uint32_t)p) << (((i) & 0x03) << 3))))
#define cortex_interrupt_enable(i)          (NVIC->ISER[(i) >> 5] = (((uint32_t)0x01) << ((i) & 0x1F)))
#define cortex_interrupt_disable(i)         (NVIC->ICER[(i) >> 5] = (((uint32_t)0x01) << ((i) & 0x1F)))
#define cortex_interrupt_clear(i)           (NVIC->ICPR[(i) >> 5] = (((uint32_t)0x01) << ((i) & 0x1F)))
#define cortex_interrupts_disable()         __asm__("cpsid f")
#define cortex_interrupts_enable()          __asm__("cpsie f")

#define interrupts_disable()                __asm__("cpsid f")
#define interrupts_enable()                 __asm__("cpsie f")

#define CORTEX_ISR(n)                       _CORTEX_ISR(n)
#define _CORTEX_ISR(n)                      void __attribute__((interrupt)) CORTEX_INTERRUPT_##n##_Handler()

void cortex_bootstrap(void *start) __attribute__ ((noreturn));
void cortex_reboot() __attribute__ ((noreturn));

#endif

