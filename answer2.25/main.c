#include <stdio.h>

int main() {
  int rows, yaz=1;

    printf("Satir Sayisi Girin: \n");
    scanf("%d", &rows);

    for (int i=0; i<rows; i++) {

        for (int space=1; space <= rows-i; space++)
            printf("  ");

        for (int j=0; j<=i; j++) {
            if (j==0 || i==0)
                yaz = 1;
            else
                yaz=yaz*(i-j+1)/j;
            printf("%4d", yaz);
        }

        printf("\n");
    }

  return 0;
}
