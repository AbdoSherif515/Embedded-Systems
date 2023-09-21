/***********************************************************************************************/
/* Author  :   Abdelrahman Sherif Hassan                                                       */
/* Date    :   16/9/2023                                                                       */
/* Version :   V01                                                                             */
/***********************************************************************************************/

#include "std_types.h"

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

/* Options for group and sub piriority using system control block peripheral */
/* in (SCB >= AIRCR) 4 bits for Group_ 0  for Sub*/
#define OPTION1 0x5FA0300
/* in (SCB >= AIRCR) 3 bits for Group_ 1  for Sub*/
#define OPTION2 0x5FA0400
/* in (SCB >= AIRCR) 2 bits for Group_ 2  for Sub*/
#define OPTION3 0x5FA0500
/* in (SCB >= AIRCR) 1 bits for Group_ 3  for Sub*/
#define OPTION4 0x5FA0600
/* in (SCB >= AIRCR) 0 bits for Group_ 4  for Sub*/
#define OPTION5 0x5FA0700

void MNVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt (u8 Copy_u8IntNumber);
void MNVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber);
void MNVIC_voidClearPendingFlag (u8 Copy_u8IntNumber);
u8   MNVIC_u8ReadActiveFlag     (u8 Copy_u8IntNumber);
void MNVIC_voidSetPriority      (u8 Copy_u8IntNumber,u8 Copy_u8GroupPriority,u8 Copy_u8SubPriority,u8 Copy_u8Option);



#endif /* NVIC_INTERFACE_H_ */
