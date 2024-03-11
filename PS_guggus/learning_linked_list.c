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
    Node *current = head;
    while (current != NULL && position != 0)
    {
        position--;
    }

    if (position != 0)
    {
        printf("Requested position too far into list\n");
        return NULL;
    }

    Node *new = malloc(sizeof(Node));
    if (new == NULL)
        return NULL;

    new->data = data;
    new->next = current->next;
    current->next = new;

    return new;
}

// function to add an item to the list
void    addItem(struct Node** head, const char* itemName)
{
	struct Node* newNode = createNode(itemName);
	newNode->next = *head;
	*head = newNode;
}