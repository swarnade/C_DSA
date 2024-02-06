#include <stdio.h>

void display(int arr[], int n){
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int indInseration(int arr[], int size , int element , int capacity , int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

int deleteindex(int arr[],int size, int index)
{
    for (int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[5]={1,2,3,4};

    indInseration(arr, 4 , 200 , 100 , 2);
    
    display(arr,5);
}