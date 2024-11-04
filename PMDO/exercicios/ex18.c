#include <stdio.h>

int main(){
    int i = 0, mat[3][3] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    puts("Imprimindo a primeira linha:\n");
    for (i = 0; i < 3; i++) {
        printf("%d | ", mat[0][i]);
    }

    return 0;
}