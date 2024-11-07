#include <stdio.h>
#include <stdlib.h>

struct tipo_primo {
    int numero;
    int posicao;
};

typedef struct tipo_primo tipo_primo;

int main(int argc, char **argv) {
    tipo_primo vetor[9];

    for(int i = 0; i < 9; i++) {
        printf("Insira o dado da posicao %d:\n", i + 1);
        scanf("%d", &vetor[i].numero);
        vetor[i].posicao = i + 1;
    }
    
    for(int i = 0; i < 9; i++) {
        if(vetor[i].numero % 2 != 0) {
            printf("%d e um primo, posicao: %d\n", vetor[i].numero, vetor[i].posicao);
        }
    }

    system("pause");

    return 0;
}