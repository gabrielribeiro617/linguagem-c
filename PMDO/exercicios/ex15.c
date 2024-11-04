#include <stdio.h>

int main(){
    int i, val[5];
    float tot = 0.0;

    for (i = 0; i < 5; i++) {
        printf("\033[1mInsira um dado: ");
        scanf("%d", &val[i]);
        tot += val[i];
    }

    printf("\033[32mDados inseridos:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", val[i]);
    }
    
    printf("\n\033[35mMedia dos valores: %.2f\033[m", tot / 5);

    return 0;
}