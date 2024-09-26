#include <stdio.h> // Biblioteca est�ndar para funciones de entrada/salida
#include <math.h> // Biblioteca para funciones matem�ticas como pow()

/* Suma cuadrador.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void) // Funci�n principal del programa
{
    int NUM; // Declaraci�n de variable entera para almacenar cada n�mero ingresado
    long CUA, SUC = 0; // CUA almacena el cuadrado de cada n�mero, SUC acumula la suma de los cuadrados
    printf("\nIngrese un numero entero -0 para terminar-:\t"); // Solicita al usuario ingresar el primer n�mero
    scanf("%d", &NUM); // Lee el primer n�mero ingresado
    while (NUM) // Bucle while que se ejecuta mientras el n�mero ingresado no sea 0
        /*Observa que la condicion es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow (NUM, 2); // Calcula el cuadrado del n�mero ingresado usando la funci�n pow() y lo almacena en CUA
        printf("%d al cubo es %ld", NUM, CUA); // Imprime el resultado del cuadrado del n�mero ingresado
        SUC = SUC + CUA; // Suma el cuadrado calculado a la suma acumulada (SUC)
        printf("\nINgrese un numero entero -0 para terminar-:\t"); // Solicita al usuario ingresar el siguiente n�mero o 0 para terminar
        scanf("%d", &NUM); // Lee el siguiente n�mero ingresado
    }
    printf("%d", &NUM); // Imprime la suma total de los cuadrados calculados
}
