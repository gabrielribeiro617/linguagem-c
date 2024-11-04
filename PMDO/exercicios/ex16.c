#include <stdio.h>

int main(){
    char texto[10];

    printf("\033[1mDigite algo (scanf convencional): ");
    scanf("%s", texto);
    fflush(stdin);
    printf("\033[32mResultado: %s\033[m\n\n", texto);
    printf("\033[1mDigite algo (scanf aprimorado): ");
    scanf("%9[^\n]s", texto);
    fflush(stdin);
    printf("\033[32mResultado: %s\033[m", texto);

    return 0;
}