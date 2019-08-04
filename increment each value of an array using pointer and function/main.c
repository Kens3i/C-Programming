#include <stdio.h>
#include <stdlib.h>
int *ptr,n,i;
void display();
void incr();
void input();

int main()
{
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int)*n);
    display(n);
    return 0;
}
void display()
{
    int *p=ptr;
    for(i=0;i<n;i++)
        printf("%d",*(p++));
}
void input()
{
    int *p=ptr;
    for(i=0;i<n;i++)
        scanf("%d",p++);
}
void incr()
{int *p=ptr;
    for(i=0;i<n;i++)
    {
        *p=*p+1;
        p++;
    }
}
