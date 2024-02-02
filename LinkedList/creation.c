#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next ;
};

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc (sizeof(struct Node));
    second=(struct Node *)malloc (sizeof(struct Node));
    third=(struct Node *)malloc (sizeof(struct Node));

    //Link First
    head->data=10;
    head->next=second;

    //Link Second
    second->data=20;
    second->next=third;
    
    //Link Third
    third->data=30;
    third->next=NULL;
    LinklistTraversal(head);
}
