#include <stdio.h>
#include <stdlib.h>

/* Instruccion para asegurar que las estructuras no tengan padding */
#pragma pack(push, 1)
/* Definicion de la estructura para el encabezado del archivo BMP */
typedef struct
{
    unsigned char  bfType[2];  /* Indica que el archivo debe ser "BM" para BMP */
    unsigned int   bfSize;     /* Tamaño total del archivo BMP en bytes */
    unsigned short bfReserved1;  /* Reservado, debe ser 0 */
    unsigned short bfReserved2;  /* Reservado, debe ser 0 */
    unsigned int   bfOffBits;  /* Desplazamiento hasta el inicio de los datos de la imagen */
} BITMAPFILEHEADER;
/* Definicion de la estructura para el encabezado de informacion del BMP */
typedef struct
{
    unsigned int   biSize;         // Tamano del encabezado de información
    int            biWidth;        // Ancho de la imagen
    int            biHeight;       // Altura de la imagen
    unsigned short biPlanes;       // Numero de planos
    unsigned short biBitCount;     // Numero de bits por píxel
    unsigned int   biCompression;  // Metodo de compresion
    unsigned int   biSizeImage;    // Tamano de la imagen
    int            biXPelsPerMeter;  // Resolucion horizontal en pixeles por metro
    int            biYPelsPerMeter;  // Resolucion vertical en pixeles por metro
    unsigned int   biClrUsed;        // Numero de colores usados en la paleta
    unsigned int   biClrImportant;   // Colores importantes para la visualización
} BITMAPINFOHEADER;
/* Finaliza el uso de la directiva #pragma para evitar padding en las estructuras */
#pragma pack(pop)
/* Función que convierte un píxel en formato BGR (azul, verde, rojo) a escala de grises */
unsigned char convertirAGris(unsigned char b, unsigned char g, unsigned char r)
{
    /* Fórmula estándar para convertir a escala de grises basada en los valores de los colores */
    return (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b);
}
/* Función principal para convertir un archivo BMP a blanco y negro */
void convertirBMPBlancoNegro(const char *input_filename, const char *output_filename)
{
    /* Abre el archivo de entrada en modo binario */
    FILE *input_file = fopen(input_filename, "rb");
    if (input_file == NULL)    /* Verifica si el archivo de entrada no se pudo abrir */
    {
        fprintf(stderr, "No se puede abrir el archivo %s\n", input_filename);
        return;
    }
    /* Lee el encabezado del archivo BMP */
    BITMAPFILEHEADER fileHeader;
    fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, input_file);

    /* Lee el encabezado de la información BMP */
    BITMAPINFOHEADER infoHeader;
    fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, input_file);

    /* Verifica si el archivo es un BMP válido y si tiene 24 bits por píxel */
    if (fileHeader.bfType[0] != 'B' || fileHeader.bfType[1] != 'M' || infoHeader.biBitCount != 24)
    {
        fprintf(stderr, "El archivo no es un BMP de 24 bits\n");
        fclose(input_file);  /* Cierra el archivo de entrada */
        return;
    }
    /* Abre el archivo de salida en modo binario */
    FILE *output_file = fopen(output_filename, "wb");
    if (output_file == NULL)    /* Verifica si no se puede crear el archivo de salida */
    {
        fprintf(stderr, "No se puede crear el archivo %s\n", output_filename);
        fclose(input_file);  /* Cierra el archivo de entrada */
        return;
    }
    /* Escribe los encabezados al archivo de salida */
    fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, output_file);
    fwrite(&infoHeader, sizeof(BITMAPINFOHEADER), 1, output_file);

    /* Calcula el relleno necesario para cada fila */
    int padding = (4 - (infoHeader.biWidth * 3) % 4) % 4;
    /* Lee, convierte y escribe cada fila de píxeles */
    for (int i = 0; i < infoHeader.biHeight; i++)
    {
        for (int j = 0; j < infoHeader.biWidth; j++)
        {
            unsigned char bgr[3];  /* Buffer para almacenar un píxel en formato BGR */
            fread(bgr, 3, 1, input_file);  /* Lee un píxel de 3 bytes */

            /* Convierte el pixel BGR a gris usando la función convertirAGris */
            unsigned char gris = convertirAGris(bgr[0], bgr[1], bgr[2]);

            /* Crea un nuevo pixel de color gris (se igualan los tres valores de BGR) */
            unsigned char gris_pixel[3] = {gris, gris, gris};
            fwrite(gris_pixel, 3, 1, output_file);  /* Escribe el pixel en el archivo de salida */
        }
        /* Salta el relleno del archivo original */
        fseek(input_file, padding, SEEK_CUR);
        /* Anade el relleno al archivo de salida */
        unsigned char padding_bytes[3] = {0, 0, 0};  /* Maximo de 3 bytes de relleno */
        fwrite(padding_bytes, padding, 1, output_file);
    }
    /* Cierra ambos archivos */
    fclose(input_file);
    fclose(output_file);
    /* Imprime un mensaje indicando que la conversion fue exitosa */
    printf("Imagen convertida a blanco y negro y guardada en %s\n", output_filename);
}

int main(int argc, char *argv[])
{
    const char *archivo_entrada = "avion.bmp";  /* Nombre del archivo BMP de entrada */
    const char *archivo_salida = "avion_bn.bmp";  /* Nombre del archivo BMP de salida */
    /* Llama a la funcion para convertir el BMP a blanco y negro */
    convertirBMPBlancoNegro(archivo_entrada, archivo_salida);
    return 0;  /* Finaliza el programa con codigo de salida 0 */
}
