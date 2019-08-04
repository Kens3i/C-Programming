#include <stdio.h>
#include <stdlib.h>

void reverse();
void print();

char *ptr,*revptr;
int i,a=0,l;

int main()
{
    printf("Enter the total size of the string:");
    scanf("%d",&l);
    fflush(stdin);
    ptr=(char*)malloc(sizeof(char)*l);
    revptr=(char*)malloc(sizeof(char)*l);
    printf("\nElements of the array:");
    gets(ptr);
    reverse();
    return 0;
}

void reverse()
{ char *x;
x=ptr;
   for(a=0;*ptr!='\0';a++)
   {
    ptr++;
   }
   for(i=a;i>=0;i--)
   {
       printf("%c",*(x+i));
   }
}

