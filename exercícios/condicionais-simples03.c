#include <stdio.h>
#include <string.h> // para usar o strcmp

int main(){
    char sexo[5];
    int anos;
    float salario, premio;

    printf("\033[1mSexo do(a) funcionario(a) [m/f]: ");
    scanf("%s", &sexo);
    printf("Tempo na empresa: ");
    scanf("%d", &anos);
    printf("Salario: R$");
    scanf("%f", &salario);

    premio = salario * 0.15;

    if (strcmp(sexo, "f") == 0 && anos >= 10) {
        printf("\033[32mParabens! Voce ganhou um premio de R$%.2f\033[m", premio);
    } else {
        printf("\033[31mVoce nao cumprio os requisitos para obter o premio.\033[m");
    }

    return 0;
}