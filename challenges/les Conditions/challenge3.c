#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,s;
    printf("enter deux nombres entiers\n");
    scanf("%d%d",&a,&b);
    if(a!=b){

        s=a+b;
    printf("s= %d",s);
    }

    else {
        s= 3*(a+b);
    printf("s= %d",s);
    }

    return 0;
}
