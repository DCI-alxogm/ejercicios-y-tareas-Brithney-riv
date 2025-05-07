#include <stdio.h>

int main() {
    FILE *archivo;
    int n = 20; 
    int i;
    float lim_inferior, lim_superior;
    float paso;
    float x[20], fx[20];  
    char nombre_archivo[20]; // Nombre del archivo

    printf("Ingrese el nombre del archivo: ");
    scanf("%s",nombre_archivo);

    archivo = fopen(nombre_archivo, "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fscanf(archivo, "%f", &lim_inferior);
    fscanf(archivo, "%f", &lim_superior);
    fclose(archivo);

    paso = (lim_superior - lim_inferior) / (n - 1);

    for (i = 0; i < n; i++) {
        x[i] = lim_inferior + i * paso;
        fx[i] = x[i] * x[i] + 1;
    }

    for (i = 0; i < n; i++) {
        printf("x = %.2f, f(x) = %.2f\n", x[i], fx[i]);
    }

    return 0;
}
