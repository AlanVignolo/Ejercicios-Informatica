#include <stdio.h>
#include <time.h>

int Imp(int *r, int filas, int columnas)
{
    printf("La matriz resultante es:\n");
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            printf("%d      ",*(r+(i*columnas)+j));
        }
        printf("\n");
    }
    return 0;
}

int main(void){
int filas, columnas,*r;

printf("Ingrese cantidad de filas:\n");
scanf("%i",&filas);

printf("Ingrese cantidad de columnas:\n");
scanf("%i",&columnas);

int matriz[filas][columnas];
srand(time(NULL));

for (int i=0;i<filas;i++){

     for(int j=0;j<columnas;j++){

if(((i+j)%2)==0)
matriz[i][j]=rand()% 10001 - 1;

else
matriz[i][j]=0;
}
}
r=&matriz[0][0];

Imp(r,filas,columnas);

    return 0;
}