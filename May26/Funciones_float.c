#include <stdio.h>

   float cuadrado(float _x);
    int main(){
       float x, x2;
       printf("Introduce un numero:");
       scanf("%f", &x);
       x2=cuadrado(x);
       printf("EL cuadrado de %.2f es: %.2f\n", x,x2);

       return(0);
    }

    float cuadrado (float _x){
          return _x*_x;
   }
