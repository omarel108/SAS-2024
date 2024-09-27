#include <stdio.h>

int main()
{

int n,i;

printf("entrer le nombre d element de tableau: ");
scanf("%d",&n);
int T[n];
for (i=0;i<n;i++){
    printf("entrer les element de tableau: ");
    scanf("%d",&T[i]);
}

int s=0;
for(i=0;i<n;i++){
    s=s+T[i];

}

printf("la somme totale est:%d",s);
    return 0;

}
