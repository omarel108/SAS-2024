#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i=0;
printf("veuillez entrer un nombre\n");
scanf("%d",&n);


while(i<n){
printf("les nombres imapairs sont:%d\n",(2*i)+1);
i++;
}
return 0;

}

