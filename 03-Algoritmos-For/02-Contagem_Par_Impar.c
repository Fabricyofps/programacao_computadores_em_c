/*
Este programa em C tem como objetivo verificar e exibir se os números de 1 a 10 são pares ou ímpares.
Descrição e explicação do código:

Laço de repetição for:  

Inicia com i = 1 e incrementa i até i <= 10.
A cada passo, o valor de i é atualizado automaticamente.


Verificação de paridade:  

Dentro do laço, há uma estrutura condicional if-else.
Usa-se a expressão i % 2 == 0 para verificar se i é divisível por 2:
Se verdadeiro (i % 2 == 0), o número é par, e o programa imprime "i é par".
Caso contrário, o número é ímpar, e o programa imprime "i é ímpar".

Saída:  

Para cada número de 1 a 10, o programa imprime uma linha indicando se o número é par ou ímpar.
*/


#include <stdio.h>

int main() {

    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%i é par\n", i);
        } else {
            printf("%i é ímpar\n", i);
        }
    }
    return 0;
}