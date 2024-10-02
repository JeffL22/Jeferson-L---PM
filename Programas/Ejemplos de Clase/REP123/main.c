#include <stdio.h>
#include <stdlib.h>

int main()
{
    //index indexador contadores emp. 1 index 0
    //programa que imprime los numeros del 1 al 10 con su cuadrado
    int num = 0;
    int num2 = 0;
    // init;operacion logica;actualizacion
    for(int i = 0;i <=10;i++)
    {
        num = i;
        num2 = num * num;
        printf("\nQuadrade de Num[%i] es:%i",num,num2);
    }
    printf("\nFin de Programa");
    return 0;
}
