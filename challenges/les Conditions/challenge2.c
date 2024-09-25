#include <stdio.h>
#include <stdlib.h>

int main()
{

char  caractere ;
printf("entrer un caractere\n");
scanf("%c",&caractere);

switch (caractere){
case 'a' :
    if(caractere == 'a')
     printf("voyelle");
     break;

case 'o' :
    if(caractere == 'o')
        printf("voyelle");
        break;

case 'e' :if(caractere == 'e')
    printf("voyelle");
        break;
case 'i' :if(caractere == 'i')
    printf("voyelle");
        break;
case 'y':
    if(caractere == 'y')
    printf("voyelle");
     break;

default :
    printf("non voyelle");
    break;
}
return 0;


}
