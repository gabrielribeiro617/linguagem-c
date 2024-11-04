#include <stdio.h>

int main(){
    int dado = 10;

    printf("\033[1mDado antes do incremento: %d\n", dado);

    dado++; // Operador de incremento de 1 unidade.

    printf("Depois do incremento: %d\n", dado);

    dado--; // Operador de decremento de 1 unidade.

    printf("Depois do decremento: %d\n", dado);

    dado += 3; // Operador de incremento de 3 unidades.

    printf("Depois do incremento em 3 unidades: %d\n", dado);

    dado -= 2; // Operador de decremento de 2 unidades.

    printf("Depois do decremento em 2 unidades: %d\n", dado);

    dado *= 10; // Operador de incremento de multiplicação por 10.

    printf("Depois de multiplicar por 10: %d\033[m", dado);

    return 0;
}