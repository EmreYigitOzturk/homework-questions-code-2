#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,x1,x2,d;
    printf("enter a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt(pow(b,2)-4*a*c);
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("%d%d",x1,x2);
    }
    else if(d==0)
    {
        x1=(-b+sqrt(d))/(2*a);
        printf("%d",x1);
    }
    else
    {
        printf("not have any root.");
    }
    return 0;
}
