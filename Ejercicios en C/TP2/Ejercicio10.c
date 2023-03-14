#include <stdio.h>
#include <time.h>

double escal(double *v, double s, int N)
{
    for(int i=0; i<N;i++) *(v+i)*=s;
    return *v;
}

int main()
{
    srand(time(NULL));
    int N;
    double *v1,*v2, s;

    printf("Incerte un valor de N:\n");
    scanf("%d",&N);
    printf("Ingrese un valor de s:\n");
    scanf("%lf",&s);

    v1=(double*)malloc(N);
    v2=(double*)malloc(N);

    for(int i=0;i<N;i++) *(v1+i)= rand()%10001-1;
    for(int i=0;i<N;i++) *(v2+i)= rand()%10001-1;

    printf("\nEl valor inicial de el vector 1 es:\n");
    for(int i=0;i<N;i++) printf("%i ----- %lf\n",i+1,v1[i]);

    printf("\nEl valor inicial de el vector 2 es:\n");
    for(int i=0;i<N;i++) printf("%i ----- %lf\n",i+1,v2[i]);

    *v1=escal(v1,s,N);
    *v2=escal(v2,s,N);

    printf("\nEl valor final de el vector 1 es:\n");
    for(int i=0;i<N;i++) printf("%i ----- %lf\n",i+1,v1[i]);

    printf("\nEl valor final de el vector 2 es:\n");

    for(int i=0;i<N;i++) printf("%i ----- %lf\n",i+1,v2[i]);
    
    return 0;
}