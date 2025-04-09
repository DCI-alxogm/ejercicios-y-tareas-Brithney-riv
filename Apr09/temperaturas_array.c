#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, N = 10;
    float numeros[N], func_eval[N];

    // Solicitar los valores de las temperaturas en Celsius
    for (i = 0; i < N; i++) {
        printf("Ingrese la temperatura en Celsius para %d: ", i);
        scanf("%f", &numeros[i]);
    }

    // Convertir a Kelvin y mostrar resultados
    for (i = 0; i < N; i++) {
        func_eval[i] = numeros[i] + 273.15; // Convertir Celsius a Kelvin
        // Temperatura en Celsius y la conversión a Kelvin
        printf("%d \t %.2f \t %.2f \n", i, numeros[i], func_eval[i]);
    }

    return 0;
}
