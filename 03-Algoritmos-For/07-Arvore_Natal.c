/*
Este programa em C imprime um triângulo de estrelas alinhado à direita, formando uma espécie de pirâmide invertida. 
Cada linha possui espaços à esquerda e estrelas à direita, crescendo a quantidade de estrelas a cada linha.
Descrição e explicação do código:

Laço externo for (i de 1 a 5):  

Controla o número de linhas do triângulo.

Laço interno para espaços:  

for(j = 1; j <= 5 - i; j++)  
Imprime espaços para alinhar as estrelas à direita.  
Na primeira linha, imprime 4 espaços; na segunda, 3; e assim por diante.

Laço interno para estrelas:  

for(int j = 1; j <= i; j++)  
Imprime estrelas seguidas de um espaço, aumentando a quantidade a cada linha.

Nova linha após cada linha de estrelas:  

printf("\n");
*/


#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++) {
        // Imprimir espaços
        for(int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Imprimir estrelas
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}