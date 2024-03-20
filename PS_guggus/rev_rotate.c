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