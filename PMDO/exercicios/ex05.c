#include <stdio.h>

int main(){
    int a = 0, b = 0, soma, subt, mult, divi;

    printf("\033[1mDigite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    soma = a + b;
    subt = a - b;
    mult = a * b;
    divi = a / b;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subt);
    printf("Multiplcacao: %d\n", mult);
    printf("Divisao: %d\033[m", divi);

    return 0;
}