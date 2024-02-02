#include <stdio.h>
struct student{
    int roll;
    int phn;
};
int main (){
    struct student s1={1,100};
    struct student s2={2,200};

    struct student *ptr1=&s1;
    struct student *ptr2=&s2;

    printf("%d %d %d %d");
}