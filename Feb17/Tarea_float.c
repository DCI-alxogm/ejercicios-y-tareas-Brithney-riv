/*Tarea 17 de Febrero: operaciones con números reales proporcionados por el usuario*/

#include <stdio.h>

int main()
{
   float a,b,c,d;   //Variables
   float e1, e2, e3, e4;

  printf("introduce el valor de a:");
  scanf("%f",&a);
  printf("introduce el valor de b:");
  scanf("%f",&b);
  printf("introduce el valor de c:");
  scanf("%f",&c);
  printf("introduce el valor de d:");
  scanf("%f",&d);
  
  //Operaciones
  e1=(a+b)*c/d;
  e2=((a+b)*c)/d;
  e3=(a+b)*(c/d);
  e4=a+b*c/d;

  //Resultados
  printf("e=(a+b)*c/d=%f\n",e1);
  printf("e=((a+b)*c)/d=%f\n", e2);
  printf("e=(a+b)*(c/d)=%f\n", e3);
  printf("e=(a+b*c/d=%f\n", e4);
}

