#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float sal, perc, salf, aumento;

    puts("Insira o salario:");
    scanf("%f", &sal);
    fflush(stdin);
    puts("Insira o percentual de aumento:");
    scanf("%f", &perc);
    fflush(stdin);

    aumento = sal * (perc / 100);
    salf = sal + aumento;

    printf("Valor do aumento: R$%.2f\n", aumento);
    printf("Novo salario: R$%.2f\n", salf);

    system("pause");

    return 0;
}