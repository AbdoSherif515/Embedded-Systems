/*
/***********************************************************************************************/
/* Author  :   Abdelrahman Sherif Hassan                                                       */
/* Date    :   16/9/2023                                                                       */
/* Version :   V01                                                                             */
/***********************************************************************************************/


#ifndef NVIC_PRIV_H_
#define NVIC_PRIV_H_



#define NVIC_BASE_ADDRESS  0xE000E100

#define NVIC_ISER0        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x00))
#define NVIC_ISER1        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x04))

#define NVIC_ICER0        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x80))
#define NVIC_ICER1        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x84))

#define NVIC_ISPR0        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x100))
#define NVIC_ISPR1        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x104))

#define NVIC_ICPR0        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x180))
#define NVIC_ICPR1        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x184))

#define NVIC_IABR0        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x200))
#define NVIC_IABR1        *((volatile u32*) (NVIC_BASE_ADDRESS + 0x204))

#define NVIC_IPR          ((volatile u8*) (NVIC_BASE_ADDRESS + 0x300))

#define SCB_AICRCR        *((volatile u32*) (0xE000ED00 + 0x0C))




#endif /* NVIC_PRIV_H_ */
