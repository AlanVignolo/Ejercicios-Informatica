#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int x(int a,int b, int c,int d, int e)
{
    int r;
    r=3*a+b/(c-((d+5*e)/(a-b)));
    return r;
}

int y(int a,int b, int c)
{
    int r;
    r=3*pow(a,4)-5*pow(b,3)+c*12-7;
    return r;
}

int main(void)
{
    int a,b,c,d,e,r1,r2;

    printf("Introduce un valor de a:\n");
    scanf("%i",&a);
    printf("Introduce un valor de b:\n");
    scanf("%i",&b);
    printf("Introduce un valor de c:\n");
    scanf("%i",&c);
    printf("Introduce un valor de d:\n");
    scanf("%i",&d);
    printf("Introduce un valor de e:\n");
    scanf("%i",&e);

    r1=x(a,b,c,d,e);
    r2=y(a,b,c);

    printf("x=%i\n",r1);
    printf("y=%i",r2);
}