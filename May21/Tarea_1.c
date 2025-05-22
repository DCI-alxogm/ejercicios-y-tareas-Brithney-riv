#include <stdio.h>

int main() {
    int numeros[6]; 
    int suma = 0;
    int *ptr = numeros; 

    // Pedir al usuario los números
    printf("Ingrese 6 numeros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", ptr + i); // Guardar los valores usando el apuntador
    }

    // Calcular la suma usando el apuntador
    for (int i = 0; i < 6; i++) {
        suma += *(ptr + i);
    }

    printf("La suma de los números es: %d\n", suma);
    
    return 0;
}
