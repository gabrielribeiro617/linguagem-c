#include <stdio.h>

int main(){
    printf("\033[1m10 e divisivel por 3?\n");

    if (10 % 3 == 0) {
        printf("\033[32mSim, porque o resto da divisao de 10 por 3 e zero.\033[m");
    } else {
        printf("\033[31mNao, porque o resto da divisao de 10 por 3 nao e zero.\033[m");
    }

    return 0;
}