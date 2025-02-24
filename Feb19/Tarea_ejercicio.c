/*Conversión de coordenadas cartesianas a esféricas y cilíndricas*/
#include <stdio.h>
#include <stdlib.h>
# include <math.h>

 int main()
{
   float x, y, z; //Variables para coordenadas cartesianas
   float r, theta, phi, rc; //Variables a calcular
 
  //Instrucciones al usuario 
  
  pintf("Conversion de coordenadas cartesianas a esfericas y clindricas\n");
  printf("¿Cuales son las coordenadas cartesianas que desea convertir?, ingrese x,y,z: \n");
  scanf("%f,%f,%f", &x, &y, &z);

  //Operaciones para esfericas
  r= sqrt(x*x + y*y + z*z);  //Radio esférico
  theta= atan2(x,y); //Theta (ángulo en el plano)
  phi= acos(z / r); //ángulo respecto a z
 
  //Operaciones para cilíndricas
   rc= sqrt(x*x + y*y); //Radio cilíndrico
   
  // No es neceario hacer más operaciones, pues ya fueron calculadas las demás variables

  printf("Se obtuvo  \n");
  
  //Resultados para coordenadas esféricas
  
  printf("Las coordenadas esfericas obtenidas son: \n");
  printf("%f, %f, %f\n", &r, &theta, &phi);
 
 //Resultados para coordenadas cilíndricas
 
 printf("Las coordenadas cilindricas obtenidas son: \n");
 printf("%f, %f, %f\n", &rc, &theta, &z);

}
