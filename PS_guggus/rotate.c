// rotate A (ra)
void ra(struct node** head) // moves the top to the bottom in stack A
{
	if (*head == NULL || (*head)->next == NULL) // checks if the stack is empty or has only one element
		return;
	*head = (*head)->next; / / only moves entrypoint to the next node
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
