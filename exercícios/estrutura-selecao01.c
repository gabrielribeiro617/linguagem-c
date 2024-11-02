#include <stdio.h>

int main(){
    int chute;
    int sorteio = 42;
    
    printf("***************************\n");
    printf("  Adivinhe o Numero\n");
    printf("***************************\n");
    printf("Qual numero voce chuta ser? ");
    scanf("%d", &chute);

    if (chute == sorteio) {
        printf("VOCE ACERTOU!");
    } else if (chute > sorteio) {
        printf("Voce chutou um numero maior que o sorteio.");
    } else {
        printf("Voce chutou um numero menor que o sorteio.");
    }

    return 0;
}