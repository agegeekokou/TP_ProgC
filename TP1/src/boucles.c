#include <stdio.h>

int main()
{
    int compteur = 5;   // Doit être strictement inférieur à 10
    int i = 1, j;

    if (compteur >= 10)
    {
        printf("Erreur : compteur doit être strictement inferieur a 10.\n");
        return 0;
    }

    while (i <= compteur)
    {
        j = 1;
        while (j <= i)
        {
            if (i == 3 && j == 2)
                printf("# ");
            else if (i == 4 && (j == 2 || j == 3))
                printf("# ");
            else
                printf("* ");

            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
