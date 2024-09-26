#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);


    int hexDecimal[100];
    int indice = 0;


    while (n > 0) {
        hexDecimal[indice]  = n % 16;

        n = n / 16;
        indice++;
    }


    printf("Representation hexadecimale : ");
    for (int i = indice - 1; i >= 0; i--) {
        switch(hexDecimal[i]) {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d", hexDecimal[i]);
        }
    }


    return 0;
}
