#include <stdio.h>

int main()
{
    int a = 16;
    int b = 3;

    int addition;
    int soustraction;
    int multiplication;
    int division;
    int modulo;

    int egal;
    int superieur;

    /* Opérations arithmétiques */
    addition = a + b;
    soustraction = a - b;
    multiplication = a * b;
    division = a / b;      // Division entière
    modulo = a % b;        // Reste de la division

    /* Opérations de comparaison (résultat booléen : 0 = faux, 1 = vrai) */
    egal = (a == b);
    superieur = (a > b);

    /* Affichage des résultats */
    printf("Valeurs : a = %d, b = %d\n\n", a, b);

    printf("Addition a + b = %d\n", addition);
    printf("Soustraction a - b = %d\n", soustraction);
    printf("Multiplication a * b = %d\n", multiplication);
    printf("Division a / b = %d\n", division);
    printf("Modulo a %% b = %d\n\n", modulo);

    printf("a est égal à b : %d\n", egal);
    printf("a est supérieur à b : %d\n", superieur);

    return 0;
}
