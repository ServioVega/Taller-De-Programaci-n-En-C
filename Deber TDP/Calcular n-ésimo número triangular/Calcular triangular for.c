#include <stdio.h>

// Función principal del programa
int main() {
    // Declarar variable entera para almacenar el valor de n
    int n;

    // Pedir al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Declarar variable entera para almacenar el número triangular
    int numero_triangular = 0;

    // Bucle for que itera desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        // Sumar el valor de i al número triangular
        numero_triangular += i;
    }

    // Mostrar el resultado utilizando printf
    printf("El número triangular número %d es: %d\n", n, numero_triangular);

    // Devolver 0 para indicar que el programa se ejecutó correctamente
    return 0;
}