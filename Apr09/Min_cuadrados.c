#include <stdio.h>

int main() {
    int n, i;
    float x[100], y[100];
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    float m, b;

    
    printf("Ingresa el número de datos: ");
    scanf("%d", &n);

    // Pedir al usuario valores de x y y
    for (i = 0; i < n; i++) {
        printf("Ingrese x[%d]: ", i + 1);
        scanf("%f", &x[i]);
        printf("Ingrese y[%d]: ", i + 1);
        scanf("%f", &y[i]);

        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // Cálculo de la pendiente (m) y la ordenada al origen (b)
    m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    b = (sum_y - m * sum_x) / n;

    
    printf("\n Resultados:\n");
    printf(" x\t y\n");
    for (i = 0; i < n; i++) {
        printf("%.2f\t%.2f\n", x[i], y[i]);
    }

    printf("\nEcuación de la recta resultante:\n");
    printf("y = %.4fx + %.4f\n", m, b);

    return 0;
}
