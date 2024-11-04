#include <stdio.h>

int main(){
    int i = 0;

    do {
        printf("%d ", i); // Esse comando será, obrigatoriamente, exibido.
        i++;
    } while (i <= 10);

    return 0;
}