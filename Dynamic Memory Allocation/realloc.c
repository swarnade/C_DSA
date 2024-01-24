#include <stdio.h>
#include <stdlib.h>
int main(){

        int *ptr;
    int size=4;
    ptr=(int*)calloc(size,sizeof(int));

    for(int i=0;i<size;i++)
    {
        printf("Enter Element %d\n",i);
        scanf("%d", &ptr[i]);
    }
        for(int i=0;i<size;i++)
    {
        printf("Value Of %d Element is %d\n",i,ptr[i]);
    }


    int new_size=5;


    ptr=(int*)realloc(ptr,new_size*sizeof(int));
    for(int i=0;i<new_size;i++)
    {
        printf("Enter Element %d\n",i);
        scanf("%d", &ptr[i]);
    }
        for(int i=0;i<new_size;i++)
    {
        printf("Value Of %d Element is %d\n",i,ptr[i]);
    }

    return 0;
}