#include <stdio.h>

int divisible(int a, int b, int c){ 
int contador=0;
for (a; a<=b; a++){

    if(a%c==0)
    contador++;
    }
    return contador;
}
 
int main(void){
    int a,b,c,d;
    
    printf("Ingrese un valor a:");
    scanf("%i",&a);

    printf("\nIngrese un valor b:");
    scanf("%i",&b);
    
    printf("\nIngrese un valor c:");
    scanf("%i",&c);

    d=divisible(a,b,c);

    printf("\nLa cantidad de valores entre %i y %i, divisibles por %i es : %i",a,b,c,d);

    return 0;
}