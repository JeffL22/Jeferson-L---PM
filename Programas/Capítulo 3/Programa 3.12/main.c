#include <stdio.h> // Se incluye la librería estándar para las funciones de entrada y salida
#include <math.h>  // Se incluye la librería para el uso de funciones matemáticas, como pow()

/* Serie de ULAM.
el programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.

NUM: variable de tipo entero. */

void main(void) // Función principal donde comienza la ejecución del programa
{
    int NUM; // Se declara la variable entera NUM, que almacena el número ingresado por el usuario
    printf("Ingresa el numero para calcular la serie: "); // Solicita al usuario que ingrese un número entero positivo
    scanf("%d", &NUM); // Se lee el valor ingresado y se almacena en NUM
    if (NUM > 0) // Verifica si el número ingresado es mayor que 0
    {
        printf("\nSerie de ULAM\n"); // Si el número es positivo, se imprime el encabezado de la serie de ULAM
        printf("%d, \t", NUM); // Imprime el número inicial de la serie
        while (NUM != 1)\ // Mientras NUM no sea igual a 1, continúa calculando la serie
        {
            if (pow(-1, NUM) > 0) // Si NUM es par, se divide entre 2
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1; // Si NUM es impar, se multiplica por 3 y se suma 1
            printf("%d \t", NUM); // Se imprime el siguiente valor de la serie
        }

    }
    else // Si el número ingresado es menor o igual a 0, se imprime un mensaje de error
        printf("\n NUM debe ser un entero positivo");
}
