/*
Febrero 12, 2025
Brithney Macias
Primer programa, mostrando estructura, definición de variables, imprimir y leer valores de variables en la pantalla.
*/
   #include <stdlib.h>
   #include <stdio.h>

   int main()
   
   {
   char nombre [10];
   int edad;
   float temperatura;
 
   printf ("Cual es tu nombre? \n");
   scanf ("%s", nombre);
   printf ("Hola, %s este es el segundo programa del curso PB2021 \n", nombre);
   
   printf ("Introduce tu edad \n");
   scanf ("%i", &edad);   
   printf ("¿Que temperatura marco el termometro la ultima vez que fuiste al supermercado \n");
   scanf ("%f", &temperatura);

   printf("Tu edad es: %i\n", edad);
   printf("Tu ultimo registro de temperatura fue: %f\n", temperatura);   
   }
