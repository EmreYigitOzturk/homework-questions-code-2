#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,b,c,x,s=0;
    printf("enter number\n");
    scanf("%d",&a);
    n=a;
    for(n;n>0;)
    {
        b=n%10;
        n/=10;
        for(c=1,x=1;c<=b;c++)
        {
            x=c*x;
        }
        s+=x;
    }
    if(a==s)
    {
        printf("%d strong number",a);
    }
    else
    {
        printf("%d not strong number",a);
    }

    return 0;
}
