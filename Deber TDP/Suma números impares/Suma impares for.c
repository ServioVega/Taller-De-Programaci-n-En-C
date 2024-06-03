#include <stdio.h> // Incluimos la biblioteca estándar de entrada y salida

int main() { // Función principal del programa
    int n; // Declaramos la variable n para almacenar el número ingresado por el usuario
    int suma = 0; // Inicializamos la variable suma en 0
    int i; // Declaramos la variable i para utilizarlo como contador en el bucle for

    printf("Ingrese un número: "); // Pedimos al usuario que ingrese un número
    scanf("%d", &n); // Leemos el valor ingresado por el usuario y lo asignamos a la variable n

    for (i = 1; i <= n; i++) { // Iteramos desde 1 hasta n
        if (i % 2 != 0) { // Verificamos si el número actual es impar
            suma += i; // Si lo es, sumamos su valor a la variable suma
        }
    }

    printf("La suma de los primeros %d números impares es: %d\n", n, suma); // Mostramos el resultado

    return 0; // Finalizamos el programa con un valor de retorno 0
}