#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100][100],i,j,row,col;
    printf("The no of rows and columns:");
    scanf("%d %d",&row,&col);
    printf("\nEnter Elements of Array:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nThe arrays are:%d",arr[i][j]);
        }
    }
    return 0;
}
