#include <stdio.h>

int main(){
    int numero = 1;

    do {
        printf("\033[1mNumero: ");
        scanf("%d\033[m", &numero);
        numero++;
    } while (numero > 10);

    return 0;
}