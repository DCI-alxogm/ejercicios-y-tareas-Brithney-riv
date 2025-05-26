#include <stdio.h>

   void cuadrado( );
    int main(){
       cuadrado();
       return(0);
    }

   void cuadrado (){
       float x, x2;
       printf("Introduce un numero:");
       scanf("%f", &x);
       x2=x*x;
       printf("EL cuadrado de %.2f es: %.2f\n", x,x2);
   }
