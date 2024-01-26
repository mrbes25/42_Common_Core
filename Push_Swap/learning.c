#include    <stdio.h>
#include    <stdlib.h>

// Node structure

struct Node 
{
    int data;
    struct Node* next;
};

// Function to create new node
struct Node* createNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//function to print linked list
void printList(struct Node* head)
{
    while (head != NULL)
    {
     printf("%d -> ", head->data);
     head = head->next;
    }
    printf("NULL\n");
}

// Function to perform bubble sort on the linked list
void bubbleSort(struct Node* head)
{
    int swapped, temp;
    struct Node* ptr;
    struct Node* lptr = NULL;

    // Base case: empty or single-node list is already sorted
    if (head == NULL || head->next == NULL)
        return ;
    
    do
    {
        swapped = 0;
        ptr = head;

        while (ptr->next != lptr)
        {
            if (ptr->data > ptr->next->data)
            {
                //swap data
                temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        lptr = ptr->next;
    }
    while (swapped);
}
int main() {
    // Create a linked list with random values
    struct Node* head = createNode(5);
    struct Node* current = head;

    for (int i = 0; i < 5; ++i) {
        current->next = createNode(rand() % 100);  // Insert random values
        current = current->next;
    }

    // Print the original linked list
    printf("Original Linked List: ");
    printList(head);

    // Perform bubble sort on the linked list
    bubbleSort(head);

    // Print the sorted linked list
    printf("Sorted Linked List: ");
    printList(head);

    return 0;
}
