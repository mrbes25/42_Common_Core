// helper functions

// checker if Stack is empty
int ise(struct Stack* stack)
{
	return (stack == NULL) // conditions inside parentheses are evaluated to either 0 (false) or 1 (true)
}

//function ro create new node
struct Node* newNode(int data)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node)); // allocate memory for a new node
	node->data = data; // set the data of the new node to the data that is passed to the function
	node->next = NULL; // set the next pointer of the new node to NULL
	node->prev = NULL; // set the previous pointer of the new node to NULL
	return node; // return the new node
}

// pop function removes the top of a stack, frees it
int pop(struct Stack* stack)
{
	if (stack->top == NULL)
		exit(ERROR);
	int data = stack->top->data; // get data of top element
	struct Node* temp = stack->top; // save top node
	stack->top = stack->top->next; // move top pointer to next node, now the top pointer points to the 2nd node in the stack
	if (stack->top != NULL) // if the stack is not empty
		stack->top->prev = NULL; // if the stack is not empty, the previous pointer of the new top node is set to NULL
	free(temp); // free the memory of the old top node
	return data; // return the data of the old top node
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
	struct Stack stack_A; // defines a structure called doubly linked list, it contains two stacks
	struct Stack stack_B; // one for stack A and one for stack B
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

// rotate A (ra)
void ra(struct node** head) // moves the top to the bottom in stack A
{
	if (*head == NULL || (*head)->next == NULL) // checks if the stack is empty or has only one element
		return;
	*head = (*head)->next; // only moves entrypoint to the next node
}

// rotate B (rb)
void rb(struct node** head) // moves the top to the bottom in stack B
{
	if (*head == NULL || (*head)->next == NULL) // checks if the stack is empty or has only one element
		return;
	*head = (*head)->next; // only moves entrypoint to the next node
}

// rotate A & B (rr)
void rr(struct node** head) // moves the top to the bottom in both stacks
{
	ra(head); // calls the ra function
	rb(head); // calls the rb function
}

// reverse rotate A (rra)
void rra(struct node** head) // moves the bottom to the top in stack A
{
	if (*head == NULL || (*head)->next == NULL) // checks if the stack is empty or has only one element
		return;
	*head = (*head)->prev; // only moves entrypoint to the previous node
}

// reverse rotate B (rrb)
void rrb(struct node** head) // moves the bottom to the top in stack B
{
	if (*head == NULL || (*head)->next == NULL) // checks if the stack is empty or has only one element
		return;
	*head = (*head)->prev; // only moves entrypoint to the previous node
}

// reverse rotate A & B (rrr)
void rrr(struct node** head) // moves the bottom to the top in both stacks
{
	rra(head); // calls the rra function
	rrb(head); // calls the rrb function
}

