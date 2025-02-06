#include <stdio.h>

int main() {
    int matrice1[2][2] = {{1, 2}, {3, 4}};
    int matrice2[2][2] = {{5, 6}, {7, 8}};
    int matricep[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matricep[i][j] = 0;
            for(int k = 0; k < 2; k++){
                matricep[i][j] += matrice1[i][k]* matrice2[k][j]; 
            }
        }
    }
    printf("Résultat:\n%d %d\n%d %d\n", matricep[0][0], matricep[1][0], matricep[0][1], matricep[1][1]);
}