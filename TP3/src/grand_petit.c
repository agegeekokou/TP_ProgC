#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
        printf("%d, ", tableau[i]);
    }

    // Initialiser min et max avec la première valeur du tableau
    int min = tableau[0];
    int max = tableau[0];

    // Parcourir le tableau pour trouver min et max
    for (i = 1; i < 100; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le plus petit nombre du tableau est : %d\n", min);
    printf("Le plus grand nombre du tableau est : %d\n", max);

    return 0;
}
