/*
 * calculation.c
 *
 * Created: 8/15/2020 12:36:26 AM
 *  Author: Ibrahim
 */ 
#include "calculation.h"





void manage_input(uint8 button ,  uint8* status , stack* term1 , stack* term2 , uint8* operation )
{
	uint8 t1 = 0;
	uint8 t2 = 0;
	uint8*op = operation;
	
	
	if (button == '*' || button == '/' || button == '+' || button == '-'  )
	{
		if (status == initial_term)
		{
			*status = secondary_term;
			*op = button;
			LCD_WriteData(button);
		}
		
	}
	
	else if(button == '=')
	{
		LCD_WriteData(button);
		*status = Final;
		t1 = string_to_int(&term1);
		t2 = string_to_int(&term2);
		uint8 res = make_operation(t1,t2,&operation);
		LCD_GoTo( 1 , 5 );
		LCD_WriteData(res);
		
		
	}
	else
	{
		if (*status == Final)
		{
			*status = initial_term;
		}
			switch (*status)
			{
				case initial_term:
				push(&term1 , button);
				break;
				
				case secondary_term:
				push(&term2 , button);
				break;
				
				default:
				break;
			}
		}
		
	}
	


void Assign_terms(stack* term , uint8 data)
{
	push(term , data);
}

uint8 make_operation(uint8 num1 , uint8 num2 , uint8* operation)
{
	uint8 result = 0;
	
	switch (*operation)
	{
		case '*':
		result = num1 * num2 ;
		break;
		
		case '/':
		result = num1 / num2;
		break;
		
		case '+':
		result = num1 + num2;
		break;
		
		case '-':
		result = num1 - num2;
		break;
		
		default:
		break;
	}
}


uint8 string_to_int(stack* st)
{
	uint8 i = 0;
	uint8 value = 0;

	for ( i = 0; (st->arr[i]) != '\0';  ++i)

	value = value * 10 + ((st->arr[i]) - '0');
	
	return value;
}