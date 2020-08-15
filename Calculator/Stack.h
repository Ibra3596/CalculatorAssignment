/*
 * Stack.h
 *
 * Created: 8/11/2020 6:07:24 AM
 *  Author: Ibrahim
 */ 


#ifndef STACK_H_
#define STACK_H_
#include "STD.h"

#define stacksize  3

typedef struct
{   uint8 arr[stacksize];
	uint8 top;
}stack;

void init_stack(stack* s);

void push ( stack*s , uint8 data);

uint8 pop(stack*s);

void empty_stack(stack* s);

uint8 Return_int(stack* input);


#endif /* STACK_H_ */