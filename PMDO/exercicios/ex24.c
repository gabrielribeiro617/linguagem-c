#include <stdio.h>

int main(int argc, char **argv){ 
    // main é o seu programa, que é apenas uma função.

    /* O argc é um dado inteiro, que pode ser usado dentro do código
    para saber quantos argumentos foram passados para o programa, quando ele for executado pelo cmd; contando todas as palavras que foram
    separadas por espaço no prompt de comandos, ou seja, é o contador. */
    /* O argc, por padrão, sempre receberá o valor 1, pois será o
    nome do programa .exe escrito no cmd. */

    /* O argv guarda todo texto que vier a ser digitado na linha de
    comando do cmd, se executado pela tela preta. Ou seja, é o conteúdo. */

    if(argc > 1) {
        /* caso argc seja maior do que 1, significa que foi escrito
        algo a mais no cmd quando foi executado o arquivo .exe do
        programa. */

        printf("Foram inseridos %d argumentos:\n", argc);
        for(int i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("Nao foram inseridos argumentos no programa.\n");
    }

    return 0;
}