#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,x;
    printf("Enter the no. of rows:");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=1;k<=l-i;k++)
             printf("%d",k);
        for(x=l-i-1;x>0;x--)
            printf("%d",x);
            printf("\n");
    }
    return 0;
}
