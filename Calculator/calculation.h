/*
 * calculation.h
 *
 * Created: 8/15/2020 12:36:10 AM
 *  Author: Ibrahim
 */ 


#ifndef CALCULATION_H_
#define CALCULATION_H_

#include "BIT_MATH.h"
#include "STD.h"
#include "Stack.h"
#include "LCD.h"






#define  initial_term		1
#define	secondary_term		2
#define	Final				3
					

void manage_input(uint8 button , uint8* status , stack*term1 , stack* term2 , uint8* operatio);

void Assign_terms(stack* , uint8 data);

uint8 make_operation(uint8 num1 , uint8 num2 , uint8* operation );


uint8 string_to_int(stack* st);



#endif /* CALCULATION_H_ */