#include <stdio.h>

int main() {
    int n; // Declarar variable para almacenar el valor de n
    int contador_primos = 0; // Declarar variable para contar los números primos

    printf("Ingrese el valor de n: "); // Pedir al usuario que ingrese el valor de n
    scanf("%d", &n);

    int i = 2; // Inicializar variable para iterar desde 2

    while (i <= n) { // Bucle while que itera desde 2 hasta n
        int es_primo = 1; // Variable que indica si el número es primo (inicialmente se asume que sí)

        int j = 2; // Inicializar variable para iterar desde 2
        while (j * j <= i) { // Bucle while que itera desde 2 hasta la raíz cuadrada de i
            if (i % j == 0) { // Si i es divisible entre j, no es primo
                es_primo = 0; // Cambiar la variable a 0 para indicar que no es primo
                break; // Salir del bucle interno
            }
            j++; // Incrementar j en 1
        }

        if (es_primo) { // Si el número es primo, incrementar el contador
            contador_primos++;
        }
        i++; // Incrementar i en 1
    }

    printf("Hay %d números primos entre 1 y %d.\n", contador_primos, n); // Mostrar el resultado

    return 0;
}