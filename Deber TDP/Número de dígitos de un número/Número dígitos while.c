#include <stdio.h>

int main() {
    // Declarar variable para almacenar el número ingresado por el usuario
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Declarar variable para contar el número de dígitos
    int contador_digitos = 0;

    // Utilizar un bucle while para contar el número de dígitos
    int numero_original = numero;
    while (numero != 0) {
        // Incrementar el contador de dígitos en cada iteración
        contador_digitos++;

        // Remover el último dígito del número
        numero /= 10;
    }

    // Mostrar el resultado
    printf("El número %d tiene %d dígitos.\n", numero_original, contador_digitos);

    return 0;
}
