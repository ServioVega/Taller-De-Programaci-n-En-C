#include <stdio.h>

// Función que calcula la potencia de un número utilizando sumas sucesivas
int potencia(int base, int exponente) {
    // Inicializar el resultado en 1
    int resultado = 1;

    // Utilizar un bucle for para calcular la potencia
    for (int i = 1; i <= exponente; i++) {
        // Multiplicar el resultado por la base en cada iteración
        resultado *= base;
        printf("Multiplicando %d por %d... ", resultado / base, base);
        printf("Resultado: %d\n", resultado);
    }

    // Devolver el resultado
    return resultado;
}

int main() {
    // Declarar variables: base y exponente
    int base, exponente;

    // Pedir al usuario que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Llamar a la función potencia y almacenar el resultado
    int resultado = potencia(base, exponente);

    // Imprimir el resultado final
    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, resultado);

    return 0;
}