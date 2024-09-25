#include <stdio.h>
#include <stdlib.h>

int main(){
int nombre,s,i;

printf("veuillez entrer un nombre\n");
scanf("%d",&nombre);
s=0;
for(i=1;i<=nombre;i++){
    s=s+i;
}
    printf("La somme des %d premiers nombres naturels est : %d", nombre, s);




return 0;


}
