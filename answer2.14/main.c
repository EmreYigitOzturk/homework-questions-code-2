#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,b,c,x,s=0,y,sum=0;
    printf("enter number\n");
    scanf("%d",&a);
    for(y=1;y<=a;y++)
    {
        s=0;
        n=y;
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
        if(y==s)
        {
            sum+=y;
        }
    }
    printf("sum = %d",sum);


    return 0;
}
