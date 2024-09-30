#include <stdio.h>


int minimum(int a, int b) {
    int min;
    if(a<b){
        min=a;
    }
    else
    {
        min=b;
    }
    return min;
}

int main() {
    int n1,n2;


    printf("Entrez le premier entier: ");
    scanf("%d",&n1);

    printf("Entrez le deuxieme entier: ");
    scanf("%d",&n2);



    printf("Le minimuim entre %d et %d est: %d\n", n1, n2, minimum(n1, n2));

    return 0;
}
