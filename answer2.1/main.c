#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,area,per;
    printf("enter a and b\n",a,b);
    scanf("%d%d",&a,&b);
    area=a*b;
    per=2*a+2*b;
    printf("area= %d\nperimeter= %d",area,per);
    return 0;
}
