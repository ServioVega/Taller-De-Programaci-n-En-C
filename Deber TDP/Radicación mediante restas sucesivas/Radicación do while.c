#include <stdio.h>

int main() {
    int numero; // número del que se quiere calcular la raíz cúbica
    double raiz = 0; // variable que almacenará la raíz cúbica

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Calcular la raíz cúbica utilizando un bucle do-while
    do {
        raiz += 0.001;
    } while (raiz * raiz * raiz < numero);
    if (raiz * raiz * raiz > numero) {
        raiz -= 0.001; // ajustar la raíz cúbica si no es exacta
    }

    // Mostrar el resultado con 3 decimales
    printf("La raíz cúbica de %d es %.3f\n", numero, raiz);

    return 0;
}