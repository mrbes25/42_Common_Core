#include "push_swap.h"

long find_max(Stack *stack) //Function to find biggest node in stack and return value of it
{
	long	max;
	
	max = stack->data;
	stack = stack->next;

	while(stack->data != max) //iterates trough stack and will stop when it completes a full circle
	{
		if (stack->data > max)
			max = stack->data;
		stack = stack->next;
	}
	return (max);
}