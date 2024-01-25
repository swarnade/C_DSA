#include <stdio.h>
int main()
{
    int element,position=-1,size=5;
    int arr[size];

    for (int i=0;i<size;i++)
    {
        printf("Enter %d Element:- ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter The Element To Be Searched:-");
    scanf("%d",&element);
    for(int i=0;i<size;i++)
    {
        if(element==arr[i])
        {
            position=i;
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