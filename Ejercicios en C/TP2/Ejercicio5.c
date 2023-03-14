#include <stdio.h>
#include <stdlib.h>

typedef struct fechacompleta
{
    int dia;
    int mes;
    int anio;
} fecha;

int ult(fecha *r)
{
  int dias_mes, ult, bis=0;

  if (r->anio % 4 == 0) bis=1;
  if (r->mes==1 || r->mes==3 || r->mes==5 || r->mes==7 || r->mes==8 || r->mes==10 || r->mes==12) dias_mes = 31;
  else if (r->mes==2){
    if (bis==0) dias_mes = 28;
    else dias_mes = 29;
  }
  else dias_mes = 30;

  if (r->dia<dias_mes) ult = dias_mes - r->dia;
  else ult=0;

  return ult;
}

int main(void)
{
  int dias_mes,mes_ant,dias_mes_ant,ultimo[3],fecha_ant[3],fecha_post[3],bis = 0;
  fecha ayer,hoy,mañan;
  printf("Ingrese una fecha de la siguiente manera: DD MM AAAA\n");
  scanf("%d%d%d",&hoy.dia,&hoy.mes,&hoy.anio);

  if (hoy.mes>1) mes_ant = hoy.mes-1;
  else mes_ant = 12;

  if (hoy.anio%4==0) bis=1;
  if (hoy.mes==1 || hoy.mes==3 || hoy.mes==5 || hoy.mes==7 || hoy.mes==8 || hoy.mes==10 || hoy.mes==12) dias_mes = 31;
  else if (hoy.mes==2)
  {
    if (bis==0) dias_mes = 28;
    else dias_mes = 29;
  }
  else dias_mes = 30;
  
  if (mes_ant==1 || mes_ant==3 || mes_ant==5 || mes_ant==7 || mes_ant==8 || mes_ant==10 || mes_ant==12) dias_mes_ant = 31;
  else if (mes_ant==2){
    if (bis==0) dias_mes_ant = 28;
    else dias_mes_ant = 29;
  }
  else dias_mes_ant = 30;

  if (hoy.dia<dias_mes){
  mañan.dia = hoy.dia + 1;
  mañan.mes = hoy.mes;
  mañan.anio = hoy.anio;
  }
  else if (hoy.dia == dias_mes && hoy.mes<12){
  mañan.dia = 1;
  mañan.mes = hoy.mes + 1;
  mañan.anio = hoy.anio;
  }
  else if (hoy.dia == dias_mes && hoy.mes==12){
  mañan.dia = 1;
  mañan.mes = 1;
  mañan.anio = hoy.anio + 1;
  }

  if (hoy.dia>1){
  ayer.dia = hoy.dia - 1;
  ayer.mes = hoy.mes;
  ayer.anio = hoy.anio;
  }
  else if (hoy.dia == 1 && hoy.mes>1){
  ayer.dia = dias_mes_ant;
  ayer.mes = mes_ant;
  ayer.anio = hoy.anio;
  }
  else if (hoy.dia == 1 && hoy.mes==1){
  ayer.dia = 31;
  ayer.mes = 12;
  ayer.anio = hoy.anio - 1;
  }

  ultimo[0] = dias_mes;
  ultimo[1] = hoy.mes;
  ultimo[2] = hoy.anio;
  
  printf("El dia siguiente es:");
  printf("%d / %d / %d",mañan.dia,mañan.mes,mañan.anio);
  printf("\nEl dia anterior es:");
  printf("%d / %d / %d",ayer.dia,ayer.mes,ayer.anio);

  int falt = ult(&hoy);
  if (falt>0)
  {
  printf("\nFaltan %d dias para fin de mes",falt);
  printf("\nEl ultimo dia del mes es:");
  printf("%d / %d / %d",ultimo[0],ultimo[1],ultimo[2]);
  }
  else printf("\nHoy es el ultimo dia del mes");

  return 0;
}