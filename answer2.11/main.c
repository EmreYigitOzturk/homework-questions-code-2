#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,i,n;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        printf("%d perfect number",n);
    }
    else
    {
        printf("%d not perfect number",n);
    }


    return 0;
}
