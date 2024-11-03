#include <stdio.h>

int main(){
    int a, b, conta = 0;
    int y = 1;

    printf("\033[1mPotencia\n");
    printf("Digite o valor da base: ");
    scanf("%d", &a);
    printf("Digite o valor do expoente: ");
    scanf("%d", &b);

    while (conta < b) {
        y *= a;
        conta += 1;
    }

    printf("\033[32mPotencia: %d\033[m", y);

    return 0;
}