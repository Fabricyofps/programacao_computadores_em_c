/*
Desenvolva um programa em C que calcule o perímetro de um retângulo. O programa deve:

Solicitar ao usuário que informe a largura do retângulo.
Solicitar ao usuário que informe a altura do retângulo.
Utilizar a fórmula do perímetro: p = 2 * (largura + altura).
Exibir o perímetro do retângulo com duas casas decimais.
*/

#include <stdio.h>

int main() {
    float largura, altura, perimetro;

    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (largura + altura);

    printf("O perímetro do retângulo é: %.2f\n", perimetro);

    return 0;
}