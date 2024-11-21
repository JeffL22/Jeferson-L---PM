#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() /* Se utilizaran los caracteres dentro del rango ASCII 32-126 */
{
    char frase[100]; /* Declarar un arreglo para almacenar la frase */
    int key; /* Variable para la clave de cifrado */
    int i,salto=0; /* variable para recorrer la frase y ajustar el cifrado */
    while(1) /* Inicia un bucle infinito para repetir el proceso */
    {
        system("cls"); /* Limpia la pantalla de la terminar */
        printf("Ingresa la frase a decifrar: "); /* Solicita ingresar la frase */
        gets(frase); /* Captura la frase ingresada */
        do
        {
            printf("Inserte la clave de cifrado: "); /* solicita la clave */
            scanf("%d",&key ; /* Almacena la clave ingresada en la variable key */
        }
        while(key<1 || key>10);   /* Verifica que la clave este dentro del rango permitido */
        printf("\n\n----------------------------------\nFrase decifrada:\n");

        for(i=0; i<(int)strlen(frase); i++,salto=0)  /* Recorre cada caracter de la frase */
        {
            if(frase[i]<32+key) /* Camprueba si el caracter menos la clave esta fuera del rango */
            {
                salto=95; /* Ajusta el valor del carácter para mantenerlo dentro del rango */
            }
            printf("%c",frase[i]-key+salto); /* Descifra el carácter y lo imprime */
        }

        printf("\n\n"); /* Salto de línea para separar la salida */
        system("pause"); /* Pausa la ejecución y espera una tecla para continuar */
    }
}
