#include <stdio.h>

int main(){
    int a, b, conta = 1, y = 1;

    printf("\033[1mPotencia\n");
    printf("Digite o valor da base: ");
    scanf("%d", &a);
    printf("Digite o valor do expoente: ");
    scanf("%d", &b);

    do {
        y *= a;
        conta++;
    } while (conta <= b);

    printf("\033[32mPotencia: %d\033[m", y);

    return 0;
}