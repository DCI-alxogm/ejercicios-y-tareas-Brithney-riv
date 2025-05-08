#include <stdio.h>

int main() {
    FILE *archivo;  
    int n = 20;  
    int i;
    float lim_inferior, lim_superior;  
    float incremento;  
    float x[20], fx[20];  // Arrays para x y f(x)
    char nombre_archivo[20]; // Nombre del archivo a leer

    // Solicitar al usuario el nombre del archivo
    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombre_archivo);

    // Abrir el archivo
    archivo = fopen(nombre_archivo, "r");
    if (archivo == NULL) {  // Verificar si no hay errores
        printf("Error de archivo.\n");
        return 1;  // Terminar el programa si hay algún error
    }

    // Leer los límites desde el archivo
    fscanf(archivo, "%f", &lim_inferior);
    fscanf(archivo, "%f", &lim_superior);
    fclose(archivo); 

    // Calcular el incremento en valores de x
    incremento = (lim_superior - lim_inferior) / (n - 1);

    // Calcular los valores de x y f(x)
    for (i = 0; i < n; i++) {
        x[i] = lim_inferior + i * incremento;  
        fx[i] = x[i] * x[i] + 1;  
    }

    // Imprimir resultados
    for (i = 0; i < n; i++) {
        printf("x = %.2f, f(x) = %.2f\n", x[i], fx[i]);
    }

    return 0;  
}
