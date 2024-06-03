#include <stdio.h>

int main() {
    int n; // Declaramos la variable n para almacenar el número ingresado por el usuario
    int suma = 0; // Inicializamos la variable suma en 0

    printf("Ingrese un número: "); // Pedimos al usuario que ingrese un número
    scanf("%d", &n); // Leemos el valor ingresado por el usuario y lo asignamos a la variable n

    // Iteramos desde 2 (el primer número par) hasta n, incrementando en 2 en cada iteración
    for (int i = 2; i <= n; i += 2) {
        // Sumamos el valor actual de i a la variable suma
        suma += i;
    }

    // Mostramos el resultado, es decir, la suma de todos los números pares desde 1 hasta n
    printf("La suma de los números pares desde 1 hasta %d es: %d\n", n, suma);

    return 0;
}