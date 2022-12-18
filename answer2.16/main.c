#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,a,b,s=0,c,i;
    printf("enter x and n number\n");
    scanf("%d%d",&x,&n);
    for(a=1,i=1;a<=n;a+=2)
    {
        for(b=1,c=1;b<=a;b++)
        {
            c=b*c;

        }
        if(i%2!=0)
        {
            s-=pow(x,a)/c;
        }
        else
        {
            s+=pow(x,a)/c;
        }
        i++;

    }
    printf("sum= %d",s+1);
    return 0;
}
