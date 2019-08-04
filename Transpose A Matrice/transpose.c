//Make All thing using function
#include <stdio.h>
#include <stdlib.h>
void print();
void input();
void print_transe();
int *a,row,col,i,j;
int main()
{
    printf("Enter the row and col number : ");
    scanf("%d%d",&row,&col);
    a = (int *)malloc(sizeof(int)*row*col);
    input();
    print();
    print_transe();
    free(a);
    return 0;
}
void print_transe()
{
    printf("Transpose of the matrix is :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
            printf("%d ",*(a+j*col+i));
        printf("\n");
    }
}
void input()
{
    printf("Enter the Array : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",a+i*col+j);
    }
}
void print()
{
    printf("Arrey is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",*(a+i*col+j));
        printf("\n");
    }
}
