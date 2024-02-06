#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isFULL(struct stack *stk)
{
    if (stk->top == stk->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *stk)
{
    if (stk->top == -1)
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
    if (isFULL(ptr))
    {
        printf("Overflow");
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = data;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Underflow");
    }
    else
    {
        ptr->top = ptr->top - 1;
    }
}

int main()
{
    struct stack *stk = (struct stack *)malloc(sizeof(struct stack));
    stk->size = 10;
    stk->top = -1;
    stk->arr = (int *)malloc(stk->size * sizeof(int));

    push(stk, 0);
    push(stk, 1);
    push(stk, 2);
    push(stk, 3);
    push(stk, 4);
    push(stk, 5);
    push(stk, 6);
    push(stk, 7);
    push(stk, 8);
    push(stk, 9);
    pop(stk);
    push(stk, 10);
    for (int i = 0; i <= stk->top; i++)
    {
        printf("%d\n", stk->arr[i]);
    }
}