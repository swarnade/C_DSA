#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int size;
    printf("Number Of Student:- ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    int avg,sum=0;
    for(int i=0;i<size;i++)
    {
        printf("Enter %d Element:- ",i);
        scanf("%d",(ptr+i));
    }
        for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
        sum=sum+*(ptr+i);
    }
    printf("%d",sum);



}
