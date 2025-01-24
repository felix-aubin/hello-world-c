#include <stdio.h>

int main() {
    int a = 4;
    float b = 2.5;
    float resultat1 = a * b;
    float resultat2 = (float) a* b;
    printf("Sans type casting: %.2f\n", resultat1);
    printf("Avec type casting: %.2f\n", resultat2);
}