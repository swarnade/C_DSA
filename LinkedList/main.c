#include <stdio.h>
#include <stdlib.h>

// Defining Structures
struct Node
{
    int data;
    struct Node *next;
};

// Traversal Of Linked List
void traverse(struct Node *head){
    int i = 0;
    while (head != NULL)
    {
        printf("%d th Element Is %d\n", i, head->data);
        head = head->next;
        i++;
    }
}

// Insterting Element In Head Node
struct Node *insertatnode(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    return temp;
}

// Inserting Element In Index Node
struct Node *insertatindex(struct Node *head, int index, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    temp->data = data;
    temp->next = p->next;
    p->next = temp;
    return head;
}

// Inserting Element At Last Node
struct Node *insertatlast(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    temp->data = data;
    temp->next = NULL;
    return head;
}

// Delete Element From Head Node
struct Node *deleteathead(struct Node *head)
{
    head = head->next;
    return head;
}

// Delete Element from Index Node
struct Node *deleteatindex(struct Node *head, int index)
{
    struct Node *pre = head;
    struct Node *nxt = pre->next;
    for (int i = 1; i < index; i++)
    {
        pre = pre->next;
        nxt = nxt->next;
    }
    pre->next = nxt->next;
    return head;
}

// Delete Element From Last Node
struct Node *deleteatlast(struct Node *head)
{
    struct Node *pre = head;
    struct Node *nxt = pre->next;
    while (nxt->next != NULL)
    {
        pre = pre->next;
        nxt = nxt->next;
    }
    pre->next = NULL;
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
    last->next = NULL;

    printf("1.Insert At Head Node\n");
    printf("2.Insert At Index Node\n");
    printf("3.Insert At Last Node\n");
    printf("4.Delete At Head Node\n");
    printf("5.Delete At Index Node\n");
    printf("6.Delete At Last Node\n");
    printf("7.Traverse\n");
    printf("8.Exit");

    int choice;
    printf("Enter Choice :- ");
    scanf("%d", &choice);
    while (choice!=8)
    {

        if (choice == 1)
        {
            
        }
    }
}