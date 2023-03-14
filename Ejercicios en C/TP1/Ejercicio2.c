#include <stdio.h>

int main(void){

char caracter;

printf("Introduzca un caracter");
scanf("%c",&caracter);

if (caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u')
printf("El caracter ingresado es una vocal");

else 
printf("El caracter ingresado no es una vocal");

    return (0);
}