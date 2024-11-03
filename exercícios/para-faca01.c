#include <stdio.h>

int main(){
    int numero = 1;

    for (; numero <= 10; numero++) {
        printf("\033[1m%d - ", numero);
    }

    printf("FIM\033[m");

    return 0;
}