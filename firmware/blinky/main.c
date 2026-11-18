#include <stdint.h>

// No user LED on the board, so hook an LED up to PA5

#define RCC_IOPENR (*(volatile uint32_t *)0x40021034)
#define GPIOA_MODER (*(volatile uint32_t *)0x50000000)
#define GPIOA_ODR (*(volatile uint32_t *)0x50000014)

#define LED 5

extern uint32_t _estack;

int main(void) {
	RCC_IOPENR |= 1 << 0; // GPIOA clock

	GPIOA_MODER &= ~(3 << (LED * 2));
	GPIOA_MODER |= 1 << (LED * 2); // output

	while (1) {
		GPIOA_ODR ^= 1 << LED;
		for (volatile int i = 0; i < 100000; i++);
	}
}

void reset_handler(void) {
	main();
	while (1);
}

__attribute__((section(".vectors"))) const void *vectors[] = {
	&_estack,
	reset_handler,
};
