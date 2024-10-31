#include <stdio.h>
#include <string.h>

// Función que convierte números hasta 999 a letras
void convertirNumeroALetras(int numero, char *resultado) {
    char *unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    strcpy(resultado, ""); // Inicializa el resultado
    if (numero == 0) { strcpy(resultado, "cero"); return; }
    if (numero == 100) { strcpy(resultado, "cien"); return; }

    int decena = (numero % 100) / 10, unidad = numero % 10;

    {
        if (decena > 0) strcat(resultado, decenas[decena]), strcat(resultado, " ");
        if (unidad > 0) strcat(resultado, unidades[unidad]);
    }
}

// Funcion que maneja la conversion con decimales
void convertirConCentavos(float numero) {
    int parteEntera = (int)numero;
    int centavos = (int)((numero - parteEntera) * 100);
    char resultado[100];
    convertirNumeroALetras(parteEntera, resultado);
    printf("Salida: %s con %d centavos\n", resultado, centavos);
}

// Menú principal
void menu() {
    int opcion;
    float numero;
    do {
        printf("\n1. Convertir numero a letras\n2. Salir\nOpcion: ");
        scanf("%d", &opcion);
        if (opcion == 1) {
            printf("Ingrese un numero (hasta 2 decimales): ");
            scanf("%f", &numero);
            convertirConCentavos(numero);
        }
    } while (opcion != 2);
}

int main() {
    menu();
    return 0;
}
