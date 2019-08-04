#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],na[100],i,j=0,x,ind,val;
    printf("Total no. of elements in the array:\n");
    scanf("%d",&x);
    printf("The elements in the array: \n");
    for(i=0;i<x;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the index and value to insert(index count starting from 0):");
    scanf("%d%d",&ind,&val);
    for(i=0;i<=x+1;i++)
    {
        if(i<ind)
        {
            na[i]=arr[j++];
        }
        else if(i==ind)
        {
            na[i]=val;
        }
        else
            na[i]=arr[j++];
    }
    printf("The new array is:\n");
    for(i=0;i<x+1;i++)
        printf("%d\n",na[i]);
    return 0;
}
