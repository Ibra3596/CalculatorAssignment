/*
 * Calculator.c
 *
 * Created: 8/15/2020 12:18:24 AM
 * Author : Ibrahim
 */ 

#include "LCD.h"
#include "KeyPad.h"
#include "calculation.h"
#include "Stack.h"

stack term1;
stack term2;



int main(void)
{
	uint8 current_status = initial_term ;
	uint8 button = 0 ; 
	init_stack(&term1);
	init_stack(&term2);
	
	uint8 operation = 0;
	LCD_Init();
	KeyPad_Init();
	

    while (1) 
    {
		button = KeyPad_GetValue();
		manage_input(button , &current_status ,&term1 , &term2 , &operation);
    }
}

