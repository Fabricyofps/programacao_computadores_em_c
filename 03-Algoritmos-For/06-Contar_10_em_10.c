/*
Este programa em C imprime números de 1 a 1000, incrementando de 10 em 10, ou seja, 
imprime 1, 11, 21, 31, e assim por diante até atingir o limite de 1000.

Laço de repetição for:  

Inicializa i com o valor 1.  
Enquanto i for menor ou igual a 1000, o laço continua.  
A cada iteração, incrementa i em 10 (i += 10).

Impressão:  

Em cada rodada, imprime o valor atual de i seguido de uma nova linha.

Resumo:
Este programa imprime uma sequência de números começando em 1, com incremento de 10, até atingir ou passar de 1000.
*/

#include <stdio.h>

int main() {

    for(int i = 1; i <= 1000; i += 10) {
        printf("%i \n", i);
    }
    return 0;
}