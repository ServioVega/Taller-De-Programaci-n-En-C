#include <stdio.h>

int main() {
    // Declaramos la variable n para almacenar el número de términos que se van a sumar
    int n;

    // Pedimos al usuario que ingrese el valor de n
    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    // Inicializamos la variable suma en 0, que almacenará la suma de los cuadrados
    int suma = 0;

    // Inicializamos la variable i en 1, que será el contador del bucle
    for (int i = 1; i <= n; i++) {
        // Calculamos el cuadrado del número actual (i) y lo sumamos a la variable suma
        suma += i * i;
    }

    // Mostramos el resultado, es decir, la suma de los cuadrados de los primeros n números naturales
    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, suma);

    return 0;
}