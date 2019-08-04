#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i,j,l,m;
    printf("Enter the no. of rows:");
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        for(j=0;j<=s-i-1;j++)
        {
            printf(" ");
        }
            for(l=1;l<=i;l++)
        {
            printf("*");
        }
        for(m=1;m<=i-1;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
