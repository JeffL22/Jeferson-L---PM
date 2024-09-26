#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida

/* Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

void main(void) // Función principal del programa
{
    int I, NUM; /* Declaración de variables enteras: I como contador, NUM para el número ingresado */
    long FAC; /* Declaración de FAC como variable 'long' para almacenar el resultado del factorial, ya
    que los factoriales pueden generar números grandes */
    printf("\nIngrese el numero: "); // Mensaje que solicita al usuario ingresar un número
    scanf("%d", &NUM); // Se lee el número entero ingresado por el usuario y se guarda en la variable NUM
    if (NUM >= 0) /* Verifica si el número ingresado es mayor o igual a 0, ya que
    el factorial solo está definido para números no negativos */
    {
        FAC = 1;  // Inicializa FAC en 1, porque el factorial de 0 y 1 es 1, y también sirve como base para multiplicar
        for (I=1; I <= NUM; I++) // Bucle for que se ejecuta desde 1 hasta NUM, calculando el factorial
            FAC *= I; // Multiplica FAC por el valor actual de I en cada iteración
        printf("\El factorial de %d es: %ld", NUM, FAC); // Imprime el resultado del factorial de NUM
    }
    else // Si el número ingresado es negativo
        printf("\nError en el dato ingresado"); /* Imprime un mensaje de
        error, ya que no se puede calcular el factorial de un número negativo */
}
