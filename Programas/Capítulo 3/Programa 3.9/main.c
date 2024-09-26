#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida

/* Serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I, SSE y CAM: variable de tipo entero. */

void main(void) // Función principal del programa
{
    int I = 2, CAM = 1; /* Inicialización de variables: I es el término
    actual de la serie (inicializado en 2), CAM es un
    contador alternante para cambiar el incremento de I (inicializado en 1) */
    long SSE = 0; /* Variable para almacenar la suma acumulada de los términos
    de la serie, es de tipo 'long' para manejar números grandes */
    while (I <= 2500) // Bucle while que se ejecuta mientras I sea menor o igual a 2500
    {
        SSE = SSE + I; // Suma el valor actual de I a la suma total (SSE)
        printf ("\t %d", I); // Imprime el valor actual de I con una tabulación antes
        if (CAM) // Si CAM es distinto de 0 (cuando CAM es 1)
        {
            I += 5; // Incrementa I en 5
            CAM --; // Disminuye CAM en 1 para alternar su valor
        }
        else // Si CAM es 0
        {
            I += 3; // Incrementa I en 3
            CAM++; // Aumenta CAM en 1 para volver a alternar su valor
        }
        }
        printf("nLa suma de la serie es: %ld", SSE); // Imprime el valor total de la suma de la serie
    }

