#include <stdio.h>


int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        int a = 0;
        int b = 1;
        int c;


    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
        }
        return c;
    }
}

int main() {
    int n;


    printf("Entrez un nombre positif: ");
    scanf("%d",&n);

    if (n < 0){
        printf("Entrez un nombre positif: ");
    } else {

        printf("Le terme de Fibonacci de %d est: %d",n,fibonacci(n));
    }

    return 0;
}

