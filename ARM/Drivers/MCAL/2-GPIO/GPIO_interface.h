/***********************************************************************************************/
/* Author  :   Abdelrahman Sherif Hassan                                                       */
/* Date    :   16/9/2023                                                                       */
/* Version :   V01                                                                             */
/***********************************************************************************************/
#include "std_types.h"

#ifndef  GPIO_INTERFACE_H
#define  GPIO_INTERFACE_H


void MGPIO_voidSetPinDirecion (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8Direction,u8 Copy_u8Mode);
void MGPIO_voidSetPinValue (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinValue);
u8   MGPIO_u8GetPinValue (u8 Copy_u8PortId,u8 Copy_u8PinId);



/* Ports */
#define  PORTA   0

#define PIN_0_ID 0
#define PIN_1_ID 1
#define PIN_2_ID 2
#define PIN_3_ID 3
#define PIN_4_ID 4
#define PIN_5_ID 5
#define PIN_6_ID 6
#define PIN_7_ID 7
#define PIN_8_ID 8
#define PIN_9_ID 9
#define PIN_10_ID 10
#define PIN_11_ID 11
#define PIN_12_ID 12
#define PIN_13_ID 13
#define PIN_14_ID 14
#define PIN_15_ID 15


#define HIGH_PIN 1
#define LOW_PIN  0

/* Direction */
#define  GPIOA_INPUT            0
#define  GPIOA_OUTPUT_10MHZ     1
#define  GPIOA_OUTPUT_2MHZ      2
#define  GPIOA_OUTPUT_50MHZ     3

/* Modes */
#define  GPIOA_INPUT_ANALOG         0
#define  GPIOA_INPUT_FLOATING       1
#define  GPIOA_INPUT_PULLUP         2
#define  GPIOA_INPUT_PULLDOWN       3

#define  GPIOA_OUTPUT_PUSH_PULL      0
#define  GPIOA_OUTPUT_OPEN_DRAIN     1
#define  GPIOA_OUTPUT_AF_PUSH_PULL   2
#define  GPIOA_OUTPUT_AF_OPEN_DRAIN   3

#endif /* GPIO_INTERFACE_H_ */
