#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int hr_trabalho;
    float sal_minimo, sal_bruto, sal_final;

    puts("Insira numero de horas trabalhadas:");
    scanf("%d", &hr_trabalho);
    puts("Insira valor do salario minimo:");
    scanf("%f", &sal_minimo);

    sal_bruto = hr_trabalho * (sal_minimo /2);
    sal_final = sal_bruto - (sal_bruto * 0.03);

    printf("Salario a receber: R$ %.2f\n", sal_final);
    system("pause");

    return 0;
}