#include <stdio.h>

int main() {
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int es_primo = 1;
    int i = 2;

    while (i * i <= numero) {
        // Si el número es divisible entre i, no es primo
        if (numero % i == 0) {
            es_primo = 0;
            break; // Salir del bucle while
        }
        i++;
    }

    // Mostrar el resultado
    if (es_primo == 1) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}