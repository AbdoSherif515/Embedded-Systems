/***********************************************************************************************/
/* Author  :   Abdelrahman Sherif Hassan                                                       */
/* Date    :   16/9/2023                                                                       */
/* Version :   V01                                                                             */
/***********************************************************************************************/
#include "std_types.h"
#include "common_macros.h"

/* Lower layers */

/* Peripheral */
#include "NVIC_config.h"
#include "NVIC_priv.h"
#include "NVIC_interface.h"

void MNVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
	  {
	      NVIC_ISER0 = (1<< Copy_u8IntNumber);
	  }
	  else if(Copy_u8IntNumber <= 59)
	  {
		  Copy_u8IntNumber -= 32;
		  NVIC_ISER1 = (1<< Copy_u8IntNumber);
	  }

}

void MNVIC_voidDisableInterrupt (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
	  {
	      NVIC_ICER0 = (1<< Copy_u8IntNumber);
	  }
	 else if(Copy_u8IntNumber <= 59)
	  {
		  Copy_u8IntNumber -= 32;
		  NVIC_ICER1 = (1<< Copy_u8IntNumber);
	  }

}
void MNVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
		  {
		      NVIC_ISPR0 = (1<< Copy_u8IntNumber);
		  }
		 else if(Copy_u8IntNumber <= 59)
		  {
			  Copy_u8IntNumber -= 32;
			  NVIC_ISPR1 = (1<< Copy_u8IntNumber);
		  }

}
void MNVIC_voidClearPendingFlag (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
		  {
		      NVIC_ICPR0 = (1<< Copy_u8IntNumber);
		  }
		 else if(Copy_u8IntNumber <= 59)
		  {
			  Copy_u8IntNumber -= 32;
			  NVIC_ICPR1 = (1<< Copy_u8IntNumber);
		  }

}
u8   MNVIC_u8ReadActiveFlag     (u8 Copy_u8IntNumber)
{
	u8 Local_u8FlagVlue;
	if(Copy_u8IntNumber <= 31)
		  {
		     Local_u8FlagVlue=GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
		  }
		 else if(Copy_u8IntNumber <= 59)
		  {
			  Copy_u8IntNumber -= 32;
			  Local_u8FlagVlue=GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
		  }
	return Local_u8FlagVlue;

}
void MNVIC_voidSetPriority      (u8 Copy_u8IntNumber,u8 Copy_u8GroupPriority,u8 Copy_u8SubPriority,u32 Copy_u8Option)
{
	u8 Local_u8Piriority = Copy_u8SubPriority | (Copy_u8GroupPriority << (Copy_u8Option-OPTION1)/256);
	SCB_AICRCR = Copy_u8Option;
	if(Copy_u8IntNumber>0)
	{
		NVIC_IPR[Copy_u8IntNumber]=(Local_u8Piriority << 4);
	}


}

