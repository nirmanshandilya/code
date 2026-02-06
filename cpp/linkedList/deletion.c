#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

void deleteFromBeginning(){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
}

void LLTraversal(struct Node *ptr){
    //MOST IMP STEP. WHY?
    ptr=head;
    
    while (ptr != NULL){
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){    
    head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printf("\nLL before deletion:\n");
    LLTraversal(head);
    printf("\n");

    printf("\nLL after deletion:\n");
    deleteFromBeginning(head);
    LLTraversal(head);

    return 0;
}