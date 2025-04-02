#include <stdio.h>
#include <math.h>

int main() {
    int inicio, fin;

    do { 
        // Solicitar intervalo
        printf("Ingresa el valor inicial del intervalo: ");
        scanf("%d", &inicio);
        printf("Ingresa el valor final del intervalo: ");
        scanf("%d", &fin);

        if (inicio > fin) {
            printf("El valor inicial debe ser menor o igual al final. Intenta de nuevo.\n");
            continue; 
        }

        int primos[100]; 
        int contador = 0;

        int i = inicio;
        do {
            // Verificar si el número es primo
            int esPrimo = 1; 
            if (i < 2) {
                esPrimo = 0; 
            } else {
                int j = 2;
                do {
                    if (i % j == 0) {
                        esPrimo = 0; // No es primo
                        break;
                    }
                    j++;
                } while (j * j <= i);
            }

            if (esPrimo) {
                primos[contador++] = i;
                if (contador >= 100) {
                    break; // Limite de 100 números primos
                }
            }
            i++;
        } while (i <= fin);

        if (contador > 100) {
            printf("El intervalo contiene más de 100 números primos. Ingresa un intervalo más pequeño.\n");
        } else {
            // Imprimir los números primos en renglones de 20 números máximo
            printf("Números primos en el intervalo:\n");
            int linea = 0;
            int i = 0;
            do {
                printf("%d ", primos[i]);
                linea++;
                if (linea == 20) { // Imprimir 20 números por línea
                    printf("\n");
                    linea = 0;
                }
                i++;
            } while (i < contador);
            printf("\n");
            break; // Salir si se cumplen todas las condiciones
        }
    } while (1); // Repetir hasta que se cumplan las condiciones

    return 0;
}
