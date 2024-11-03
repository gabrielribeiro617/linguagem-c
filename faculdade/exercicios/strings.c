#include <stdio.h>
#include <string.h>

int main(){
    char primeira[50] = "Ola, ";
    char segunda[10] = "Mundo!";

    strcat(primeira, segunda);

    printf("%s", primeira);

    return 0;
}