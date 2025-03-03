/*Coordenadas o temperatura*/
#include <stdio.h>
#include <stdlib.h>
# include <math.h>

 int main()
{
    int coordenadas, temperatura;
    float x, y, z; //Coordenadas Cartesianas
    float r, theta, phi; //Coordenadas esf?ricas salida
    float rc, theta_c, zc; //Coordenadas cilindricas salida
    float TC, TK;
  
   //Instrucciones al usuario 
   printf("¿Quieres convertir coordenadas o temperatura? ?n");
   scanf("%i", &coordenadas)
   sacnf






   printf("Conversion de coordenadas cartesianas a esfericas y clindricas\n");
   printf("Introduce los valores de las variables x, y, z que quieres convertir \n");
   scanf("%f", &x);
   scanf("%f", &y);
   scanf("%f", &z);

   //Realizo las operaciones de transformaci?n de coordenadas
   //Operaciones para esfericas
    r = sqrt(x*x+y*y);
    theta = atan(y/x);
    phi = acos(z/x);
    
    //Operaciones para cilindricas
    rc = sqrt(x*x+y*y);
    theta_c = atan(x/y);
    zc = z;

   //Salida
   printf("Las coordenadas esfericas obtenidas son r=%f, theta=%f, phi=%f  \n", r, theta, phi);
   printf("Las coordenadas cilindricas obtenidas son rc=%f, theta_c=%f, z=%f  \n", rc, theta_c, zc);
   // exit(0);
 
float TC, TK;

printf("¿Cual es la temperarura que te gustaria convertir en Celcius?\n");
scanf("%f", &TC);

TK=TC+273.15;
printf("Tu temperatura en Kelvin es: %f \n", TK);
}