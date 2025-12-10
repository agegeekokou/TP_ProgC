#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction pour afficher un tableau
void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction de tri à bulles
void triBulles(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Échanger les valeurs
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[TAILLE];

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 1 et 1000
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    // Afficher le tableau non trié
    printf("Tableau non trié :\n");
    afficherTableau(tableau, TAILLE);

    // Trier le tableau
    triBulles(tableau, TAILLE);

    // Afficher le tableau trié
    printf("\nTableau trié par ordre croissant :\n");
    afficherTableau(tableau, TAILLE);

    return 0;
}
