#include <stdio.h>

int main(){
    float valor, desconto;
    int codigo;

    printf("\033[1mValor do produto: R$");
    scanf("%f", &valor);
    printf("Codigo do produto: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        desconto = valor * 0.30;
    } else {
        desconto = valor * 0.10;
    }

    printf("\033[32mValor do desconto: R$%.2f\n", desconto);
    printf("\033[35mValor final: R$%.2f\033[m", (valor - desconto));

    return 0;
}