#include <stdio.h>

int main(void){

float a, b, c;

printf("Escriba tres valores:\n");
scanf("%f %f %f",&a,&b,&c);

if (a==b || b==c || c==a) printf("No hay valor central");
else 
       {
              if((a<b && a>c) || (a<c && a>b))
                  printf("El valor central es %.2f",a);
                  
              if((b<a && b>c) || (b<c && b>a))
                  printf("El valor central es %.2f",b);
                  
              if((c<b && c>a) || (c<a && c>b))
                  printf("El valor central es %.2f",c);
                
       }
return 0;
}