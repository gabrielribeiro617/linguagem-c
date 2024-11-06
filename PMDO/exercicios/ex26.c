#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n1, n2, n3, n4;

    puts("Informe quatro numeros, em sequencia:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    printf("Resultado da soma: %d", n1 + n2 + n3 + n4);
    system("pause");

    return 0;
}