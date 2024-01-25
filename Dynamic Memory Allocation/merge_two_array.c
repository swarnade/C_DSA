//Program Under Progress
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int size_i=5,size_j=3,size_f=size_i+size_f;
    int *arri,*arrj,*arrf;
    arri=(int*)calloc(size_i,sizeof(int));
    arrj=(int*)calloc(size_j,sizeof(int));
    arrf=(int*)calloc(size_f,sizeof(int));
    for (int i=0;i<size_i;i++)
    {
        printf("Enter %d Element:- ",i);
        scanf("%d",&arri[i]);
    }
    for (int j=0;j<size_j;j++)
    {
        printf("Enter %d Element:- ",j);
        scanf("%d",&arrj[j]);
    }
    int range=(size_i>=size_f)?size_i:size_j;

    for (int f=0;f<range;f++)
    {
        printf("[%d] ",arri[f]);
        printf("[%d] ",arrj[range]);
        range++;
    }
}