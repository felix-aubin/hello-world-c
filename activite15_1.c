#include <stdio.h>
int main() {
 int y = 15;
 int *ptr = &y;
 printf("Adresse de y : %p\n", &y);
 printf("Valeur de y : %d\n", *ptr);
 return 0;
}