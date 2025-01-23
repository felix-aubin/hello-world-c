#include <stdio.h>

// Déclaration de la fonction afficherDate
void afficherDate(void){
    printf("23 janvier 2025\n");
}

// Fonction Principale
int main() {
    // Variable nom
    char nom[] = "Felix";
    // Affichage message de bienvenue, incluant variable
    printf("Bienvenue au cours de programmation en C, %s !\n", nom);
    // Appel de la fonction afficher date
    afficherDate();
    // Affichage de la fin
    printf("Fin du programme.\n");
    return 0;
}