#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int arm(int);

int main()
{
    int x,s;
    printf("Enter a number:");
    scanf("%d",&x);
    s=x;
    if(s==arm(x))
    {
        printf("\nIts an armstrong no.");
    }
    else
        printf("\nNot an armstrong no.");

    return 0;
}

int arm(int x)
{
    float sum=0;
    while(x!=0)
    {
        sum=sum+pow(x%10,3);
        x=x/10;
    }
    printf("%f",sum);
    return sum;
}
