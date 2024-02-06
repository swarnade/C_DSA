#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top = ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(struct stack *ptr, int data)
{
    ptr->top = ptr->top + 1;
    ptr->arr[ptr->top] = data;
}
int pop(struct stack *ptr)
{
    int val = ptr->arr[ptr->top];
    ptr->top = ptr->top - 1;
    return val;
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 80;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    int del=pop(sp);
    for (int i = 0; i <=sp->top; i++)
    {
        printf("%d\n", sp->arr[i]);
    }
    printf("%d",del);
    return 0;
}