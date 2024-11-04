#include <stdio.h>

int main(){
    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            continue; 
            /* O continue faz passar para a próxima etapa,
            ignorando o restante dos comandos dentro do laço de
            repetição for. */
        }
        printf("%d ", i);
    }

    return 0;
}