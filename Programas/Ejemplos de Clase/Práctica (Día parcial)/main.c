#include <stdio.h>
#include <stdlib.h>

int a = 199; /* Es global. */

void printa(void);
void printaglobal(void);

int main()
{
    /* Los {} Representan un ambiente o un ambito */
    int a = 10; /*Es local. */
    printf("Valor de a:%i\n",a);

    printa();
    printaglobal();
    return 0;
}
void printa(void)
{
    int a = 1024;
    printf("Valor de a:%i\n",a);
}
void printaglobal(void)
{
    printf("Valor de a:%i\n",a);
}
