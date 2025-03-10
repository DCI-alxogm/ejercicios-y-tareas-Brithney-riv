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
                      printf("%.2f °C, es igual a %.2f K \n");
                      break:
            case 'b': //Convertir Kelvin a Celsius
                      resultado = valor - 273.15;
                      printf("%.2f K, es igual a %.2f °C \n", valor, resultado);
                      break:
        
            default:
                   printf("Opción no valida \n");
                   break;
                           }
      printf("Fin \n");
      return(0);
}