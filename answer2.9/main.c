#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c=0,n,s=0,d;
    printf("enter number\n");
    scanf("%d",&n);
    d=n;
    b=n;
    for(n;n>0;)
    {
        n=n/10;
        c++;
    }
    for(b;b>0;)
    {
        a=b%10;
        b=b/10;
        s+=pow(a,c);
    }
    if(d==s)
    {
        printf("%d armstrong number.",d);
    }
    else
    {
        printf("%d not armstrong number.",d);
    }


    return 0;
}
