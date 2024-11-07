#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    srand(time(NULL));

    char faces[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'}; 
    char nipes[4][8] = {"Espadas", "Paus", "Copas", "Ouros"};
    /* Para fazer uma array de char, é importante entender que
    que deverá haver linha e coluna, pois a quantidade de palavras
    divididas por "," será a quantidade de linhas, e a palavra que
    tiver mais caracteres, deve ser contada, adicionando um espaço
    a mais, e dada essa quantidade a quatidade de colunas. */

    printf("%c de ", faces[rand() % 13]);
    printf("%s\n", nipes[rand() % 4]);
    system("pause");
    
    return 0;
}