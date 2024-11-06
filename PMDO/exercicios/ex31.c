#include <stdio.h>

int main(int argc, char **argv) {
    float nt, na, ne, med;   
    char conc;

    puts("Insira a nota do trabalho:");
    scanf("%f", &nt);
    puts("Insira a nota da avaliacao:");
    scanf("%f", &na);
    puts("Insira a nota do exame:");
    scanf("%f", &ne);

    med = (nt * 2 + na * 3 + ne * 5) / 10;

    if(med >= 8.0) {
        conc = 'A';
    } else if(med >= 7.0) {
        conc = 'B';
    } else if(med >= 6.0) {
        conc = 'C';
    } else if(med >= 5.0) {
        conc = 'D';
    } else {
        conc = 'E';
    }

    printf("Media ponderada: %.2f\n", med);
    printf("Conceito: %c", conc);

    return 0;
}