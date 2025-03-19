/*
19 de Febrero del 202
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
float TC, TK;

printf("¿Cual es la temperarura que te gustaria convertir en Celcius?\n");
scanf("%f", &TC);

TK=TC+273.15;
printf("Tu temperatura en Kelvin es: %f \n", TK);
}
