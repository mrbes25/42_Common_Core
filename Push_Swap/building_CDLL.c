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
int main(void)
{
    // Create an empty list
    // 'tail' is a pointer to the last node in the list
    struct node* tail = NULL;

    // Add the first element to the list
    // 'addToEmpty' creates a new node, sets its data to 1, and returns a pointer to it
    tail = addToEmpty(1);
    // If 'addToEmpty' returns NULL, it means that memory allocation failed
    if (tail == NULL)
    {
        printf("Failed to add element to the list\n");
        return 1;
    }

    // Add a second element to the end of the list
    // 'addAtEnd' creates a new node, sets its data to 2, adds it to the end of the list, and returns a pointer to it
    tail = addAtEnd(tail, 2);
    // If 'addAtEnd' returns NULL, it means that memory allocation failed
    if (tail == NULL)
    {
        printf("Failed to add element to the list\n");
        return 1;
    }

    // Add a third element to the end of the list
    // 'addAtEnd' creates a new node, sets its data to 3, adds it to the end of the list, and returns a pointer to it
    tail = addAtEnd(tail, 3);
    // If 'addAtEnd' returns NULL, it means that memory allocation failed
    if (tail == NULL)
    {
        printf("Failed to add element to the list\n");
        return 1;
    }

    // Print the list
    // 'printLinkedList' prints the data of each node in the list, starting from the head and ending at the tail
    printLinkedList(tail);

    // Return 0 to indicate that the program finished successfully
    return 0;
}
