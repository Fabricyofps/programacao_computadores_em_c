/*
Este programa em C tem como objetivo solicitar que o usuário digite um número e, em seguida, 
exibir a tabuada desse número de 1 a 10.

Declaração de variáveis:  

numero: armazena o número digitado pelo usuário.  
resultado: armazena o resultado da multiplicação de numero pelo valor de i.

Entrada de dados:  

O programa exibe a mensagem "Digite um número: ".  
Utiliza scanf para ler um número inteiro digitado pelo usuário e armazená-lo na variável numero.

Laço de repetição for:  

Itera i de 1 até 10.  
Em cada iteração, calcula resultado = numero * i.  
Exibe a multiplicação no formato "numero x i = resultado".


Resumo:
Este programa pede ao usuário um número, e então imprime a sua tabuada de multiplicação de 1 a 10, 
mostrando cada resultado na tela.
*/


#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite um número: ");
    scanf("%i", &numero);

    for(int i = 1; i <= 10; i++) {
        resultado = numero * i;
        printf("%i x %i = %i\n", numero, i, resultado);
    }

    return 0;
}