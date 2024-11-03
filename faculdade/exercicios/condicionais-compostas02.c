#include <stdio.h>

int main(){
    printf("\033[1mO numero 10 e divisivel por 2?\n");

    if (10 % 2 == 0) {
        printf("\033[32mSim, porque o resto da divisao de 10 por 2 e zero, assim ele e par.\033[m]");
    } else {
        printf('\033[31mNao, porque o resto da divisao de 10 por 2 nao e zero, assim ele e impar.\033[m');
    }

    return 0;
}