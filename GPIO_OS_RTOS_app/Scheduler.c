/*
 * Scheduler.c
 *
 * Created: 1/7/2018 1:38:40 PM
 *  Author: NewUsername
 */ 

#include "Scheduler.h"

#define MAX_SIZE (sizeof(OS_Arry)/sizeof(OS_t))

uint8_t flag_ON;
uint32_t count,count_0,count_1,count_2;
uint8_t flag_0,flag_1,flag_2;
const OS_t OS_Arry[]={{PB_Check,2,10},{LED_ON,8,15},{LED_OFF,1,20}};
uint8_t i;
	


void OS_Start()
{
	
	if (1==flag_ON)
	{
		for(i=0;i<MAX_SIZE;i++)
		{
			if (0==count%OS_Arry[i].periodicity)
			{
				OS_Arry[i].ptr_function();
			}
		}
		flag_ON =0;
}
}

void PB_Check()
{
	if(1==READBIT(PORTD,PIND0))
	{
		flag_0=1;
	}
	
	if(1==READBIT(PORTD,PIND0))
	{
		flag_1=1;
	}
	
	if(1==READBIT(PORTD,PIND0))
	{
		flag_2=1;
	}	
}

void LED_ON()
{
	if(1==flag_0)
	{
		count_0=0;
		SETBIT(PORTD,PD5);
	}
	if(1==flag_1)
	{
		count_1=0;
		SETBIT(PORTD,PD6);
	}
	if(1==flag_2)
	{
		count_2=0;
		SETBIT(PORTD,PD7);
	}
}

void LED_OFF()
{
	if(0==(count_0%120))
	{
		CLRBIT(PORTD,PD5);	
	}
	
	if(0==(count_1%180))
	{
		CLRBIT(PORTD,PD6);	
	}
	
	if(0==(count_2%240))
	{
		CLRBIT(PORTD,PD7);	
	}
}

