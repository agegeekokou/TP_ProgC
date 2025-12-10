#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Structure représentant une couleur RGBA
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

// Structure pour stocker une couleur distincte + son nombre d'occurrences
typedef struct {
    Couleur couleur;
    int occurrences;
} CouleurComptee;

// Fonction pour comparer deux couleurs
int couleursEgales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r &&
        c1.g == c2.g &&
        c1.b == c2.b &&
        c1.a == c2.a);
}

// Fonction pour afficher une couleur
void afficherCouleur(Couleur c) {
    printf("%02x %02x %02x %02x", c.r, c.g, c.b, c.a);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurComptee distinctes[TAILLE];  // au max 100 couleurs distinctes
    int nbDistinctes = 0;

    srand(time(NULL));

    // Remplir le tableau de couleurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = 0xFF;  // exemple : alpha toujours 255
    }

    // Calcul des couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;

        for (int j = 0; j < nbDistinctes; j++) {
            if (couleursEgales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].occurrences++;
                trouve = 1;
                break;
            }
        }

        // Si couleur encore jamais vue, on l'ajoute
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].occurrences = 1;
            nbDistinctes++;
        }
    }

    // Affichage des résultats
    printf("\nCouleurs distinctes et occurrences :\n");
    for (int i = 0; i < nbDistinctes; i++) {
        afficherCouleur(distinctes[i].couleur);
        printf(" : %d\n", distinctes[i].occurrences);
    }

    return 0;
}
