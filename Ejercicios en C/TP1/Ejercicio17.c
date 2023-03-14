#include <stdio.h>
#include <math.h>

float funcionp(float a, float b, float c, float dt, float x1, float x2){
float p=0;

printf("Funcion en el intervalo [%.3f,%.3f] con un delta=%.2f :\n", x1, x2,dt);
for(x1; x1<=x2; x1+=dt){
p = (a* powf(x1,2))+ (b * x1) + c;
printf("x=%f ---- p= %f\n", x1, p);

}

return 0;
}

int main(){

float a, b, c, dt, x1, x2, resultado=0;
printf("Escriba el coeficiente a\n");
scanf("%f",&a);

printf("\nEscriba el coeficiente b\n");
scanf("%f", &b);

printf("\nEscriba el coeficiente c\n");
scanf("%f", &c);

printf("\nEscriba un valor de x1:\n");
scanf("%f",&x1);

printf("\nEscriba un valor de x2:\n");
scanf("%f",&x2);

printf("\nEscriba un delta:\n");
scanf("%f",&dt);

resultado=funcionp(a,b,c,dt,x1,x2);

return 0 ;
}