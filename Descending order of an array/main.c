#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],i,t,j,temp;
    printf("Enter the no. of elements:");
    scanf("%d",&t);
    printf("\nEnter the elemtnts of the array:");
    for(i=0;i<t;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(arr[j]>arr[i])
            {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
    }
    printf("\nArray in descending order is:");
    for(i=0;i<t;i++)
        printf(" %d ",arr[i]);
    return 0;
}
