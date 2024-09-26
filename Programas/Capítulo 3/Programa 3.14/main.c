#include <stdio.h>

/* Eleccion.
El programa obtiene el total de votos de cada candidato y el porcentaje
correspondiente. Tambien considera votos nulos.

VOT, C1, C2, C3, C4, C5, NU, SV0: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real.*/

void main(void)
{
    // Declaración de variables enteras:
    // VOT para almacenar el voto ingresado, C1-C5 para contar los votos de los 5 candidatos
    // NU para contar los votos nulos y SV0 para el total de votos
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SV0;

    // Declaración de variables de tipo flotante para almacenar los porcentajes de votos
    float P01, P02, P03, P04, P05, P0N;
    printf("Ingrese el primer voto: "); // Solicita el primer voto al usuario
    scanf("%d", &VOT); // Lee el valor del voto ingresado

    // Bucle que continúa mientras el valor del voto no sea 0
    while (VOT)
    {

        // Usa switch para determinar a qué candidato se le suma el voto o si es un voto nulo
        switch(VOT)
        {
            case 1: C1++; break; // Si el voto es para el candidato 1, incrementa C1
            case 2: C2++; break; // Si el voto es para el candidato 2, incrementa C2
            case 3: C3++; break; // Si el voto es para el candidato 3, incrementa C3
            case 4: C4++; break; // Si el voto es para el candidato 4, incrementa C4
            case 5: C5++; break; // Si el voto es para el candidato 5, incrementa C5
            default: NU++; break; // Cualquier otro valor se cuenta como voto nulo
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");  // Solicita el siguiente voto, o 0 para terminar
        scanf("%d", &VOT); // Lee el siguiente voto
    }

     // Calcula el total de votos sumando los votos de los 5 candidatos y los votos nulos
    SV0 = C1 + C2 + C3 + C4 + C5 + NU;
    P01 = ((float) C1 / SV0) * 100; // Porcentaje de votos para el candidato 1
    P02 = ((float) C2 / SV0) * 100; // Porcentaje de votos para el candidato 2
    P03 = ((float) C3 / SV0) * 100; // Porcentaje de votos para el candidato 3
    P04 = ((float) C4 / SV0) * 100; // Porcentaje de votos para el candidato 4
    P05 = ((float) C5 / SV0) * 100; // Porcentaje de votos para el candidato 5
    P0N = ((float) NU / SV0) * 100; // Porcentaje de votos nulos

    printf("\Total de votos: %d", SV0); // Imprime el total de votos

    // Imprime los resultados de cada candidato: el número de votos y el porcentaje correspondiente
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, P01);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, P02);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, P03);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, P04);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, P05);

    // Imprime el número de votos nulos y su porcentaje
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, P0N);
}
