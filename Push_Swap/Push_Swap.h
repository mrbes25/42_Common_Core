#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h> // Include necessary headers
#include "../libft.h"
#include "../ft_printf"

// Define the node structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Define the stack structure
struct Stack {
    struct Node* top;
};

// Define the doubly linked list structure
struct DoublyLinkedList {
    struct Stack stack_A;
    struct Stack stack_B;
};

// Function prototypes
int ise(struct Stack* stack);
struct Node* newNode(int data);
int pop(struct Stack* stack);
void push(struct Stack* stack, int data);
void sa(struct Stack* stack_A);
void sb(struct Stack* stack_B);
void ss(struct Stack* stack_A, struct Stack* stack_B);
void pa(struct Stack* stack_A, struct Stack* stack_B);
void pb(struct Stack* stack_A, struct Stack* stack_B);
void ra(struct Node** head);
void rb(struct Node** head);
void rr(struct Node** head);
void rra(struct Node** head);
void rrb(struct Node** head);
void rrr(struct Node** head);

#endif // STACK_OPERATIONS_H
