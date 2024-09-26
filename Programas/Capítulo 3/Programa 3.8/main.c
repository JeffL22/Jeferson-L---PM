#include <stdio.h> // Biblioteca est�ndar para funciones de entrada/salida

/* Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

void main(void) // Funci�n principal del programa
{
    int I, NUM; /* Declaraci�n de variables enteras: I como contador, NUM para el n�mero ingresado */
    long FAC; /* Declaraci�n de FAC como variable 'long' para almacenar el resultado del factorial, ya
    que los factoriales pueden generar n�meros grandes */
    printf("\nIngrese el numero: "); // Mensaje que solicita al usuario ingresar un n�mero
    scanf("%d", &NUM); // Se lee el n�mero entero ingresado por el usuario y se guarda en la variable NUM
    if (NUM >= 0) /* Verifica si el n�mero ingresado es mayor o igual a 0, ya que
    el factorial solo est� definido para n�meros no negativos */
    {
        FAC = 1;  // Inicializa FAC en 1, porque el factorial de 0 y 1 es 1, y tambi�n sirve como base para multiplicar
        for (I=1; I <= NUM; I++) // Bucle for que se ejecuta desde 1 hasta NUM, calculando el factorial
            FAC *= I; // Multiplica FAC por el valor actual de I en cada iteraci�n
        printf("\El factorial de %d es: %ld", NUM, FAC); // Imprime el resultado del factorial de NUM
    }
    else // Si el n�mero ingresado es negativo
        printf("\nError en el dato ingresado"); /* Imprime un mensaje de
        error, ya que no se puede calcular el factorial de un n�mero negativo */
}
