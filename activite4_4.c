#include <stdio.h>

int main() {
    char operateur = '*';
    int a = 5, b= 7;
;
    switch(operateur) {
        case '+':
        printf("%d\n", a + b);
        break;
        case '-':
        printf("%d\n", a - b);
        break;
        case '*':
        printf("%d\n", a * b);
        break;
        case '/':
        printf("%d\n", a / b);
        break;
        default:
        printf("Opérateur invalide");
    }
}