#include <stdio.h>

#define texto "Entrada e saida de dados" // Constante

int main(){
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("%s.\n", texto);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura [m]: ");
    scanf("%f", &altura);
    printf("Digite o primeiro nome: ");
    scanf("%s", nome);
    printf("Dados informados:\n");
    printf("Idade %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.", nome);

    return 0;
}