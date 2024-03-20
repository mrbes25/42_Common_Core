#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

// Function to create a new node and add it to an empty list
struct node* addToEmpty(int data)
{
    // Allocate memory for the new node
    struct node* temp = malloc(sizeof(struct node));
    if (temp == NULL)
    {
        // If malloc fails, return NULL
        return (NULL);
    }
    // Initialize the new node
    temp->prev = temp; // The previous node of the new node is itself
    temp->data = data; // Set the data of the new node
    temp->next = temp; // The next node of the new node is itself
    return (temp); // Return the new node
}

// Function to add a new node at the beginning of the list
struct node* addAtBegin(struct node* tail, int data)
{
    // Create a new node
    struct node* newP = addToEmpty(data);
    if (newP == NULL)
        // If malloc fails, return NULL
        return (NULL);
    else
    {
        // Insert the new node at the beginning of the list
        struct node* temp = tail->next; // The current head of the list
        newP->prev = tail; // The previous node of the new node is the tail
        newP->next = temp; // The next node of the new node is the old head
        temp->prev = newP; // The previous node of the old head is the new node
        tail->next = newP; // The next node of the tail is the new node
        return (tail); // Return the tail of the list
    }
}

// Function to add a new node at the end of the list
struct node* addAtEnd(struct node* tail, int data)
{
    // Create a new node
    struct node* newP = addToEmpty(data);
    if(newP == NULL)
        // If malloc fails, return NULL
        return (NULL);
    else
    {
        // Insert the new node at the end of the list
        struct node* temp = tail->next; // The current head of the list
        newP->next = temp; // The next node of the new node is the head
        newP->prev = tail; // The previous node of the new node is the old tail
        tail->next = newP; // The next node of the old tail is the new node
        temp->prev = newP; // The previous node of the head is the new node
        tail = newP; // The new tail of the list is the new node
        return (tail); // Return the new tail of the list
    }
}
void printLinkedList(struct node* tail)
{
    struct node* ptr;
    if (tail == NULL)
        ft_printf("List is empty");
    else
    {
        ptr = tail->next;
        do
        {
            ft_printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != tail->next);
    }
}
// Function to fill the linked list with command line arguments
void fillLinkedList(int argc, char **argv, struct node **tail, int true)
{
    // Declare variables for the converted argument and the loop counter
    long temp;
    int i = 0;

    // Check if any arguments are provided
    if (argc > 1)
    {
        if(true == 1)
            i++;
        // Iterate over each argument
        while(i < argc)
        {
            // Convert the argument to a long
            temp = ft_atol(argv[i]);

            // If the list is empty, add the first node
            if(*tail == NULL)
                *tail = addToEmpty(temp);
            else
            {
                // Otherwise, add the node at the end of the list
                *tail = addAtEnd(*tail, temp);

                // If adding the node failed, print an error message and return
                if (*tail == NULL)
                {
                    printf("Failed to add element to the list\n");
                    return;
                }
            }

            // Increment the loop counter
            i++;
        }
    }
}
int ft_arrlen(char **arr)
{
    int len = 0;
    while (arr[len] != NULL)
        len++;
    return len;
}

// Main function
// Main function
// Main function
int main(int argc, char **argv)
{
    // Declare a pointer to the tail of the list
    struct node* tail = NULL;
    if(argc == 2)
    {
        argv = ft_split(argv[1], ' ');
        argc = ft_arrlen(argv);
        fillLinkedList(argc, argv, &tail, 0);
    }
    else
        fillLinkedList(argc, argv, &tail, 1);
    printLinkedList(tail);
    // Return an integer at the end of main function
    return 0;
}

// next steps will be to add movement functions one by one and test them.
// then it will be ready for the algo part :D
