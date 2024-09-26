#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el ultimo mes.

PAG y SPA: variables de tipo real.*/
 void main(void) // Función principal del programa
 {
     float PAG, SPA = 0; /* Declaración de variables de tipo real: PAG para almacenar cada pago ingresado
     y SPA para la suma acumulada de los pagos, inicializada en 0 */
     printf("Ingrese el primer pago:\t"); // Solicita al usuario ingresar el primer pago
     scanf("%f", &PAG); // Lee el primer pago ingresado y lo almacena en la variable PAG
     /* Observa que al utilizar la estructura do-while al menos se necesita un pago.*/
     do // Bucle do-while que se asegura de que el primer pago se procese al menos una vez
     {
         SPA = SPA + PAG; // Suma el valor del pago actual (PAG) a la suma acumulada de pagos (SPA)
         printf("Ingrese el siguiente pago  -0 para terminar-:\t "); /* Solicita al
         usuario ingresar el siguiente pago o 0 para finalizar */
         scanf("%f", &PAG); // Lee el siguiente pago ingresado
     }
     while (PAG); // El bucle continúa mientras el valor ingresado no sea 0 (indicando que ya no hay más pagos)
     printf("\nEl total de pagos del mes es: %.2f", SPA); // Imprime el total acumulado de los pagos del mes con dos decimales
 }
