#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float preco_fabrica, lucro_distr, imposto, val_final, perc_lucro, perc_imposto;

    printf("Insira o preco da fabrica: R$ ");
    scanf("%f", &preco_fabrica);
    printf("Insira a porcentagem de lucro do distribuidor: ");
    scanf("%f", &perc_lucro);
    printf("Insira a porcentagem de impostos: ");
    scanf("%f", &perc_imposto);

    lucro_distr = preco_fabrica * (perc_lucro / 100);
    imposto = preco_fabrica * (perc_imposto / 100);
    val_final = preco_fabrica + lucro_distr + imposto;

    printf("Lucro do distribuidor: R$ %.2f\n", lucro_distr);
    printf("Impostos: R$ %.2f\n", imposto);
    printf("Valor final: R$ %.2f\n", val_final);
    system("pause");

    return 0;
}