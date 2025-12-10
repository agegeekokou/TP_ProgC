#include <stdio.h>

int main() {
    int d = 0x10010000; // Exemple : place ici la valeur de ton choix

    // Vérification du 4e bit de gauche → position 28 depuis la droite
    int bit4 = (d >> 28) & 1;

    // Vérification du 20e bit de gauche → position 12 depuis la droite
    int bit20 = (d >> 12) & 1;

    // Vérifier si les deux bits valent 1
    int resultat = (bit4 == 1 && bit20 == 1);

    // Affichage
    printf("%d\n", resultat);

    return 0;
}
