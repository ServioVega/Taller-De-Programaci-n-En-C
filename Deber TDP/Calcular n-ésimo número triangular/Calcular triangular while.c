#include <stdio.h>

int main() {
    int n; // Declarar variable entera para almacenar el valor de n
    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    int numero_triangular = 0; // Declarar variable entera para almacenar el número triangular
    int i = 1; // Inicializar variable para iterar desde 1

    while (i <= n) {
        numero_triangular += i; // Sumar el valor de i al número triangular
        i++; // Incrementar i en 1
    }

    printf("El número triangular número %d es: %d\n", n, numero_triangular); // Mostrar el resultado

    return 0;
}