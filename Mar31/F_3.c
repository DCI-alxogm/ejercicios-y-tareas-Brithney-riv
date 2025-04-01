#include <stdio.h>

int main() {
    int inicio, fin, incremento, x;
    char repetir;

    do {
        // Solicitar los valores para x
        printf("Introduce el valor inicial de X: ");
        scanf("%d", &inicio);

        printf("Introduce el valor final de X: ");
        scanf("%d", &fin);

        printf("Introduce el valor del incremento: ");
        scanf("%d", &incremento);

        // Comprobamos que el incremento no sea 0
        if (incremento == 0) {
            printf("Error, el incremento no puede ser cero.\n");
            return 1;
        }

        x = inicio;
        do {
            // Calcular el valor de X²
            printf("X: %d, el cuadrado es: %d\n", x, x * x);

            // Incrementar x
            x += incremento;
        } while (x <= fin); // Continuar hasta que x llegue al valor final 

        // Preguntar al usuario si quiere repetir
        printf("¿Quieres calcular algo más? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S'); 
      
       printf("¡Hasta la próxima!\n");

    return 0;
}
