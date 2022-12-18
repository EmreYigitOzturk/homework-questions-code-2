#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter first small number and second big number.\n");
    scanf("%d%d",&a,&b);
    c=a;
    while(a%b!=0)
    {
        a=a+c;
    }
    printf("lcm = %d",a);
    return 0;
}
