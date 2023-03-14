#include <stdio.h>
#include <time.h>

void traspuesta(double **A, int M, int N)
{
  double **B;
  B =(double**) calloc(N,sizeof(double));
    for(int i=0;i<N;i++) B[i] = (double*)calloc(M,sizeof(double));
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<M;j++) B[i][j]=A[j][i];
    }
/////////////////////////////////////
    for(int i=0;i<M;i++) free(A[i]);
    free(A);
/////////////////////////////////////
    A = (double**)calloc(N,sizeof(double));
    for(int i=0;i<N;i++) A[i] = (double*)calloc(M,sizeof(double));
/////////////////////////////////////
    for(int i=0;i<N;i++)
    {
       for(int j=0;j<M;j++) A[i][j]=B[i][j];
    }
/////////////////////////////////////
    for(int i=0;i<N;i++) free(B[i]);
    free(B);
return 0;
}

int main()
{
srand(time(NULL));
double **A;
int M,N;
printf("Introduce numero de filas y columas :\n");
scanf("%d%d",&M,&N);
////////////////////////////////////
A = (double**)calloc(M,sizeof(double));
    for(int i=0;i<M;i++) A[i] = (double*)calloc(N,sizeof(double));
    for(int i=0;i<M;i++)
    {
      for(int j=0;j<N;j++) A[i][j]=rand()%1001-1;
    }
///////////////////////////////////////
printf("\nMatriz A:\n");
for(int i=0;i<M;i++)
 {
     for(int j=0;j<N;j++) printf("%lf      ",A[i][j]);
     printf("\n");
 }

traspuesta(A,M,N);
////////////////////////////////////////
printf("\nMatriz traspuesta A:\n");
for(int i=0;i<N;i++)
 {
     for(int j=0;j<M;j++) printf("%lf      ",A[i][j]);
     printf("\n");
 }
return 0;
}