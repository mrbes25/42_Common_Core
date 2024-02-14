// helper functions

// checker if Stack is empty
int ise(struct Stack* stack)
{
	return (stack == NULL) // conditions inside parentheses are evaluated to either 0 (false) or 1 (true)
}

// pop function removes the top of a stack, frees it
int pop(struct Stack stack)
{
	if (stack->top == NULL)
		exit(ERROR);
	int data = stack->top->data; // get data of top element
	struct Node* temp = stack->top; // save top node
	stack->top = stack->top->next; // move top pointer to next node, now the top pointer points to the 2nd node in the stack
	if (stack->top != NULL) // 
		stack->top->prev = ; //
}

// Define the node structure
struct Node
{
	int data; // whats in the node
	struct Node* next; // pointer to next node
	struct Node* prev; // pointer to previous node
};

// Define the stack structure
struct Stack
{
	struct Node* top; // defines a structure called stack, it contains a pointer to the top of the stack
};

// Define the doubly linked list structure
struct DoublyLinkedList
{
	struct Stack stack_A;
	struct Stack stack_B;
};

// SWAPPEDY SWAPS

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

//PUUUUUUUUSH

// push B to A 
void pa(struct Stack* stack_A, struct Stack* stack_B)
{
	if (!ise(stack_B)) // checks so it's not emty befor we push
	{
		int data = pop(stack_B);
		push(stack_A, data);
	}
}