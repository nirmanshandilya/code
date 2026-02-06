#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

void insertAtBeginning(struct Node *ptr, int data){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data=data;

    p->next=head;
    head=p;

}
void insertInBetween(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    
    struct Node *p = head;
    int i=1;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
}
void insertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    
    struct Node *p = head;
    int i=1;
    while(p->next!=NULL){
        p=p->next;
        i++;
    }
    p->next=ptr;
    ptr->next=NULL;
}


void LLTraversal(struct Node *ptr){
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
    //struct Node *p = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    //insert after any node
    // p->data=00000;
    // p->next=third->next;
    // third->next=p;

    printf("\nLL before insertion:\n");
    LLTraversal(head);
    printf("\n");

    
    printf("\nLL after insertion:\n");

    //insertAtBeginning(head, 0);
    //insertInBetween(head,5,3);
    insertAtEnd(head, 10);
    
    LLTraversal(head);

    return 0;
}