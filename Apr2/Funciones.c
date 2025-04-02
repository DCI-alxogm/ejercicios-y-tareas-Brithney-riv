#include <stdio.h>
#include <math.h>

int main() {
    double inicio, fin, espaciado, x;

    // Solicitar al usuario el valor de las varibles 
    printf("Ingrese el valor inicial, final y espaciado del intervalo:\n ");
    scanf("%lf %lf %lf", &inicio, &fin, &espaciado);


    // Validar que el espaciado sea positivo
    if (espaciado <= 0) {
        printf("Error, el espaciado debe ser un número positivo.\n");
        return 1;
    }

    printf("\nResultados:\n");
    printf("%-10s %-15s %-15s %-15s %-15s %-15s\n", "x", "exp(x)", "log(x)", "sin(x)", "cos(x)", "sqrt(x)");
    printf("\n");

    // Usando  do...while 
    x = inicio; 
    do {
        double exp_x = exp(x);
        double log_x = (x > 0) ? log(x) : 0.0; 
        double sin_x = sin(x);
        double cos_x = cos(x);
        double sqrt_x = (x >= 0) ? sqrt(x) : 0.0; 

        printf("%-10.4f %-15.4f %-15.4f %-15.4f %-15.4f %-15.4f\n", x, exp_x, log_x, sin_x, cos_x, sqrt_x);

        x += espaciado; 
    } while (x <= fin); 

    return 0;
}
