#include <stdio.h>

int main(){
    char texto[10];

    printf("\033[1mDigite algo (scanf convencional): ");
    scanf("%s", texto);
    fflush(stdin); // stdin é o teclado em linguagem C.
    /* fflush(stdin) serve para que os próximos comandos de entrada - scanf, gets, fgets -, seja char, seja float, não deem
    problema. */
    puts("Resultado: ");
    puts(texto);
    puts("");

    printf("Digite algo (scanf aprimorado): ");
    scanf("%9[^\n]s", texto);
    fflush(stdin);
    puts("Resultado: ");
    puts(texto);
    puts("");

    printf("Digite algo (leitura pelo gets): ");
    gets(texto);
    fflush(stdin);
    puts("Resultado: ");
    puts(texto);
    puts("");

    printf("Digite algo (leitura pelo fgets): ");
    fgets(texto, 10, stdin);
    fflush(stdin);
    puts("\033[32mResultado: ");
    puts(texto);
    puts("\033[m");

    return 0;
}