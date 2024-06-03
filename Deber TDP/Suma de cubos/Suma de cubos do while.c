#include <stdio.h>

int main() {
    int n, suma = 0, i = 1; // Declarar variables

    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    do {
        suma += i * i * i; // Calcular el cubo del número actual (i) y sumarlo a la variable suma
        i++; // Incrementar i en 1
    } while (i <= n);

    printf("La suma de los cubos de los primeros %d números naturales es: %d\n", n, suma); // Mostrar el resultado

    return 0;
}