#include <stdio.h>
int main() {
        
          int numero, residuo;
          int opc;
 

          leernumero:
          printf("Introduce el numero a revisar \n");
          scanf("%i", &numero);
          residuo=numero%2;
          if(residuo==0) {
          printf("El numero %i es par \n", numero);
          } else{
          printf("EL numero %i es impar \n", numero); }
         
          printf("quieres revisar otro numero? teclea 0 para si, 1 para no \n");
          scanf("%i", &opc);
          if (opc==0){
                    goto leernumero;
              }else{
              printf("Hasta la proxima \n");
              }

             }
