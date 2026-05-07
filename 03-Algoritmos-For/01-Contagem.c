/*
Este programa em C tem como objetivo imprimir os números de 1 a 10, cada um em uma linha diferente.
Descrição e explicação do código:

Laço de repetição for:  

Começa com i = 1 e incrementa i até i <= 10.
A cada ciclo do laço, o valor de i é atualizado automaticamente.

Impressão dos números:  

Dentro do laço, há uma instrução printf que exibe o valor de i seguido de uma quebra de linha (\n).
Assim, cada número de 1 a 10 será exibido em uma linha separada na tela.
*/


#include <stdio.h>

int main() {

    for(int i = 1; i <= 10; i++) {
        printf("%i \n", i);
    }
    return 0;
}