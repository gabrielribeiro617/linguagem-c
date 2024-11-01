#include <stdio.h>
#include <stdbool.h>

int main(){
    float valDisp, valDol, taxa, conversao = 0;
    bool resp;

    printf("Qual o valor disponivel para comprar em reais? R$");
    scanf("%f", &valDisp);
    printf("Qual o valor do livro em dolar? U$");
    scanf("%f", &valDol);
    printf("Qual a taxa atual de conversao dolar/real? ");
    scanf("%f", &taxa);

    conversao = valDol * taxa;
    resp = conversao <= valDisp;

    printf("O valor do livro em dolares e: U$%.2f\n", valDol);
    printf("O valor do livro em reais e: R$%.2f\n", conversao);
    printf("O valor disponivel para compra: R$%.2f\n", valDisp);

    if (resp) {
        printf("\033[1;32mO livro esta disponivel para compra!");
    }
    else {
        printf("\033[1;31mO livro NAO esta disponivel para compra!");
    }

    return 0;
}