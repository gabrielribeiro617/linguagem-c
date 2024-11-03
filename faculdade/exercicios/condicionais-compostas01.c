#include <stdio.h>

int main(){
    float salario, bonus = 0;

    printf("\033[1mSalario do funcionario: R$");
    scanf("%f", &salario);

    if (salario <= 1500) {
        bonus = salario * 0.10;
    } else {
        bonus = salario * 0.05;
    }
    
    printf("\033[32mSalario final: R$%.2f\033[m", (salario + bonus));

    return 0;
}