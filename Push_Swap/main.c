//mock code:
// first we need to write the comandline argument to the stack a
// there we check for all the rules (are there any duplicates, are there any non-numeric characters)
// if this is all good we can start the algorithm
// makefile programename push_swap
    // seperate algorithm for 3 or less numbers
    // turc algorithm for everything over
// main function
    // read the input
    // create the stacks
    // write the input to the stack a
// algorithm to sort the stacks
    
// function to print moves made by the algorithm
// function to print the result
// error handling (display error message and exit)


// function to check if numbers are sorted
void    check_sorted(t_stack *stack)
{
    int i;

    i = 0;
    while (i < stack->size - 1)
    {
        if (stack->array[i] > stack->array[i + 1])
            return (0);
        i++;
    }
    return (1);
}
// function to put numbers in stack a

s