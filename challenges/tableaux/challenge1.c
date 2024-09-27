#include <stdio.h>

int main()
{
 int T[5];
 int n,i;

    printf("entrer les donnee\n");

    for(i=0;i<5;i++){

    printf("enter la valeur de n%d: ",i);
    scanf("%d",&T[i]);
    }
    for(i=0;i<5;i++){

    printf("%d\n",T[i]);

    }

    return 0;

}
