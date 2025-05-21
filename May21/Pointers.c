#include <stdio.h>

  int main(){
     
     int var=20;
     int *ip;
     ip=&var;
   
    printf("La dirección de la variable var es %p \n",&var);
    printf("El valor de la variable ip es %p \n",ip);
    printf("EL valor descrito en la dirección %p es: %d \n", ip, *ip);
    
    return 0;
   }
