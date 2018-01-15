/*
 * stdmacros.h
 *
 * Created: 12/8/2017 11:00:21 AM
 *  Author: yosry
 */ 


#ifndef STDMACROS_H_
#define STDMACROS_H_
#include <avr/io.h>
#include <stdint.h> //to include typedef

#define F_CPU 12000000UL //TO DEFINE THE FRQ OF MICROCONTROLLER
#include <util/delay.h>// to include the delay
#include <avr/interrupt.h>// to include the interrupt

#define SETBIT(REG,bit) (REG |= 1<<bit)
#define CLRBIT(REG,bit) (REG &= ~(1<<bit))
#define TOGBIT(REG,bit) (REG ^= 1<<bit)
#define READBIT(REG,bit) ((REG>> bit) &1)

#endif /* STDMACROS_H_ */