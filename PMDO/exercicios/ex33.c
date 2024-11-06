#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int ant1 = 1, ant2 = 0, atual;

    puts("Serie de Fibonacci:");

    for(int i = 0; i < 8; i++) {
        if(i == 0) {
            printf("%d ", ant2);
        } else if(i == 1) {
            printf("%d ", ant1);
        } else {
            atual = ant2 + ant1;
            
            if(i >= 4) {
                ant1 = ant2;
            }

            ant2 = atual;
            printf("%d ", atual);
        }
    }

    puts("");
    system("pause");

    return 0;
}