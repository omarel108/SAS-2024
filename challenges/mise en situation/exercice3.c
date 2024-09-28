#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;

    printf("veuillez entrer un nombre entier: ");
    scanf("%d",&n);

    int estpremier=1;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            estpremier=0;
          break;
        }
    }

    if(estpremier==0)
        printf("ce n'est pas un nombre premier");


    else
        printf("c'est un nombre premier");




return 0;

}
