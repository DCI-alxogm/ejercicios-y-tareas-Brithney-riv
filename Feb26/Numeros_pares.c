/* Programa con condicionales para n�meros pares e impares*/

  #include <stdio.h>
  #include <stdlib.h>

  int main ()
  {
     int numero;
     int residuo;
     
    //Intrucciones incio
    printf ("Introduce tu numero \n");
    scanf ("%i", &numero);
    
     //Operaci�n 
     residuo=numero%2;
     
    //Condicional
    if(residuo==0){
    printf("Es par \n");}
    else {
    printf("Es impar \n");}
    
   }
    
