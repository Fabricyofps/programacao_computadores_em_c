/*
Este programa em C tem como objetivo imprimir duas sequências de números: uma em ordem crescente
e outra em ordem decrescente.

Impressão de "Crescente":  

O programa começa exibindo a palavra "Crescente:" para indicar que a próxima sequência será em ordem crescente.
Usa um laço for que inicia com i = 1 e incrementa i até i <= 10.
Dentro do laço, imprime o valor de i seguido de um espaço, resultando na impressão dos números de 1 a 10 em linha.


Impressão de "Decrescente":  

Após a sequência crescente, o programa imprime "Decrescente:" para indicar a próxima sequência.
Usa outro laço for, mas desta vez começa com i = 10 e decrementa i até i >= 1.
Dentro deste laço, imprime o valor de i seguido de um espaço, resultando na impressão dos números de 10 a 1 em linha.
*/



#include <stdio.h>

int main() {

    printf("Crescente:\n");

    for(int i = 1; i <= 10; i++) {
        printf("%i ", i);
    }

    printf("\nDecrescente:\n");
    for(int i = 10; i >= 1; i--) {
        printf("%i ", i);
    }

    return 0;
}
      
