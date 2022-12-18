#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,s=0;
    scanf("%d",&n);
    for(a=2;a<=n;a++)
    {
        c=0;
        for(b=1;b<=a;)
        {
            if(a%b==0)
            {
                c++;
            }
            b++;
        }
        if(c==2)
        {
            s+=a;
        }
    }
    printf("sum= %d",s);
    return 0;
}
