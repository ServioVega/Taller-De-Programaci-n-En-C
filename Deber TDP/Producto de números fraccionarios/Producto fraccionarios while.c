#include <stdio.h>

int main() {
    int n; // Declarar variable para almacenar el valor de n
    float producto = 1.0; // Declarar variable para almacenar el producto, inicializada en 1.0
    int i = 1; // Declarar variable contador, inicializada en 1

    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    while (i <= n) {
        producto *= 1.0 / i; // Calcular el término actual (1/i) y multiplicarlo por el producto
        i++; // Incrementar i en 1
    }

    printf("El producto de la serie es: %.4f\n", producto); // Mostrar el resultado con 4 decimales

    return 0;
}