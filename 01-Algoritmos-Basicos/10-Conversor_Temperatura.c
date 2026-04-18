/*
Desenvolva um programa em C que converta uma temperatura de graus Celsius para Fahrenheit. O programa deve:

Solicitar ao usuário que insira uma temperatura em graus Celsius.
Utilizar a fórmula de conversão f = (c * 9/5) + 32, onde c é a temperatura em Celsius.
Exibir a temperatura convertida em Fahrenheit com duas casas decimais.
*/

#include <stdio.h>

int main() {
    float temperatura_celsius, temperatura_fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura_celsius);

    temperatura_fahrenheit = (temperatura_celsius * 9/5) + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", temperatura_fahrenheit);

    return 0;
}