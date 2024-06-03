#include <stdio.h>

int main() {
    int n, suma = 0, i = 1; // Declarar variables

    printf("Ingrese el número de términos: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    do {
        suma += i * i; // Calcular el cuadrado del número actual (i) y sumarlo a la variable suma
        i++; // Incrementar i en 1
    } while (i <= n); // Condición del bucle: mientras i sea menor o igual que n

    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, suma); // Mostrar el resultado

    return 0;
}