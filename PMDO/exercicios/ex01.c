#include <stdio.h> 
    /* Biblioteca que permite invocar funcionalidades e comandos
    que são utilizados para que o usuário entenda o que está
    acontecendo com o programa. */ 
#include <stdlib.h> // Biblioteca para usar a função system.

    /* Tudo o que estiver dentro das chaves, será executado
    pela máquina. */
int main(){
    /* printf é uma função pré programada dentro da biblioteca
    stdio.h que mostrará uma mensagem para o usuário. */
    printf("Hello, World!\n");
    system("pause"); 
    /* Função da biblioteca stdlib.h que, quando executado o
    arquivo .exe do programa, irá ficar pausado até que o
    usuário clique em outra tecla. */

    return 0;
}
    // Para executar o arquivo, ele deve ser, antes, salvo e compilado.