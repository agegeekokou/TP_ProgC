#include <stdio.h>

int main(void)
{
    char stringSrc[20] = "Hello";
    char stringDest[20] = "World";
    char copy[40];
    char concat[40];
    int counter = 0;
    int i = 0;
    int j = 0;

    // Copier stringSrc dans copy
    while (stringSrc[i] != '\0') {
        copy[i] = stringSrc[i];
        counter++;
        i++;
    }
    copy[i] = '\0';

    // Reset i pour concaténation
    i = 0;

    // 1. Copier stringSrc dans concat
    while (stringSrc[i] != '\0') {
        concat[i] = stringSrc[i];
        i++;
    }

    // 2. Copier stringDest à la suite
    while (stringDest[j] != '\0') {
        concat[i] = stringDest[j];
        i++;
        j++;
    }

    // Terminer concat
    concat[i] = '\0';

    printf("Compteur: %d\n", counter);
    printf("Contenu de copy : %s\n", copy);
    printf("Resultat de la concaténation : %s\n", concat);

    return 0;
}
