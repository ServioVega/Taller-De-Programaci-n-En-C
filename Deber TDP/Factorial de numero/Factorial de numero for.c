#include <stdio.h>

int main() {
    // Declarar variables para almacenar el número ingresado por el usuario y el factorial
    int num, factorial = 1;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Mostrar título
    printf("Factoriales desde 1 hasta %d:\n", num);

    // Utilizar un bucle for para calcular y mostrar los factoriales
    for (int i = 1; i <= num; i++) {
        // Calcular el factorial actual
        factorial *= i;

        // Mostrar el factorial actual
        printf("%d! = %d\n", i, factorial);
    }

    return 0;
}