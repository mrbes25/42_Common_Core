// swap A
void sa(struct Stack* stack_A)
{
	if (stack_A->top != NULL && stack_A->top->next != NULL) // check if there are at least two elements in Stack_A
	{
		int temp = stack_A->top->data; // move top to a tmp
		stack_A->top->data = stack_A->top->next->data; // replace top by the second to top
		stack_A->top->next->data = temp; // replace second to top with tmp of top
	}
}
// swap B
void sb(struct Stack* stack_B)
{
	if (stack_B->top != NULL && stack_B->top->next != NULL) // check if there are at least two elements in Stack_B
	{
		int temp = stack_B->top->data; // move top to a tmp
		stack_B->top->data = stack_B->top->next->data; // replace top by the second to top
		stack_B->top->next->data = temp; // replace second to top with tmp of top
	}
}
// swap A & B
void ss(struct Stack* stack_A, struct Stack* stack_B) // just combines the two
{
	sa(stack_A); 
	sb(stack_B);
}