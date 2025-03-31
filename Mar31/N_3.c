#include <stdio.h>

int main() {
    int numero;
    char continuar;

    do {
        // Solicitar un número positivo
        do {
            printf("Por favor, ingrese un numero positivo: ");
            scanf("%d", &numero);
        } while (numero <= 0);  // Si el número es negativo o 0 se pide otro al usuario

        printf("Ingresaste el número positivo: %d\n", numero);

        // Preguntar para hacer otro cálculo 
        printf("¿Deseas ingresar otro número? (s para sí, cualquier otra para no): ");
        scanf(" %c", &continuar);  

    } while (continuar == 's' || continuar == 'S'); 

    printf("¡Hasta la próxima!\n");

    return 0;
}
