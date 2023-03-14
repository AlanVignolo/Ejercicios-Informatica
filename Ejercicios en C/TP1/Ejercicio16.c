#include <stdio.h>

int fib(int a)
{
    int f0=0,f1=1,faa=0,fa=0,f=0;
    for(int i=2;i<a;i++)
    {
        faa=f0;
        fa=f1;
        f=faa+fa;
        f0=fa;
        f1=f;        
    }
    if(a==2)f=f1;
    return f;
}

int main(void)
{
    int a,r;
    printf("Inserte el valor del termino de la sucesion de Fibonacci:\n");
    scanf("%i",&a);

    r=fib(a);
    printf("El valor es: %i",r);

    return 0;
}