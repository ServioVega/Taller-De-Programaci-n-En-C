#include <stdio.h>

int main() {
    // Declarar variable para almacenar el número ingresado por el usuario
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Declarar variable para contar el número de dígitos
    int contador_digitos = 0;

    // Utilizar un bucle for para contar el número de dígitos
    for (int i = numero; i!= 0; i /= 10) {
        // Incrementar el contador de dígitos en cada iteración
        contador_digitos++;
    }

    // Mostrar el resultado
    printf("El número %d tiene %d dígitos.\n", numero, contador_digitos);

    return 0;
}