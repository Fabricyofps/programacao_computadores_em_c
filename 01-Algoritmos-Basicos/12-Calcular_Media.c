/*
Desenvolva um programa em C que calcule a média de três números fornecidos pelo usuário. O programa deve:

Solicitar ao usuário que digite três números reais.
Calcular a média aritmética desses três números.
Exibir a média calculada com duas casas decimais.

Este programa permite ao usuário verificar a média de três valores numéricos de forma simples.
*/

#include <stdio.h>
int main() {
    float num1, num2, num3, media;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    
    media = (num1 + num2 + num3) / 3;
    
    printf("A média dos números é: %.2f\\n", media);

return 0;
}