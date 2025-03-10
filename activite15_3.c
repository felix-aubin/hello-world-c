#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) malloc(4 * sizeof(int));
    if (p == NULL) return 1;
    for (int i = 0; i < 4; i++) {
        p[i] = (i + 1) * 5;
    }
    for (int i = 0; i < 4; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    free(p);
    return 0;
}