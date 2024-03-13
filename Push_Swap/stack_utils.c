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

Node	fill_stack(char **a, struct Stack *stack)
{
	int	i;
	i = 1;
	while (a[i])
	{
		ft_atol(a[i]);
		
	}
}