#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Use Of malloc
    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));
    for(int i=0;i<3;i++)
    {
        printf("Ente Num");
        scanf("%d", &ptr[i]);
    }
        for(int i=0;i<4;i++)
    {
        printf("Value");
        printf("%d", ptr[i]);
    }
    return 0;
}