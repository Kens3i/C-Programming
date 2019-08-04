#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,*p3,i,j,row,col;
    printf("Enter the values of row and column:\n");
    scanf("%d %d",&row,&col);
    p1=(int*)malloc(sizeof(int)*row*col);
    p2=(int*)malloc(sizeof(int)*row*col);
    p3=(int*)malloc(sizeof(int)*row*col);
    printf("\nEnter the values of Array 1:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(p1+i*col+j));
        }
    }
    printf("\nEnter the elements of 2nd array:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(p2+i*col+j));
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            *(p3+col*i+j)=*(p1+col*i+j)+*(p2+col*i+j);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nThe array is:%d",*(p3+i*col+j));
        }
        printf("\n");
    }
    return 0;
}
