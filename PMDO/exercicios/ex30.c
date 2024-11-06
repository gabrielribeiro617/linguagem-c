#include <stdio.h>

int main(int argc, char *argv[]) {
    float val1, val2;
    int esc;

    puts("Insira 1 para somar;");
    puts("Insira 2 para subtrair;");
    puts("Insira 3 para multiplicar;");
    puts("Insira 4 para dividir;");
    scanf("%d", &esc);
    puts("Insira o primeiro valor:");
    scanf("%f", &val1);
    puts("Insira o segundo valor:");
    scanf("%f", &val2);

    switch(esc) {
        case 1:
            printf("Soma: %.2f", val1 + val2);
            break;
        case 2:
            printf("Subtracao: %.2f", val1 - val2);
            break;
        case 3:
            printf("Multiplicacao: %.2f", val1 * val2);
            break;
        case 4:
            printf("Divisao: %.2f", val1 / val2);
            break;
        default:
            puts("Opcao invalida!");
    }

    return 0;
}