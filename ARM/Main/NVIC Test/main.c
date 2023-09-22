/*
 * main.c
 *
 *  Created on: Sep 16, 2023
 *      Author: abdelrahman
 */

#include "common_macros.h"
#include "std_types.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "NVIC_interface.h"


void delay(void)
{
	for ( u32 i= 0;  i< 50000;i++ )
	{
		asm("nop");
	}
}
int main()
{
	MRCC_voidInit();
	MRCC_voidEnablePeripheral(RCC_BUS_APB2,2);

	MGPIO_voidSetPinDirecion(PORTA,0,GPIOA_OUTPUT_2MHZ,GPIOA_OUTPUT_PUSH_PULL);
	MGPIO_voidSetPinDirecion(PORTA,1,GPIOA_OUTPUT_2MHZ,GPIOA_OUTPUT_PUSH_PULL);
	MGPIO_voidSetPinDirecion(PORTA,2,GPIOA_OUTPUT_2MHZ,GPIOA_OUTPUT_PUSH_PULL);


	MNVIC_voidEnableInterrupt(6);
	MNVIC_voidEnableInterrupt(7);

	MNVIC_voidSetPriority(6,2,1,OPTION_3);
	MNVIC_voidSetPriority(7,1,1,OPTION_3);

	MNVIC_voidSetPendingFlag(6);
	while(1)
	{


	}
}

void EXTI0_IRQHandler (void)
{
	MGPIO_voidSetPinValue(PORTA,0,1);
	delay();
	MNVIC_voidSetPendingFlag(7);
	delay();
	MGPIO_voidSetPinValue(PORTA,1,1);
	delay();

}
void EXTI1_IRQHandler (void)
{
	MGPIO_voidSetPinValue(PORTA,2,1);
	delay();
	MGPIO_voidSetPinValue(PORTA,0,0);
	delay();

}

