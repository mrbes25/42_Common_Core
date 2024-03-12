//function ro create new node
struct Node* newNode(int data)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node)); // allocate memory for a new node
	node->data = data; // set the data of the new node to the data that is passed to the function
	node->next = node; // set to node so it will close the circle
	node->prev = node; // set to node so it will close the circle
	return node; // return the new node
}

// pop function removes the top of a stack, frees it
int pop(struct Stack* stack)
{
	if (stack->top == NULL)
		exit(ERROR); // handle empty stack
	int data = stack->top->data; // get data of top
	struct Node* temp = stack->top; // save top node
	if (stack->top->next == stack->top) if only one element
		stack->top = NULL; // set top to NULL (empty stack)
	else
	{
		stack->top->prev->next = stack->top->next; // previous top next points to next of top
		stack->top->next->prev = stack->top->prev; // next top prev points to prev of top
		stack->top = stack->top->next; // update top to next node
	}
	free(temp); // free the memory of the popped node
	return data; // return the data of the popped node
}
