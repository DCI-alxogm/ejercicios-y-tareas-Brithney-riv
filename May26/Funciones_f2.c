#include <stdio.h>

float cuadrado();

int main() {
    float x2;
    x2 = cuadrado();
    printf("El cuadrado del número ingresado es: %.2f\n", x2);
    return 0;
}

float cuadrado() {
    float x;
    printf("Introduce un número: ");
    scanf("%f", &x);
    return x * x;
}
