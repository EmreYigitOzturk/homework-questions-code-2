#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,s=0,t=1;
    printf("enter number\n");
    scanf("%d",&a);
    for(a;a>0;)
    {
        n=a%2;
        s+=n*t;
        a/=2;
        t*=10;
    }
    printf("%d",s);

    return 0;
}
