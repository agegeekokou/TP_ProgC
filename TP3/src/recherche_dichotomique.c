#include <stdio.h>

int main() {
    int tableau[100];

    // Remplir le tableau avec des entiers triés
    for (int i = 0; i < 100; i++) {
        tableau[i] = i - 2;   // Exemple : -2, -1, 0, 1, 2, ...
    }

    // Afficher le tableau
    printf("Tableau trie :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demander un entier à chercher
    int entierRecherche;
    printf("Entrez l'entier que vous souhaitez chercher : ");

    if (scanf_s("%d", &entierRecherche) != 1) {
        printf("Erreur : entree invalide.\n");
        return 1;
    }

    // Recherche dichotomique
    int debut = 0;
    int fin = 99;
    int trouve = 0;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tableau[milieu] == entierRecherche) {
            trouve = 1;
            break;
        }
        else if (tableau[milieu] < entierRecherche) {
            debut = milieu + 1;
        }
        else {
            fin = milieu - 1;
        }
    }

    // Résultat
    if (trouve)
        printf("Resultat : entier present\n");
    else
        printf("Resultat : entier absent\n");

    return 0;
}
