#include <stdio.h>

int main(){
    int numero, soma = 0, a, b;

    printf("\033[1mSOMATORIO\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    numero = a;

    while (numero <= b) {
        soma += numero;
        numero++;
    }

    printf("\033[32mSomatorio: %d\033[m", soma);

    return 0;
}