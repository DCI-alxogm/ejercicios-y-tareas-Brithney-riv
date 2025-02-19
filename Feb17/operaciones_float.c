/*Programa 17 de Febrero: Jerarquía de operaciones con enteros*/

#include <stdio.h>

int main()
{
   float a,b,c,d;
   int e1, e2, e3, e4;

  a=-9;
  b=7;
  c=3;
  d=-2;
  e1=(a+b)*c/d;
  e2=((a+b)*c)/d;
  e3=(a+b)*(c/d);
  e4=a+b*c/d;

  printf("e=(a+b)*c/d=%d\n",e1);
  printf("e=((a+b)*c)/d=%d\n", e2);
  printf("e=(a+b)*(c/d)=%d\n", e3);
  printf("e=(a+b*c/d=%d\n", e4);
}
