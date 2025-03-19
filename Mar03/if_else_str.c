#include <stdio.h>
#include <string.h>
int main() {
        
          int numero, residuo;
          int opc[2];
 

          leernumero:
          printf("Introduce el numero a revisar \n");
          scanf("%i", &numero);
          residuo=numero%2;
          if(residuo==0) {
          printf("El numero %i es par \n", numero);
          } else{
          printf("EL numero %i es impar \n", numero); }
         
          printf("quieres revisar otro numero? \n");
          scanf("%s", opc);
          if (strcmp(opc, "si")==0){
                    goto leernumero;
              }else if (strcmp(opc, "no")==1){
              printf("Hasta la proxima \n");
              }else{
              printf("Solo acepto si o no \n");
              }

             }
       
