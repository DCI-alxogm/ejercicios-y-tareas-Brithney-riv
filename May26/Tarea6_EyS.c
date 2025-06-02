#include <stdio.h>
#include <math.h>

#define MAX_PRIMOS 100

void calcularPrimos(int inicio, int fin, int primos[], int* contador) {
    *contador = 0;
    int i = inicio;

    while (i <= fin) {
        int esPrimo = 1;
        if (i < 2) {
            esPrimo = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    esPrimo = 0;
                    break;
                }
            }
        }

        if (esPrimo) {
            primos[(*contador)++] = i;
            if (*contador >= MAX_PRIMOS) {
                break;
            }
        }
        i++;
    }
}

void imprimirPrimos(int primos[], int contador) {
    printf("Números primos en el intervalo:\n");
    int linea = 0;
    for (int i = 0; i < contador; i++) {
        printf("%d ", primos[i]);
        linea++;
        if (linea == 20) {
            printf("\n");
            linea = 0;
        }
    }
    printf("\n");
}

int main() {
    int inicio, fin;
    int primos[MAX_PRIMOS];
    int contador;

    // Solicitar valores de entrada
    printf("Ingresa el valor inicial del intervalo: ");
    scanf("%d", &inicio);
    printf("Ingresa el valor final del intervalo: ");
    scanf("%d", &fin);

    calcularPrimos(inicio, fin, primos, &contador);
    imprimirPrimos(primos, contador);

    return 0;
}
