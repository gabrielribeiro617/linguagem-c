#include <stdio.h>
#include <stdlib.h>

void conversao(float sal, float consumo) {
    float val_kw, val_pagar, val_desconto;

    val_kw = sal / 1000;
    val_pagar = consumo * val_kw;
    val_desconto = val_pagar - (val_pagar * 0.15);

    printf("Valor de 1 KW (em R$): R$ %.2f\n", val_kw);
    printf("Valor a ser pago (em R$): R$ %.2f\n", val_pagar);
    printf("Valor com desconto de 15%% (em R$): R$ %.2f\n", val_desconto);
}

int main(int argc, char **argv) {
    float sal_minimo, kw;

    puts("Insira o salario minimo:");
    scanf("%f", &sal_minimo);
    puts("Insira a quantidade de KW gastos:");
    scanf("%f", &kw);
    conversao(sal_minimo, kw);
    system("pause");

    return 0;
}