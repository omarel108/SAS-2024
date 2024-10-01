#include <stdio.h>
#include <string.h>

char reverse(char ch[]){

for(int i=strlen(ch);i>=0;i--){
    printf("%c",ch[i]);
}

}

int main(){
    char ch[20];
printf(" entrez une chaine de caractere: ");
scanf("%s",ch);



printf("%s",reverse(ch));

return 0;
}



