#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,row,col,i,j,lower=0,upper=0;
    printf("Enter the number of row and column : ");
    scanf("%d%d",&row,&col);
    if(row!=col)
    {
        printf("Not possible .....");
        exit(1);
    }
    a = (int *)malloc(sizeof(int)*row*col);
    printf("Enter the matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",a+i*col+j);
            if(j<i)
                lower+= *(a+i*col+j);
            if(j>i)
                upper += *(a+i*col+j);
        }
    }
    printf("Sum of upper portion is : %d\nSum of lower portion is : %d",upper,lower);
    return 0;
}
