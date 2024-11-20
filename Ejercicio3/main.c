//
// Created by pinchiguillo on 20/11/2024.
//
#include <stdio.h>

int main() {

    // Ejercicio 3a
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    // Ejercicio 3b
    FILE *file2 = fopen("file.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file2, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file2);

    // Abrir de nuevo para leer
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}