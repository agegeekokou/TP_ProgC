#include "fichier.h"
#include <stdio.h>

void lire_fichier(const char* nom_de_fichier) {
    FILE* file = fopen(nom_de_fichier, "r");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

void ecrire_dans_fichier(const char* nom_de_fichier, const char* message) {
    FILE* file = fopen(nom_de_fichier, "w");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    fputs(message, file);

    fclose(file);
}

