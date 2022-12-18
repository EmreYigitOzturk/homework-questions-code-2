#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s=0;
    for(i=1;i<=50;i++)
    {
        s+=i;
    }
    printf("sum of all number= %d",s);
    return 0;
}
