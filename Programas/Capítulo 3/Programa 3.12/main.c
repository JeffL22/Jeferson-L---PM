#include <stdio.h> // Se incluye la librer�a est�ndar para las funciones de entrada y salida
#include <math.h>  // Se incluye la librer�a para el uso de funciones matem�ticas, como pow()

/* Serie de ULAM.
el programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.

NUM: variable de tipo entero. */

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa
{
    int NUM; // Se declara la variable entera NUM, que almacena el n�mero ingresado por el usuario
    printf("Ingresa el numero para calcular la serie: "); // Solicita al usuario que ingrese un n�mero entero positivo
    scanf("%d", &NUM); // Se lee el valor ingresado y se almacena en NUM
    if (NUM > 0) // Verifica si el n�mero ingresado es mayor que 0
    {
        printf("\nSerie de ULAM\n"); // Si el n�mero es positivo, se imprime el encabezado de la serie de ULAM
        printf("%d, \t", NUM); // Imprime el n�mero inicial de la serie
        while (NUM != 1)\ // Mientras NUM no sea igual a 1, contin�a calculando la serie
        {
            if (pow(-1, NUM) > 0) // Si NUM es par, se divide entre 2
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1; // Si NUM es impar, se multiplica por 3 y se suma 1
            printf("%d \t", NUM); // Se imprime el siguiente valor de la serie
        }

    }
    else // Si el n�mero ingresado es menor o igual a 0, se imprime un mensaje de error
        printf("\n NUM debe ser un entero positivo");
}
