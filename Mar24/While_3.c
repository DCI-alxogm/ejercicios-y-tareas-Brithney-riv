#include <stdio.h>

int main() {
    float temp_C, temp_K;
    float inicial = 100, final = 200, delta;
    int n = 10;
    char op[2]; 

    op[0] = 's'; 
    delta = (final - inicial) / n;

    while (op[0] == 's' || op[0] == 'S') { 
        temp_C = inicial;

        while (temp_C < final + delta / 2) { 
            temp_K = temp_C + 273.15;
            printf("%.2f °C  =  %.2f K\n", temp_C, temp_K);
            temp_C += delta;
        }

        printf("¿Deseas hacer otra operacion? (s/n): ");
        scanf("%1s", op); 
    }

    return 0;
}
