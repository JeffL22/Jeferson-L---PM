#include <stdio.h>
#include <stdlib.h>

/* Suma y promedio.
El programa, al recibir como datos varias cadenas de caracteres que
contienen reales, los suma y obtiene el promedio de los mismos. */

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("\nDesea ingresa una cadena de caracteres (S/N)? ");
    c = getchar();
    while (c == 's')
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);
        i++,
        sum += atof(cad);
        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }
    printf("\nSumo: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);
}
