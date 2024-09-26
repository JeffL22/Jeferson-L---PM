#include <stdio.h> //Se incluye la librer�a est�ndar para las funciones de entrada y salida
#include <math.h>  // Se incluye la librer�a para usar la funci�n fabs() que calcula el valor absoluto de un n�mero

/* Calculo de P.
El programa obtiene el valor de P aplicando una serie determinada.

I, B, C: variables de tipo entero.
RES: variable de tipo real de doble pocision. */

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa
{
    int I = 1, B = 0, C;// Declaraci�n de variables enteras:
                          // I para controlar el n�mero de iteraciones, inicializado en 1.
                          // B act�a como un indicador para alternar la suma y resta en la serie.
                          // C para contar el n�mero de t�rminos utilizados.
    double RES; // Declaraci�n de una variable de doble precisi�n para almacenar el resultado de la serie
    RES = 4.0 / I; // Inicializa RES con el primer t�rmino de la serie, que es 4/1 = 4.0
    C = 1; // Inicializa el contador de t�rminos C en 1, ya que ya se ha calculado el primer t�rmino

    // Bucle while que contin�a mientras la diferencia entre RES y 3.1415 (una aproximaci�n de pi)
    // sea mayor que 0.0005. Se usa fabs() para obtener el valor absoluto de la diferencia.
    while ((fabs (3.1415 - RES)) > 0.0005)
    {
        I += 2 ; // Incrementa I en 2 en cada iteraci�n (siguiente t�rmino de la serie es con un denominador impar)
        if (B)   // Si B es 1, se suma el siguiente t�rmino de la serie
        {
            RES += (double) (4.0 / I); // Se suma el t�rmino 4/I al resultado RES
            B = 0;  // Cambia B a 0 para alternar a la resta en la siguiente iteraci�n
        }
    else
    {
        RES -= (double) (4.0 / I); // Se resta el t�rmino 4/I del resultado RES
        B = 1;  // Cambia B a 1 para alternar a la suma en la siguiente iteraci�n
    }
    C++; // Incrementa el contador de t�rminos C en cada iteraci�n
    }
    // Despu�s de que la diferencia entre RES y 3.1415 sea menor o igual a 0.0005, el bucle termina
    printf("\nNumero de terminos:%d", C); // Imprime el n�mero total de t�rminos utilizados3
}
