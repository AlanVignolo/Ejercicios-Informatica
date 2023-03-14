#include <stdio.h>
#include <stdlib.h>

int ult(int dia, int mes, int anio)
{
  int dias_mes, ult, bis=0;

  if (anio % 4 == 0) bis=1;
  if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) dias_mes = 31;
  else if (mes==2){
    if (bis==0) dias_mes = 28;
    else dias_mes = 29;
  }
  else dias_mes = 30;

  if (dia<dias_mes) ult = dias_mes - dia;
  else ult=0;

  return ult;
}

int main(void)
{
  int dia,mes,anio,dias_mes,mes_ant,dias_mes_ant,ultimo[3],fecha_ant[3],fecha_post[3],bis = 0;
  printf("Ingrese una fecha de la siguiente manera: DD MM AAAA\n");
  scanf("%d%d%d",&dia,&mes,&anio);

  if (mes>1) mes_ant = mes-1;
  else mes_ant = 12;

  if (anio%4==0) bis=1;
  if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) dias_mes = 31;
  else if (mes==2)
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
  
  if (dia<dias_mes){
  fecha_post[0] = dia + 1;
  fecha_post[1] = mes;
  fecha_post[2] = anio;
  }
  else if (dia == dias_mes && mes<12){
  fecha_post[0] = 1;
  fecha_post[1] = mes + 1;
  fecha_post[2] = anio;
  }
  else if (dia == dias_mes && mes==12){
  fecha_post[0] = 1;
  fecha_post[1] = 1;
  fecha_post[2] = anio + 1;
  }

  if (dia>1){
  fecha_ant[0] = dia - 1;
  fecha_ant[1] = mes;
  fecha_ant[2] = anio;
  }
  else if (dia == 1 && mes>1){
  fecha_ant[0] = dias_mes_ant;
  fecha_ant[1] = mes_ant;
  fecha_ant[2] = anio;
  }
  else if (dia == 1 && mes==1){
  fecha_ant[0] = 31;
  fecha_ant[1] = 12;
  fecha_ant[2] = anio - 1;
  }

  ultimo[0] = dias_mes;
  ultimo[1] = mes;
  ultimo[2] = anio;
  
  printf("El dia siguiente es:");
  printf("%d / %d / %d",fecha_post[0],fecha_post[1],fecha_post[2]);
  printf("\nEl dia anterior es:");
  printf("%d / %d / %d",fecha_ant[0],fecha_ant[1],fecha_ant[2]);

  int falt = ult(dia,mes,anio);
  if (falt>0)
  {
  printf("\nFaltan %d dias para fin de mes",falt);
  printf("\nEl ultimo dia del mes es:");
  printf("%d / %d / %d",ultimo[0],ultimo[1],ultimo[2]);
  }
  else printf("\nHoy es el ultimo dia del mes");

  return 0;
}