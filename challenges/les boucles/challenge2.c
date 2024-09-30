#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int n;
float i,f;

printf("veuillez entrer un nombre positif ");
scanf("%d",&n);

    if(n<0){
    printf("veuillez entrer un nombre positif ");
    scanf("%d",&n);
    }
    else
        if(n==0)
        printf("la factorielle est 1 ");
    else{
        f=1;
        for(i=1;i<=n;i++)
            f=f*i;
        printf("la factoriel de %d est: %.2f",n,f);
    }







return 0;
}
