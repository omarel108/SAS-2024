#include <stdio.h>
#include <stdlib.h>

int main(){
int n,s;


printf("entrer un nombre entier de quatre chiffre\n");
scanf("%d",&n);

int n1=n/1000;
int n2=(n/100)%10;
int n3=(n/10)%10;
int n4=n%10;
s=(n4*1000)+(n3*100)+(n2*10)+n1;

printf("le nombre inverse est:%d",s);


return 0;

}
