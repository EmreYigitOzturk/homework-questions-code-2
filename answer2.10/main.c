#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c=0,n,s=0,d,x,sum=0,m;
    printf("enter number\n");
    scanf("%d",&x);
    for(n=1,m=1;m<=x;)
    {
        c=0;
        s=0;
        d=m;
        b=n;
        while(n>0)
        {
            n=n/10;
            c++;
        }
        while(b>0)
        {
            a=b%10;
            b=b/10;
            s+=pow(a,c);
        }
        if(m==s)
        {
            printf("%d\n",s);
        }
        m++;
        n=m;
    }

    return 0;
}
