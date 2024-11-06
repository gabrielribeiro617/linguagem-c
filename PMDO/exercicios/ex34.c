#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        puts("");
    }

    system("pause");

    return 0;
}