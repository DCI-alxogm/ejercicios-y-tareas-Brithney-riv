#include <stdlib.h>

float calcularCuadrado(float num) {
    return num * num;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    float x = atof(argv[1]);
    float x2 = calcularCuadrado(x);

    exit((int)x2); 

    return 0;
}
