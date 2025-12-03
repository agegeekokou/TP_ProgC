#include <stdio.h>

int main() {
    int a = 2;   // Base
    int b = 3;   // Exposant
    int resultat = 1;  // Variable pour stocker le résultat
    int i;

    // Calcul de a^b avec une boucle
    for (i = 1; i <= b; i++) {
        resultat = resultat * a;
    }

    // Affichage du résultat
    printf("%d a la puissance %d est egal a %d\n", a, b, resultat);

    return 0;
}
