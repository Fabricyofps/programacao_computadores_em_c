/*
Este programa em C conta quantos múltiplos de 3 existem entre 1 e 100 e exibe esse valor na tela.
Descrição e explicação do código:

Declaração da variável multiplos:  

Inicializada com zero, ela será usada para contar a quantidade de números múltiplos de 3 encontrados.

Laço de repetição for:  

Percorre i de 1 até 100.  
Para cada valor de i, verifica se i é múltiplo de 3 usando i % 3 == 0.  
Se a condição for verdadeira, incrementa a variável multiplos.

Contagem de múltiplos:  

Ao final do laço, multiplos contém a quantidade de números múltiplos de 3 entre 1 e 100.

Exibição do resultado:  

Utiliza printf para mostrar a mensagem com o valor de multiplos.

Resumo:
Este programa conta e exibe quantos números múltiplos de 3 estão entre 1 e 100, 
usando um laço for e uma condição para verificar os múltiplos.
*/


#include <stdio.h>

int main() {

    int multiplos = 0;

    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            multiplos++;
        }
    }

    printf("Quantidade de múltiplos de 3 entre 1 e 100: %d\n", multiplos);

    return 0;
}