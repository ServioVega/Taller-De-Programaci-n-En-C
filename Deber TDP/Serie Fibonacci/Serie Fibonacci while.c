#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    // Pedir al usuario que ingrese el número de términos de la serie
    printf("Ingrese el número de términos de la serie Fibonacci: ");
    scanf("%d", &n);

    // Mostrar el título de la serie
    printf("Serie Fibonacci: ");

    // Mostrar los dos primeros términos de la serie
    printf("%d, %d, ", t1, t2);

    // Generar y mostrar los términos de la serie utilizando un bucle while
    int i = 2;
    while (i < n) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    // Mostrar un salto de línea al final
    printf("\n");

    return 0;
}