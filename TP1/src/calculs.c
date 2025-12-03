#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Saisie des valeurs
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);

    printf("Entrez un operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // espace avant %c pour ignorer le retour à la ligne

    switch (op) {
        case '+':
            printf("Resultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zero !\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Resultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zero !\n");
            break;

        case '&':
            printf("Resultat : %d\n", num1 & num2);
            break;

        case '|':
            printf("Resultat : %d\n", num1 | num2);
            break;

        case '~':
            printf("Resultat : %d\n", ~num1);
            break;

        default:
            printf("Operateur invalide !\n");
    }

    return 0;
}


