#include <stdio.h>

int main(){
    int codigo;
    float valor, desconto, total;

    printf("\033[1mCodigo: ");
    scanf("%d", &codigo);
    printf("Valor: R$");
    scanf("%f", &valor);

    switch (codigo) {
        case 1:
            desconto = valor * 0.10;
            break;
        case 2:
            desconto = valor * 0.20;
            break;
        case 3:
            desconto = valor * 0.30;
            break;
        default:
            desconto = 0;
            break;
    }

    total = valor - desconto;

    printf("\033[32mValor final do produto: R$%.2f\033[m", total);

    return 0;
}