#include <stdio.h>
#include <string.h>

int main(){
    char dia[5];
    float valor;

    printf("\033[1mDia da semana [dom/seg/ter/qua/qui/sex/sab]: ");
    scanf("%5s", dia);

    if (strcmp(dia, "dom") == 0 || strcmp(dia, "sab") == 0) {
        valor = 10;
    } else {
        valor = 15;
    }

    printf("\033[35mValor do ingresso: R$%.2f\033[m", valor);

    return 0;
}