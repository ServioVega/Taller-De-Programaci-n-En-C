#include <stdio.h>

int main() {
    // Declarar variables
    int n, i;
    int producto = 1; // Inicializar producto en 1

    // Pedir al usuario que ingrese el número de términos
    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    // Mostrar título
    printf("Producto de los primeros %d términos de la serie geométrica: ", n);

    // Declarar variable para el término actual
    int terme_actual = 2; // Inicializar término actual en 2 (primer término de la serie)

    // Utilizar un bucle for para calcular el producto
    for (i = 1; i <= n; i++) {
        // Multiplicar el producto por el término actual
        producto *= terme_actual;

        // Mostrar el término actual
        printf("%d", terme_actual);

        // Si no es el último término, mostrar una coma
        if (i < n) {
            printf(", ");
        }

        // Incrementar el término actual para la próxima iteración
        terme_actual *= 2; // Incrementar término actual multiplicándolo por 2
    }

    // Mostrar el resultado final
    printf("\n");

    return 0;
}