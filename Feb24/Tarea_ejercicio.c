/* Revisi�n del ejercicio 19 de Febrero, escrito el 24 de Febrero*/


#include <stdio.h>
#include <math.h>

int main(){

    float x, y, z; //Coordenadas Cartesianas
    float r, theta, phi; //Coordenadas esf�ricas salida
    float rc, theta_c, zc; //Coordenadas cilindricas salida

   
    printf("Introduce los valores de las variables x, y, z que quieres convertir \n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
 
    //Realizo las operaciones de transformaci�n de coordenadas
    //Coordenadas esf�ricas
    r = sqrt(x*x+y*y);
    theta = atan(y/x);
    phi = acos(z/x);

    //Coordenadas cilindricas
    rc = sqrt(x*x+y*y);
    theta_c = atan(x/y);
    zc = z;
   
    //Salida
    printf("Las coordenadas esfericas son r=%f, theta=%f, phi=%f  \n", r, theta, phi);
    printf("Las coordenadas cilindricas son rc=%f, theta_c=%f, z=%f  \n", rc, theta_c, zc);
   // exit(0);
}
 