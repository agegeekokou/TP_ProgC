#include <stdio.h>

int main()
{
    /* i. char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    /* ii. short */
    short int s = -32000;
    signed short int ss = -15000;
    unsigned short int us = 60000;

    /* iii. int */
    int i = -100000;
    signed int si = -50000;
    unsigned int ui = 400000;

    /* iv. long int */
    long int l = -1000000;
    signed long int sl = -700000;
    unsigned long int ul = 900000;

    /* v. long long int */
    long long int ll = -9000000000;
    signed long long int sll = -5000000000;
    unsigned long long int ull = 18000000000ULL;

    /* vi. float */
    float f = 3.14f;

    /* vii. double */
    double d = 3.1415926535;

    /* viii. long double */
    long double ld = 3.141592653589793L;

    /* Affichage des valeurs */
    printf("Valeurs des variables de base :\n\n");

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short int : %d\n", s);
    printf("signed short int : %d\n", ss);
    printf("unsigned short int : %u\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", l);
    printf("signed long int : %ld\n", sl);
    printf("unsigned long int : %lu\n\n", ul);

    printf("long long int : %lld\n", ll);
    printf("signed long long int : %lld\n", sll);
    printf("unsigned long long int : %llu\n\n", ull);

    printf("float : %.2f\n\n", f);

    printf("double : %.10f\n\n", d);

    printf("long double : %.15Lf\n", ld);

    return 0;
}
