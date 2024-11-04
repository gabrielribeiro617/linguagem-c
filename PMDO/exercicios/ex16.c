#include <stdio.h>

int main(){
    char texto[10];

    printf("\033[1mDigite algo (scanf convencional): ");
    scanf("%s", texto);
    fflush(stdin); // stdin é o teclado em linguagem C.
    /* fflush(stdin) serve para que os próximos comandos de entrada - scanf, gets, fgets -, seja char, seja float, não deem
    problema. */

    puts("Resultado: ");
    /* A função puts imprimi uma string diretamente na tela, não
    admitindo variáveis de outros tipos. */

    puts(texto);
    puts("");

    printf("Digite algo (scanf aprimorado): ");
    scanf("%9[^\n]s", texto);
    // Tamanho: tamanho do vetor (10) - 1.
    // [^\n]: para exibir o espaços em branco também.

    fflush(stdin);
    puts("Resultado: ");
    puts(texto);
    puts("");

    printf("Digite algo (leitura pelo gets): ");
    gets(texto);
    /* A função gets permite ler mais caracteres que o tamanho, já
    definido, da string. */
    // gets( <variável> );

    fflush(stdin);
    puts("Resultado: ");
    puts(texto);
    puts("");

    printf("Digite algo (leitura pelo fgets): ");
    fgets(texto, 10, stdin);
    /* A função fgets deixa o último caractere como reservado para
    o '/0'. */
    // fgets( <variável>, <tamanho>, <stdin> );

    fflush(stdin);
    puts("Resultado: ");
    puts(texto);
    puts("\033[m");

    return 0;
}