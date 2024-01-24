#include <stdio.h>
typedef struct student{
    int roll;
    int phn;
}std;
int main (){
    std s1={1,100};
    std s2={2,200};

    std *ptr1=&s1;
    std *ptr2=&s2;

    printf("%d %d %d %d", s1.roll,ptr1->phn,(*ptr2).roll,s2.phn);
}