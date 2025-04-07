#include <stdio.h>

int main() {
    float temp_inicial, temp_final, intervalo;
    float celsius, kelvin;

    // Pedimos al usuario los valores
    printf("Introduce la temperatura inicial en grados Celsius: ");
    scanf("%f", &temp_inicial);

    printf("Introduce la temperatura final en grados Celsius: ");
    scanf("%f", &temp_final);

    printf("Introduce el intervalo de incremento en grados Celsius: ");
    scanf("%f", &intervalo);

    // Verificamos que el intervalo no sea cero
    if (intervalo <= 0) {
        printf("El intervalo debe ser mayor que cero.\n");
        return 1;  // Salir si el intervalo no es válido
    }

    // Convertimos de Celsius a Kelvin e imprimimos los resultados
    printf("\nTemperaturas en Celsius y sus equivalentes en Kelvin:\n");
    for (celsius = temp_inicial; celsius <= temp_final; celsius += intervalo) {
        kelvin = celsius + 273.15;  // Fórmula de conversión a Kelvin
        printf("%.2f °C = %.2f K\n", celsius, kelvin);
    }

    return 0;
}
