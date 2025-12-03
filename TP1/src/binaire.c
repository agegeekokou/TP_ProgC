#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int i = 0; i < taille; i++) {
        int n = nombres[i];
        int temp = n;
        int binaire[32];   // Pour stocker les bits
        int index = 0;

        // Cas spécial pour 0
        if (n == 0) {
            printf("0 en binaire : 0\n");
            continue;
        }

        // Conversion en binaire (division par 2)
        while (temp > 0) {
            binaire[index] = temp % 2;
            temp = temp / 2;
            index++;
        }

        // Affichage en ordre inverse
        printf("%d en binaire : ", n);
        for (int j = index - 1; j >= 0; j--) {
            printf("%d", binaire[j]);
        }
        printf("\n");
    }

    return 0;
}
