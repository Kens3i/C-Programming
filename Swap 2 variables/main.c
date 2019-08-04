#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,x;
    printf("Enter 2 no.");
    scanf("%d%d",&n,&l);
    x=n;
    n=l;
    l=x;
    printf("The No. Are %d  %d",n,l);
    return 0;
}
