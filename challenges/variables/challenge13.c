#include <stdio.h>

int main() {
    int n;
    printf("Entrer un nombre positif entier:\n");
    scanf("%d", &n);

    int binaire[200];
    int indice = 0;

    while (n > 0) {

        binaire[indice] = n % 2;
        n = n / 2;
        indice++;
    }

    for (int i = indice - 1; i >= 0; i--) {
        printf("%d", binaire[i]);
    }
    return 0;
}
