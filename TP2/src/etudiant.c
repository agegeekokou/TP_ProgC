#include <stdio.h>

int main(void)
{
    char* firstNames[] = {
        "LEMOINE",
        "DUPOND",
        "DUPUIT",
        "ELEONORE",
        "CRUZ"
    };

    char* lastNames[] = {
        "Bernard",
        "Martin",
        "Jean",
        "Catherine",
        "Julie"
    };

    char* addresses[] = {
        "5 avenue des vents",
        "2 rue du moulin",
        "75 allee des tresors",
        "40 boulevard du marais",
        "8 rue des poussins"
    };

    float notesProg[] = {12, 15, 8, 10, 19};
    float notesOS[] = {9, 11, 17, 6, 11};

    for (int i = 0; i < 5; i++) {
        printf("%s %s - %s - %.2f / %.2f\n",
            lastNames[i],
            firstNames[i],
            addresses[i],
            notesProg[i],
            notesOS[i]);       
    }
   
    return 0;
}
