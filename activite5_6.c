#include <stdio.h>

int main() {
    int nombre;
    printf("Nombre: ");
    scanf("%d", &nombre);
    int somme = 0 ;
    for(; nombre > 0; nombre /= 10) {
        somme += nombre %10;
    }
    printf("Somme des chiffres = %d\n", somme);
}