#include <stdio.h> // Se incluye la librería estándar para las funciones de entrada y salida

/* Examen de admision.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran estas.

R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */

void main(void) // Función principal donde comienza la ejecución del programa
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; // Variables enteras para contar cuántas calificaciones caen en cada rango
    float CAL; // Variable flotante para almacenar la calificación ingresada
    printf("Ingresa la calificacion del alumno: "); // Solicita la primera calificación al usuario
    scanf("%f", &CAL); // Lee la calificación y la almacena en la variable CAL
    while (CAL != -1) // Bucle para seguir ingresando calificaciones mientras CAL no sea -1
    {
        if (CAL < 4) // Si la calificación es menor que 4, incrementa el contador del rango R1
            R1++;
        else
            if (CAL < 6) // Si la calificación es mayor o igual a 4 pero menor que 6, incrementa el contador del rango R2
            R2++;
        else
            if (CAL < 8) // Si la calificación es mayor o igual a 6 pero menor que 8, incrementa el contador del rango R3
            R3++;
        else
            if (CAL < 9) // Si la calificación es mayor o igual a 8 pero menor que 9, incrementa el contador del rango R4
            R4++;
        else
            R5++; // Si la calificación es mayor o igual a 9, incrementa el contador del rango R5
        printf("Ingresa la calificacion del alumno: "); // Solicita otra calificación al usuario
        scanf("%f", &CAL); // Lee la nueva calificación
    }
    printf("n0..3.99 = %d", R1); // Imprime cuántas calificaciones están en el rango 0.00 - 3.99
    printf("n4..5.99 = %d", R2); // Imprime cuántas calificaciones están en el rango 4.00 - 5.99
    printf("n6..7.99 = %d", R3); // Imprime cuántas calificaciones están en el rango 6.00 - 7.99
    printf("n8..8.99 = %d", R4); // Imprime cuántas calificaciones están en el rango 8.00 - 8.99
    printf("n9..10   = %d", R5); // Imprime cuántas calificaciones están en el rango 9.00 - 10.00
}
