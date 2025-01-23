#include <stdio.h>
#include "message.h"
#include "message.c"
#include "math_operations.h"
#include "math_operations.c"

int main() {
    int a = 35, b = 12;

    message();
    printf("%d + %d = %d\n", a, b, addition(a, b));
    return 0;
}