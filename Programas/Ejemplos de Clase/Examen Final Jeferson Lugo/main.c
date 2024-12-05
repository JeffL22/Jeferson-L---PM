#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Define los limites de las cadenas*/
#define MAX_NAME 50
#define MAX_CARRERA 50

typedef struct
{
    char nombre[MAX_NAME];
    float promedio;
    char carrera[MAX_CARRERA];
} Alumno;

void nuevoArchivo(const char *filename) /* Funcion para crear archivo */
{
    FILE *file = fopen(filename, "wb"); /* Abrir el archivo en binario*/
    if (!file)
    {
        perror("Error al crear el archivo");
        return;
    }
    fclose(file);
    printf("Archivo %s creado exitosamente.\n", filename);
}

void guardarAlumno(const char *filename, Alumno alumno)
{
    FILE *file = fopen(filename, "ab");
    if (!file)
    {
        perror("Error al abrir el archivo");
        return;
    }
    fwrite(&alumno, sizeof(Alumno), 1, file);
    fclose(file);
    printf("Alumno guardado exitosamente.\n");
}

void listarAlumnos(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error al abrir el archivo");
        return;
    }

    Alumno alumno;
    printf("\nListado de alumnos:\n");
    int count = 0; /* Contador para numerar los registros */

    /* Leer y mostrar cada alumno almacenado */
    while (fread(&alumno, sizeof(Alumno), 1, file))
    {
        printf("[%d] Nombre: %s, Promedio: %.2f, Carrera: %s\n", count++, alumno.nombre, alumno.promedio, alumno.carrera);
    }

    if (count == 0)
    {
        printf("No hay alumnos registrados.\n");
    }
    fclose(file);
}

/* Funcion para buscar un alumno por nombre en el archivo */
void buscarAlumno(const char *filename, const char *nombreBuscado)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error al abrir el archivo");
        return;
    }

    Alumno alumno;
    int encontrado = 0;

    /* Buscar coincidencias en los registros con el nombre dado */
    while (fread(&alumno, sizeof(Alumno), 1, file))
    {
        if (strcmp(alumno.nombre, nombreBuscado) == 0)
        {
            printf("Alumno encontrado:\nNombre: %s, Promedio: %.2f, Carrera: %s\n", alumno.nombre, alumno.promedio, alumno.carrera);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Alumno no encontrado.\n");
    }
    fclose(file);
}

int main()
{
    int opcion;
    char filename[100] = ""; /* Nombre del archivo, inicializado vacio */
    Alumno alumno; /* Variable para almacenar datos temporalmente */

    do
    {
        printf("\nMenu:\n");
        printf("1. Crear nuevo archivo\n");
        printf("2. Guardar nuevo alumno\n");
        printf("3. Listar alumnos\n");
        printf("4. Buscar alumno por nombre\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1: /* Crear un nuevo archivo */
            printf("Ingrese el nombre del archivo: ");
            scanf("%s", filename);
            nuevoArchivo(filename);
            break;
        case 2:
            if (strlen(filename) == 0)
            {
                printf("Primero debe crear o abrir un archivo.\n");
                break;
            }
            printf("Ingrese nombre del alumno: ");
            scanf(" %[^\n]", alumno.nombre);
            printf("Ingrese promedio del alumno (0-10): ");
            scanf("%f", &alumno.promedio);
            printf("Ingrese carrera del alumno: ");
            scanf(" %[^\n]", alumno.carrera);
            guardarAlumno(filename, alumno);
            break;
        case 3: /* Lista de alumnos almacenados */
            if (strlen(filename) == 0)
            {
                printf("Primero debe crear o abrir un archivo.\n");
                break;
            }
            listarAlumnos(filename);
            break;
        case 4:
            if (strlen(filename) == 0)
            {
                printf("Primero debe crear o abrir un archivo.\n");
                break;
            }
            printf("Ingrese el nombre del alumno a buscar: ");
            char nombreBuscado[MAX_NAME];
            scanf(" %[^\n]", nombreBuscado);
            buscarAlumno(filename, nombreBuscado);
            break;
        case 0:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion no valida.\n");
        }
    }
    while (opcion != 0);

    return 0;
}
