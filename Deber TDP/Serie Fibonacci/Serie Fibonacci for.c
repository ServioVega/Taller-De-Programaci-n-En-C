#include <stdio.h>

int main() {
    int num; // variable para almacenar el número de términos de la serie Fibonacci
    int t1 = 0, t2 = 1, nextTerm; // variables para almacenar los términos de la serie

    // Pedir al usuario que ingrese el número de términos de la serie
    printf("Ingrese el número de términos de la serie Fibonacci: ");
    scanf("%d", &num);

    // Mostrar el título de la serie
    printf("Serie Fibonacci:\n");

    // Utilizar un bucle for para generar y mostrar los términos de la serie
    for (int i = 0; i < num; i++) {
        // Mostrar el término actual
        printf("%d ", t1);

        // Calcular el próximo término de la serie
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    // Mostrar un salto de línea al final
    printf("\n");

    return 0;
}