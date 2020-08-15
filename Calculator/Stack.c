/*
 * Stack.c
 *
 * Created: 8/11/2020 6:06:00 AM
 *  Author: Ibrahim
 */ 
#include "Stack.h"




void init_stack(stack* s)
{
	s->top = -1;
}
void push ( stack*s , uint8 data)
{
	if((s->top)<stacksize-1)
	{
		s->top++;
		s->arr[s->top]=data;
	}
}
uint8 pop(stack* s)
{
	uint8 data;
	if ((s->top)==-1)
	{
		return 0;
	}
	else
	{
		data = s->arr[s->top];
		s->top--;
		return data;
	}
}
void empty_stack(stack* s)
{
	uint8 i=0;
	for (i=0 ; i<stacksize ; i++)
	pop(&s);
}

