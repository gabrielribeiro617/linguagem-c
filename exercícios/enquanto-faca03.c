#include <stdio.h>

int main(){
    int numero, soma, a, b;

    printf("SOMATORIO\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    numero = a;

    while (numero <= b) {
        soma += numero;
        numero++;
    }

    printf("Somatorio: %d", soma);

    return 0;
}