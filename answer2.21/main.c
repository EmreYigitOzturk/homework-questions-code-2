#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s=0,sum;
    printf("enter number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s*10+1;
        sum+=s;

    }
    printf("sum =%d",sum);



    return 0;
}
