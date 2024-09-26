#include <stdio.h> // Biblioteca estándar para funciones de entrada/salida

/* Nomina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
universidad, obtiene la nomina y el promedio de los salarios.

I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

void main(void) // Función principal del programa
{
    int I = 0; // Inicializa el contador I en 0, que contará el número de salarios ingresados
    float SAL, PRO, NOM = 0; /* Declaración de variables reales: SAL para el salario de cada profesor, PRO para el promedio
    de los salarios, y NOM para la suma total de los salarios (inicializada en 0) */
    printf("Ingrese el salario del profesor:\t"); // Solicita al usuario ingresar el salario del primer profesor
    /* Observa que al menos se necesita ingresar el salario de un profesor para que
    no ocurra un error de ejecucion del programa. */
    scanf("%f", &SAL);  // Lee el salario ingresado y lo almacena en SAL
    do // Bucle do-while que se ejecuta al menos una vez para procesar el salario ingresado
    {
        NOM = NOM + SAL; // Suma el salario ingresado a la nómina (NOM)
        I = I + 1; // Incrementa el contador I, que cuenta la cantidad de salarios ingresados
        printf("Ingrese el salario del profesor -0 para terminar- :\t"); // Solicita el próximo salario o el valor 0 para terminar
        scanf("%f", &SAL); // Lee el siguiente salario
    }
    while (SAL); // El bucle continúa mientras el valor ingresado en SAL no sea 0
    PRO = NOM / I;  // Calcula el promedio de salarios dividiendo la nómina total (NOM) entre el número de profesores (I)
    printf("\nNomina: %.2f \t Promedio de salarios: %2f", NOM, PRO); // Imprime la nómina total y el promedio de salarios, ambos con dos decimales

}
