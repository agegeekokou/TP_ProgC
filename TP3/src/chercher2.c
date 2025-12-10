#include <stdio.h>

#define TAILLE_TABLEAU 10
#define LONGUEUR_MAX 200

// Fonction qui compare deux chaînes caractère par caractère
// Retourne 1 si elles sont identiques, 0 sinon
int comparerChaines(const char* s1, const char* s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // différent
        }
        i++;
    }

    // Si les deux sont terminées en même temps → identiques
    return (s1[i] == '\0' && s2[i] == '\0');
}

int main() {

    // Tableau de 10 phrases (tableau de chaînes)
    char* phrases[TAILLE_TABLEAU] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[LONGUEUR_MAX];

    printf("Entrez la phrase que vous souhaitez chercher :\n");
    fgets(recherche, LONGUEUR_MAX, stdin);

    // Enlever le \n ajouté par fgets (si présent)
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche dans le tableau
    int trouve = 0;

    for (int j = 0; j < TAILLE_TABLEAU; j++) {
        if (comparerChaines(recherche, phrases[j])) {
            trouve = 1;
            break;
        }
    }

    // Résultat
    if (trouve) {
        printf("\nPhrase trouvée\n");
    }
    else {
        printf("\nPhrase non trouvée\n");
    }

    return 0;
}
