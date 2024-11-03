#include <stdio.h>
#include <string.h>

int main(){
    char estado[3];
    float frete, valor;
    int dias = 0;

    printf("\033[1mValor: R$");
    scanf("%f", &valor);
    printf("Estado: ");
    scanf("%2s", estado);

    if (strcmp(estado, "RS") == 0) {
        frete = 12;
        dias = 10;
    } else if (strcmp(estado, "PR") == 0) {
        frete = 11;
        dias = 9;
    } else if (strcmp(estado, "SC") == 0) {
        frete = 9;
        dias = 9;
    } else if (strcmp(estado, "SP") == 0) {
        frete = 8;
        dias = 5;
    } else {
        printf("\033[31mEstado nao possui entrega para o produto.\n\033[m");
    }

    printf("\033[32mValor da compra (com frete): R$%.2f\n", valor + frete);
    printf("Frete a pagar: R$%.2f para o estado: %2s\n", frete, estado);
    printf("Prazo de entrega prevista: %d\033[m", dias);

    return 0;
}