#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x3;
    int d = 5, e = 3, f = 2, g = 4, h = 6, i = 16;
    int x1, x2;

    // Pedir valores
    printf("Ingresa los valores de a, b y c (separados por espacios): ");
    scanf("%f %f %f", &a, &b, &c);

    // Validar que a no sea cero y que (b - c) no sea negativo para calcular las raices
    if (a == 0 || (b - c) < 0) {
        printf("Error: 'a' no puede ser cero y (b - c) debe ser mayor o igual a cero.\n");
        return 1;
    }

    // Operaciones
    x1 = d + e * (f * f * f - g);
    x2 = (h + f * e) / sqrt(i) + f;
    x3 = (sin(a + b * b) + cos(c / 2) * b) / (1 + exp(-a) + sqrt((b - c) / a));

    // Resultados
    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("x3 = %.2f\n", x3);

    return 0;
}
