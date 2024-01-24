#include <stdio.h>
int main(){
    int arr[5];
    int size=5;
    for (int i=0;i<size;i++)
    {
        printf("Enter %d Element:-",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size-1;i++)
        {
            for (int j=0;j<size-i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int tem=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=tem;
                    }
                }
        }
    for (int i=0;i<size;i++)
    {
        printf("[%d] ",arr[i]);
    }
}