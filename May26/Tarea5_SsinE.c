#include <stdio.h>
#include <math.h>

#define MAX_PRIMOS 100

int primos[MAX_PRIMOS];
int contador = 0;

int obtenerInicio() {
    return 10; // Valor predefinido
}

int obtenerFin() {
    return 100; // Valor predefinido
}

int* calcularPrimos(int* cantidad) {
    int inicio = obtenerInicio();
    int fin = obtenerFin();
    
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
            primos[contador++] = i;
            if (contador >= MAX_PRIMOS) {
                break;
            }
        }
        i++;
    }

    *cantidad = contador;
    return primos;
}

void imprimirPrimos(int* primos, int cantidad) {
    printf("Números primos en el intervalo:\n");
    int linea = 0;
    for (int i = 0; i < cantidad; i++) {
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
    int cantidad;
    int* primosLista = calcularPrimos(&cantidad);
    imprimirPrimos(primosLista, cantidad);
    return 0;
}
