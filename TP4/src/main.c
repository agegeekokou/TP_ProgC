#include <stdio.h>
#include "operator.h"
#include "fichier.h"

void exercice_1() {
	int result = 0;

	int num1, num2;
	char op;

	printf("Veuillez saisir num1: ");
	scanf_s("%d", &num1);

	printf("Veuillez saisir num2: ");
	scanf_s("%d", &num2);

	printf("Veuillez saisir l'operation (+, -, *, /, %, &, |, ~): ");
	scanf_s(" %c", &op);

	switch (op) {
		case '+':
			result = somme(num1, num2);
			break;

		case '-':
			result = difference(num1, num2);
			break;

		case '*':
			result = produit(num1, num2);
			break;

		case '/':
			result = quotient(num1, num2);
			break;

		case '&':
			result = et(num1, num2);
			break;

		case '|':
			result = ou(num1, num2);
			break;

		case '~':
			result = negation(num1);
			break;

		default:

			break;
	}

	printf("Résultat:  %d", result);
}

void exercice_2() {
	int choice;

	char nom_de_fichier[100];
	char message[256];

	printf("Que souhaitez-vous faire ?\n");
	printf("1. Lire un fichier\n");
	printf("2. Écrire dans un fichier\n");
	printf("Votre choix: ");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("Vous avez choisi : Lire un fichier\n");

		lire_fichier("C:\\data.txt");
		break;
	case 2:
		printf("Vous avez choisi : Écrire dans un fichier\n");
		printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
		scanf_s("%99s", nom_de_fichier, (unsigned)sizeof(nom_de_fichier));

		int c;
		while ((c = getchar()) != '\n' && c != EOF);

		printf("Entrez le message à écrire : ");
		fgets(message, sizeof(message), stdin);

		printf("Le message a été écrit dans le fichier %s\n", nom_de_fichier);

		ecrire_dans_fichier("C:\\data.txt", message);
		break;

	default:
		printf("Choix invalide\n");
		break;
	}

	return 0;
}

int main() {

	int choice;

	printf("Quel exercice souhaitez-vous faire ?\n");
	printf("1. Exercice_4.1\n");
	printf("2. Éxercice_4.2\n");
	printf("Votre choix : ");

	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("Vous avez choisi : Exercice_4.1\n");
		exercice_1();
		break;
	case 2:
		printf("Vous avez choisi : Éxercice_4.2\n");
		exercice_2();
		break;

	default:
		printf("Choix invalide\n");
		break;
	}

	return 0;
	
}


