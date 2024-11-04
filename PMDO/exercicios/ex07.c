#include <stdio.h>

int main(){
    float nota = 0;

    printf("\033[1mInsira a nota:\033[m ");
    scanf("%f", &nota);
    
    if (nota >= 7.0) {
        printf("\033[1;32mAPROVADO!\033[m");
    }

    return 0;
}