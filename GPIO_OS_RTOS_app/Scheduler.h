
#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include "stdmacros.h"
#include "TIMER0.h"

extern uint8_t flag_ON;
extern uint32_t count,count_0,count_1,count_2;
extern uint8_t flag_0,flag_1,flag_2;

void OS_Start();
void PB_Check();
void LED_ON();
void LED_OFF();

typedef struct
{
	void(*ptr_function)(void); // pointer to function
	uint8_t periority;
	uint16_t periodicity;
}OS_t;

#endif /* SCHEDULER_H_ */
