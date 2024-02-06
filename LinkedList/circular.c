#include <stdio.h>
#include <stdlib.h>

// Defining Structures
struct Node
{
    int data;
    struct Node *next;
};

// Traversal Of Linked List
void traverse(struct Node *head)
{
    struct Node *p = head;
    while (p->next != head)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
    printf("%d\n", p->data);
}

struct Node *insert(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    temp->data = data;
    temp->next = head;
    ptr->next = temp;
    return head;
}

struct Node *inserthead(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    temp->data = data;
    temp->next = head;
    ptr->next = temp;
    return temp;
}

struct Node *delete(struct Node *head)
{
    struct Node *pre = head;
    struct Node *nxt = pre->next;
    while (nxt->next != head)
    {
        pre = pre->next;
        nxt = nxt->next;
    }
    pre->next = head;
    return head;
}
int main()
{
    // Creating Basic Nodes
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = (struct Node *)malloc(sizeof(struct Node));

    // Assigning Value To Head Node
    head->data = 100;
    head->next = node1;

    // Assigning Value To 1st Node
    node1->data = 200;
    node1->next = node2;

    // Assigning Value To 2nd Node
    node2->data = 300;
    node2->next = last;

    // Assigning Value To Last Node
    last->data = 400;
    last->next = head;

    head = insert(head, 5000);
    head = inserthead(head, 5000);
    traverse(head);
}