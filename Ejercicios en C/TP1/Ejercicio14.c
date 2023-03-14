#include <stdio.h>

// ECUACION 1
float ecuacion1()
{
  float sumatoria1=0;
 
  for(float i=1;i<=100;i++){
     for(float j=0;j<=100;j++)
        if(i-j != 0)
           sumatoria1 = sumatoria1+((i+j)/(i-j));
   }
  return sumatoria1;
}

//ECUACION 2
float ecuacion2()
{
   float sumatoria2=0;
 
   for(int i=0;i<=100;i+=2){
      for(int j=0;j<=100;j+=2){ 
         if((i+j) != 0){
           sumatoria2 += ((i*j)/(i+j));
         }
   }
}
return sumatoria2; 
}

//FUNCION GENERAL
int main(void) 
{

   float a,b;
   a = ecuacion1();
   b = ecuacion2();

   printf("\nEl valor de la sumatoria1 es: %f", a);
   printf("\nEl valor de la sumatoria2 es: %f", b);

   return 0;
}