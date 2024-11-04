#include <stdio.h>
#include <string.h> // Biblioteca para manipulação de strings.
#include <locale.h> // Biblioteca que permite o uso de acentos.

    // String não se altera com '=', mas com strcpy.

int main(){
    setlocale(LC_ALL, "Portuguese");
    /* Função da bilbioteca locale.h, que, com os valores mostrados,
    dá suporte para o uso de 'ç' e acentos. */

    char texto1[10] = "casa", texto2[10] = "-verde";
    int i = 0;

    puts("\033[1mInformacoes iniciais:");
    printf("Texto1: %s\n", texto1);
    printf("Texto2: %s\n\n", texto2);

    strcpy(texto1, "cha");
    /* A função strcpy é usada para alterar o conteúdo de uma
    string. */
    // strcpy ( <destino>, <origem> );

    printf("Texto1 depois do strcpy: %s\n", texto1);

    strcat(texto1, texto2);
    /* A função strcat é usada para concatenar as duas strings
    dentro dos parâmetros, tendo o resultado no destino. */
    // strcat ( <destino>, <origem> );

    printf("Texto1 depois do strcat: %s\n", texto1);

    i = strlen(texto1);
    // A função strlen é usada para saber o tamanho da string.
    // strlen ( <string> );

    printf("Tamanho do Texto1 (strlen): %d letras\n", i);
    puts("Texto1 espacado: ");
    for (i = 0; i < strlen(texto1); i++) {
        printf("%c ", texto1[i]);
        // Imprimi cada caractere, da string texto 1, de forma espaçada.
    }

    if (strcmp(texto1, texto2) == 0) {
        puts("\nO Texto1 e igual ao Texto2 (strcmp).\033[m");
    } else {
        puts("\nO Texto1 NAO e igual ao Texto2 (strcmp).\033[m");
    }
    /* A função strcmp é usada para comparar duas strings, onde,
    se forem iguais, o resultado é 0, mas se for falsa, não é 0. */
    // strcmp ( <string1>, <string2> );
    
    return 0;
}
