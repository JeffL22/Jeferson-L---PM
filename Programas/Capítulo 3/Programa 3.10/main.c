#include <stdio.h> // Biblioteca est�ndar para funciones de entrada/salida
#include <math.h>  // Biblioteca matem�tica para usar funciones como pow()

/*Pares e impares.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los
numeros pares y calcula el promedio de los impares.

I, N, NUN, SPA, SIM, CIM: variables de tipo entero. */

void main(void) // Funci�n principal del programa
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  /*) Declaraci�n de variables: I para el contador, N para la cantidad
    de n�meros, NUM para el n�mero ingresado, SPA para
    la suma de pares, SIM para la suma de impares, CIM para el conteo de impares
    printf("Ingrese el numero de datos que se van a procesar:\t"); */
    scanf("%d", &N);  // Lee el valor de N desde el teclado
    if (N>0)          // Si N es mayor que 0, contin�a el procesamiento
    {
        for (I=1; I <= N; I++) // Bucle for que se repite N veces para ingresar cada n�mero
        {
            printf("\nIngrese el numero %d: ", I); // Muestra el n�mero de iteraci�n actual y solicita el n�mero correspondiente
            scanf("%d", &NUM); // Lee el n�mero ingresado por el usuario
            if (NUM) // Comprueba si el n�mero no es cero
                if (pow(-1, NUM) > 0) // Usa pow(-1, NUM) para verificar si el n�mero es par (la potencia de -1 resulta positiva para n�meros pares)
                SPA = SPA + NUM; // Si el n�mero es par, se suma a SPA (suma de pares)
            else  // Si no es par, es impar
            {
                SIM = SIM + NUM; // Suma el n�mero impar a SIM (suma de impares)
                CIM++;  // Incrementa el contador de impares (CIM)
            }
        }
        printf("\n La suma de los numeros pares es: %d", SPA); /* Imprime la suma de los n�meros pares
        printf("\n El promedio de numertos impares es: %5.2f", (float)(SIM / CIM));  // Imprime el promedio de los n�meros
        impares, dividiendo la suma de impares entre la cantidad de impares */
    }
    else  // Si N es menor o igual a 0
        printf("\n El valor de N es incorrecto"); // Imprime un mensaje de error si el valor de N no es v�lido1
        1
}
