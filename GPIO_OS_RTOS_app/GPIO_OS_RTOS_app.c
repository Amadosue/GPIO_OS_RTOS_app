/*
 * GPIO_OS_RTOS_app.c
 *
 * Created: 1/7/2018 1:35:48 PM
 *  Author: NewUsername
 */ 


#include "Scheduler.h"

uint8_t flag_ON=0;
uint32_t count=0,count_0=0,count_1=0,count_2=0;

int main(void)
{
	timer0_CTC_init;
	
	SETBIT( DDRD,DDD7);
	SETBIT( DDRD,DDD6);
	SETBIT( DDRD,DDD5);
	
    while(1)
    {
        OS_Start(); 
    }
}

ISR(TIMER0_COMP_vect)
{
	flag_ON=1;
	count++;
	count_0++;
	count_1++;
	count_2++;
}	