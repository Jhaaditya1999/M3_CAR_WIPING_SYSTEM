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


	GPIOD->ODR = GPIOD->ODR …
