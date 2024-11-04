#include <stdio.h>

int main(){
    float nota = 0;

    printf("\033[1mInsira a nota:\033[m ");
    scanf("%f", &nota);
    
    // Usa-se o Operador Lógico de Conjunção: && - "e".
    // Outros Operadores Lógicos: || - "ou", ! - "não".
    if (nota >= 4.0 && nota < 7.0) { 
        printf("\033[1;33mTem direito a exame!\033[m");
    }

    return 0;
}