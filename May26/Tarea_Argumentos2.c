#include <stdio.h>

float calcularCuadrado() {
    float x = 5; // Número fijo sin entrada 
    return x * x;
}

int main() {
    float resultado = calcularCuadrado();
    return (int)resultado; // Retorna el cuadrado como salida
}
