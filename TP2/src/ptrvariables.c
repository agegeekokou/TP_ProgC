#include <stdio.h>
#include <stdint.h>  // Pour uint8_t, uint16_t etc.
#include <inttypes.h>

int main(void)
{
    // Déclaration des variables
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long l = 0x11223344;
    long long ll = 0x1122334455667788;
    float f = 1.0f;              // Pour afficher en hex, on reinterpret la mémoire
    double d = 2.0;
    long double ld = 3.0;

    // Déclaration des pointeurs
    char* pc = &c;
    short* ps = &s;
    int* pi = &i;
    long* pl = &l;
    long long* pll = &ll;
    float* pf = &f;
    double* pd = &d;
    long double* pld = &ld;

    printf("===== AVANT MANIPULATION =====\n");

    printf("Adresse de c : %p, Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur : %016lx\n", (void*)pl, (unsigned long)l);
    printf("Adresse de ll: %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)ll);

    // Conversion brute en hex pour float/double/long double
    printf("Adresse de f : %p, Valeur : %08x\n", (void*)pf, *(uint32_t*)pf);
    printf("Adresse de d : %p, Valeur : %016llx\n", (void*)pd, *(uint64_t*)pd);
    printf("Adresse de ld: %p, Valeur : ", ld);

    // Affichage brut du long double (la taille varie selon plateforme)
    unsigned char* raw = (unsigned char*)pld;
    for (int k = sizeof(long double) - 1; k >= 0; k--)
        printf("%02x", raw[k]);
    printf("\n");

    // ===== MANIPULATION PAR LES POINTEURS =====
    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x87654321;
    *pl = 0xaabbccdd;
    *pll = 0x0102030405060708;

    *pf = 3.14f;
    *pd = 4.2;
    *pld = 5.5;

    printf("\n===== APRES MANIPULATION =====\n");

    printf("Adresse de c : %p, Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur : %016lx\n", (void*)pl, (unsigned long)l);
    printf("Adresse de ll: %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)ll);

    printf("Adresse de f : %p, Valeur : %08x\n", (void*)pf, *(uint32_t*)pf);
    printf("Adresse de d : %p, Valeur : %016llx\n", (void*)pd, *(uint64_t*)pd);

    printf("Adresse de ld: %p, Valeur : ", ld);
    for (int k = sizeof(long double) - 1; k >= 0; k--)
        printf("%02x", raw[k]);
    printf("\n");

    return 0;
}
