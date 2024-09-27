#include <stdio.h>

int main() {
    int nombre,chiffre;

    printf("Entrer un nombre : ");
    scanf("%d", &nombre);


chiffre = 0;

while (nombre > 0) {

        chiffre = nombre % 10;
        printf("%d",chiffre);


        nombre /= 10;


    }




    return 0;
}








