#include <stdio.h>
#include <stdlib.h>


float prev(char Cadena[])
{
    int i=1, h=0, k=0;
    float operacion, numero1, numero2;
    char num1[100],num2[100];

    while(Cadena[i]!='+' && Cadena[i]!='*' && Cadena[i]!='-' && Cadena[i]!='/') i++;
    for(int j=0;j<=i;j++) num1[j]=Cadena[j];
    numero1=atof(num1);

    h=i+1;
    i=0;

    while(Cadena[i]!='\0') i++;
    for(int g=h;g<i-1;g++) 
    {
        num2[k]=Cadena[g];
        k++;
    }
    numero2=atof(num2);

    if(Cadena[h-1]=='+') operacion=numero1+numero2;

    if(Cadena[h-1]=='-') operacion=numero1-numero2;

    if(Cadena[h-1]=='/') operacion=numero1/numero2;

    if(Cadena[h-1]=='*') operacion=numero1*numero2;

    printf("\nEl resultado es: %.2f",operacion);
    return 0;
}

int main(void){
char Cadena[100];

printf("Introduce una operacion matematica basica:\n");
fgets(Cadena,100,stdin);

prev(Cadena);

return 0;
}