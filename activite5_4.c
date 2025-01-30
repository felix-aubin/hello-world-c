#include <stdio.h>

int main() {
    int nombre;
    do {
        printf("Écrit un nombre (pair stp):");
        scanf("%d", &nombre);
    } while(nombre % 2 == 1);
    printf("Merci\n");
}