#include <stdio.h>

int main (){
char op;
float valor, resultado;

 printf("Selecciona que deseas realizar: \n");
 printf(" 'a' para convertir de °C a K \n");
 printf(" 'b' para convertir de  K a °C \n");
 scanf("%c", &op);

 printf("Ingrese el valor de su temperatura: \n");
 scanf("%f", &valor);     

       switch(op) {
        case 'a': //Convertir celsius a Kelvin
                  resultado = valor + 273.15;
                  printf("%f °C, es igual a %f K \n", valor, resultado);
                  break;
        case 'b': //Convertir Kelvin a Celsius
                  resultado = valor - 273.15;
                  printf("%f K, es igual a %f °C \n", valor, resultado);
                  break;

        default:
               printf("Opcion no valida \n");
               break;
                   }
  printf("Fin \n");
  return(0);
}
