#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    srand(time(NULL));

    int opcao, computador = rand() % 3 + 1;

    puts("__________JoKenPo__________\n");
    puts("1. PEDRA");
    puts("2. PAPEL");
    puts("3. TESOURA");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    puts("___________________________\n");

    switch(opcao) {
        case 1:
            printf("Jogador escolheu PEDRA\n");
            break;
        case 2:
            printf("Jogador escolheu PAPEL\n");
            break;
        case 3:
            printf("Jogador escolheu TESOURA\n");
            break;
        default:
            printf("Opçao invalida!\n");
            break;
    }

    if(computador == 1) {
        printf("Computador escolheu PEDRA\n");
    } else if(computador == 2) {
        printf("Computador escolheu PAPEL\n");
    } else {
        printf("Computador escolheu TESOURA\n");
    }

    if((opcao == 1 && computador == 2) || (opcao == 2 && computador == 3) || (opcao == 3 && computador == 1)) {
        puts("VOCE PERDEU");
    } else if((opcao == 1 && computador == 3) || (opcao == 2 && computador == 1) || (opcao == 3 && computador == 2)) {
        puts("VOCE VENCEU");
    } else {
        puts("EMPATE");
    } 

    puts("___________________________\n");
    system("pause");

    return 0;
}