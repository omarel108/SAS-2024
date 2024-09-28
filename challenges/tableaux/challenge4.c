#include <stdio.h>

int main()
{
    int i,n,max;

    printf("entrer le nombre d'element de tableau: \n");
    scanf("%d",&n);

    int T[n];

    printf("entrer les element de tableau:\n");
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }

    max=T[0];
    for(i=0;i<n;i++){
        if(max<T[i])
            max=T[i];

    }

    printf("le plus grand element du tableau est: %d",max);





    return 0;

}
