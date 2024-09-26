#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida

/* Nomina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
nomina en la universidad.

I: variable de tipo entero.
SAL y NOM: variables de tipo real. */

void main(void) // Función principal del programa
{
    int I; // Variable entera utilizada como contador
    float SAL, NOM; // SAL almacena el salario de cada profesor, NOM acumula el total de la nómina
    NOM = 0; // Inicializa NOM en 0 para que comience la suma desde cero
    for (I=1; I<=15; I++) // Bucle for que itera desde 1 hasta 15, para ingresar los salarios de 15 profesores
    {
        printf("\Ingrese el salario del profesor%d:\t", I); // Solicita al usuario que ingrese el salario del profesor actual
        scanf("%f", &SAL); // Lee el salario ingresado y lo almacena en SAL
        NOM = NOM + SAL; // Suma el salario ingresado a la suma total de la nómina (NOM)
    }
    printf("\nEl total de la nomina es: %.2f", NOM); // Imprime el total acumulado de la nómina formateado con dos decimales
}
