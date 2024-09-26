#include <stdio.h> //Se incluye la librería estándar para las funciones de entrada y salida
#include <math.h>  // Se incluye la librería para usar la función fabs() que calcula el valor absoluto de un número

/* Calculo de P.
El programa obtiene el valor de P aplicando una serie determinada.

I, B, C: variables de tipo entero.
RES: variable de tipo real de doble pocision. */

void main(void) // Función principal donde comienza la ejecución del programa
{
    int I = 1, B = 0, C;// Declaración de variables enteras:
                          // I para controlar el número de iteraciones, inicializado en 1.
                          // B actúa como un indicador para alternar la suma y resta en la serie.
                          // C para contar el número de términos utilizados.
    double RES; // Declaración de una variable de doble precisión para almacenar el resultado de la serie
    RES = 4.0 / I; // Inicializa RES con el primer término de la serie, que es 4/1 = 4.0
    C = 1; // Inicializa el contador de términos C en 1, ya que ya se ha calculado el primer término

    // Bucle while que continúa mientras la diferencia entre RES y 3.1415 (una aproximación de pi)
    // sea mayor que 0.0005. Se usa fabs() para obtener el valor absoluto de la diferencia.
    while ((fabs (3.1415 - RES)) > 0.0005)
    {
        I += 2 ; // Incrementa I en 2 en cada iteración (siguiente término de la serie es con un denominador impar)
        if (B)   // Si B es 1, se suma el siguiente término de la serie
        {
            RES += (double) (4.0 / I); // Se suma el término 4/I al resultado RES
            B = 0;  // Cambia B a 0 para alternar a la resta en la siguiente iteración
        }
    else
    {
        RES -= (double) (4.0 / I); // Se resta el término 4/I del resultado RES
        B = 1;  // Cambia B a 1 para alternar a la suma en la siguiente iteración
    }
    C++; // Incrementa el contador de términos C en cada iteración
    }
    // Después de que la diferencia entre RES y 3.1415 sea menor o igual a 0.0005, el bucle termina
    printf("\nNumero de terminos:%d", C); // Imprime el número total de términos utilizados3
}
