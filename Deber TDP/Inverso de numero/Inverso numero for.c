#include <stdio.h> // Incluir la biblioteca 
int main() {
    // Declarar variables: numero para almacenar el número ingresado,
    // inverso para almacenar el inverso del número, inicializado en 0
    int numero, inverso = 0, digito;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero); // Leer el número ingresado por el usuario utilizando la función scanf y almacenarlo en la variable numero.

    // Iniciar el bucle for
    for (int i = 0; numero > 0; i++) { // Condición del bucle: mientras numero sea mayor que 0
        // Calcular el resto de la división de numero entre 10,
        // que nos da el último dígito del número
        digito = numero % 10;

        // Multiplicar el inverso actual por 10 y sumar el dígito actual
        inverso = inverso * 10 + digito;

        // Dividir numero entre 10, lo que elimina el último dígito del número
        numero /= 10;
    }

    // Imprimir el resultado del inverso del número
    printf("El inverso del número es: %d\n", inverso);

    return 0;
}