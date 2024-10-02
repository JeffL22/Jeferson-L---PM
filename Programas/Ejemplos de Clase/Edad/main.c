#include <stdio.h>
#include <stdlib.h>
int main()
{
    int edad = 0;//variable para guardar la edad

    printf("\nIngresa tu edad: ");
    scanf("%i",&edad);
    // > 0 y o <= 3 esto en un bebe
    // >3 y <= 12 esto es un nino
    // >12 < 18 es un adolecente
    // >= 18 <=60 es mayor de edad
    // >60 <=80 son adulto mayores
    // >80 < = 120 envegeciente
    // muerto o no naido

    if(edad > 0 && edad <=3)
    {
        printf("\nUsted es un Bebe!");
    }else if(edad > 3 && edad <=12)
    {
        printf("\nUsted es un Nino!");

    }else if(edad > 12 && edad <18)
    {
        printf("\nUsted es un Menor de Edad");

    }else if(edad >= 18 && edad <=60)
    {
        printf("\nUsted es Mayor de Edad!");

    }else if(edad >60 && edad <=80)
    {
        printf("\nUsted es un Adulto Mayor!");
    }else if(edad >= 61 && edad <=120)
    {
        printf("\nUsted se esta Desviviendo!");

    }else{

        if(edad <= 0)
        {
            if(edad == 0)
            {
                printf("\nEdad debe ser mayor de cero!");
            }else{
                printf("\nLos numeros negativos no son validos!");
            }
        }

        if(edad > 120)
        {
            printf("\nLa edad maxima es 120 anos!");
        }
    }
}

