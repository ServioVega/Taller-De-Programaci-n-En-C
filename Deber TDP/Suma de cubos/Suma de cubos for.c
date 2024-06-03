#include <stdio.h>

int main() {
    // Declarar variable n para almacenar el valor de n
    int n, suma = 0;

    // Pedir al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Bucle for que se ejecuta desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        // Calcular el cubo del número actual (i) y sumarlo a la variable suma
        suma += i * i * i;
    }

    // Mostrar el resultado, es decir, la suma de los cubos de los primeros n números naturales
    printf("La suma de los cubos de los primeros %d números naturales es: %d\n", n, suma);

    return 0;
}