#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los premios 50 numeros de Fibonacci.

I, PRI, SEG, SIG: variables de tipo entero. */

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa
{
    // Declaraci�n de variables enteras:
    // I para controlar el ciclo de iteraciones,
    // PRI para el primer n�mero de Fibonacci, inicializado en 0,
    // SEG para el segundo n�mero de Fibonacci, inicializado en 1,
    // SIG para almacenar el siguiente n�mero en la secuencia.
    int I, PRI = 0, SEG = 1, SIG;

    // Imprime los primeros dos n�meros de la secuencia de Fibonacci
    printf("\t %d \t %d", PRI, SEG);

    // Bucle for para calcular los siguientes 48 n�meros de Fibonacci
    for (I = 3; I< = 50; I++)
{
        // Calcula el siguiente n�mero de Fibonacci como la suma de los dos anteriores
        SIG = PRI + SEG;

        // Actualiza PRI y SEG para continuar la secuencia:
        // PRI toma el valor de SEG y SEG toma el valor de SIG (el nuevo n�mero calculado)
        PRI = SEG;
        SEG = SIG;
        // Imprime el siguiente n�mero de Fibonacci
        printf("\t %d", SIG);
}
}
