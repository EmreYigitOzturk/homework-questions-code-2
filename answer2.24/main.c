#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,s=0,t=1;
    printf("enter binary number\n");
    scanf("%d",&n);
    for(n;n>0;)
    {
        a=n%10;
        s+=a*t;
        n/=10;
        t*=2;
    }
    printf("equal= %d",s);


    return 0;
}
