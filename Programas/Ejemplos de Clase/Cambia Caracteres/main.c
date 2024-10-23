#include <stdio.h>

int main() {
    char p1;
    printf("Ingresa un caracter (0 para finalizar): ");

    p1 = getchar();

    while (p1 != '0') {  // El programa se ejecuta hasta que se ingrese '0'
        if (p1 >= 97 && p1 <= 122) {  // Verifica si es una letra minúscula (a-z)
            printf("El caracter en mayúscula es: ");
            putchar(p1 - 32);  // Convierte a mayúscula restando 32
            printf("\n");
        } else if (p1 >= 65 && p1 <= 90) {  // Verifica si es una letra mayúscula (A-Z)
            printf("El caracter en minúscula es: ");
            putchar(p1 + 32);  // Convierte a minúscula sumando 32
            printf("\n");
        } else {  // Si no es una letra, muestra un mensaje
            printf("El caracter no es una letra.\n");
        }
        // Lee el siguiente carácter para continuar el bucle
        printf("Ingresa otro caracter (0 para finalizar): ");
        getchar();  // Consumir el salto de línea anterior
        p1 = getchar();
    }

    printf("Programa finalizado.\n");
    return 0;
}
