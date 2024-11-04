#include <stdio.h>

int main(){
    int dia = 0;

    printf("\033[1mInsira um valor de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n\033[m");
            break;
        case 2:
            printf("Segunda-feira\n\033[m");
            break;
        case 3:
            printf("Terca-feira\n\033[m");
            break;
        case 4:
            printf("Quarta-feira\n\033[m");
            break;
        case 5:
            printf("Quinta-feira\n\033[m");
            break;
        case 6:
            printf("Sexta-feira\n\033[m");
            break;
        case 7:
            printf("Sabado\n\033[m");
            break; 
        default:
            printf("\033[31mValor invalido!\n\033[m");
            break;
    }

    return 0;
}