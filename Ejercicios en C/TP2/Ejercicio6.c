#include <stdio.h>
#include <stdlib.h>

 struct coordenadas{
  float x1;
  float x2;
  float x3;
};

int producto(struct coordenadas *a,struct coordenadas *b,struct coordenadas *c){
  c->x1 = (a->x2 * b->x3) - (a->x3 * b->x2);
  c->x2 = (a->x3 * b->x1) - (a->x1 * b->x3);
  c->x3 = (a->x1 * b->x2) - (a->x2 * b->x1);

  return 0;
}

int main(){
  struct coordenadas vec1,vec2,resultado;

  printf("\nIngrese las componentes del primer vector.\n");
  scanf("%f%f%f", &vec1.x1, &vec1.x2, &vec1.x3);

  printf("\nIngrese las componentes del segundo vector.\n");
  scanf("%f%f%f", &vec2.x1, &vec2.x2, &vec2.x3);
  
  producto(&vec1,&vec2,&resultado);
  printf("\nEl resultado del producto vectorial es:");
  printf("\n\n( %g , %g , %g )",resultado.x1,resultado.x2,resultado.x3);
  return 0;
}