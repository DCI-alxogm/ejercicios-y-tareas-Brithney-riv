#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Por favor, ingrese un numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);  // Mientras el número sea negativo o cero, se sigue pidiendo otro número al usuario

    printf("Ingresaste el número positivo: %d\n", numero);

    return 0;
}

