#include <stdio.h>

/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio
de calificaciones de cada uno de ellos y, los alumnos con el mejor
y el peor promedio.

I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

void main(void) /*Función principal donde comienza la ejecución del programa */
{
    // Declaración de variables
    int I, MAT, MAMAT, MEMAT; // I para el ciclo, MAT para la matrícula, MAMAT y MEMAT para almacenar matrículas del mejor y peor promedio
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // SUM para la suma de calificaciones, PRO para el promedio, CAL para una calificación,
                                                    // MAPRO y MEPRO almacenan el mejor y peor promedio respectivamente
    printf("Ingrese la matricula del primer alumno:\t"); // Solicita al usuario la matrícula del primer alumno
    scanf("%d", &MAT); // Lee la matrícula del alumno
    while (MAT)
    {
        SUM = 0; // Inicializa la suma de calificaciones a 0 para cada nuevo alumno
        for (I=1; I<=5; I++)  //Bucle que lee 5 calificaciones por alumno
        {
            printf("\tIngrese la calificacion del alumno: ", I); // Solicita la calificación del alumno
            scanf("%f", &CAL); // Lee la calificación ingresada
            SUM += CAL; // Suma la calificación a la suma total
        }
        PRO = SUM / 5; // Calcula el promedio de las 5 calificaciones
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO); // Imprime la matrícula y el promedio del alumno
        if (PRO > MAPRO) // Si el promedio es mayor que el promedio más alto registrado, se actualiza MAPRO y MAMAT
        {
            MAPRO = PRO; // Actualiza el mejor promedio
            MAMAT = MAT; // Guarda la matrícula del alumno con el mejor promedio
        }
        if (PRO > MEPRO) //Si el promedio es menor que el promedio más bajo registrado, se actualiza MEPRO y MEMAT
        {
            MEPRO = PRO; // Actualiza el peor promedio
            MEMAT = MAT; // Guarda la matrícula del alumno con el peor promedio
        }
        printf("\n\nIngrese la matricula del siguiente alumno: "); // Solicita la matrícula del siguiente alumno (o 0 para terminar)
        scanf("%d", &MAT); // Lee la matrícula del siguiente alumno
    }
    printf("\n\nAlumno con mejor promedio:\t%d\t\%5.2f", MAMAT, MAPRO); // Imprime el alumno con el mejor promedio
    printf("\n\nAlumno con mejor promedio:\t%d\t\%5.2f", MEMAT, MAPRO); // Imprime el alumno con el peor promedio (hay un error en el mensaje aquí que se corregirá más adelante)
}
