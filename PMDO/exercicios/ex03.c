#include <stdio.h>

int main(){
    int idade = 0;
    float peso = 0;

    printf("Valor inicial da idade: %d.\n", idade);
    printf("Valor inicial de peso: %.2f.\n", peso);
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    printf("Digite um peso: ");
    scanf("%f", &peso);
    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %.2f.", peso);

    return 0;
}