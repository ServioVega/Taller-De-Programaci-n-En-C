#include <stdio.h>

int main() {
    // Declarar variables para almacenar el número de términos y la suma
    int n, suma = 0, i = 1;

    // Pedir al usuario que ingrese el número de términos
    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    // Mostrar título
    printf("Suma de los primeros %d términos de la serie aritmética:\n", n);

    // Utilizar un bucle do-while para calcular la suma
    do {
        // Sumar el término actual a la suma
        suma += i;

        // Mostrar el término actual
        printf("%d", i);

        // Si no es el último término, mostrar un signo de suma
        if (i < n) {
            printf(" + ");
        }

        // Incrementar el contador
        i++;
    } while (i <= n);

    // Mostrar el resultado final
    printf(" = %d\n", suma);

    return 0;
}