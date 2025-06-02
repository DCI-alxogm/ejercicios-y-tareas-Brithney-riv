#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_PRIMOS 100

int primos[MAX_PRIMOS];
int contador = 0;

void calcularPrimos(int inicio, int fin) {
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
}

void imprimirPrimos() {
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

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <inicio> <fin>\n", argv[0]);
        return 1;
    }

    int inicio = atoi(argv[1]);
    int fin = atoi(argv[2]);

    calcularPrimos(inicio, fin);
    imprimirPrimos();
    
    return 0;
}
