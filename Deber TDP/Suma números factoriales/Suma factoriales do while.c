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

    // Declarar variable entera para iterar desde 1 hasta n
    int i = 1;

    // Bucle do-while para iterar desde 1 hasta n
    do {
        // Calcular el factorial actual
        factorial = 1;
        int j = 1;
        do {
            factorial *= j; // Multiplicar el factorial actual por j
            j++;
        } while (j <= i);

        // Sumar el factorial actual a la suma total
        suma += factorial;

        // Incrementar i en 1
        i++;
    } while (i <= n);

    // Mostrar el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma);

    return 0;
}