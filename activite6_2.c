#include <stdio.h>

int main() {
    float tableau[] = {1.1, 2.2, 3.3, 4.4, 6.9};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    float somme = 0;
    float moyenne = 0;
    
    printf("\n Tableau: \n");

    for(int j = 0; j < taille; j++) {
        printf("%.1f\n", tableau[j]);
    }

    for(int i = 0; i < taille; i++) {
        somme = somme + tableau[i];
    }
    moyenne = somme / taille;
    printf("Moyenne: %.1f\n", moyenne);
}