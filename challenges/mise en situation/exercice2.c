#include <stdio.h>

int main()
{
   float T;


    printf("veuillez entrer ta temperature corporelle: ");
    scanf("%f",&T);

    if(T>=38)
        printf("vous avez la fievre");
    else
        printf("votre temperature est normale");

    return 0;

}
