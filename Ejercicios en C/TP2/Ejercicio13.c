#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double **transpuesta(double **B, int M, int N)
{
  double **C;
  C = calloc(N,sizeof(double));
    for(int i=0;i<N;i++) C[i] = calloc(M,sizeof(double));
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<M;j++) C[i][j]=B[j][i];
    }
/////////////////////////////////////
    for(int i=0;i<M;i++) free(B[i]);
    free(B);
/////////////////////////////////////
    B = calloc(N,sizeof(double));
    for(int i=0;i<N;i++) B[i] = calloc(M,sizeof(double));
/////////////////////////////////////
    for(int i=0;i<N;i++)
    {
       for(int j=0;j<M;j++) B[i][j]=C[i][j];
    }
/////////////////////////////////////
    for(int i=0;i<N;i++) free(C[i]);
    free(C);

    printf("\nMatriz B transpuesta:\n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++) printf("%lf      ",B[i][j]);
        printf("\n");
    }

return B;
}

int productovectorial(double **A, double **B, int M, int N, int P)
{
     double v=0, **C;
    C=calloc(M,sizeof(double));
    for(int i=0;i<M;i++) C[i]=calloc(P,sizeof(double));
//////////////////////////////////////
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<P;j++)
        {
            v=0;
            for(int k=0;k<N;k++) v+=A[i][k]*B[k][j];
            C[i][j]=v;
        }
    }
printf("\nMatriz resultante de AxB':\n");
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<P;j++) printf("%lf      ",C[i][j]);
        printf("\n");
    }
        
        for(int i=0;i<M;i++) free(C[i]);
        free(C);
    return 0;
}

int main(void)
{
srand (time(NULL));
int M,N,P;
double **A, **B;
printf("Intruce un valor de M, N y P:\n");
scanf("%d%d%d",&M,&N,&P);
////////////////////////////////////
A = calloc(M,sizeof(double));
    for(int i=0;i<M;i++) A[i] = calloc(N,sizeof(double));
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++) A[i][j]=rand()%1001-1;
    }
//////////////////////////////////
B = calloc(P,sizeof(double));
    for(int i=0;i<P;i++) B[i] = calloc(N,sizeof(double));
  
    for(int i=0;i<P;i++)
    {
        for(int j=0;j<N;j++) B[i][j]=rand()%1001-1;
    }
////////////////////////////////////
printf("\nMatriz A:\n");
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++) printf("%lf      ",A[i][j]);
        printf("\n");
    }
//////////////////////////////////////
printf("\nMatriz B:\n");
    for(int i=0;i<P;i++)
    {
        for(int j=0;j<N;j++) printf("%lf      ",B[i][j]);
        printf("\n");
    }
//////////////////////////////////////
B=transpuesta(B,P,N);

printf("\nMatriz B nueva:\n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<P;j++) printf("%lf      ",B[i][j]);
        printf("\n");
    }

productovectorial(A,B,M,N,P);

for(int i=0;i<M;i++) free(A[i]);
        free(A);

for(int i=0;i<N;i++) free(B[i]);
        free(B);
return 0;
}