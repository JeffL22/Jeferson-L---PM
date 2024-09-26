#include <stdio.h> // Biblioteca est�ndar para funciones de entrada/salida

/*Suma positivos.
El programa, al recibir como datos N numeros, obtiene la suma de los
enteros positivos.

I, N, NUN, SUM: variables de tipo entero. */

void main(void) // Funci�n principal del programa
{
    int I, N, NUM, SUM; /* Declaraci�n de variables enteras: I para
    el contador, N para la cantidad de datos a ingresar, NUM para cada
    n�mero ingresado, y SUM para la suma de los n�meros positivos */
    SUM = 0; // Inicializa SUM en 0 para comenzar la suma desde cero
    printf("Ingrese el numero de datos:\t"); /* Solicita al usuario
    que ingrese el n�mero de datos que se procesar�n */
    scanf("%d", &N); // Lee la cantidad de datos a ingresar y la almacena en N
    for (I=1; I<=N; I++) // Bucle for que itera desde 1 hasta N
    {
        printf("Ingrese el dato numero %d:\t", I); /* Solicita al usuario
        ingresar el dato correspondiente al contador actual */
        scanf("%d", &NUM); // Lee el n�mero ingresado y lo almacena en NUM
        if (NUM > 0) // Verifica si el n�mero ingresado es positivo
            SUM = SUM + NUM; // Si es positivo, lo suma a la variable SUM
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM); /* Imprime la suma total
    de los n�meros positivos ingresados */
}
