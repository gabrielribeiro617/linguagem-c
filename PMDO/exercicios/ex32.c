#include <stdio.h>

int main(int argc, char *argv[]) {
    int tot = 0;

    for(int i = 1; i <= 10; i++) {
        tot += i;
    }

    printf("Somatorio: %d", tot);

    return 0;
}