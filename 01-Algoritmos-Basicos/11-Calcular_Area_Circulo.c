/*
Desenvolva um programa em C que calcula a área de um círculo com base no raio fornecido pelo usuário. O programa deve:

Solicitar ao usuário que informe o valor do raio do círculo.
Utilizar a fórmula da área do círculo: area = pi * (raio * raio).
Exibir o resultado da área com duas casas decimais.

Utilize a constante M_PI da biblioteca <math.h> para representar o valor de π.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}