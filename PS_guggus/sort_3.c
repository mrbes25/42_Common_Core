// creat stacks
(practice with libft_bonus)
creat linked list 
will use a doubly linked list 
// implement swap
// choose sort algorithm turk algorithm
// pseudo code
// implement algorithm
// test with checker
// write own checker

void	sort_3(Stack **a) //Define function to handle wehn stack 'a' has 3 numbers
{
	Stack	*biggest_node; //store pointer to biggest_node in stack 'a'

	biggest_node = find_max(*a); //call function to find biggest node
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
}