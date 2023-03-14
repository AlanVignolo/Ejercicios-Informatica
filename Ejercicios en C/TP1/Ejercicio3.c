#include <stdio.h>

int main(void)
{
    int a,b;

    printf("Ingrese el primer:\n");
    scanf("%i",&a);
    printf("Ingrese el segundo numero:\n");
    scanf("%i",&b);

    int c=a&b;
    int d=a|b;
    
    printf("Bits que son 1 en ambos numeros es:%i\n",c);
    printf("Bits que son 1 en alguno de los numeros es:%i\n:",d);

    return 0;

}