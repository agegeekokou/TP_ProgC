#include "operator.h"

int somme(int num1, int num2) { return num1 + num2; }
int difference(int num1, int num2) { return num1 - num2; }
int produit(int num1, int num2) { return num1 * num2; }
int quotient(int num1, int num2) { return num1 / num2; }
int modulo(int num1, int num2) { return num1 % num2; }
int et(int num1, int num2) { return num1 & num2; }
int ou(int num1, int num2) { return num1 | num2; }
int negation(int num1) { return ~num1; }

int main() {

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









