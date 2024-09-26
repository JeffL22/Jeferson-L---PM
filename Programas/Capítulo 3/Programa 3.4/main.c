#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida
#include <math.h> // Biblioteca para funciones matemáticas como pow()

/* Suma cuadrador.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void) // Función principal del programa
{
    int NUM; // Declaración de variable entera para almacenar cada número ingresado
    long CUA, SUC = 0; // CUA almacena el cuadrado de cada número, SUC acumula la suma de los cuadrados
    printf("\nIngrese un numero entero -0 para terminar-:\t"); // Solicita al usuario ingresar el primer número
    scanf("%d", &NUM); // Lee el primer número ingresado
    while (NUM) // Bucle while que se ejecuta mientras el número ingresado no sea 0
        /*Observa que la condicion es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow (NUM, 2); // Calcula el cuadrado del número ingresado usando la función pow() y lo almacena en CUA
        printf("%d al cubo es %ld", NUM, CUA); // Imprime el resultado del cuadrado del número ingresado
        SUC = SUC + CUA; // Suma el cuadrado calculado a la suma acumulada (SUC)
        printf("\nINgrese un numero entero -0 para terminar-:\t"); // Solicita al usuario ingresar el siguiente número o 0 para terminar
        scanf("%d", &NUM); // Lee el siguiente número ingresado
    }
    printf("%d", &NUM); // Imprime la suma total de los cuadrados calculados
}
