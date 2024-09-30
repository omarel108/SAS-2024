#include <stdio.h>

int factorielle(int n) {

    if (n == 0) {
        return 1;
    }

    int f = 1;


    for (int i = 1; i <= n; i++) {
        f=f*i;
    }

    return f;
}

int main() {
    int n;

    printf("Entrer un nombre positif: ");
    scanf("%d",&n);


    if (n < 0) {
        printf("veuillez entrer un nombre positif ");
    } else {

        printf("La factorielle de %d est %d\n",n,factorielle(n));
    }

    return 0;
}
