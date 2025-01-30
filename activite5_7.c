#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, next;
    printf("10 premiers nombres de Fibonacci:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n1);
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
}