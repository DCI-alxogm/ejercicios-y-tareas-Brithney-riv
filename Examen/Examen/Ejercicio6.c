#include <stdio.h>

int main() {
    //Declaración de variables 
    int opcion;
    float base, altura, area, celsius, fahrenheit;
    int numero1, numero2, suma_digitos;

    //Menú de opciones
    printf("Seleccione una opcion:\n");
    printf("1. Calcular el área de un rectángulo\n");
    printf("2. Convertir Celsius a Fahrenheit\n");
    printf("3. Comprobar si un número es múltiplo de otro número\n");
    printf("4. Sumar los dígitos de un número de dos cifras\n");
    printf("5. Salir\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: //Calcular el área de un rectángulo
            printf("Ingrese la base y altura del rectángulo separadas por espacio: ");
            scanf("%f %f", &base, &altura);
            area = base * altura;
            printf("El área del rectángulo es: %.2f\n", area);
            break;

        case 2: //Convertir Celsius a Fahrenheit
            printf("Ingrese la temperatura en Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
            break;

	case 3: //Comprobar si un número es múltiplo de otro número
            printf("Ingrese dos números separados por espacio: ");
            scanf("%d %d", &numero1, &numero2);

            if (numero2 != 0) {
            if (numero1 % numero2 == 0) {
               printf("%d es múltiplo de %d\n", numero1, numero2);
            } else {
               printf("%d no es múltiplo de %d\n", numero1, numero2);
            }
            } else {
               printf("El segundo número no puede ser cero.\n");
            }
            break;

        case 4: //Sumar los dígitos de un número de dos cifras
            printf("Ingrese un número de dos cifras: ");
            scanf("%d", &numero1);

            if (numero1 >= 10 && numero1 <= 99) {
                suma_digitos = (numero1 / 10) + (numero1 % 10);
                printf("La suma de los dígitos de %d es: %d\n", numero1, suma_digitos);
            } else {
                printf("Por favor, ingrese un número de dos cifras.\n");
            }
            break;

        case 5: //Salir del programa
            printf("¡Hasta la proxima!\n");
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
