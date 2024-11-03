#include <stdio.h>

int main(){
    int numero = 1;

    while (numero <= 10) {
        printf("\033[1m%d - ", numero);
        numero += 1;
    }

    printf("FIM\033[m");

    return 0;
}