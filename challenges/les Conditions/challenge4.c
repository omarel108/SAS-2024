#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,x,x1,x2,delta;


    printf("entrer a et b et c\n");
    scanf("%f%f%f",&a,&b,&c);
    delta=b*b-4*a*c;

    if (delta==0){
        x= -b/(2*a);
        printf("x= %.2f",x);
}
    if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("x1= %.2f\nx2= %.2f",x1,x2);
    }
    else{
            printf("pas de solutions reelles");

    }









return 0;

}
