#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void mult(double s, double *v, int N)
{
    for(int i=0;i<N;i++) *(v+i)=*(v+i)*s;

        printf("\nVector final:\n");
    for(int i=0;i<N;i++) printf("%i ----- %f\n",i+1,v[i]);

    
    return 0;
}

int main(void)
{
    srand(time(NULL));

    int N;
    double *vector, s;

    printf("Ingrese la cantidad de elementos\n");
    scanf("%d",&N);
    printf("Ingrese un escalar\n");
    scanf("%lf",&s);

    vector=(double *)malloc(N);

    for(int i=0;i<N;i++) *(vector+i)=rand() %10001 + 1;
    printf("Vector inicial:\n");
    for(int i=0;i<N;i++) printf("%i ----- %f\n",i+1,vector[i]);
    mult(s,vector,N);
    return 0;
}