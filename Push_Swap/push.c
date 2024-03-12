// just push
void push(struct Stack* stack, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // allocate memory for a new node
	newNode->data = data; // set the data of the new node to the data that is passed to the function
	if (stack->top == NULL)
		stack->top = newNode;
	else
	{
		newNode->next = stack->top; // new node next points to current top
		newNode->prev = stack->top->prev;; // new node prev points to previous top
		stack->top->prev->next = newNode; // previous top next points to new node 
		stack->top->prev = newNode; // current top prev points to new node
		stack->top = newNode; // update top to new node
	}
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