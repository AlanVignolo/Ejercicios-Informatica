#include <stdio.h>
#include <stdlib.h>

void vector (int N)
{
    double *vector;

    vector=(double*)malloc(N);
    printf("%p",vector);
    return 0;
}

int main(void)
{
    int N;
    printf("Introduce un entero:");
    scanf("%d",&N);

    vector(&N);
    return 0;
}