#include <stdio.h>
#include <stdlib.h>

int palindromo(char *r, int N,int i)
{   

   if (i==N || i==N+1) return 1;
   if (*(r+i)==*(r+N)) return palindromo(r,N-1,i+1);
   else return 0;
}

int main(void)
{
    char frase[100], *r;
    int N, i=0, a=0, espacios=0;

    printf("Introduzca una frase:\n");
    fgets(frase,100,stdin);

    N=strlen(frase);

    for(int j=0;j<N-1;j++)
    {
        if (frase[a]==' ') 
        {a++;
         j--;
         espacios++;
        }
        else 
        {
            frase[j]=frase[a];
            a++;
        }
    }
    r=&frase[0];
    a=palindromo(r, (N-2-espacios), i);

    if (a==1) printf("\nLa frase es un palindromo\n");
    else printf("\nLa frase no es un palindromo\n");

    return 0;
}