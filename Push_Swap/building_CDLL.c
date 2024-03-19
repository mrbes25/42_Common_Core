#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

struct node* addToEmpty(int data)
{
    struct node* temp = malloc(sizeof(struct node));
    if (temp == NULL)
    {
        return (0);
    }
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

struct node* addAtEnd(struct node* tail, int data)
{
    struct node* newP = addToEmpty(data);
    if(tail == NULL)
        return (newP);
    else
    {
        struct node* temp = tail->next;
        newP->next = temp;
        newP->prev = tail;
        tail->next = newP;
        temp->prev = newP;
        tail = newP;
        return (tail);
    }
}
void printLinkedList(struct node* tail)
{
    struct node* ptr;
    ptr = NULL;
    if (tail == NULL)
        ft_printf("List is empty");
    else
    {
        ptr = tail->next;
        while (ptr != NULL)
        {
            ft_printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main(int argc, char** argv)
{
    int i;
    long temp;
    temp = 0;
    i = 0;
    struct node* tail;
    tail = NULL;
    while (argc >= i)
    {
        temp = ft_atol(argv[i]);
        addAtBegin(tail, temp);
        i++;
    }
    printLinkedList(tail);

}