#include <stdio.h>

int main() {
    int num_puntos;
    float delta;
    float puntos[1000]; 
    int filas;
    int columnas;
    int contador;
    int i, j;

    printf("Ingrese el numero total de puntos: ");
    scanf("%d", &num_puntos);

    if (num_puntos > 500) {  
        printf("El maximo de puntos es: 500\n");
        return 1;
    }

    printf("Ingrese el espaciado (delta) entre puntos: ");
    scanf("%f", &delta);

    filas = 1;
    while (1) {
        columnas = num_puntos / filas;
        if (num_puntos % filas != 0) {
            columnas++;
        }
        if (filas >= columnas) {
            break;
        }
        filas++;
    }

    // Puntos
    contador = 0;
    for (i = 0; i < filas && contador < num_puntos; i++) {
        for (j = 0; j < columnas && contador < num_puntos; j++) {
            puntos[contador * 2] = j * delta;
            puntos[contador * 2 + 1] = i * delta;
            contador++;
        }
    }

    printf("\nPunto\tX\t\tY\n");
    for (i = 0; i < num_puntos; i++) {
        printf("%d\t%.2f\t\t%.2f\n", i + 1, puntos[i * 2], puntos[i * 2 + 1]);
    }

    return 0;
}
