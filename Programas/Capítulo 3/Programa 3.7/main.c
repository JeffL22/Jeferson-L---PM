#include <stdio.h> // Biblioteca est�ndar para funciones de entrada/salida

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.

I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

void main(void) // Funci�n principal del programa
{
    int I, N; /* Declaraci�n de variables enteras: I es el contador
    para los lanzamientos, N es el n�mero de lanzamientos */
    float LAN, SLA = 0; /* Declaraci�n de variables de tipo real: LAN
    para almacenar cada lanzamiento individual, SLA para la suma total
    de los lanzamientos, inicializada en 0 */
    do /* Estructura do-while para asegurar que el usuario ingrese
        un n�mero v�lido de lanzamientos */
    {
        printf("Ingrese el numero de lanzamientos:\t"); // Solicita al usuario ingresar el n�mero de lanzamientos
        scanf("%d", &N); // Lee el n�mero de lanzamientos ingresado por el usuario
    }
    while (N < 1 || N > 11); // Condici�n que fuerza a que el n�mero de lanzamientos est� entre 1 y 11 (inclusive)
    /* Se utiliza la estructura do-while para verificar que el valor de N sea
    correcto. */
    for (I=1; I<=N; I++) // Bucle for que se repite N veces, una vez por cada lanzamiento
    {
        printf("\nIngrese el lanzamiento %d: ", I); // Solicita al usuario ingresar el valor del lanzamiento I
        scanf ("%f", &LAN); // Lee el valor del lanzamiento y lo almacena en la variable LAN
        SLA = SLA + LAN; // Suma el valor de cada lanzamiento a la suma acumulada (SLA)
    }
    SLA = SLA / N; // Calcula el promedio de los lanzamientos dividiendo la suma total por el n�mero de lanzamientos
    printf("\nEl promedio de lanzamiento es: %.2f", SLA); // Imprime el promedio de los lanzamientos con dos decimales
}


