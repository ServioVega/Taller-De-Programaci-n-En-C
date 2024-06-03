#include <stdio.h>

int main() {
    int n; // Declarar variable para almacenar el valor de n
    float suma = 0.0; // Declarar variable para almacenar la suma, inicializada en 0.0

    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Bucle for que se ejecuta desde i = 1 hasta i = n
        suma += 1.0 / i; // Calcular el término actual (1/i) y sumarlo a la variable suma
    }

    printf("La suma de la serie es: %.4f\n", suma); // Mostrar el resultado con 4 decimales

    return 0;
}