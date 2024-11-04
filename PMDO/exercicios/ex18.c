#include <stdio.h>

int main(){
    int i = 0, mat[3][3] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    puts("\033[1mImprimindo a primeira linha:");

    for (i = 0; i < 3; i++) {
        printf("%d  ", mat[0][i]);
    }

    puts("\n\nImprimindo a matriz toda:");

    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d  ", mat[i][j]);
        }
        puts("");
    }

    puts("\033[m");

    return 0;
}