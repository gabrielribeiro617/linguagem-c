#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
    printf("Valor inteiro: %d.\n", 10);
    printf("Valor real: %f\n", 3.141593);
    printf("Valor real com apenas duas casas: %.2f.\n", 3.141593);
    printf("Dado de texto: %c.\n", 'a');
    // o %c é usado para ser trocado por apenas UM CARACTERE.
    printf("Dado de texto: %s.", "testando");
    // O %s é usado para ser trocado por um texto.
    system("pause");
    
    return 0;
}