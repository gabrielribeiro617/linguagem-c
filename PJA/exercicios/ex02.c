#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Biblioteca para randomizar numeros.

int main(int argc, char **argv) {
    puts("Jogo do dado");
    srand(time(NULL)); // Permite a randomização dos numeros.
    printf("Face: %d\n", rand() % 6 + 1);
    // Randomizará um número de 0 a 5 -> 1 a 6.

    system("pause");
    
    return 0;
}