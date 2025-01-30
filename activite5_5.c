#include <stdio.h>

int main() {
    int nombre;
    printf("Nombre: ");
    scanf("%d", &nombre);
    int factorielle = 1;
    int i = 1;
    while (i <= nombre) {
        factorielle *= i;
        i++;
    }
    printf("Factorielle = %d\n", factorielle);
}