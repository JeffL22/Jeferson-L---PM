#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida

/* Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el ultimo
mes, obtiene la suma de los mismos.

PAG y SPA: variables de tipo real. */

void main(void) // Función principal del programa
{
    float PAG, SPA; /* Declaración de variables de tipo real: PAG para almacenar cada pago
    ingresado, SPA para la suma acumulada de los pagos */
    SPA = 0; // Inicializa SPA en 0, para que comience la suma de pagos desde cero
    printf("Ingrese el primer pago:\t"); // Solicita al usuario ingresar el primer pago
    scanf("%f", &PAG); // Lee el primer pago ingresado y lo almacena en la variable PAG
    while (PAG) // Bucle while que se ejecuta mientras el valor de PAG sea diferente de 0
    /*Observa que la condicion es verdadera mientras el pago es diferente de cero. */
   {
    SPA = SPA + PAG; // Suma el valor de cada pago a la suma acumulada (SPA)
    printf("Ingrese el siguiente pago:\t "); // Solicita al usuario ingresar el siguiente pago
    scanf("%f", &PAG); // Lee el siguiente pago ingresado y lo almacena en PAG
        /* Observa que la proposicion que modifica la condicion es una lectura. */
   }
   printf("\nEl total de pago del mes es: %.2f", SPA); // Imprime la suma total de los pagos del mes con dos decimales

}
