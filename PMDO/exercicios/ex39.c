#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    int chave, achou = 0, matriz[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Insira o dado da posicao %d, %d:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nBuscar chave: ");
    scanf("%d", &chave);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(chave == matriz[i][j]) {
                printf("Chave encontrada na posicao: %d, %d.\n", i + 1, j + 1);
                achou = 1;
                break;
            }
        }
        if(achou == 1) {
            break;
        }
    }

    if (achou == 0) {
        puts("Chave nao encontrada.");
    }

    system("pause");

    return 0;
}