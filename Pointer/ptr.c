#include <stdio.h>
int main(){
int a=5;
int *ptr=&a;
printf("%d , %d , %d , %d ",ptr,*ptr, &a ,*(&a));

}