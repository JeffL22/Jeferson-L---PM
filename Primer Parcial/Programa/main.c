#include <stdio.h>

int main()
{
    float precio_galon;
    float consumo_min, consumo_max;
    float litros_por_galon = 3.78541;

    printf("Introduce el precio del galon de gasolina : ");
    scanf("%f", &precio_galon);
    printf("Introduce el consumo minimo de gasolina (en litros por 100 km): ");
    scanf("%f", &consumo_min);
    printf("Introduce el consumo maximo de gasolina (en litros por 100 km): ");
    scanf("%f", &consumo_max);

    printf("\nConsumo (L/100km)\tCosto por Km \n");
    printf("-------------------------------------------\n");

    /* Calculamos el costo por cada 1 km para cada consumo en el rango dado. */
    for (float consumo = consumo_min; consumo <= consumo_max; consumo++)
    {
        /* Calculamos el costo por km. */
        float litros_por_km = consumo / 100.0;  /* Litros necesarios por cada km. */
        float galones_por_km = litros_por_km / litros_por_galon;  /* Galones por km. */
        float costo_por_km = galones_por_km * precio_galon;  /* Costo en pesos por cada km. */

        printf("%.1fL/100km\t\t%.2f \n", consumo, costo_por_km);
    }
    return 0;
}
