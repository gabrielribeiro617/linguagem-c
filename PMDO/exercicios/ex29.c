#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int val1, val2;

    puts("Insira o primeiro numero:");
    scanf("%d", &val1);
    puts("Insira o segundo numero:");
    scanf("%d", &val2);

    if(val1 > val2) {
        printf("O maior e: %d\n", val1);
    } else if(val1 < val2) {
        printf("O maior e: %d\n", val2);
    } else {
        puts("Os numeros sao iguais");
    }

    system("pause");

    return 0;
}