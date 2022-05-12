#include "stm32f4xx.h"
static void blink_led(void)
{
    //int B=0;
    int j=0;
	volatile long i;

	int delay_nor = 0x9FFFFFF;//delay time for green and red led
	int delay_org = 0x3FFFFFF;//delay for orange led
	int delay_blu = 0x23FFFFF;//delay for blue led


 for(j=4;j--;)//To blink green led 4 times
 {
	GPIOD->ODR = GPIOD->ODR | (1 << 12);
	for (i = delay_nor; i--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 12);
	for (i = delay_nor; i--; );
 }
 for(j=4;j--;)//To blink red led 4 times
 {
	GPIOD->ODR = GPIOD->ODR | (1 << 14);
	for (i = delay_nor; i--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 14);
	for (i = delay_nor; i--; );
}
for(j=4;j--;)//To blink orange led 4 times
{
	GPIOD->ODR = GPIOD->ODR | (1 << 13);
	for (i = delay_org; i--; );


	GPIOD->ODR = GPIOD->ODR & ~(1 << 13);
	for (i = delay_org; i--; );
}
for(j=4;j--;)//To blink blue led 4 times
{
	GPIOD->ODR = GPIOD->ODR | (1 << 15);
	for (i = delay_blu; i--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 15);
	for (i = delay_blu; i--; );
}



}

static void init_config(void)
{
	/* Enable the GPIO Clock */
	RCC->AHB1ENR = RCC->AHB1ENR | 0x00000008;
	//SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN);
	//GPIOA->MODER = 0x00000000;
   // GPIOA->PUPDR = 0x00000001;
   // GPIOD->MODER = 0x00000055;

	/* Setting PD12 (Pin 12 of PORTD) as General Purpose Output */
	GPIOD->MODER = GPIOD->MODER | 0x01000000;//green
	/* Setting PD14 (Pin 14 of PORTD) as general purpose output */
	GPIOD->MODER = GPIOD->MODER | 0x11000000;//red
	/* Setting PD13 (Pin 13 of PORTD) as general purpose output */
	GPIOD->MODER = GPIOD->MODER | 0x04000000;//orange
	/* Setting PD15 (Pin 15 of PORTD) as general purpose output */
	GPIOD->MODER = GPIOD->MODER | 0x40000000;//blue
}

int main(void)
{
	init_config();

	while (1)
	{
		blink_led();
	}
}
