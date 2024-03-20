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
}

void printList(struct nodeo* tail)
{
    if(tail == NULL)
        write(1, "The list is empty\n", 18);
    else
    {
        struct node* temp = tail->next;
        while (temp != tail->next)
        {
            write (1, temp->data);
            temp = temp->next;
        }
    }
    write(1, "\n", 1);
}
int main()
{
    struct node* tail = NULL;
    tail = addToEmpty(6);
    tail = addAtBegin(tail, 4);
    tail = addAtBegin(tail, 2);
    tail = addAtBegin(tail, 8);
    printList(tail);
    return 0;
}