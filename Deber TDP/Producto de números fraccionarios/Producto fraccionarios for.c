#include <stdio.h>

int main() {
    int n; // Declarar variable para almacenar el valor de n
    float producto = 1.0; // Declarar variable para almacenar el producto, inicializada en 1.0

    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    // Bucle for que se ejecuta desde i = 1 hasta i = n
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i; // Calcular el término actual (1/i) y multiplicarlo por el producto
    }

    printf("El producto de la serie es: %.4f\n", producto); // Mostrar el resultado con 4 decimales

    return 0;
}