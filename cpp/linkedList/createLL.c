#include <stdio.h>
#include <stdlib.h>

// user-defined data type
struct Node
{
    int data;
    struct Node *next;
};

void LLTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{    
    // dynamic memory allocation of nodes
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    // assigning values in nodes
    head->data = 7;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 21;
    third->next = fourth; // termination of LL

    fourth->data = 56;
    fourth->next = NULL;

    // function call
    LLTraversal(head);

    return 0;
}