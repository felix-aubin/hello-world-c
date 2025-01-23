#include <stdio.h>
#include "math_operations.h"
#include "math_operations.c"

int main() {
    int a = 10, b = 7;
    

    printf("Hello, World!\n");

    printf("%d + %d = %d\n", a, b, addition(a, b));
    printf("%d - %d = %d\n", a, b, soustraction(a, b));
    return 0;
}