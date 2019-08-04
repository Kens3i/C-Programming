#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,row,col,i,j,sum;
    printf("Enter the number of row and column : ");
    scanf("%d%d",&row,&col);
    if(row!=col)
    {
        printf("Not possible .....");
        exit(1);
    }
    a = (int *)malloc(sizeof(int)*row*col);
    printf("Enter the matrix : \n");
    sum = 0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",a+i*col+j);
            if(i==0 || i==row-1 || j==0 || j==col-1)
                sum += *(a+i*col+j);
        }
    }
    printf("Outter sum is : %d",sum);
    return 0;
}
