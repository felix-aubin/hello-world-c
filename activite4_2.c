#include <stdio.h>

int main() {
    int nombre = 8;
    
    if(nombre % 3 == 0){
        printf("Le nombre %d est un multiple de 3\n", nombre);
    }
        else {
            printf("Le nombre %d n'est pas un multiple de 3\n", nombre);
        }
    
}