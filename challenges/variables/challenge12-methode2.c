#include <stdio.h>

int main() {
    int n;



    printf("entrer un nombre entier a quatre chiffres:\n");
    scanf("%d",&n);


    int n1 = n / 1000;
    int n2 = (n / 100) % 10;
    int n3 = (n / 10) % 10;
    int n4 = n % 10;




    printf("Le nombre inversé est: %d%d%d%d\n",n4,n3,n2,n1);

    return 0;
}
