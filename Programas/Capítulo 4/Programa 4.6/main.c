#include <stdio.h>

/* Prueba de parametros por referencia. */

void f1(int *);
/* Prototipo de funcion. El parametro es de tipo entero y por referencia
Observa el uso del operador de indireccion. */

void main(void)
{
    int I, k = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de k antes de llamar a la funcion: %d", ++k);
        f1(&k);
        printf("\nValor de k despues de llamar a la función: %d", k);
        /* Llamada a la funcion f1. Se pasa la direccion de la variable k,
        por medio del operador de direccion:  */
    }
}

void f1(int *R)
/* La funcion f1 recibe un parametro por referencia. Cada vez que el
parametro se utiliza en la funcion debe ir precedido por el operador de
indireccion. */
{
    *R += *R;
}
