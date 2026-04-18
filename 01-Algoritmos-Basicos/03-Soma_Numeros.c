//Realizar a soma de 2 números
#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    soma = num1 + num2;

    printf("A soma de %i e %i é %i.\n", num1, num2, soma);
    return 0;
}