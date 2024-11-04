#include <stdio.h>
#include <string.h> // Biblioteca para manipulação de strings.
#include <locale.h> // Biblioteca que permite o uso de acentos.

    // String não se altera com '=', mas com strcpy.

int main(){
    setlocale(LC_ALL, "Portuguese");
    /* Função da bilbioteca locale.h, que, com os valores mostrados,
    dá suporte para o uso de 'ç' e acentos. */

    char texto1[10] = "casa", texto2[10] = "-verde";

    puts(texto1);
    strcpy(texto1, "chá");
    /* A função strcpy é usada para alterar o conteúdo de uma
    string. */
    // strcpy ( <destino>, <origem> );

    puts(texto1);
    strcat(texto1, texto2);
    /* A função strcat é usada para concatenar as duas strings
    dentro dos parâmetros, tendo o resultado no destino. */
    // strcat ( <destino>, <origem> );

    puts(texto1);
    // printf(strlen(texto1));
    // A função strlen é usada para saber o tamanho da string.
    // strlen ( <string> );

    /* A função strcmp é usada para comparar duas strings, onde,
    se forem iguais, o resultado é 0, mas se for falsa, não é. */
    // strcmp ( <string1>, <string2> );
    
    return 0;
}