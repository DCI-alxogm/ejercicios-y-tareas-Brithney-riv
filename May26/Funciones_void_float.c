#include <stdio.h>

    void cuadrado(float _x);
    int main(){
       float x;
       printf("Introduce un numero:");
       scanf("%f", &x);
       cuadrado(x);
       return(0);
    }

    void cuadrado (float _x){
            float x2;
            x2=_x*_x;
	    printf("EL cuadrado de %.2f es: %.2f\n", _x,x2);
   }
