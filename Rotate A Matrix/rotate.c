#include <stdio.h>
#include <stdlib.h>

void replace(int *,int * ,int,int );
void makecopy(int *,int *,int ,int);
void print(int *,int ,int );

int main()
{
    int *a,*current,*after,i,j,row,col;
    printf("Enter the row and column : ");
    scanf("%d%d",&row,&col);
    a = (int *)malloc(sizeof(int)*row*col);
    after = (int *)malloc(sizeof(int)*col);
    current = (int *)malloc(sizeof(int)*col);
    printf("Enter the Array : \n");
    for(i=0;i<row;i++)
        for(j=0;j<col;scanf("%d",a+i*col+j++));
    makecopy(a,current,col,0);
    for(i=0;i<row;i++)
    {
        if(i==row-1)
        {
            replace(a,current,col,0);
            break;
        }
        makecopy(a,after,col,i+1);
        replace(a,current,col,i+1);
        for(j=0;j<col;j++)
            *(current+j) = *(after+j);
    }
    print(a,row,col);
    return 0;
}
void makecopy(int *a,int *current,int col,int i)
{
    int j;
    for(j=0;j<col;j++)
    {
        *(current+j) = *(a+i*col+j);
    }
}
void replace(int *a,int *current ,int col,int i)
{
    int j;
    for(j=0;j<col;j++)
    {
        *(a+i*col+j) = *(current+j);
    }
}
void print(int *a,int row,int col)
{
    int i,j;
    printf("New Array  is : \n");
    for(i=0;i<row;printf("\n",i++))
        for(j=0;j<col;printf("%d ",*(a+i*col+j++)));
}
