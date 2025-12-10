#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int tableau[TAILLE];
    int i, entierRecherche;
    int present = 0; // 0 = absent, 1 = présent

    srand((unsigned int)time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    printf("Tableau :\n");
    afficherTableau(tableau, TAILLE);

    // Demander et vérifier la saisie utilisateur
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    if (scanf_s("%d", &entierRecherche) != 1) {
        printf("Erreur : entrée invalide.\n");
        return 1;
    }

    // Recherche linéaire
    for (i = 0; i < TAILLE; i++) {
        if (tableau[i] == entierRecherche) {
            present = 1;
            break;
        }
    }

    if (present) {
        printf("\nRésultat : entier présent\n");
    }
    else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}
