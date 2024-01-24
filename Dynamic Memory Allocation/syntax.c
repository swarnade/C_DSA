#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int size=5;
    int new_size=10;
    //Malloc
    ptr=(int*)malloc(size*sizeof(int));
    //Calloc
    ptr=(int*)calloc(size,sizeof(int));
    //Realloc
    ptr=(int*)realloc(ptr,new_size*sizeof(int));


    // (ptr+i)=&ptr[i];
    // *(ptr+i)=ptr[i];
}