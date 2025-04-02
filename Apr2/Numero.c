#include <stdio.h>
 
int main() {
 
    int inicio, fin, incremento, x;
 
    // Solicitar al usuario los valores de las variables 
    printf("Introduce el valor inicial, final e incremento  de X:\n ");
    scanf("%d %d %d", &inicio, &fin, &incremento);
 
    // Comprobamos que el incremento no sea un número igual a 0
    if (incremento == 0) {
        printf("El incremento no puede ser cero.\n");
        return 1; 
    }
 
    x = inicio;
 
    // Utilizando  do...while 
    do {
        // Calcular el valor de la función x^2
        printf("X: %d, su cuadrado es: %d\n", x, x * x);
 
        x += incremento;
 
    } while (x <= fin); 
 
    return 0;
}
