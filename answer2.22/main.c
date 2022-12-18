#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=100,b=200;
    for(a;a<=b;a++)
    {
        if(a%9==0)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}
