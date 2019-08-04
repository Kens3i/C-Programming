#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//The series is x+x3/3!+x5/5!....
int main()
{
    int x,n,i,l,fact=0;
    float sum=0.0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter how many terms x would be:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2);
    {
        sum=sum+(pow(x,i)/fac(x));
    }
    printf("The Sum IS:%f",sum);
    return 0;
}

int fac(int x)
{
    int l;
    int fact=1;
      for(l=1;l<x;l++)
        {
            fact=fact*l;
        }
        return fact;
}
