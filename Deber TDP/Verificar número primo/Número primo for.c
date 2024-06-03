#include <stdio.h>

int main() {
    // Declarar variable para almacenar el número ingresado por el usuario
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Declarar variable para indicar si el número es primo
    int es_primo = 1;

    // Utilizar un bucle for para iterar desde 2 hasta la raíz cuadrada del número
    for (int i = 2; i * i <= numero; i++) {
        // Si el número es divisible entre i, no es primo
        if (numero % i == 0) {
            es_primo = 0;
            break; // Salir del bucle for
        }
    }

    // Mostrar el resultado
    if (es_primo == 1) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}