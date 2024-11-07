#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int tamanho, star;

    puts("Feliz Natal!");
    printf("Tamanho: ");
    scanf("%d", &tamanho);
    puts("");

    for(int i = 1; i <= tamanho; i++) {
        for(int j = 1; j <= tamanho - i; j++) {
            printf("-");
        }
        for(star = 1; star <= i * 2 - 1; star++) {
            printf("*");
        }
        puts("");
    }
    
    return 0;
}