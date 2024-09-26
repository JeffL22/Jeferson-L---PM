#include <stdio.h> // Se incluye la librer�a est�ndar para las funciones de entrada y salida

/* Examen de admision.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran estas.

R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; // Variables enteras para contar cu�ntas calificaciones caen en cada rango
    float CAL; // Variable flotante para almacenar la calificaci�n ingresada
    printf("Ingresa la calificacion del alumno: "); // Solicita la primera calificaci�n al usuario
    scanf("%f", &CAL); // Lee la calificaci�n y la almacena en la variable CAL
    while (CAL != -1) // Bucle para seguir ingresando calificaciones mientras CAL no sea -1
    {
        if (CAL < 4) // Si la calificaci�n es menor que 4, incrementa el contador del rango R1
            R1++;
        else
            if (CAL < 6) // Si la calificaci�n es mayor o igual a 4 pero menor que 6, incrementa el contador del rango R2
            R2++;
        else
            if (CAL < 8) // Si la calificaci�n es mayor o igual a 6 pero menor que 8, incrementa el contador del rango R3
            R3++;
        else
            if (CAL < 9) // Si la calificaci�n es mayor o igual a 8 pero menor que 9, incrementa el contador del rango R4
            R4++;
        else
            R5++; // Si la calificaci�n es mayor o igual a 9, incrementa el contador del rango R5
        printf("Ingresa la calificacion del alumno: "); // Solicita otra calificaci�n al usuario
        scanf("%f", &CAL); // Lee la nueva calificaci�n
    }
    printf("n0..3.99 = %d", R1); // Imprime cu�ntas calificaciones est�n en el rango 0.00 - 3.99
    printf("n4..5.99 = %d", R2); // Imprime cu�ntas calificaciones est�n en el rango 4.00 - 5.99
    printf("n6..7.99 = %d", R3); // Imprime cu�ntas calificaciones est�n en el rango 6.00 - 7.99
    printf("n8..8.99 = %d", R4); // Imprime cu�ntas calificaciones est�n en el rango 8.00 - 8.99
    printf("n9..10   = %d", R5); // Imprime cu�ntas calificaciones est�n en el rango 9.00 - 10.00
}
