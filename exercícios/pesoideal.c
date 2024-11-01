#include <stdio.h>

int main(){
    float altura;
    float pesoIdeal = (72.7*altura) - 58;

    printf("Qual é a sua altura? ");
    scanf("%.2f", &altura);
    printf("O seu peso ideal é %.2f Kg", pesoIdeal);
    
    return 0;
}