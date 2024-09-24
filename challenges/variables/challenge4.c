
#include <stdio.h>
#include <stdlib.h>

int main()



{
    float kmh,ms;

    printf("entrer la vitesse en kilometre par heure\n");
    scanf("%f",&kmh);
    ms=kmh*0.27778;

    printf("la vitesse en metre par heure est: %.5f m/s",ms);



    return 0;
}
