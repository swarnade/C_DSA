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
int main(){
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

    traversal(node1);
}