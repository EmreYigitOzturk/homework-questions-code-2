#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,a,s=0;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1,a=1;a<=n;i+=2,a++)
    {
        s+=pow(n,i);
    }
    printf("sum = %d",s);

    return 0;
}
