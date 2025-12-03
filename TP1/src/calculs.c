#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // ===== TEST 1 : Addition =====
    num1 = 10;
    num2 = 5;
    op = '+';

    printf("Test 1 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '+': printf("%d\n", num1 + num2); break;
    }

    // ===== TEST 2 : Soustraction =====
    num1 = 10;
    num2 = 3;
    op = '-';

    printf("Test 2 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '-': printf("%d\n", num1 - num2); break;
    }

    // ===== TEST 3 : Multiplication =====
    num1 = 4;
    num2 = 6;
    op = '*';

    printf("Test 3 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '*': printf("%d\n", num1 * num2); break;
    }

    // ===== TEST 4 : Division =====
    num1 = 20;
    num2 = 4;
    op = '/';

    printf("Test 4 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '/': printf("%d\n", num1 / num2); break;
    }

    // ===== TEST 5 : Modulo =====
    num1 = 23;
    num2 = 5;
    op = '%';

    printf("Test 5 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '%': printf("%d\n", num1 % num2); break;
    }

    // ===== TEST 6 : ET binaire =====
    num1 = 10;
    num2 = 5;
    op = '&';

    printf("Test 6 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '&': printf("%d\n", num1 & num2); break;
    }

    // ===== TEST 7 : OU binaire =====
    num1 = 10;
    num2 = 5;
    op = '|';

    printf("Test 7 : %d %c %d = ", num1, op, num2);
    switch (op) {
        case '|': printf("%d\n", num1 | num2); break;
    }

    // ===== TEST 8 : NON binaire =====
    num1 = 10;
    op = '~';

    printf("Test 8 : %c%d = ", op, num1);
    switch (op) {
        case '~': printf("%d\n", ~num1); break;
    }

    return 0;
}
