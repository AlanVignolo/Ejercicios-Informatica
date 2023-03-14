#include <stdio.h>

int main(void)
{
    int e,r;
    char bits[16];

    printf("Ingrese un entero:\n");
    scanf("%d",&e);

    for(int i=1;i<=16;i++)
    {
        r=e&1;
       // printf("%i",r);
        bits[16-i]=r;
        e=e>>1;
    }

    for(int j=0;j<sizeof(bits);j++)
    {
      printf("%d",bits[j]);  
    }

return 0;  
}