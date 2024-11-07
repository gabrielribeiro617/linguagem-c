#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipo_pessoa {
    char nome[200];
    int idade;
    float peso;
    float altura;
};

typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char **argv) {
    tipo_pessoa lista[3];
    int c;

    for(int i = 0; i < 3; i++) {
        printf("Insira o nome %d: ", i + 1);
        fgets(lista[i].nome, 200, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0'; // Remove o '\n' final, se presente.
        printf("Insira a idade %d: ", i + 1);
        scanf("%d", &lista[i].idade);
        printf("Insira o peso %d: ", i + 1);
        scanf("%f", &lista[i].peso);
        printf("Insira a altura %d: ", i + 1);
        scanf("%f", &lista[i].altura);

        // Limpa o buffer de entrada antes do próximo fgets.
        while ((c = getchar()) != '\n' && c != EOF);
    }

    puts("");

    for(int i = 0; i < 3; i++) {
        printf("---------- Pessoa %d ----------\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
        printf("Altura: %.2f\n", lista[i].altura);
    }
    
    puts("-------------------------------");
    system("pause");

    return 0;
}