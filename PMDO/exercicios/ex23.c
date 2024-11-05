#include <stdio.h>

void imprime(int m[][4], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        puts("");
    }
}

int main(){
    int mat[3][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}};

    imprime(mat, 3);

    return 0;
}