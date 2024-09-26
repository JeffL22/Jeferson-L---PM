#include <stdio.h>

/* Numeros perfectos.
El programa, al recibir como dato un numero entero positivo como limite, obtiene
los numeros perfectos que hay entre 1 y ese numero, y ademas imprime cuantos numeros
perfectos hay en el intervalo.

I, J, NUM, C: variables de tipo entero. */

void main(void) //El programa empieza aqu�
{
    int I, J, NUM, SUM, C = 0; /* Se declaran variables enteras: I, J para ciclos,
    NUM para el l�mite, SUM para la suma de divisores y C para contar n�meros perfectos */

    printf("\nIngrese el numero limite: "); /*Mensaje al usuario solicitando que ingrese el n�mero l�mite */
    scanf("\nIngrese el numero limite: "); /*Se lee el n�mero l�mite introducido por el usuario y se almacena en NUM */
    scanf("%d", &NUM);
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0; /* Inicializa la suma de divisores a cero para cada n�mero I */
        for (J = 1; J <= (I / 2); J++)
            /* Si J es un divisor de I, lo suma a SUM */
            if ((I % J) == 0)
            SUM += J;
        if (SUM == I)
        {
            printf("\n%d es un mumero perfecto", I); /* Imprime que I es un n�mero perfecto */
            C++; /* Incrementa el contador de n�meros perfectos encontrados */
        }
    }
    /* Despu�s de recorrer todos los n�meros, imprime cu�ntos n�meros perfectos se encontraron entre 1 y NUM */
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}
