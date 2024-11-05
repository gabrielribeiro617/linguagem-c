#include <stdio.h>

float maior (float num1, float num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(){
    float val1, val2, mai;

    puts("Insira um valor: ");
    scanf("%f", &val1);
    puts("Insira mais um valor: ");
    scanf("%f", &val2);
    
    mai = maior(val1, val2);

    printf("Maior: %.2f", mai);

    return 0;
}