#include <stdio.h>
int main(){
    int arr[5];
    int size=5;
    for (int i=0;i<size;i++)
    {
        printf("Enter %d Element:-",i);
        scanf("%d",&arr[i]);
    }
    int swaping;
    for (int i=0;i<size-1;i++)
        {
            swaping=i;
            for (int j=i+1;j<size;j++)
            {
                if(arr[swaping]>arr[j])
                {
                    swaping=j;
                }
            }
            if(swaping!=i)
            {
                int tem=arr[i];
                arr[i]=arr[swaping];
                arr[swaping]=tem;
            }
        }
    for (int i=0;i<size;i++)
    {
        printf("[%d] ",arr[i]);
    }
}