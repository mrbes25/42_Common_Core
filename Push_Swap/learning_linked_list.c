#include    <stdio.h>
#include    <stdlib.h>

// do a shopping list
// if i ask "what do i need to buy" output the list
// if i say "remove item_name" remove said item
// is i say "add item_name" add said item

// define node struct

struct Node
{
    char    itemName[100];
    struct  Node* next;
}

struct Node* createNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}