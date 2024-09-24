
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,som1,som2,moypond;
    int pond1=2,pond2=3,pond3=5;
    printf("entrer le premier nombre\n");
    scanf("%f",&n1);
    printf("entrer le deuzieme nombre\n");
    scanf("%f",&n2);
    printf("entrer le troizieme nombre\n");
    scanf("%f",&n3);
    som1=((n1*pond1)+(n2*pond2)+(n3*pond3));
    som2=pond1+pond2+pond3;
    moypond=som1/som2;
    printf("la moyenne pondérée de trois nombres est:%.2f",moypond);
    return 0;


}
