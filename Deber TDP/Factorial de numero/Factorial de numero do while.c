#include <stdio.h>

int main() {
    int num, i = 1, factorial = 1;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Mostrar título
    printf("Factoriales desde 1 hasta %d:\n", num);

    // Utilizar un bucle do-while para calcular y mostrar los factoriales
    do {
        // Calcular el factorial actual
        factorial *= i;

        // Mostrar el factorial actual
        printf("%d! = %d\n", i, factorial);

        // Incrementar el contador
        i++;
    } while (i <= num);

    return 0;
}