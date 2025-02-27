#include <stdio.h>
#include <string.h>

struct etudiant {
    char nom[50];
    int age;
    float moyenne;
};

int main() {
    struct etudiant etudiants[5];
    getchar();
    for (int i =0; i < 5; i++) {
        printf("Entrez les informations de l'étudiant %d :\n", i+1);
        printf("Nom : ");
        fgets(etudiants[i].nom, sizeof(etudiants[i].nom), stdin);
        etudiants[i].nom[strcspn(etudiants[i].nom, "\n")] = 0;
        printf("Âge : ");
        scanf("%d", &etudiants[i].age);
        printf("Moyenne : ");
        scanf("%f", &etudiants[i].moyenne);
        getchar();
    }
    printf("\n--- Liste des étudiants ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Étudiant %d : Nom: %s, Âge: %d, Moyenne: %.2f\n", i+1, etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
    }
    return 0;
}