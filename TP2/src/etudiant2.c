#include <stdio.h>

struct Etudiant {
    char* firstName;
    char* lastName;
    char* address;
    float noteProg;
    float noteOS;
};

int main(void)
{
    struct Etudiant etudiants[5] = {
        {"Bernard", "LEMOINE", "5 avenue des vents, Lyon", 12, 9},
        {"Martin", "DUPOND", "2 rue du moulin, Paris", 15, 11},
        {"Jean", "DUPUIT", "75 allee des tresors, Paris", 8, 17},
        {"Catherine", "ELEONORE", "40 boulevard du marais, Orlean", 10, 6},
        {"Julie", "CRUZ", "8 rue des poussins, Nantes", 19, 11}
    };

    for (int i = 0; i < 5; i++) {
        printf(
            "%s %s - %s - Prog: %.2f  OS: %.2f\n",
            etudiants[i].firstName,
            etudiants[i].lastName,
            etudiants[i].address,
            etudiants[i].noteProg,
            etudiants[i].noteOS
        );
    }

    return 0;
}
