#include <stdio.h>
void duplicar (int *v)
{
    printf("%d",*v);
}

int main(void)
{
    int vector[4]={432,444,22,1}, *g;
    //printf("Ingrese un valor entero:\n");
   // scanf("%d",&vector);
     g=&vector;
    duplicar (g);

    //printf("El valor duplicado es: %d\n", v);

    return 0;
}