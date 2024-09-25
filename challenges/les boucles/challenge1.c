#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int n,i;
printf("veuillez entrer un nombre : ");
scanf("%d",&n);

for (i=1;i<=10;i++){
    i*n;
    printf("p=%d\n",i*n);
}
return 0;
}

