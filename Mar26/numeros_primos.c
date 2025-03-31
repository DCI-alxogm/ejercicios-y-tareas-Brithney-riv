#include <stdio.h>
#include <math.h>

int main() {
    int inicio, fin;

    while (1) { // Repetir hasta que se cumplan las condiciones
        // Solicitar intervalo
        printf("Ingresa el valor inicial del intervalo: ");
        scanf("%d", &inicio);
        printf("Ingresa el valor final del intervalo: ");
        scanf("%d", &fin);

        if (inicio > fin) {
            printf("El valor inicial debe ser menor o igual al final. Intenta de nuevo.\n");
            continue; // Reintentar si el intervalo no es válido
        }

        int primos[100]; 
        int contador = 0;

        
        int i = inicio;
        while (i <= fin) {
            // Verificar si el número es primo
            int esPrimo = 1; 
            if (i < 2) {
                esPrimo = 0; 
            } else {
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        esPrimo = 0; // No es primo
                        break;
                    }
                }
            }

            if (esPrimo) {
                primos[contador++] = i;
                if (contador >= 100) {
                    break; // Limite de 100 números primos
                }
            }
            i++;
        }

        if (contador > 100) {
            printf("El intervalo contiene más de 100 números primos. Ingresa un intervalo más pequeño.\n");
        } else {
            // Imprimir los números primos en renglones de 20 números máximo
            printf("Números primos en el intervalo:\n");
            int linea = 0;
            for (i = 0; i < contador; i++) {
                printf("%d ", primos[i]);
                linea++;
                if (linea == 20) { // Imprimir 20 números por línea
                    printf("\n");
                    linea = 0;
                }
            }
            printf("\n");
            break; // Salir si se cumplen todas las condiciones
        }
    }

    return 0;
}

