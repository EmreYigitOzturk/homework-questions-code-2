#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,a,b,s=0,c;
    printf("enter x and n number\n");
    scanf("%d%d",&x,&n);
    for(a=1;a<=n;a++)
    {
        for(b=1,c=1;b<=a;b++)
        {
            c=b*c;

        }
        s+=pow(x,a)/c;
    }
    printf("sum= %d",s+1);
    return 0;
}
