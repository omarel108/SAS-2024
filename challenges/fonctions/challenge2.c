#include <stdio.h>
int produit(int a, int b){
    return a*b;

}
int main() {
    int n1,n2;


    printf("Entrez le premier entier: ");
    scanf("%d",&n1);

    printf("Entrez le deuxieme entier: ");
    scanf("%d",&n2);





    printf("Le produit de %d et %d est: %d\n", n1, n2, produit(n1, n2));

    return 0;
}
