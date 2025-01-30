#include <stdio.h>

int main() {
    int note = 90;

    if(note < 70) {
        printf("Insuffisant\n");
    }
    else if (note < 89) {
        printf("Bien\n");
    }
    else {
        printf("Excellent\n");
    }
}