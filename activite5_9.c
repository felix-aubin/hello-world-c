#include <stdio.h>
#include <unistd.h>

int main() {
    int compteur = 0;
    while(1) {
        printf("Traitement de la requête %d\n", compteur++);
        sleep(2);
        if(compteur == 5) {
            printf("Arrêt du serveur\n");
            break;
        }
    }
}