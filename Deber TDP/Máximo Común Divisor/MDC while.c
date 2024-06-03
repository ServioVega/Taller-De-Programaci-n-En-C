#include <stdio.h>

// Función para calcular el máximo común divisor (MCD) de dos números
int calcularMCD(int num1, int num2) {
    int i, mcd;

    // Inicializamos el MCD en el valor más grande de los dos números
    mcd = num1 > num2 ? num2 : num1;

    // Inicializamos el contador en el MCD
    i = mcd;

    // Mientras el contador sea mayor que 0
    while (i > 0) {
        // Verificamos si el número actual es divisor de ambos números
        if (num1 % i == 0 && num2 % i == 0) {
            // Si es divisor, actualizamos el MCD
            mcd = i;
            break;
        }
        // Decrementamos el contador
        i--;
    }

    // Retornamos el MCD calculado
    return mcd;
}

int main() {
    int num1, num2, mcd;

    // Pedimos al usuario que ingrese dos números
    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);

    // Calculamos el MCD de los dos números
    mcd = calcularMCD(num1, num2);

    // Mostramos el resultado
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0;
}