#include <stdio.h>

struct CouleurRGBA {
    unsigned char r;   // rouge
    unsigned char g;   // vert
    unsigned char b;   // bleu
    unsigned char a;   // alpha
};

int main(void)
{
    // Tableau de 10 couleurs
    struct CouleurRGBA couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x00, 0x00, 0x00, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xaa, 0x55, 0x22, 0xff},
        {0x12, 0x34, 0x56, 0x78},
        {0xde, 0xad, 0xbe, 0xef},
        {0x7f, 0x7f, 0x7f, 0xff},
        {0xff, 0xff, 0xff, 0xff}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d : R=%#04x G=%#04x B=%#04x A=%#04x\n",
               i + 1,
               couleurs[i].r,
               couleurs[i].g,
               couleurs[i].b,
               couleurs[i].a);
    }

    return 0;
}
