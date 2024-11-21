#include <stdio.h> /librerias/
#include <stdlib.h>
#include <string.h>

int main() // Se usaran los caracteres dentro del rango 32-126
{
    char frase[100];  // Se Declarar variables.
    int key; // Variable para almacenar la clave de cifrado.
    int i, salto=0; // Variable para ajustar el cifrado.

    while(1) // Siempre repite el proceso
    {
        system("cls"); // Limpia la pantalla de la terminal
        printf("Ingresa la frase a cifrar: ");
        fflush(stdin); //Limpia la memoria
        gets(frase); // Obtener la frase
        do
        {
            printf("Inserta la clave de cifrado: ");
            scanf("%d",&key); //lee la clave con un numero entero
        }
        while(key<1 || key>10);  // Se consigue la llave, que debe ser una unidad
        printf("\n\n----------------------------------\nFrase cifrada:\n");

        for(i=0; i<(int)strlen(frase); i++,salto=0) // mientras i sea menor que el tamaño la frase.
        {
            if(frase[i]>126-key) // Se agrega la clave y se corrige el valor aplicando un salto.
            {
                salto=95; // Se asigna un salto para volver al inicio del ciclo
            }
            printf("%c",frase[i]+key-salto); // Se codifica sumando la clave al ASCII y ajustando al rango de símbolos si el salto es distinto de cero.
        }

        printf("\n\n"); // Esto agrega un espacio.
        system("pause"); // Indica que se debe presionar una tecla para continuar.
    }
}
