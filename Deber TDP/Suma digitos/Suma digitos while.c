#include <stdio.h> // Incluir la biblioteca

int main() {
    // Declarar variables: numero para almacenar el número ingresado,
    // suma para almacenar la suma de los dígitos, inicializada en 0,
    // y digito para almacenar cada dígito del número
    int numero, suma = 0, digito;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero); // Leer el número ingresado por el usuario utilizando la función scanf y almacenarlo en la variable numero.

    // Iniciar el bucle while
    while (numero > 0) { // Condición del bucle: mientras numero sea mayor que 0
        // Calcular el resto de la división de numero entre 10,
        // que nos da el último dígito del número
        digito = numero % 10;

        // Sumar el valor de digito a la variable suma
        suma += digito;

        // Dividir numero entre 10, lo que elimina el último dígito del número
        numero /= 10;
    }

    // Imprimir el resultado de la suma de los dígitos
    printf("La suma de los dígitos es: %d\n", suma);

    return 0; // Finalizar el programa con éxito
}