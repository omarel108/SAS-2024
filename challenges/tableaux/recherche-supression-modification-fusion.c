#include <stdio.h>
#include <string.h>


int main()
{
     int T1[200], n1, n2, i;
     char T2[200][50];

    printf("Entrez le nombre d'entiers: ");
    scanf("%d",&n1);
    printf("entrer les entiers: ");
    for (i = 0;i < n1;i++){
        scanf("%d",&T1[i]);
    }

    printf("Entrez le nombre de chaines : ");
    scanf("%d",&n2);
    printf("Entrez les chaines: ");
    for (i = 0;i < n2;i++){
        scanf("%s",T2[i]);
    }

    printf("Tableau d'entiers: ");
    for (i = 0;i < n1;i++){
        printf("%d ",T1[i]);
    }

    printf("\nTableau de chaines: ");
    for (i = 0;i < n2;i++) {
        printf("%s ",T2[i]);
    }

    int entier,j;
    printf("\nEntrez un entier a supprimer: ");
    scanf("%d",&entier);
    for (i = 0; i < n1; i++){
        if (T1[i]==entier){
            for (j=i;j<n1-1;j++) {
                T1[j]=T1[j+1];
            }
            n1--;
            break;
        }
    }
    char chaine[50];
    printf("\nEntrez une chaine a supprimer : ");
    scanf("%s", chaine);
    for (i = 0; i < n2; i++) {
        if (strcmp(T2[i], chaine) == 0) {
            for (int j = i; j < n2 - 1; j++) {
                strcpy(T2[j], T2[j + 1]);
            }

            n2--;

            break;
            }
    }
     printf("\nTableau d'entiers apres suppression: ");
    for (i=0;i<n1;i++){
        printf("%d ",T1[i]);
    }
    printf("\nTableau de chaines apres suppression: ");
    for (i=0;i<n2;i++){
        printf("%s ",T2[i]);
    }

    printf("\nTableau fusionne : ");
    for (i=0;i<n1;i++) {
        printf("%d ",T1[i]);
    }
    for (i=0;i<n2;i++) {
    printf("%s ",T2[i]);
    }

    return 0;

}
