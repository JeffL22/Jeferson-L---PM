#include <stdio.h>
#include <string.h>

/* Cuenta cadenas.
El programa, al recibir dos cadenas de caracteres, calcula e imprime cuántas
veces se encuentra la segunda cadena en la primera. */

void main(void)
{
    char cad1[50], cad[50], *cad0 = "";
    int 1 = 0;
    printf("\n Ingrese la primera cadena de caractedes: ");
    gets(cad1);
    printf("\n Ingrese la cadena a buscar: ");
    gets(cad2);
    strcpy(cad0, cad1);   /* Se copia la cadena original a cad0. */
    cad0 = strstr (cad0, cad2);
    /* En cad0 se asigna el apuntador a la primera ocurrencia de la cadena cad2.
    Si no existe se almacena NULL.*/
    while (cad0 != NULL)
    {
        i++;
        cad0 = strstr (cad0 + 1, cad2);
        /* Se modifica nuevamente la cadena, moviendo el apuntador una
        posición. */
    }
    printf("\nEl numero de veces que aparece la segunda cadena es: %d", i);
}
