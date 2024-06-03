#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 0;

    // Pedir al usuario que ingrese el número de términos de la serie
    printf("Ingrese el número de términos de la serie Fibonacci: ");
    scanf("%d", &n);

    // Mostrar el título de la serie
    printf("Serie Fibonacci: ");

    // Utilizar un bucle do-while para generar y mostrar los términos de la serie
    do {
        // Mostrar el término actual
        printf("%d ", t1);

        // Calcular el próximo término de la serie
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        // Incrementar el contador
        i++;
    } while (i < n);

    // Mostrar un salto de línea al final
    printf("\n");

    return 0;
}