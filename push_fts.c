// just push
void push(struct Stack* stack, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // allocate memory for a new node
	newNode->data = data; // set the data of the new node to the data that is passed to the function
	newNode->next = stack->top; // set the next pointer of the new node to the top of the stack
	newNode->prev = NULL; // set the previous pointer of the new node to NULL
	if (stack->top != NULL) // if the stack is not empty
		stack->top->prev = newNode; // set the previous pointer of the old top node to the new node
	stack->top = newNode; // set the top of the stack to the new node
}

// push B to A (pa)
void pa(struct Stack* stack_A, struct Stack* stack_B)
{
	if (!ise(stack_B)) // checks so it's not emty befor we push
	{
		int data = pop(stack_B); // get the data from the top of stack B
		push(stack_A, data); // push the data to stack A
	}
}

// push B to A (pb)
void pb(struct Stack* stack_A, struct Stack* stack_B)
{
	if (!ise(stack_A)) // checks so it's not emty befor we push
	{
		int data = pop(stack_A);
		push(stack_B, data);
	}
}