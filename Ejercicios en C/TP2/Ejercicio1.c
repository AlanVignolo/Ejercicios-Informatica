#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{
int a[3]={3,56,7}, *p, **p1;
p=&a;
p1=&p;
p+=1;

printf("%d    %d    %d",a[0],p,**p1);
return 0;
}