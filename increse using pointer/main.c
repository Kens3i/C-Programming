#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],*p,i,t;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&t);
    printf("\nEnter the elements of the array:");
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    for(i=0;i<t;i++)
    {
        *(p)+=1;
        p++;
    }
    for(i=0;i<t;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}
