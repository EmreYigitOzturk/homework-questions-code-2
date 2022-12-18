#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    printf("enter number\n");
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        for(i=m;i>0;i--)
        {
            if(i%2!=0)
            {
                printf("1");
            }
            else if(i%2==0)
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
