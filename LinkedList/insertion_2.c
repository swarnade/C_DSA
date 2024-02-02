#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("%d Element Is %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
struct Node *AddHeadNode(struct Node *ptr, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = data;
    temp->next = ptr;
    return temp;
}
struct Node *AddMiddleNode(struct Node *ptr, int data, int index)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *p = ptr;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    temp->data = data;
    temp->next = p->next;
    p->next = temp;
}
int main()
{
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node *));

    node1->data = 1000;
    node1->next = node2;

    node2->data = 2000;
    node2->next = node3;

    node3->data = 3000;
    node3->next = NULL;
    node1=AddHeadNode(node1,10);
    node1=AddMiddleNode(node1,100,1);
    traverse(node1);
}