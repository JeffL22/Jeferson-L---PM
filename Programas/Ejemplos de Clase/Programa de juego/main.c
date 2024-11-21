
/*
5x07-Torres_de_Hanoi_parte_2
24/01/2012
Escribe un programa (se recomienda que sea recursivo) que dé solución al problema de las torres de Hanoi.

El enunciado es el siguiente: Se dispone de una torre formada por varios discos de diferentes diámetros denominada torre O (origen),
donde cada disco es de diámetro inferior a todos los que están por debajo. Se dispone de otras dos torres para dejar discos, una denominada torre A (auxiliar) y otra torre D (destino).
El problema consiste en pasar todos los discos de la torre O a la torre D respetando dos normas muy simples:
Los discos se pasan de una torre a otra de uno en uno.
Nunca un disco de mayor diámetro puede estar sobre otro de menor diámetro.
Se preguntará al inicio del programa por el tamaño de la torre O (entendiendo que tendrá el número de discos indicados, con algún límite preestablecido).
Las torres A y D estarán inicialmente vacías.
Se debe ofrecer la solución que da el programa a este problema paso a paso, mostrando el resultado de una forma gráfica. El inicio podría ser algo así:

                                *
                               ***
                              *****
                             *******
                            *********
         ===========		==========		==========
       O				A				D
Formula para calcular movimientos mínimos necesarios:
m = 2^n -1
http://www.rodoval.com/heureka/hanoi/
*/

#include <string.h> //bibliotecas
#include <stdio.h>
#include <stdlib.h>

void imprime( int *tab, int fil, int col, int ultNum ) //funcion para imprimir el tablero
{
    /*
    Precondición:
    *tab	Puntero a una matriz de tipo entero.
    fil		Entero que indica el numero de filas de la matriz.
    col		Entero que indica el numero de columnas de la matriz.
    disc	Parámetro de tipo entero que indica el numero de discos usados.
    ultNum	Entero que indica el numero que esta usando el disco mas grande.
    */

    int f, c; /* Variables para iterar sobre filas y columnas */
    int i, esp;/* Variables auxiliares para impresión */
    for( c=col-1; c >= 0; c-- ) /* Itera desde la última columna hacia la primera */
    {
        for( f=0; f < fil; f++ ) /* Calcula los espacios necesarios a la izquierda y derecha del disco */
        {
            esp = ( ultNum - tab[col*f+c] )/2;
            /* Espacios a la izquierda */
            for( i=0; i < esp; i++ ) /* imprime espacios */
                printf( " " );
            /* Imprime los comodines */
            for( i=0; i < tab[col*f+c]; i++ ) /* imprime el disco como asteriscos */
                printf( "*" );
            /* Espacios a la derecha */
            for( i=0; i < esp; i++ ) /* Imprime espacios despues del disco */
                printf( " " );
            printf( "\t" ); /* Tabulación entre torres */
        };
        printf( "\n" );/* Salto de línea para pasar a la siguiente fila */
    };
};
void mueveDisco( int *tab, int fil, int col, int ultNum, int filOrig, int filDest ) /* mueve un disco de la torre de origen a la de destino */
{

    /*
    Precondición:
    *tab	Puntero a una matriz de tipo entero.
    fil		Entero que indica el numero de filas de la matriz.
    col		Entero que indica el numero de columnas de la matriz.
    disc	Parámetro de tipo entero que indica el numero de discos usados.
    ultNum	Entero que indica el numero que esta usando el disco mas grande.
    filOrig	Entero que indica el numero de fila de la matriz en la cual hay que coger el numero/disco
    filDest	Entero que indica el numero de fila de la matriz en la cual hay que dejar el numero/disco.
    Poscondición:
    Se mueve el disco y se llama a la función que imprime el tablero.
    */

    int cO=col-1, cD=col-1; //posiciones iniciales del ogien y destino
    /* Se busca el disco que se encuentre mas arriba y por lo tanto el mas pequeño de la fila de origen. */
    while( cO >= 0  &&  tab[col*filOrig+cO] == 0 ) /*encuentra el disco en la columna de origen */
    {
        cO--;
    };
    if( cO < 0 ) /* verifica que no salga de rango */
        cO = 0;
    /* Ahora se calcula cual es la posición libre mas arriba de la fila de destino */

    while( cD >= 0  &&  tab[col*filDest+cD] == 0 )/* encuentra la primera posicion vacia en la columna destino */
    {
        cD--;
    };
    /* Se mueve el disco de la fila de origen a la de destino: */
    tab[col*filDest+cD+1] = tab[col*filOrig+cO];
    tab[col*filOrig+cO] = 0; //vacia la posicion origen
    imprime( tab, fil, col, ultNum ); /* Se imprime el tablero */

};
void hanoi( int *tab, int fil, int col, int disc, int ultNum, int O, int A, int D ) /* Implementa la logica recursiva para resolver el problema */
{

    /*
    Precondición:

     *tab	Puntero a una matriz de tipo entero.
     fil		Entero que indica el numero de filas de la matriz.
     col		Entero que indica el numero de columnas de la matriz.
     disc	Parámetro de tipo entero que indica el numero de discos usados.
     ultNum	Entero que indica el numero que esta usando el disco mas grande.
     O,A,D	Tres enteros que indican la fila desde donde se ha de coger el disco y a donde se ha de traspasar. La primera vez que se llama a hanoi tienen los valores de: 0 ,1 y 2 respectivamente.

    Poscondición:

     Se llama recursivamente a hanoi hasta resolver el tablero.
    */
    if( disc==1 ) /* Mover un solo disco */
    {
        /* Se borra la pantalla, se imprime la tabla y se hace una */
        /* pausa que varia dependiendo del numero de discos: */
        system("cls");
        mueveDisco( tab, fil, col, ultNum, O, D ); /* Mueve el disco de origen a destino */
        if(col<=5) delay(4); //ajusta el tiempo
        else if(col<=10) delay(3);
        else if(col<=15) delay(2);
        else if(col>15) delay(1);
    }
    else
    {
        hanoi( tab, fil, col, disc-1, ultNum, O, D, A ); /* Mueve los discos superiores a auxiliar */
        system("cls"); //limpia la pantalla
        mueveDisco( tab, fil, col, ultNum, O, D ); /* Mueve el disco grande a destino */
        if(col<=5) delay(4); //ajusta e tiempo
        else if(col<=10) delay(3);
        else if(col<=15) delay(2);
        else if(col>15) delay(1);
        hanoi( tab, fil, col, disc-1, ultNum, A, O, D ); /* Mueve los discos de arriba desde auxiliar */
    };
};

void delay(int tiempo) /* Introduce una pausa en la ejecucion */
{
    int c, d; /* Variables de bucle */

    while(tiempo >= 0)
    {
        for (c = 1; c <= 10000; c++) /* Bucle de retardo */
            for (d = 1; d <= 10000; d++)
            {}
        tiempo--; /* Reduce el tiempo */
    }
}
main()
{
    int fil=3, col, *tablero = NULL; /* Inicia el numero de torres, discos */
    int f, c, disc=1, ultNum; /* Variables auxiliares para filas, columnas y discos */
    printf( "Indique el numero de discos: " ); /* Solicita el numero de discos */
    scanf( "%i", &col ); /* Lee la cantidad */
    tablero = (int *)malloc( sizeof(int)*fil*col );/* Reserva memoria del tablero */
    /* Resetea las torres poniendo "los discos" en una de ellas y 0 en el resto. */
    for( f=0; f < fil; f++ )/* Inicia el tablero en la primera torre */
        for( c=col-1; c >= 0; c-- )

            if( f==0 )
            {
                tablero[col*f+c] = disc; /* Asigna el tamaño del disco  */
                disc+=2; /* Incrementa el tamaño para el siguiente disco */
            }
            else
                tablero[col*f+c] = 0; /* Inicializa las otras torres como vacías */

    ultNum = disc; /* Guarda el tamaño del disco más grande */
    /* Se imprime el tablero antes de iniciar ningún movimiento: */
    system("cls"); /* Limpia la pantalla */
    imprime( tablero, fil, col, ultNum ); /* Imprime el estado inicial del tablero */
    delay(6); /* Pausa inicial antes de comenzar */
    /* Se llama a hanoi para comenzar "la partida": */
    hanoi( tablero, fil, col, col, ultNum, 0, 1, 2 ); /* Llama a la función recursiva para resolver el problema */
};
