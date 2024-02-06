#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("%d Element Is %d \n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
struct Node *deleteatnode(struct Node *head)
{
    head = head->next;
    return head;
}
struct Node *deleteatindex(struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = p->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    return head;
}
struct Node *deleteatlast(struct Node *head){
    struct Node * p=head;
    struct Node * q=p->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    return head;
}
struct Node *inserthead(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    return temp;
}
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *inseratend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
int main()
{
    struct Node *node1, *node2, *node3;

    node1 = (struct Node *)malloc(sizeof(struct Node));
    node2 = (struct Node *)malloc(sizeof(struct Node));
    node3 = (struct Node *)malloc(sizeof(struct Node));

    node1->data = 100;
    node1->next = node2;

    node2->data = 200;
    node2->next = node3;

    node3->data = 300;
    node3->next = NULL;
    // node1=inseratend(node1,10);
    // node1=insertatindex(node1,1,3);
    // node1 = deleteatnode(node1);
    node1 = deleteatlast(node1);
    traversal(node1);
}