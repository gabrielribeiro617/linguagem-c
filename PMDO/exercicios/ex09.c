#include <stdio.h>

int main(){
    float nota = 0.0;

    printf("\033[1mInsira a nota: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("\033[32mAPROVADO(A)!\033[m");
    } else {
        printf("\033[31mREPROVADO(A)!\033[m");
    }

    return 0;
}