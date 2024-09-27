#include <stdio.h>

int main()
{
    int base,hauteur,aire,perimetre;

    printf("veuillez entrer base: ");
    scanf("%d",&base);
    printf("veuillez entrer hauteur: ");
    scanf("%d",&hauteur);

    aire=(base*hauteur)/2;
    perimetre=3*base;

    printf("l'aire de triangle est: %d\n",aire);
    printf("le perimetre de triangle est: %d",perimetre);

    return 0;

}
