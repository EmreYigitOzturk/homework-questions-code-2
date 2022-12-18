#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,i,s=0;
    printf("enter number\n");
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        s+=(1/i);
    }
    printf("sum= %.2f",s);


    return 0;
}
