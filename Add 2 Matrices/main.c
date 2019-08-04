#include <stdio.h>
#include <stdlib.h>

int r,c;
void add(int*,int*,int*);
void declare(int*);
void display(int*);
int main()
{
   int *ptr1,*ptr2,*ptr3;
   printf("Enter the no of colomn and rows:");
   scanf("%d %d",&r,&c);
   ptr1=(int*)malloc(sizeof(int)*r*c);
   ptr2=(int*)malloc(sizeof(int)*r*c);
   ptr3=(int*)malloc(sizeof(int)*r*c);
   printf("Enter the Elements of frst array:");
   declare(ptr1);
   printf("Enter the Elements of second array:");
   declare(ptr2);
   add(ptr1,ptr2,ptr3);
   display(ptr3);
   return 0;
}
void declare(int *a)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(a+i*c+j));
        }
        printf("\n");
    }
}

void add(int *a,int *b,int *d)
{
 int i,j;
  for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *(d+c*i+j)=*(a+c*i+j)+*(b+c*i+j);
        }
    }
}

void display(int *ptr3)
{int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n%d",*(ptr3+i*c+j));
        }
    }
}
