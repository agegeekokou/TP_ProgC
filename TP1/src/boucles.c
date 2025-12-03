#include <stdio.h>

int main()
{
    int compteur = 5;   // Doit être strictement inférieur à 10
    int i, j;

    if (compteur >= 10)
    {
        printf("Erreur : compteur doit être strictement inferieur a 10.\n");
        return 0;
    }

    for (i = 1; i <= compteur; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2)
                printf("# ");
            else if (i == 4 && (j == 2 || j == 3))
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
