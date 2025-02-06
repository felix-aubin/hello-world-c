#include <stdio.h>

int main() {
    int tableau[5] = {1,2,3,4,5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    printf("Taille: %d\n", taille);
    printf("\n Tableau: \n");

    for(int j = 0; j < taille; j++) {
        printf("%d\n", tableau[j]);
    }
    printf("\n Tableau inversé:\n");
    for(int i = 0; i < taille / 2; i++) {
        int nb = tableau[i];
        tableau[i] = tableau[taille - 1 - i];
        tableau[taille - 1 - i] = nb;
    }
    for(int j = 0; j < taille; j++) {
        printf("%d\n", tableau[j]);
    }
}