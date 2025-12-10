#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11   // Taille des tableaux

int main(void)
{
    int tabInt[SIZE];
    float tabFloat[SIZE];

    srand(time(NULL)); // Initialisation de rand()

    // Remplir les tableaux avec des valeurs aléatoires
    for (int i = 0; i < SIZE; i++) {
        tabInt[i] = rand() % 200;                   // entre 0 et 199
        tabFloat[i] = (rand() % 1000) / 100.0f;     // entre 0.00 et 9.99
    }

    // Affichage avant modification
    printf("=== Tableau d'entiers (AVANT) ===\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", tabInt[i]);
    printf("\n\n");

    printf("=== Tableau de floats (AVANT) ===\n");
    for (int i = 0; i < SIZE; i++)
        printf("%.2f ", tabFloat[i]);
    printf("\n\n");

    // Utilisation des pointeurs pour parcourir et modifier
    int* pInt = tabInt;        // pointe sur tabInt[0]
    float* pFloat = tabFloat;  // pointe sur tabFloat[0]

    for (int i = 0; i < SIZE; i++) {

        if (i % 2 == 0) {    // indice divisible par 2

            *(pInt + i) *= 3;          // équivalent à tabInt[i] *= 3;
            *(pFloat + i) *= 3.0f;     // équivalent à tabFloat[i] *= 3;
        }
    }

    // Affichage après modification
    printf("=== Tableau d'entiers (APRES) ===\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", tabInt[i]);
    printf("\n\n");

    printf("=== Tableau de floats (APRES) ===\n");
    for (int i = 0; i < SIZE; i++)
        printf("%.2f ", tabFloat[i]);
    printf("\n\n");

    return 0;
}
