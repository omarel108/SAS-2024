#include <stdio.h>


int maximum(int a, int b) {
    int max;
    if(a>b){
        max=a;
    }
    else
    {
        max=b;
    }
    return max;
}

int main() {
    int n1,n2;


    printf("Entrez le premier entier: ");
    scanf("%d",&n1);

    printf("Entrez le deuxieme entier: ");
    scanf("%d",&n2);



    printf("Le maximum entre %d et %d est: %d\n", n1, n2, maximum(n1, n2));

    return 0;
}
