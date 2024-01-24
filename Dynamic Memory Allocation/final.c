#include <stdio.h>
#include <stdlib.h>
int main(){

    int *ptr;

    int size=5;

    ptr=(int*)calloc(size,sizeof(int));

    for(int i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",ptr[i]);
    }

}