#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(6 * sizeof(int)); 
    int suma = 0;

    if (ptr == NULL) { 
        printf("Error \n");
        return 1;
    }

    printf("Ingrese 6 numeros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", ptr + i); 
    }

    for (int i = 0; i < 6; i++) {
        suma += *(ptr + i); // Sumar los valores
    }

    printf("La suma de los números es: %d\n", suma);

    free(ptr); // Liber la memoria
    return 0;
}
