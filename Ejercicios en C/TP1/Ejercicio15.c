#include <stdio.h>

long int factorial(int a){
long int valor=1;
for(int i=1;i<=a;i++){
valor*=i;
}
    return valor;
}

int main(){
int numero;
long int b;
printf("Escriba el numero al que le quiera calcular el factorial");
scanf("%i",&numero);
b=factorial(numero);

printf("El valor del factorial es: %ld",b);
    return 0;
}