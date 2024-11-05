#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa pes = {0, 0.0, "Teste"};

    puts("Inicio:");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    puts("");
    puts("Alterando os campos via codigo:");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);

    puts("");
    puts("Insira a sua idade:");
    scanf("%d", &pes.idade);
    puts("Insira o seu peso:");
    scanf("%f", &pes.peso);
    fflush(stdin);
    puts("Insira o seu nome:");
    fgets(pes.nome, 50, stdin);
    fflush(stdin);

    puts("");
    puts("Alterando com dados do usuario:");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s", pes.nome);

    return 0;
}
