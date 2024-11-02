#include <stdio.h>

int main() {
    float salario, reajuste = 0;

    printf("\033[1mSalario do funcionario: ");
    scanf("%f", &salario);

    reajuste = salario * 1.10;

    if (salario <= 1500) {
        printf("\033[32mO salario reajustado: %.2f \033[m", reajuste);
    } else {
        printf("\033[33mInfelizmente, voce nao recebera um aumento.\033[m");
    }

    return 0;
}