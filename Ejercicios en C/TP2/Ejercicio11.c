#include <stdio.h>
#include <time.h>

double **productovectorial(double **A, double **B, int M, int N, int P)
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
            for(int k=0;k<N;k++) v=v+A[i][k]*B[k][j];
            C[i][j]=v;
        }
    }
    return C;
}

int main(void)
{
srand (time(NULL));
int M,N,P;
double **A, **B, **C;
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
B = calloc(N,sizeof(double));
    for(int i=0;i<N;i++) B[i] = calloc(P,sizeof(double));
  
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<P;j++) B[i][j]=rand()%1001-1;
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
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<P;j++) printf("%lf      ",B[i][j]);
        printf("\n");
    }
//////////////////////////////////////
C=calloc(M,sizeof(double));
for(int i=0;i<M;i++) C[i]=calloc(P,sizeof(double));

C=productovectorial(A,B,M,N,P);
//////////////////////////////////////
printf("\nMatriz C:\n");
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<P;j++) printf("%lf      ",C[i][j]);
        printf("\n");
    }
//////////////////////////////////////
    for(int i=0;i<M;i++) 
    {
        free(A[i]);
        free(C[i]);
    }
    free(A);
    free(C);
    for(int i=0;i<N;i++) free(B[i]);
    free(B);

return 0;
}