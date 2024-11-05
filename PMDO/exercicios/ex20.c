#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 3

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa lista[TAM];
    /* Define a variável como uma lista com 3 espaços, onde cada espaço
    da lista conterá os três campos definidos (idade, peso, nome). */

    int i = 0;

    /* Estrutura de repetição para definir cada campo de cada espaço da lista. */
    for (i = 0; i < TAM; i++) {
        printf("Insira os dados (%d):\n", i + 1);
        puts("Nome:");
        fgets(lista[i].nome, 50, stdin);
        fflush(stdin);
        puts("Idade:");
        scanf("%d", &lista[i].idade);
        puts("Peso:");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }

    system("cls"); // Função da biblioteca stdlib.h que limpa a tela.
    puts("Seus dados:\n");

    /* Estrutura de repetição para mostrar todos os dados contidos
    na lista de forma organizada. */
    for (i = 0; i < TAM; i++) {
        printf("---------- Pessoa %d ----------\n", i + 1);
        printf("Nome: %s", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
    }

    puts("------------------------------");

    return 0;
}