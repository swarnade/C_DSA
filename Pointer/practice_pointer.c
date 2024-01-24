#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int size=5;
    int new_size=2;
    ptr=(int*)calloc(size,sizeof(int));

    for(int i=0;i<size;i++)
    {
        printf("Enter %d Element:-",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<=size;i++)
    {
        printf("%d Element Is %d\n",i,ptr[i]);
    }

    ptr=(int*)realloc(ptr,new_size*sizeof(int));
    
    for(int i=0;i<new_size;i++)
    {
        printf("Enter %d Element:-",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<=new_size;i++)
    {
        printf("%d Element Is %d\n",i,ptr[i]);
    }
}