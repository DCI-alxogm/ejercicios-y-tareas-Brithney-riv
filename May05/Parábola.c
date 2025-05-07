#include <stdio.h>

int main() {
    FILE *archivo;
    int n, i;
    float lim_inferior, lim_superior;
    float paso, x, resultado;
    char nombre_archivo[50]; // Para guardar el nombre del archivo

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombre_archivo);

    archivo = fopen(nombre_archivo, "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fscanf(archivo, "%d", &n);
    fscanf(archivo, "%f", &lim_inferior);
    fscanf(archivo, "%f", &lim_superior);
    fclose(archivo);

    paso = (lim_superior - lim_inferior) / (n - 1);
    x = lim_inferior;

    for (i = 0; i < n; i++) {
        resultado = x * x + 1;
        printf("x = %.2f, f(x) = %.2f\n", x, resultado);
        x += paso;
    }

    return 0;
}
