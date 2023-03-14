#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float p=0, min,s;
    printf("Ingrese la cantidad de seg:\n");
    scanf("%f",&s);
    min=s/60;
    if(min<=5) p=min;
    if(min>5 && min<=8) p=5+((min-5)*0.80);
    if(min>8 && min<=10) p=5+(3*0.8)+(min-8)*0.70;
    if(min>10) p=5+(3*0.8)+(2*0.7)+(min-10)*0.50;

    printf("El precio sin iva final es:%.3f\n",p);
    p*=1.21;
    printf("El precio con iva final es:%.3f",p);

    return 0;
}