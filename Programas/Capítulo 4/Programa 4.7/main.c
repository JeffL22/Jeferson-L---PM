#include <stdio.h>

/* Prueba de parametros por valor. */

int f1 (int);   /* Prototipo de funcion. El parametro es por valor
                   y de tipo entero.  */

void main(void)
{
    int I, k = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de k antes de llamar a la funcion: %d", ++k);
        printf("\nValor de k antes de llamar a la funcion: %d", f1(k));
        /* Llamada a la funcion f1. Se pasa una copia de la variable k. */
    }
}

int f1(int R)
{
    R += R;
    return (R);
}
