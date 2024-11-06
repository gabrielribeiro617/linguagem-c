#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int seg, hr, min;

    puts("Insira tempo em segundos:");
    scanf("%d", &seg);

    hr = seg / 3600;
    seg -= 3600 * hr;
    min = seg / 60;
    seg -= 60 * min;

    printf("Horas: %d\n", hr);
    printf("Minutos: %d\n", min);
    printf("Segundo: %d\n", seg);
    system("pause");

    return 0;
}