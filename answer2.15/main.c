#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, temp, reverse = 0;
    printf("Bir sayi girin: ");
    scanf("%d", &num);

    temp = num;

    // Sayiyi ters cevir
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    // Sayinin tersi ile karsilastir
    if (num == reverse)
        printf("Sayi %d bir palindromdur.\n", num);
    else
        printf("Sayi %d bir palindrom degildir.\n", num);

    return 0;
}
