#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} t_node;

struct node* addToEmpty(int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;
    return (temp);
}

struct node* addAtBegin(struct node* tail, int data)
{
    struct node* newP = addToEmpty(data);
    if (tail == NULL)
    {
        return (newP);
    }
    else
    {
        struct node* temp = tail->next;
        newP->prev = tail;
        newP->next = temp;
        temp->prev = newP;
        tail->next = newP;
        return (tail);
    }
