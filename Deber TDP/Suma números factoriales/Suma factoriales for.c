#include <stdio.h>

int main() {
    // Declarar variable entera para almacenar el valor de n
    int n;
    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    // Declarar variable entera para almacenar la suma de los factoriales
    int suma = 0;

    // Declarar variable entera para almacenar el factorial actual
    int factorial = 1;

    // Bucle for para iterar desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        // Calcular el factorial actual
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j; // Multiplicar el factorial actual por j
        }

        // Sumar el factorial actual a la suma total
        suma += factorial;
    }

    // Mostrar el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma);

    return 0;
}