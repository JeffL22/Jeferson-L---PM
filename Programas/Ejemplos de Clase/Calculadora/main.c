#include <stdio.h>
#include <stdlib.h>
#define SALIR 0
#define SUMA 1
#define MUL 2
#define DIV 3
#define ERR_OK 0
#define ERR_DBZ 1

int suma(int, int);
int divicion(float nume, float deno, float *r);
int main()
{
    int menu = 0;
    int result = 0;
    int sum1 = 0;
    int sum2 = 0;

    float f1 = 0.0;
    float f2 = 0.0;
    float resultf =0.0;
    printf(" Hello Caculator!\n");

    do
    {
        printf("\nSelecciona Funcion");
        printf("\n0-Salir\n1-Suma\n2-MUL\n3-DIV\n");
        scanf("%i",&menu);

        if(menu == SUMA)
        {
            printf("\nIngresa el primer sumando:");
            scanf("%i",&sum1);
            printf("\nIngresa el segundo sumando:");
            scanf("%i",&sum2);

            result = suma(sum1,sum2);
            printf("\nResult = %i\n",result);
        }

        if(menu == DIV)
        {
            printf("\nIngresa el numerador:");
            scanf("%f",&f2);
            printf("\nIngresa denominador:");
            scanf("%f",&f1);

            if(divicion(f2,f1,&resultf) == ERR_OK)
            {
                printf("\nResult = %f\n",resultf);
            }
            else
            {
                printf("\nDivision By Zero\n");
            }


        }

    }
    while(menu != SALIR);

    return 0;
}

int suma(int a, int b)
{
    return a + b;
}

int divicion(float nume, float deno, float *r)
{
    if(deno > 0)
    {
        *r = nume / deno;
        return ERR_OK;
    }else
    {
       *r = 0.0;
       return ERR_DBZ;
    }

}
