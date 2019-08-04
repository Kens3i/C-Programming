#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Enter a float value:");
    scanf("%f",&a);
    printf("The Double Value:%lf",a);
    printf("/nThe Integer Value is:%d",(int)a);
    printf("/nThe char value is:%c",(char)a);
    return 0;
}
