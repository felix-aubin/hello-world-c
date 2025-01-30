#include <stdio.h>

int main() {
    int nombre;
    while(1) {
        printf("Nombre:\n");
        scanf("%d", &nombre);
        if (nombre == 0) {
            printf("Fin\n");
            return 0;
        }
    }
}