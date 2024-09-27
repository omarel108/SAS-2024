#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;

    printf("veuillez entrer un nombre entier: ");
    scanf("%d",&n);
    int estpremier;
    for(i=2;i<=n-1;i++){
        n/i;
        if(i==n);
          continue;


    if(n%i==0)
           estpremier=0;


    else
           estpremier=1;

    }

    if(estpremier==0){

        printf("ce nest pas un nombre premier");
    }

    else{

        printf("c'est un nombre premier");
}



return 0;

}
