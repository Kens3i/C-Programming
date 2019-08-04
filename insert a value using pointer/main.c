#include <stdio.h>
#include <stdlib.h>

int *ptr1,*ptr2,l,i,val,pos;

void declare();
void insert();
void display();

int main()
{
    printf("Enter the Total elements in the array:");
    scanf("%d",&l);
    ptr1=(int*)malloc(sizeof(int)*l);
    ptr2=(int*)malloc(sizeof(int)*l);
    printf("Value and position to insert the element:");
    scanf("%d%d",&val,&pos);
    declare();
    insert();
    display();
    return 0;
}

void declare()
{
    for(i=0;i<l;i++)
    {
    printf("\nInput The value of The array:");
    scanf("%d",(ptr1+i));
    }
}

void insert()
{
    int j=0;
    for(i=0;i<l;i++)
    {
        if(j<pos)
        {
            *(ptr2+j)=*(ptr1+i);
            j++;
        }
        else if(j==pos)
        {
            *(ptr2+j)=val;
            j++;
        }
        else
        {
            *(ptr2+j)=*(ptr1+i);
            j++;
        }
    }
}

void display()
{
    for(i=0;i<=l;i++)
        printf("\n%d",*(ptr2+i));
}
