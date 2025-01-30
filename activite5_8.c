#include <stdio.h>

int main() {
    int nb;
    while(1) {
        printf("Bonjour, nombre:");
        scanf("%d", &nb);
        if(nb == 0) {
            return 0;
        }
    }
}