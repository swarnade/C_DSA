#include <stdio.h>
int main()
{
    int element,position=-1,size=10;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        printf("Enter %d Element:- ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter The Element To Be Searched:-");
    scanf("%d",&element);
    int max=size;
    int min=0;
    while(max!=min)
    {
        int mid=(max+min)/2;
        if(element>arr[mid])
        {
            min=mid;
        }
        else if (element<arr[mid])
        {
            max=mid;
        }
        else if(element=arr[mid])
        {
            position=mid;
            break;
        }
    }
    if(position!=-1)
    {
        printf("Element Is Found @ %d Index",position);
    }
    else
    {
        printf("Element Not Found");
    }
}