#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,i,n,sum=0,x;
    printf("enter number\n");
    scanf("%d",&x);
    for(n=1;n<=x;)
    {
        s=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                s+=i;
            }
        }
        if(n==s)
        {
            sum+=s;
        }
        n++;
    }
    printf("sum= %d",sum);



    return 0;
}
