#include <stdio.h>
#include <stdlib.h>

int main(){
float c;

printf("entrer la temperature de leau:");
scanf("%f",&c);

if(c<100 && c >=0)
printf("Liquide");
else
if(c<0)
    printf("Solide");

else

    printf("Gaz");

    return 0;
}

