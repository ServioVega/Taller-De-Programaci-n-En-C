#include <stdio.h>

int main() {
    // Declarar variables
    int n, i = 1; // Contador para el bucle
    int producto = 1; // Inicializar producto en 1
    int terme_actual = 2; // Inicializar término actual en 2 (primer término de la serie)

    // Pedir al usuario que ingrese el número de términos
    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    // Mostrar título
    printf("Producto de los primeros %d términos de la serie geométrica: ", n);

    // Utilizar un bucle while para calcular el producto
    while (i <= n) {
        // Mostrar el término actual
        printf("%d", terme_actual);

        // Incrementar el producto por el término actual
        producto *= terme_actual;

        // Incrementar el término actual para la próxima iteración
        terme_actual *= 2;

        // Incrementar el contador
        i++;

        // Mostrar una coma si no es el último término
        if (i <= n) {
            printf(", ");
        }
    }

    // Mostrar el resultado final
    printf("\n");

    return 0;
}