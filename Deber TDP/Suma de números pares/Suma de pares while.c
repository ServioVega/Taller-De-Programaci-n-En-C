#include <stdio.h>

int main() {
    int n; // Declaramos la variable n para almacenar el número ingresado por el usuario
    int suma = 0; // Inicializamos la variable suma en 0
    int i = 2; // Inicializamos la variable i en 2, que es el primer número par

    printf("Ingrese un número: "); // Pedimos al usuario que ingrese un número
    scanf("%d", &n); // Leemos el valor ingresado por el usuario y lo asignamos a la variable n

    // Iteramos mientras i sea menor o igual que n
    while (i <= n) {
        // Sumamos el valor actual de i a la variable suma
        suma += i;
        // Incrementamos i en 2 para pasar al siguiente número par
        i += 2;
    }

    // Mostramos el resultado, es decir, la suma de todos los números pares desde 1 hasta n
    printf("La suma de los números pares desde 1 hasta %d es: %d\n", n, suma);

    return 0;
}