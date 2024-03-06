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

/* defined in header file
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
*/
