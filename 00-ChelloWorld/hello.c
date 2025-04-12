#include <stdio.h>

int main(void) {
    
    FILE *file = fopen("output.txt", "w");
    
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    fprintf(file, "Hola Framco Alarcon!\n");

    fclose(file);
    
    return 0;
}
