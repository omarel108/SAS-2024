#include <stdio.h>

int main()
{
    int n,i;
    printf("entrer le nombre d'element de tableau: ");
    scanf("%d",&n);
    int T[n];
    for (i=0;i<n;i++){
     printf("entrer les element de tableau: ");
     scanf("%d",&T[i]);
    }
    printf("les element de tableau sont: ");
    for (i=0;i<n;i++)
        printf("%d ",T[i]);


    return 0;

}
